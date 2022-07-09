#ifndef PERSON_INTERFACE_H
#define PERSON_INTERFACE_H

#include <QWidget>

namespace Ui {
  class Person_interface;
}

class Person_interface : public QWidget
{
  Q_OBJECT

public:
  explicit Person_interface(QWidget *parent = 0);
  ~Person_interface();

private:
  Ui::Person_interface *ui;
signals:
  void back();

};

#endif // PERSON_INTERFACE_H
