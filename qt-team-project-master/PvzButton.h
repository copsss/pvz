#ifndef PVZBUTTON_H
#define PVZBUTTON_H
#include <QPushButton>
#include <QDebug>
class PvzButton :public QPushButton
{
public:
    PvzButton();
    PvzButton(QWidget *p, QString name, unsigned width = 80, unsigned height = 40, unsigned x = 0, unsigned y = 0){
        setParent(p);
        setText(name);
        resize(width, height);
        text();
        move(x, y);
    }
    ~PvzButton(){

    }
};

#endif // PVZBUTTON_H
