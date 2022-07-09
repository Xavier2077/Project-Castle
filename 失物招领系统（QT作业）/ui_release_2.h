/********************************************************************************
** Form generated from reading UI file 'release_2.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RELEASE_2_H
#define UI_RELEASE_2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_release_2
{
public:
    QPushButton *pushButton_publish;
    QPushButton *pushButton_save;
    QPushButton *pushButton_return;
    QComboBox *t_class_comboBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QComboBox *lay_addr_comboBox;
    QLineEdit *t_name_lineEdit;
    QLineEdit *f_time_lineEdit;
    QLineEdit *f_addr_lineEdit_3;
    QLineEdit *t_picture_lineEdit;
    QLineEdit *t_value_lineEdit;
    QLineEdit *connection_lineEdit;
    QLineEdit *t_class_lineEdit;
    QLineEdit *lay_addr_lineEdit;
    QComboBox *comboBox;
    QLabel *label_bgd;

    void setupUi(QWidget *release_2)
    {
        if (release_2->objectName().isEmpty())
            release_2->setObjectName(QStringLiteral("release_2"));
        release_2->resize(800, 1000);
        pushButton_publish = new QPushButton(release_2);
        pushButton_publish->setObjectName(QStringLiteral("pushButton_publish"));
        pushButton_publish->setGeometry(QRect(100, 800, 111, 71));
        QFont font;
        font.setPointSize(14);
        pushButton_publish->setFont(font);
        pushButton_save = new QPushButton(release_2);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));
        pushButton_save->setGeometry(QRect(360, 800, 111, 71));
        pushButton_save->setFont(font);
        pushButton_return = new QPushButton(release_2);
        pushButton_return->setObjectName(QStringLiteral("pushButton_return"));
        pushButton_return->setGeometry(QRect(610, 800, 111, 71));
        pushButton_return->setFont(font);
        t_class_comboBox = new QComboBox(release_2);
        t_class_comboBox->setObjectName(QStringLiteral("t_class_comboBox"));
        t_class_comboBox->setGeometry(QRect(300, 170, 450, 45));
        t_class_comboBox->setFont(font);
        label = new QLabel(release_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 10, 331, 41));
        label_2 = new QLabel(release_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 90, 141, 45));
        QFont font1;
        font1.setPointSize(14);
        font1.setUnderline(false);
        label_2->setFont(font1);
        label_2->setFrameShape(QFrame::Box);
        label_3 = new QLabel(release_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 170, 141, 45));
        label_3->setFont(font1);
        label_3->setFrameShape(QFrame::Box);
        label_4 = new QLabel(release_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 260, 141, 45));
        label_4->setFont(font1);
        label_4->setFrameShape(QFrame::Box);
        label_5 = new QLabel(release_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(100, 350, 141, 45));
        label_5->setFont(font1);
        label_5->setFrameShape(QFrame::Box);
        label_6 = new QLabel(release_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(100, 440, 141, 45));
        label_6->setFont(font1);
        label_6->setFrameShape(QFrame::Box);
        label_7 = new QLabel(release_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(100, 600, 171, 45));
        label_7->setFont(font1);
        label_7->setFrameShape(QFrame::Box);
        label_8 = new QLabel(release_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(100, 690, 171, 45));
        label_8->setFont(font1);
        label_8->setFrameShape(QFrame::Box);
        label_9 = new QLabel(release_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(100, 520, 141, 45));
        label_9->setFont(font1);
        label_9->setFrameShape(QFrame::Box);
        lay_addr_comboBox = new QComboBox(release_2);
        lay_addr_comboBox->setObjectName(QStringLiteral("lay_addr_comboBox"));
        lay_addr_comboBox->setGeometry(QRect(300, 520, 450, 45));
        lay_addr_comboBox->setFont(font);
        t_name_lineEdit = new QLineEdit(release_2);
        t_name_lineEdit->setObjectName(QStringLiteral("t_name_lineEdit"));
        t_name_lineEdit->setGeometry(QRect(300, 90, 450, 45));
        t_name_lineEdit->setFont(font);
        f_time_lineEdit = new QLineEdit(release_2);
        f_time_lineEdit->setObjectName(QStringLiteral("f_time_lineEdit"));
        f_time_lineEdit->setGeometry(QRect(300, 260, 450, 45));
        f_time_lineEdit->setFont(font);
        f_addr_lineEdit_3 = new QLineEdit(release_2);
        f_addr_lineEdit_3->setObjectName(QStringLiteral("f_addr_lineEdit_3"));
        f_addr_lineEdit_3->setGeometry(QRect(300, 350, 450, 45));
        f_addr_lineEdit_3->setFont(font);
        t_picture_lineEdit = new QLineEdit(release_2);
        t_picture_lineEdit->setObjectName(QStringLiteral("t_picture_lineEdit"));
        t_picture_lineEdit->setGeometry(QRect(300, 690, 450, 45));
        t_picture_lineEdit->setFont(font);
        t_value_lineEdit = new QLineEdit(release_2);
        t_value_lineEdit->setObjectName(QStringLiteral("t_value_lineEdit"));
        t_value_lineEdit->setGeometry(QRect(300, 600, 450, 45));
        t_value_lineEdit->setFont(font);
        connection_lineEdit = new QLineEdit(release_2);
        connection_lineEdit->setObjectName(QStringLiteral("connection_lineEdit"));
        connection_lineEdit->setGeometry(QRect(390, 440, 361, 45));
        connection_lineEdit->setFont(font);
        t_class_lineEdit = new QLineEdit(release_2);
        t_class_lineEdit->setObjectName(QStringLiteral("t_class_lineEdit"));
        t_class_lineEdit->setGeometry(QRect(300, 170, 431, 45));
        t_class_lineEdit->setFont(font);
        lay_addr_lineEdit = new QLineEdit(release_2);
        lay_addr_lineEdit->setObjectName(QStringLiteral("lay_addr_lineEdit"));
        lay_addr_lineEdit->setGeometry(QRect(300, 520, 431, 45));
        lay_addr_lineEdit->setFont(font);
        comboBox = new QComboBox(release_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(300, 440, 81, 45));
        comboBox->setFont(font);
        label_bgd = new QLabel(release_2);
        label_bgd->setObjectName(QStringLiteral("label_bgd"));
        label_bgd->setGeometry(QRect(0, 0, 800, 1000));
        label_bgd->setPixmap(QPixmap(QString::fromUtf8(":/hall_picture/640x500a0a0.jfif")));
        label_bgd->setScaledContents(true);
        label_bgd->raise();
        pushButton_publish->raise();
        pushButton_save->raise();
        pushButton_return->raise();
        t_class_comboBox->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        lay_addr_comboBox->raise();
        t_name_lineEdit->raise();
        f_time_lineEdit->raise();
        f_addr_lineEdit_3->raise();
        t_picture_lineEdit->raise();
        t_value_lineEdit->raise();
        connection_lineEdit->raise();
        t_class_lineEdit->raise();
        lay_addr_lineEdit->raise();
        comboBox->raise();

        retranslateUi(release_2);

        QMetaObject::connectSlotsByName(release_2);
    } // setupUi

    void retranslateUi(QWidget *release_2)
    {
        release_2->setWindowTitle(QApplication::translate("release_2", "Form", 0));
        pushButton_publish->setText(QApplication::translate("release_2", "\345\217\221\345\270\203", 0));
        pushButton_save->setText(QApplication::translate("release_2", "\344\277\235\345\255\230", 0));
        pushButton_return->setText(QApplication::translate("release_2", "\350\277\224\345\233\236", 0));
        t_class_comboBox->clear();
        t_class_comboBox->insertItems(0, QStringList()
         << QApplication::translate("release_2", "\344\271\246\347\261\215/\347\254\224\350\256\260\346\234\254", 0)
         << QApplication::translate("release_2", "\347\224\265\345\255\220\344\272\247\345\223\201", 0)
         << QApplication::translate("release_2", "\350\241\243\347\211\251", 0)
         << QApplication::translate("release_2", "\351\245\260\345\223\201", 0)
         << QApplication::translate("release_2", "\345\205\266\344\273\226", 0)
        );
        label->setText(QApplication::translate("release_2", "<html><head/><body><p><span style=\" font-size:18pt;\">\346\213\276\347\211\251\344\277\241\346\201\257\347\231\273\350\256\260</span></p><p><br/></p></body></html>", 0));
        label_2->setText(QApplication::translate("release_2", "\347\211\251\345\223\201\345\220\215\347\247\260\357\274\232", 0));
        label_3->setText(QApplication::translate("release_2", "\347\211\251\345\223\201\347\261\273\345\236\213\357\274\232", 0));
        label_4->setText(QApplication::translate("release_2", "\345\217\221\347\216\260\346\227\266\351\227\264\357\274\232", 0));
        label_5->setText(QApplication::translate("release_2", "\345\217\221\347\216\260\345\234\260\347\202\271\357\274\232", 0));
        label_6->setText(QApplication::translate("release_2", "\350\201\224\347\263\273\346\226\271\345\274\217\357\274\232", 0));
        label_7->setText(QApplication::translate("release_2", "<html><head/><body><p><span style=\" font-size:12pt;\">\347\211\251\345\223\201\351\242\204\344\274\260\344\273\267\345\200\274\357\274\232</span></p></body></html>", 0));
        label_8->setText(QApplication::translate("release_2", "<html><head/><body><p><span style=\" font-size:12pt;\">\344\270\212\344\274\240\347\211\251\345\223\201\345\233\276\347\211\207</span></p></body></html>", 0));
        label_9->setText(QApplication::translate("release_2", "\345\255\230\346\224\276\345\234\260\347\202\271\357\274\232\343\200\201", 0));
        lay_addr_comboBox->clear();
        lay_addr_comboBox->insertItems(0, QStringList()
         << QApplication::translate("release_2", "\344\270\252\344\272\272", 0)
         << QApplication::translate("release_2", "\345\205\266\344\273\226", 0)
        );
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("release_2", "\347\224\265\350\257\235", 0)
         << QApplication::translate("release_2", "QQ", 0)
         << QApplication::translate("release_2", "\345\276\256\344\277\241", 0)
        );
        label_bgd->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class release_2: public Ui_release_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RELEASE_2_H
