#include "release_3.h"
#include "ui_release_3.h"

release_3::release_3(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::release_3)
{
  ui->setupUi(this);
  //设置标题
  this->setWindowTitle("发布丢物信息");
  this->setFixedWidth(800);
  this->setFixedHeight(1000);
  connect(ui->pushButton_return,&QPushButton::clicked,this,release_3::back);
  connect(ui->pushButton_return,&QPushButton::clicked,[=](){
      ui->t_name_lineEdit->clear();
      ui->t_class_lineEdit->clear();
      ui->lost_time_lineEdit->clear();
      ui->lost_addr_lineEdit_3->clear();
      ui->connection_lineEdit->clear();
      ui->t_value_lineEdit->clear();
      //ui->t_class_lineEdit->clear();
    });
  connect(ui->pushButton,&QPushButton::clicked,this,&release_3::publish);
  connect(ui->pushButton,&QPushButton::clicked,[&](){
      ui->t_name_lineEdit->clear();
      ui->t_class_lineEdit->clear();
      ui->lost_addr_lineEdit_3->clear();
      ui->lost_time_lineEdit->clear();
      ui->t_value_lineEdit->clear();
    });
}

release_3::~release_3()
{
  delete ui;
}

void release_3::on_pushButton_2_clicked()
{
  lost l1;
  l1.it_name = ui->t_name_lineEdit->text();
  l1.it_class = ui->t_class_comboBox->currentText();
  l1.lost_addr = ui->lost_addr_lineEdit_3->text();
  l1.lost_time = ui->lost_time_lineEdit->text();
  l1.phone_number = ui->connection_lineEdit->text();
  l1.it_value = ui->t_value_lineEdit->text().toDouble();
  v_l.push_back(l1);
}

void release_3::on_t_class_comboBox_currentIndexChanged(const QString &arg1)
{
    ui->t_class_lineEdit->setText(arg1);
}
