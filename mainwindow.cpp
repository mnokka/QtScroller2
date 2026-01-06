#include "mainwindow.h"



void MainWindow::createMenus()
{
    helpMenu = menuBar()->addMenu(tr("&Help"));
    helpMenu->addAction(aboutAct);

/*
    helpMenu = menuBar()->addMenu(tr("&Settings"));
    helpMenu->addAction(aboutSet);

    helpMenu = menuBar()->addMenu(tr("&Bib"));
    helpMenu->addAction(aboutBib);

    helpMenu = menuBar()->addMenu(tr("&Log"));
    helpMenu->addAction(aboutLog);
  */
}

void MainWindow::about()
{

    QMessageBox msgBox;
    msgBox.setWindowTitle("About the author and application");
    msgBox.setText("Horizontal scroller");
    msgBox.setInformativeText("(c) Mika Nokka 2026 mika.nokka1@gmail.com<br>VERSION: "+version+" !");
    msgBox.setStandardButtons(QMessageBox::Ok);;
    msgBox.exec();

}


void MainWindow::createActions()
{
    aboutAct = new QAction(tr("&About"), this);
    aboutAct->setStatusTip(tr("Show the application's About box"));
    connect(aboutAct, &QAction::triggered, this, &MainWindow::about);
}
