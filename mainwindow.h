#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsTextItem>
#include <QTimer>
#include <QMenuBar>
#include <QMessageBox>
#include <QString>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void createMenus(void);
    void createActions(void);

private slots:
    void moveText();
    void about();


private:
    QGraphicsScene *scene;         // Grafiikkasuuntaus
    QGraphicsView *view;           // Näkymä grafiikkasuuntausta
    QGraphicsTextItem *textItem1;   // Tekstikohde grafiikkasuuntauksessa
    QGraphicsTextItem *textItem2;
    QTimer *timer;
    int xPos1;
    int xPos2;
    int direction=-1;     // Liikennesuunta: 1 oikealle, -1 vasemmalle
    qreal textY;          // tekstin keskitetty y koordinaatti

    QString version="1.0";

    QMenu *helpMenu;
    QAction *aboutAct;
};

#endif // MAINWINDOW_H
