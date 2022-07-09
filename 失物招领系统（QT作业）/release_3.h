#ifndef RELEASE_3_H
#define RELEASE_3_H

#include <QWidget>
#include "lost.h"
#include <vector>
namespace Ui {
  class release_3;
}

class release_3 : public QWidget
{
  Q_OBJECT

public:
  explicit release_3(QWidget *parent = 0);
  ~release_3();
  vector<lost> v_l;

signals:
  void back();
  void publish();

private slots:
  void on_pushButton_2_clicked();

  void on_t_class_comboBox_currentIndexChanged(const QString &arg1);

private:
  Ui::release_3 *ui;
};

#endif // RELEASE_3_H
