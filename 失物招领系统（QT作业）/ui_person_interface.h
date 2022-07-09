/********************************************************************************
** Form generated from reading UI file 'person_interface.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSON_INTERFACE_H
#define UI_PERSON_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Person_interface
{
public:
    QLabel *header_label;
    QLabel *ID_label;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_back;
    QLabel *ID_label_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_bgd;

    void setupUi(QWidget *Person_interface)
    {
        if (Person_interface->objectName().isEmpty())
            Person_interface->setObjectName(QStringLiteral("Person_interface"));
        Person_interface->resize(550, 750);
        header_label = new QLabel(Person_interface);
        header_label->setObjectName(QStringLiteral("header_label"));
        header_label->setGeometry(QRect(10, 40, 130, 130));
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        header_label->setFont(font);
        header_label->setFrameShape(QFrame::Box);
        header_label->setPixmap(QPixmap(QString::fromUtf8(":/hall_picture/header.jpg")));
        header_label->setScaledContents(true);
        ID_label = new QLabel(Person_interface);
        ID_label->setObjectName(QStringLiteral("ID_label"));
        ID_label->setGeometry(QRect(150, 70, 391, 31));
        ID_label->setFont(font);
        ID_label->setFrameShape(QFrame::Box);
        ID_label->setScaledContents(true);
        label = new QLabel(Person_interface);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 480, 550, 50));
        label->setFont(font);
        label->setFrameShape(QFrame::StyledPanel);
        label->setScaledContents(true);
        label_2 = new QLabel(Person_interface);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 270, 550, 50));
        label_2->setFont(font);
        label_2->setFrameShape(QFrame::StyledPanel);
        label_2->setScaledContents(true);
        label_3 = new QLabel(Person_interface);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 340, 550, 50));
        label_3->setFont(font);
        label_3->setFrameShape(QFrame::StyledPanel);
        label_3->setScaledContents(true);
        label_4 = new QLabel(Person_interface);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 410, 550, 50));
        label_4->setFont(font);
        label_4->setFrameShape(QFrame::StyledPanel);
        label_4->setScaledContents(true);
        pushButton_back = new QPushButton(Person_interface);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(130, 600, 261, 51));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        pushButton_back->setFont(font1);
        ID_label_2 = new QLabel(Person_interface);
        ID_label_2->setObjectName(QStringLiteral("ID_label_2"));
        ID_label_2->setGeometry(QRect(150, 130, 231, 41));
        ID_label_2->setFont(font);
        ID_label_2->setFrameShape(QFrame::Box);
        ID_label_2->setScaledContents(true);
        layoutWidget = new QWidget(Person_interface);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(310, 200, 235, 36));
        layoutWidget->setFont(font);
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font);

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setFont(font);

        horizontalLayout->addWidget(pushButton_3);

        label_bgd = new QLabel(Person_interface);
        label_bgd->setObjectName(QStringLiteral("label_bgd"));
        label_bgd->setGeometry(QRect(0, 0, 550, 750));
        label_bgd->setFont(font);
        label_bgd->setPixmap(QPixmap(QString::fromUtf8(":/bgd_picture/bgd01.jpg")));
        label_bgd->setScaledContents(true);
        label_bgd->raise();
        layoutWidget->raise();
        header_label->raise();
        ID_label->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        pushButton_back->raise();
        ID_label_2->raise();

        retranslateUi(Person_interface);

        QMetaObject::connectSlotsByName(Person_interface);
    } // setupUi

    void retranslateUi(QWidget *Person_interface)
    {
        Person_interface->setWindowTitle(QApplication::translate("Person_interface", "Form", 0));
        header_label->setText(QString());
        ID_label->setText(QApplication::translate("Person_interface", "<html><head/><body><p><span style=\" font-size:10pt;\">ID:</span><span style=\" font-size:14pt;\">root</span></p></body></html>", 0));
        label->setText(QApplication::translate("Person_interface", "<html><head/><body><p><span style=\" font-size:14pt;\">Settings</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("Person_interface", "<html><head/><body><p><span style=\" font-size:14pt;\">\345\267\262\345\217\221\345\270\203\344\277\241\346\201\257</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("Person_interface", "<html><head/><body><p><span style=\" font-size:14pt;\">\345\205\263\346\263\250</span></p></body></html>", 0));
        label_4->setText(QApplication::translate("Person_interface", "<html><head/><body><p><span style=\" font-size:14pt;\">\345\217\221\347\216\260</span></p></body></html>", 0));
        pushButton_back->setText(QApplication::translate("Person_interface", "\350\277\224\345\233\236", 0));
        ID_label_2->setText(QApplication::translate("Person_interface", "<html><head/><body><p><span style=\" font-size:14pt;\">\346\230\265\347\247\260\357\274\232\345\260\217\351\235\222\350\233\231</span></p></body></html>", 0));
        pushButton_2->setText(QApplication::translate("Person_interface", "\344\277\256\346\224\271\346\230\265\347\247\260", 0));
        pushButton_3->setText(QApplication::translate("Person_interface", "\344\277\256\346\224\271\345\257\206\347\240\201", 0));
        label_bgd->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Person_interface: public Ui_Person_interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSON_INTERFACE_H
