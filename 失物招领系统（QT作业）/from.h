#ifndef FROM_H
#define FROM_H

#include <QWidget>
#include "release.h"
#include "person_interface.h"
#include "find_t.h"
#include "lost.h"

namespace Ui {
  class From;
}

class From : public QWidget
{
  Q_OBJECT

public:
  explicit From(QWidget *parent = 0);
  ~From();

private:
  Ui::From *ui;
  release *r;
  Person_interface *p1;
signals:
    void back();

public slots:
    void back_slot();
    void back_slot2();
    void publish_find();
    void publish_lost();
};

#endif // FROM_H
