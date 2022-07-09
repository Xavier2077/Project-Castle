#include "person_interface.h"
#include "ui_person_interface.h"

Person_interface::Person_interface(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::Person_interface)
{
  ui->setupUi(this);
  //设置标题
  this->setWindowTitle("个人中心");
  this->setFixedWidth(550);
  this->setFixedHeight(750);
  connect(ui->pushButton_back,&QPushButton::clicked,this,&Person_interface::back);

}

Person_interface::~Person_interface()
{
  delete ui;
}
