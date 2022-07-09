/********************************************************************************
** Form generated from reading UI file 'from.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FROM_H
#define UI_FROM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_From
{
public:
    QLabel *bgd;
    QPushButton *person_button;
    QPushButton *release_buttton;
    QPushButton *pushButton_back;
    QTableWidget *tableWidget_2;
    QLabel *label;
    QLabel *label_2;
    QTableWidget *tableWidget;

    void setupUi(QWidget *From)
    {
        if (From->objectName().isEmpty())
            From->setObjectName(QStringLiteral("From"));
        From->resize(1050, 1100);
        QFont font;
        font.setPointSize(1);
        From->setFont(font);
        bgd = new QLabel(From);
        bgd->setObjectName(QStringLiteral("bgd"));
        bgd->setGeometry(QRect(0, 0, 100, 100));
        bgd->setMaximumSize(QSize(100, 100));
        bgd->setPixmap(QPixmap(QString::fromUtf8(":/hall_picture/bgd_3.jpg")));
        bgd->setScaledContents(true);
        person_button = new QPushButton(From);
        person_button->setObjectName(QStringLiteral("person_button"));
        person_button->setGeometry(QRect(900, 980, 150, 120));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(person_button->sizePolicy().hasHeightForWidth());
        person_button->setSizePolicy(sizePolicy);
        person_button->setMinimumSize(QSize(0, 0));
        person_button->setIconSize(QSize(150, 120));
        release_buttton = new QPushButton(From);
        release_buttton->setObjectName(QStringLiteral("release_buttton"));
        release_buttton->setGeometry(QRect(520, 980, 120, 120));
        release_buttton->setMinimumSize(QSize(0, 0));
        release_buttton->setMaximumSize(QSize(1000, 1000));
        release_buttton->setStyleSheet(QLatin1String("QPushBtrron\n"
"{\n"
"background-color:rgb(170,170,255);\n"
"color:white;\n"
"border-radius:50px;\n"
"border:2px groove gray;\n"
"border-style:outset;\n"
"}"));
        release_buttton->setIconSize(QSize(150, 150));
        pushButton_back = new QPushButton(From);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(0, 1030, 131, 71));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/hall_picture/\350\277\224\345\233\236.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_back->setIcon(icon);
        pushButton_back->setIconSize(QSize(50, 50));
        tableWidget_2 = new QTableWidget(From);
        if (tableWidget_2->columnCount() < 6)
            tableWidget_2->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(0, 580, 1051, 400));
        label = new QLabel(From);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(370, -10, 451, 81));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        label->setFont(font1);
        label_2 = new QLabel(From);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(400, 510, 281, 71));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        tableWidget = new QTableWidget(From);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem12);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 60, 1051, 461));

        retranslateUi(From);

        QMetaObject::connectSlotsByName(From);
    } // setupUi

    void retranslateUi(QWidget *From)
    {
        From->setWindowTitle(QApplication::translate("From", "Form", 0));
        bgd->setText(QString());
#ifndef QT_NO_TOOLTIP
        person_button->setToolTip(QApplication::translate("From", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; font-style:italic; color:#aaff00;\">\344\270\252\344\272\272\344\270\255\345\277\203</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        person_button->setText(QString());
#ifndef QT_NO_TOOLTIP
        release_buttton->setToolTip(QApplication::translate("From", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600; font-style:italic; color:#00ffff;\">\345\217\221\345\270\203\344\277\241\346\201\257</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        release_buttton->setText(QString());
        pushButton_back->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("From", "\347\211\251\345\223\201\345\220\215\347\247\260", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("From", "\347\211\251\345\223\201\347\261\273\345\236\213", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("From", "\344\270\242\345\244\261\346\227\266\351\227\264", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("From", "\344\270\242\345\244\261\345\234\260\347\202\271", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("From", "\350\201\224\347\263\273\346\226\271\345\274\217", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("From", "\347\211\251\345\223\201\344\273\267\345\200\274", 0));
        label->setText(QApplication::translate("From", "<html><head/><body><p><span style=\" font-size:16pt; color:#00007f;\">\345\244\261\347\211\251\346\213\233\351\242\206</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("From", "\345\244\261\347\211\251\345\220\257\347\244\272", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("From", "\347\211\251\345\223\201\345\220\215\347\247\260", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("From", "\347\211\251\345\223\201\347\261\273\345\236\213", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("From", "\345\217\221\347\216\260\346\227\266\351\227\264", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("From", "\345\217\221\347\216\260\345\234\260\347\202\271", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem10->setText(QApplication::translate("From", "\350\201\224\347\263\273\346\226\271\345\274\217", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem11->setText(QApplication::translate("From", "\345\255\230\346\224\276\345\234\260\347\202\271", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem12->setText(QApplication::translate("From", "\347\211\251\345\223\201\344\273\267\345\200\274", 0));
    } // retranslateUi

};

namespace Ui {
    class From: public Ui_From {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FROM_H
