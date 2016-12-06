#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include <QGraphicsScene>
#include <QHboxLayout>

#include "global.h"
#include "read.h"
#include "timelineview.h"
#include "timelinegraphics.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void ScrollToSelected(TimelineView *view);
private slots:
    void drawButtonPress();
    void eraseButtonPress();
    void moveButtonPress();

    void on_redLineEdit_textEdited(const QString &arg1);

    void on_greenLineEdit_textEdited(const QString &arg1);

    void on_blueLineEdit_textEdited(const QString &arg1);

    void on_actionNew_File_triggered();

    void on_actionSave_triggered();

    void on_actionSave_As_triggered();

    void on_actionImport_triggered();

    void on_actionExport_triggered();

    void on_keyFrameButton_clicked();

private:
    Ui::MainWindow *ui;
    QTableWidget* m_pTableWidget;
    QStringList m_TableHeader;
    void addFramePixel(QGraphicsScene* scene, int y, int x);
    void addTimelineFrame(QHBoxLayout* layout );
    QString fileName;
    bool editedSinceLastSave = false;
    readfile* rf;
    TimelineGraphics* timeline;
};

#endif // MAINWINDOW_H
