#ifndef RELEASE_H
#define RELEASE_H

#include <QWidget>
#include "release_2.h"
#include "release_3.h"
namespace Ui {
  class release;
}

class release : public QWidget
{
  Q_OBJECT

public:
  explicit release(QWidget *parent = 0);
  ~release();
  release_2 *r2;
  release_3 *r3;

private:
  Ui::release *ui;

signals:
  void back();
public slots:
  void back_slot_2();
  void back_slot_3();
};

#endif // RELEASE_H
