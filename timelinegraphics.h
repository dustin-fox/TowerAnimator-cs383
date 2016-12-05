#ifndef TIMELINEGRAPHICS_H
#define TIMELINEGRAPHICS_H

#include "frame.h"
#include "timelineview.h"
#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QHBoxLayout>
#include <QGraphicsScene>

class TimelineGraphics : public QObject
{
    Q_OBJECT
signals:
    void connectNewFrame(TimelineView*);
public:
    TimelineGraphics();
    void loadTimeline();
    void addFramePixel(QGraphicsScene* scene, int x, int y);
    QWidget* timelineWidget();


private:
    QWidget* timeline;
    QHBoxLayout* layout;

public slots:
    void addTimelineFrame();

};

#endif // TIMELINEGRAPHICS_H
