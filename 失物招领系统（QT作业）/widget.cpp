#include "widget.h"
#include "ui_widget.h"
#include <QString>
#include <QMessageBox>
#include <QIcon>
Widget::Widget(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::Widget)
{
  ui->setupUi(this);
  //设置标题
  this->setWindowTitle("小青蛙失物招领系统");
  this->setWindowIcon(QIcon(":/hall_picture/header.png"));
  //固定窗口尺寸
  this->setFixedHeight(600);
  this->setFixedWidth(800);
  /*
  //设置登录界面动态图
  p_gif = new QMovie;
  //设置动态图尺寸
  QSize gif_size;
  gif_size.setWidth(800);
  gif_size.setHeight(180);
  p_gif->setScaledSize(gif_size);
  p_gif->setFileName(":/gift_2.gif");
  ui->background_gif->setMovie(p_gif);
  p_gif->start();
  */
  //设置默认账号
  ui->number->setText(ui->numeber_list->currentText());
  //设置图标
  m_pUsrAct = new QAction(this);
  m_pUsrAct->setIcon(QIcon(":/number.png"));
  ui->number->addAction(m_pUsrAct,QLineEdit::LeadingPosition);

  m_pLockAct = new QAction(this);
  m_pLockAct->setIcon(QIcon(":/lock.png"));
  ui->pwd->addAction(m_pLockAct,QLineEdit::LeadingPosition);
//  m_pKeyAct = new QAction;
  this->f1 = new From();
  connect(ui->pushButton_login,&QPushButton::clicked,[=]()
  {
      QString user = ui->number->text();
      QString passward = ui->pwd->text();
      if(user == "root" && passward =="123456")
      {
          QMessageBox::information(this,"登录成功","即将跳转");
          this->hide();
          f1->show();

    }
      else
        {
          QMessageBox::critical(this,"登陆失败","用户名或密码错误！");
        }
});
  connect(f1,&From::back,this,&Widget::backslot);
}
/*暂未实现功能
 * 托盘图标
 */

Widget::~Widget()
{
  delete ui;
}
//下拉账号复选框，显示选中文本
void Widget::on_numeber_list_currentIndexChanged(const QString &arg1)
{
    ui->number->setText(arg1);
}
void Widget::backslot()
{
    f1->hide();
    this->show();
    ui->pwd->clear();
}
