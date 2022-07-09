#ifndef WIDGET_H
#define WIDGET_H
#include <iostream>
#include <QWidget>
#include <QMovie>
#include <QAction>
#include "from.h"
namespace Ui {
  class Widget;
}

class Widget : public QWidget
{
  Q_OBJECT

public:
  explicit Widget(QWidget *parent = 0);
  ~Widget();

private slots:
  void on_numeber_list_currentIndexChanged(const QString &arg1);
  void backslot();

private:
  Ui::Widget *ui;
  //自定义数据
  QMovie* p_gif;
  //设置图标
  QAction *m_pUsrAct;
  QAction *m_pLockAct;
  QAction *m_pKeyAct;
  From *f1;
};

#endif // WIDGET_H
