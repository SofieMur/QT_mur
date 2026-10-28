#include "mainwindow.h"
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setFixedSize(800,600);
    setWindowTitle("Форма регисрации");
    setWindowIcon(QIcon(":/img/icon.jpg"));
    QLabel* label1 = new QLabel("<b>Форма регистрации</b>", this);
    label1->setGeometry(100,120,600,15);
    label1->setAlignment(Qt::AlignCenter);

    QLabel* label2 = new QLabel("<b>Это задание будет сдано в систему</b>", this);

}

MainWindow::~MainWindow() = default;
