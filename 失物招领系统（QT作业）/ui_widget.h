/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *number;
    QComboBox *numeber_list;
    QLineEdit *pwd;
    QLabel *forget_pwd;
    QLabel *get_number;
    QPushButton *pushButton_login;
    QLabel *header;
    QLabel *background_gif;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *auto_login;
    QCheckBox *remember_pwd;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(800, 600);
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(10);
        Widget->setFont(font);
        Widget->setStyleSheet(QLatin1String("QStackdeWidget#stackedWidget QPushButton\n"
"{\n"
"	border:none;\n"
"	border-radius:5px;\n"
"	backrground-color: rgb(11,194,255);\n"
"}\n"
""));
        number = new QLineEdit(Widget);
        number->setObjectName(QStringLiteral("number"));
        number->setGeometry(QRect(160, 220, 480, 60));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font1.setPointSize(16);
        font1.setItalic(false);
        number->setFont(font1);
        numeber_list = new QComboBox(Widget);
        numeber_list->setObjectName(QStringLiteral("numeber_list"));
        numeber_list->setGeometry(QRect(160, 220, 501, 60));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font2.setPointSize(16);
        font2.setItalic(true);
        numeber_list->setFont(font2);
        pwd = new QLineEdit(Widget);
        pwd->setObjectName(QStringLiteral("pwd"));
        pwd->setGeometry(QRect(160, 310, 501, 61));
        pwd->setFont(font2);
        pwd->setEchoMode(QLineEdit::Password);
        forget_pwd = new QLabel(Widget);
        forget_pwd->setObjectName(QStringLiteral("forget_pwd"));
        forget_pwd->setGeometry(QRect(560, 380, 101, 31));
        get_number = new QLabel(Widget);
        get_number->setObjectName(QStringLiteral("get_number"));
        get_number->setGeometry(QRect(10, 550, 121, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        get_number->setFont(font3);
        pushButton_login = new QPushButton(Widget);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));
        pushButton_login->setGeometry(QRect(160, 460, 501, 61));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\344\273\277\345\256\213"));
        font4.setPointSize(22);
        pushButton_login->setFont(font4);
        pushButton_login->setStyleSheet(QLatin1String("QStackdeWidget#stackedWidget QPushButton\n"
"{\n"
"	border:none;\n"
"	border-radius:5px;\n"
"	backrground-color: rgb(11,194,255);\n"
"}"));
        header = new QLabel(Widget);
        header->setObjectName(QStringLiteral("header"));
        header->setGeometry(QRect(330, 120, 121, 91));
        header->setPixmap(QPixmap(QString::fromUtf8(":/hall_picture/header.jpg")));
        header->setScaledContents(true);
        background_gif = new QLabel(Widget);
        background_gif->setObjectName(QStringLiteral("background_gif"));
        background_gif->setGeometry(QRect(0, 0, 800, 600));
        background_gif->setPixmap(QPixmap(QString::fromUtf8(":/bgd_picture/bgd03.JPG")));
        background_gif->setScaledContents(true);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(160, 380, 237, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        auto_login = new QCheckBox(layoutWidget);
        auto_login->setObjectName(QStringLiteral("auto_login"));
        auto_login->setFont(font);

        horizontalLayout->addWidget(auto_login);

        remember_pwd = new QCheckBox(layoutWidget);
        remember_pwd->setObjectName(QStringLiteral("remember_pwd"));
        remember_pwd->setFont(font);

        horizontalLayout->addWidget(remember_pwd);

        numeber_list->raise();
        background_gif->raise();
        layoutWidget->raise();
        pwd->raise();
        number->raise();
        forget_pwd->raise();
        pushButton_login->raise();
        header->raise();
        get_number->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        numeber_list->clear();
        numeber_list->insertItems(0, QStringList()
         << QApplication::translate("Widget", "root", 0)
         << QApplication::translate("Widget", "123456", 0)
         << QApplication::translate("Widget", "456123", 0)
        );
        forget_pwd->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" color:#ffffff;\">\345\277\230\350\256\260\345\257\206\347\240\201\357\274\237</span></p></body></html>", 0));
        get_number->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" color:#ffffff;\">\346\263\250\345\206\214\350\264\246\345\217\267</span></p></body></html>", 0));
        pushButton_login->setText(QApplication::translate("Widget", "\347\231\273\345\275\225", 0));
        pushButton_login->setShortcut(QApplication::translate("Widget", "Return", 0));
        header->setText(QString());
        background_gif->setText(QString());
        auto_login->setText(QApplication::translate("Widget", "\350\207\252\345\212\250\347\231\273\345\275\225", 0));
        remember_pwd->setText(QApplication::translate("Widget", "\350\256\260\344\275\217\345\257\206\347\240\201", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
