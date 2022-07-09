#include "from.h"
#include "ui_from.h"
#include <QString>
#include <QIcon>
#include <windows.h>
#include <QTableWidgetItem>
From::From(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::From)
{
  ui->setupUi(this);
  //设置标题
  this->setWindowTitle("招领大厅");
  this->setFixedWidth(1050);
  this->setFixedHeight(1100);
  ui->bgd->setFixedWidth(800);
  ui->bgd->setFixedHeight(1000);
  //设置按钮形状
  //radius设置圆角大小，一般为矩形的一半
  ui->release_buttton->setStyleSheet("QPushButton{background-color: rgb(225, 225, 225);"
                                     "border:2px groove gray;border-radius:60px;padding:2px 4px;border-style: outset;}"
                                     "QPushButton:hover{background-color:rgb(229, 241, 251); color: black;}"
                                     "QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;}");
  QIcon icon_1;
  icon_1.addFile(tr(":/hall_picture/加号.png"));
  ui->release_buttton->setIcon(icon_1);
  QIcon icon_2;
  icon_2.addFile(tr(":/hall_picture/个人中心.png"));
  ui->person_button->setIcon(icon_2);
  //取消按钮阴影
   //ui->pushButton_back->setStyleSheet("border:none;");
  //ui->pushButton_back->setFlat(true);
  r = new release();
  p1 = new Person_interface();
  connect(ui->release_buttton,&QPushButton::clicked,[=](){
      this->hide();
//      sleeping(500);
      r->show();
    });
  connect(ui->person_button,&QPushButton::clicked,[=](){
      this->hide();
//      sleeping(500);
      p1->show();
    });
  connect(ui->pushButton_back,&QPushButton::clicked,this,&From::back);
  connect(r,&release::back,this,&From::back_slot);
  connect(p1,&Person_interface::back,this,&From::back_slot2);
  connect(r->r2,&release_2::publish,this,&From::publish_find);
  connect(r->r3,&release_3::publish,this,&From::publish_lost);
}

From::~From()
{
  delete ui;
}

void From::back_slot()
{
  r->hide();
  this->show();
}

void From::back_slot2()
{
  p1->hide();
  this->show();
}

void From::publish_find()
{
  for(int i = 0;i < r->r2->v_f.size();++i)
    {
      //添加一个空行
      //添加到最后行
      ui->tableWidget->insertRow(ui->tableWidget->rowCount());
      //把数据设置到空行
      ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,0,new QTableWidgetItem(r->r2->v_f[i].it_name));
      ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,1,new QTableWidgetItem(r->r2->v_f[i].it_class));
      ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,2,new QTableWidgetItem(r->r2->v_f[i].find_addr));
      ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,3,new QTableWidgetItem(r->r2->v_f[i].find_time));
      ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,4,new QTableWidgetItem(r->r2->v_f[i].phone_number));
      ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,5,new QTableWidgetItem(r->r2->v_f[i].lay_addr));
      ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,6,new QTableWidgetItem(QString::number(r->r2->v_f[i].it_value)));
    }

  this->show();
  r->r2->hide();
  return;
}

void From::publish_lost()
{
  for(int i = 0;i < r->r3->v_l.size();++i)
    {
      //添加一个空行
      //添加到最后行
      ui->tableWidget_2->insertRow(ui->tableWidget_2->rowCount());
      //把数据设置到空行
      ui->tableWidget_2->setItem(ui->tableWidget_2->rowCount()-1,0,new QTableWidgetItem(r->r3->v_l[i].it_name));
      ui->tableWidget_2->setItem(ui->tableWidget_2->rowCount()-1,1,new QTableWidgetItem(r->r3->v_l[i].it_class));
      ui->tableWidget_2->setItem(ui->tableWidget_2->rowCount()-1,2,new QTableWidgetItem(r->r3->v_l[i].lost_addr));
      ui->tableWidget_2->setItem(ui->tableWidget_2->rowCount()-1,3,new QTableWidgetItem(r->r3->v_l[i].lost_time));
      ui->tableWidget_2->setItem(ui->tableWidget_2->rowCount()-1,4,new QTableWidgetItem(r->r3->v_l[i].phone_number));
      ui->tableWidget_2->setItem(ui->tableWidget_2->rowCount()-1,5,new QTableWidgetItem(QString::number(r->r3->v_l[i].it_value)));
    }
  this->show();
  r->r3->hide();
  return;
}
