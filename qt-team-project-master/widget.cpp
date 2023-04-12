#include "widget.h"
#include "ui_widget.h"
#include <QtDebug>
#include "PvzButton.h"
#include "PvzObject.h"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("Plants VS Zombies");
    QPalette paletteMain;
    paletteMain.setBrush(QPalette::Background,QBrush(QPixmap(":/images/theme.png")));
    this->setPalette(paletteMain);
    PvzObject startButton;
    startButton.setPixmap(QPixmap(":/images/button_play.png"));
    startButton.move(450, 95);

}

Widget::~Widget()
{
    delete ui;
}

