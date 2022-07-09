#ifndef RELEASE_2_H
#define RELEASE_2_H

#include <QWidget>
#include "find_t.h"
#include "lost.h"
#include <vector>

namespace Ui {
  class release_2;
}

class release_2 : public QWidget
{
  Q_OBJECT

public:
  explicit release_2(QWidget *parent = 0);
  ~release_2();
  vector<find_t> v_f;

private slots:
  void on_t_class_comboBox_currentIndexChanged(const QString &arg1);
  void on_lay_addr_comboBox_currentIndexChanged(const QString &arg1);
  void on_pushButton_save_clicked();

signals:
  void back();
  void publish();

private:
  Ui::release_2 *ui;

};


#endif // RELEASE_2_H
