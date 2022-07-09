/********************************************************************************
** Form generated from reading UI file 'release.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RELEASE_H
#define UI_RELEASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_release
{
public:
    QPushButton *release_button_1;
    QPushButton *release_button_2;
    QPushButton *pushButton_back;
    QLabel *bgd;

    void setupUi(QWidget *release)
    {
        if (release->objectName().isEmpty())
            release->setObjectName(QStringLiteral("release"));
        release->resize(400, 300);
        release_button_1 = new QPushButton(release);
        release_button_1->setObjectName(QStringLiteral("release_button_1"));
        release_button_1->setGeometry(QRect(50, 110, 111, 81));
        release_button_2 = new QPushButton(release);
        release_button_2->setObjectName(QStringLiteral("release_button_2"));
        release_button_2->setGeometry(QRect(250, 110, 111, 81));
        pushButton_back = new QPushButton(release);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(0, 0, 51, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/hall_picture/\350\277\224\345\233\236.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_back->setIcon(icon);
        pushButton_back->setIconSize(QSize(30, 30));
        pushButton_back->setCheckable(false);
        bgd = new QLabel(release);
        bgd->setObjectName(QStringLiteral("bgd"));
        bgd->setGeometry(QRect(0, 0, 400, 300));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bgd->sizePolicy().hasHeightForWidth());
        bgd->setSizePolicy(sizePolicy);
        bgd->setPixmap(QPixmap(QString::fromUtf8(":/hall_picture/oats-g0bb24fa90_1280.jpg")));
        bgd->setScaledContents(true);
        bgd->raise();
        release_button_1->raise();
        release_button_2->raise();
        pushButton_back->raise();

        retranslateUi(release);

        QMetaObject::connectSlotsByName(release);
    } // setupUi

    void retranslateUi(QWidget *release)
    {
        release->setWindowTitle(QApplication::translate("release", "Form", 0));
        release_button_1->setText(QApplication::translate("release", " \346\213\276\347\211\251", 0));
        release_button_2->setText(QApplication::translate("release", "\344\270\242\347\211\251", 0));
        pushButton_back->setText(QString());
        bgd->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class release: public Ui_release {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RELEASE_H
