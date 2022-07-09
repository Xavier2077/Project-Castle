/********************************************************************************
** Form generated from reading UI file 'release_3.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RELEASE_3_H
#define UI_RELEASE_3_H

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

class Ui_release_3
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_return;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *t_name_lineEdit;
    QLabel *label_3;
    QLineEdit *t_class_lineEdit;
    QComboBox *t_class_comboBox;
    QLabel *label_4;
    QLineEdit *lost_time_lineEdit;
    QLabel *label_5;
    QLineEdit *lost_addr_lineEdit_3;
    QLabel *label_6;
    QComboBox *comboBox;
    QLineEdit *connection_lineEdit;
    QLabel *label_8;
    QLabel *label_7;
    QLineEdit *t_value_lineEdit;
    QLabel *label_9;
    QLineEdit *p_lineedit;

    void setupUi(QWidget *release_3)
    {
        if (release_3->objectName().isEmpty())
            release_3->setObjectName(QStringLiteral("release_3"));
        release_3->resize(800, 1000);
        pushButton = new QPushButton(release_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 830, 111, 71));
        QFont font;
        font.setPointSize(14);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(release_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(330, 830, 111, 71));
        pushButton_2->setFont(font);
        pushButton_return = new QPushButton(release_3);
        pushButton_return->setObjectName(QStringLiteral("pushButton_return"));
        pushButton_return->setGeometry(QRect(560, 830, 111, 71));
        pushButton_return->setFont(font);
        label_2 = new QLabel(release_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 90, 141, 45));
        QFont font1;
        font1.setPointSize(14);
        font1.setUnderline(false);
        label_2->setFont(font1);
        label_2->setFrameShape(QFrame::Box);
        label = new QLabel(release_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 30, 331, 41));
        t_name_lineEdit = new QLineEdit(release_3);
        t_name_lineEdit->setObjectName(QStringLiteral("t_name_lineEdit"));
        t_name_lineEdit->setGeometry(QRect(300, 90, 450, 45));
        t_name_lineEdit->setFont(font);
        label_3 = new QLabel(release_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 180, 141, 45));
        label_3->setFont(font1);
        label_3->setFrameShape(QFrame::Box);
        t_class_lineEdit = new QLineEdit(release_3);
        t_class_lineEdit->setObjectName(QStringLiteral("t_class_lineEdit"));
        t_class_lineEdit->setGeometry(QRect(300, 180, 431, 45));
        t_class_lineEdit->setFont(font);
        t_class_comboBox = new QComboBox(release_3);
        t_class_comboBox->setObjectName(QStringLiteral("t_class_comboBox"));
        t_class_comboBox->setGeometry(QRect(300, 180, 450, 45));
        t_class_comboBox->setFont(font);
        label_4 = new QLabel(release_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 270, 141, 45));
        label_4->setFont(font1);
        label_4->setFrameShape(QFrame::Box);
        lost_time_lineEdit = new QLineEdit(release_3);
        lost_time_lineEdit->setObjectName(QStringLiteral("lost_time_lineEdit"));
        lost_time_lineEdit->setGeometry(QRect(300, 270, 450, 45));
        lost_time_lineEdit->setFont(font);
        label_5 = new QLabel(release_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(100, 360, 141, 45));
        label_5->setFont(font1);
        label_5->setFrameShape(QFrame::Box);
        lost_addr_lineEdit_3 = new QLineEdit(release_3);
        lost_addr_lineEdit_3->setObjectName(QStringLiteral("lost_addr_lineEdit_3"));
        lost_addr_lineEdit_3->setGeometry(QRect(300, 360, 450, 45));
        lost_addr_lineEdit_3->setFont(font);
        label_6 = new QLabel(release_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(100, 450, 141, 45));
        label_6->setFont(font1);
        label_6->setFrameShape(QFrame::Box);
        comboBox = new QComboBox(release_3);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(300, 450, 81, 45));
        comboBox->setFont(font);
        connection_lineEdit = new QLineEdit(release_3);
        connection_lineEdit->setObjectName(QStringLiteral("connection_lineEdit"));
        connection_lineEdit->setGeometry(QRect(390, 450, 361, 45));
        connection_lineEdit->setFont(font);
        label_8 = new QLabel(release_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(100, 630, 171, 45));
        label_8->setFont(font1);
        label_8->setFrameShape(QFrame::Box);
        label_7 = new QLabel(release_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(100, 540, 171, 45));
        label_7->setFont(font1);
        label_7->setFrameShape(QFrame::Box);
        t_value_lineEdit = new QLineEdit(release_3);
        t_value_lineEdit->setObjectName(QStringLiteral("t_value_lineEdit"));
        t_value_lineEdit->setGeometry(QRect(300, 540, 450, 45));
        t_value_lineEdit->setFont(font);
        label_9 = new QLabel(release_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 0, 800, 1000));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/hall_picture/640x500a0a0.jfif")));
        label_9->setScaledContents(true);
        p_lineedit = new QLineEdit(release_3);
        p_lineedit->setObjectName(QStringLiteral("p_lineedit"));
        p_lineedit->setGeometry(QRect(300, 630, 450, 45));
        p_lineedit->setFont(font);
        label_9->raise();
        t_class_comboBox->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_return->raise();
        label_2->raise();
        label->raise();
        t_name_lineEdit->raise();
        label_3->raise();
        t_class_lineEdit->raise();
        label_4->raise();
        lost_time_lineEdit->raise();
        label_5->raise();
        lost_addr_lineEdit_3->raise();
        label_6->raise();
        comboBox->raise();
        connection_lineEdit->raise();
        label_8->raise();
        label_7->raise();
        t_value_lineEdit->raise();
        p_lineedit->raise();

        retranslateUi(release_3);

        QMetaObject::connectSlotsByName(release_3);
    } // setupUi

    void retranslateUi(QWidget *release_3)
    {
        release_3->setWindowTitle(QApplication::translate("release_3", "Form", 0));
        pushButton->setText(QApplication::translate("release_3", "\345\217\221\345\270\203", 0));
        pushButton_2->setText(QApplication::translate("release_3", "\344\277\235\345\255\230", 0));
        pushButton_return->setText(QApplication::translate("release_3", "\350\277\224\345\233\236", 0));
        label_2->setText(QApplication::translate("release_3", "\347\211\251\345\223\201\345\220\215\347\247\260\357\274\232", 0));
        label->setText(QApplication::translate("release_3", "<html><head/><body><p><span style=\" font-size:18pt;\">\344\270\242\347\211\251\347\211\251\344\277\241\346\201\257\347\231\273\350\256\260</span></p><p><br/></p></body></html>", 0));
        label_3->setText(QApplication::translate("release_3", "\347\211\251\345\223\201\347\261\273\345\236\213\357\274\232", 0));
        t_class_comboBox->clear();
        t_class_comboBox->insertItems(0, QStringList()
         << QApplication::translate("release_3", "\344\271\246\347\261\215/\347\254\224\350\256\260\346\234\254", 0)
         << QApplication::translate("release_3", "\347\224\265\345\255\220\344\272\247\345\223\201", 0)
         << QApplication::translate("release_3", "\350\241\243\347\211\251", 0)
         << QApplication::translate("release_3", "\351\245\260\345\223\201", 0)
         << QApplication::translate("release_3", "\345\205\266\344\273\226", 0)
        );
        label_4->setText(QApplication::translate("release_3", "\344\270\242\345\244\261\346\227\266\351\227\264\357\274\232", 0));
        label_5->setText(QApplication::translate("release_3", "\344\270\242\345\244\261\345\234\260\347\202\271\357\274\232", 0));
        label_6->setText(QApplication::translate("release_3", "\350\201\224\347\263\273\346\226\271\345\274\217\357\274\232", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("release_3", "\347\224\265\350\257\235", 0)
         << QApplication::translate("release_3", "QQ", 0)
         << QApplication::translate("release_3", "\345\276\256\344\277\241", 0)
        );
        label_8->setText(QApplication::translate("release_3", "<html><head/><body><p><span style=\" font-size:12pt;\">\344\270\212\344\274\240\347\211\251\345\223\201\345\233\276\347\211\207</span></p></body></html>", 0));
        label_7->setText(QApplication::translate("release_3", "<html><head/><body><p><span style=\" font-size:12pt;\">\347\211\251\345\223\201\351\242\204\344\274\260\344\273\267\345\200\274\357\274\232</span></p></body></html>", 0));
        label_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class release_3: public Ui_release_3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RELEASE_3_H
