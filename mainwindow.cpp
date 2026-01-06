#include "mainwindow.h"



void MainWindow::createMenus()
{
    helpMenu = menuBar()->addMenu(tr("&Help"));
    //helpMenu->addAction(aboutAct);

/*
    helpMenu = menuBar()->addMenu(tr("&Settings"));
    helpMenu->addAction(aboutSet);

    helpMenu = menuBar()->addMenu(tr("&Bib"));
    helpMenu->addAction(aboutBib);

    helpMenu = menuBar()->addMenu(tr("&Log"));
    helpMenu->addAction(aboutLog);
  */
}
