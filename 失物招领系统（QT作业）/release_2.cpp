#include "release_2.h"
#include "ui_release_2.h"
#include <QString>
#include <QMessageBox>
#include <QTextStream>
#include <iostream>
using namespace std;
release_2::release_2(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::release_2)
{
  ui->setupUi(this);
  //设置标题
  this->setWindowTitle("发布拾物信息");
  this->setFixedWidth(800);
  this->setFixedHeight(1000);
  connect(ui->pushButton_return,&QPushButton::clicked,this,release_2::back);
  connect(ui->pushButton_return,&QPushButton::clicked,[=](){
      ui->t_name_lineEdit->clear();
      ui->t_class_lineEdit->clear();
      ui->f_time_lineEdit->clear();
      ui->f_addr_lineEdit_3->clear();
      ui->connection_lineEdit->clear();
      ui->lay_addr_lineEdit->clear();
      ui->t_value_lineEdit->clear();
      //ui->t_class_lineEdit->clear();
    });
  connect(ui->pushButton_publish,&QPushButton::clicked,this,&release_2::publish);
  connect(ui->pushButton_publish,&QPushButton::clicked,[&](){
      ui->t_name_lineEdit->clear();
      ui->t_class_lineEdit->clear();
      ui->f_addr_lineEdit_3->clear();
      ui->f_time_lineEdit->clear();
      ui->lay_addr_lineEdit->clear();
      ui->t_value_lineEdit->clear();
    });
}

release_2::~release_2()
{
  delete ui;
}

void release_2::on_t_class_comboBox_currentIndexChanged(const QString &arg1)
{
    ui->t_class_lineEdit->setText(arg1);
}

void release_2::on_lay_addr_comboBox_currentIndexChanged(const QString &arg1)
{
    ui->lay_addr_lineEdit->setText(arg1);
}


void release_2::on_pushButton_save_clicked()
{
  find_t f1;
  f1.it_name = ui->t_name_lineEdit->text();
  f1.it_class = ui->t_class_comboBox->currentText();
  f1.find_addr = ui->f_addr_lineEdit_3->text();
  f1.find_time = ui->f_time_lineEdit->text();
  f1.phone_number = ui->connection_lineEdit->text();
  f1.lay_addr = ui->lay_addr_lineEdit->text();
  f1.it_value = ui->t_value_lineEdit->text().toDouble();
  v_f.push_back(f1);
}

