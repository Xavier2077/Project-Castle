#include "mybutton.h"
#include "ui_from.h"
#include <QPixmap>
#include <QBitmap>

MyButton::MyButton(QWidget *parent):
    QPushButton(parent)
{
    QPixmap pixmap(":/init.png");

    resize(pixmap.size());
    /* 设置按钮的有效区域 */
    setMask(QBitmap(pixmap.mask()));
    setStyleSheet("QPushButton{border-image: url(:/header.png);}");
}
