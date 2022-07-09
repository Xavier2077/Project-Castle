#include "release.h"
#include "ui_release.h"

release::release(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::release)
{
  //设置标题
  this->setWindowTitle("选择界面");
  //设置为模态窗口
  ui->setupUi(this);
  this->setFixedWidth(400);
  this->setFixedHeight(300);
  //取消按钮阴影
  ui->pushButton_back->setStyleSheet("border:none;");
  //实例化窗口对象
  r2 = new release_2();
  r3 = new release_3();
  connect(ui->release_button_1,&QPushButton::clicked,[&](){
      this->hide();
      r2->show();
    });
  connect(ui->release_button_2,&QPushButton::clicked,[&](){
      this->hide();
      r3->show();
    });
  connect(ui->pushButton_back,&QPushButton::clicked,this,&release::back);
  connect(r2,&release_2::back,this,&release::back_slot_2);
  connect(r3,&release_3::back,this,&release::back_slot_3);

}

release::~release()
{
  delete ui;
}

void release::back_slot_2()
{
  r2->hide();
  this->show();
}

void release::back_slot_3()
{
  r3->hide();
  this->show();
}
