/********************************************************************************
** Form generated from reading UI file 'userdisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERDISPLAY_H
#define UI_USERDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserDisplay
{
public:
    QWidget *centralWidget;
    QListWidget *listWidget;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QMainWindow *UserDisplay)
    {
        if (UserDisplay->objectName().isEmpty())
            UserDisplay->setObjectName(QStringLiteral("UserDisplay"));
        UserDisplay->resize(300, 625);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UserDisplay->sizePolicy().hasHeightForWidth());
        UserDisplay->setSizePolicy(sizePolicy);
        UserDisplay->setMinimumSize(QSize(300, 600));
        UserDisplay->setMaximumSize(QSize(300, 700));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(217, 217, 217, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        UserDisplay->setPalette(palette);
        UserDisplay->setAutoFillBackground(false);
        centralWidget = new QWidget(UserDisplay);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setEnabled(true);
        listWidget->setGeometry(QRect(25, 100, 250, 450));
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setMinimumSize(QSize(250, 450));
        listWidget->setMaximumSize(QSize(250, 450));
        QPalette palette1;
        QBrush brush2(QColor(245, 221, 101, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        QBrush brush3(QColor(240, 240, 240, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        listWidget->setPalette(palette1);
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        listWidget->setFont(font);
        listWidget->setDragEnabled(false);
        listWidget->setDragDropOverwriteMode(false);
        listWidget->setDragDropMode(QAbstractItemView::InternalMove);
        listWidget->setDefaultDropAction(Qt::LinkAction);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 250, 71));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(5);
        sizePolicy1.setVerticalStretch(5);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QPalette palette2;
        QBrush brush4(QColor(255, 255, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush4);
        label->setPalette(palette2);
        QFont font1;
        font1.setFamily(QStringLiteral("Calibri"));
        font1.setPointSize(24);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setMargin(10);
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(25, 565, 250, 40));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        lineEdit->setPalette(palette3);
        QFont font2;
        font2.setFamily(QStringLiteral("Calibri"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        lineEdit->setFont(font2);
        UserDisplay->setCentralWidget(centralWidget);

        retranslateUi(UserDisplay);

        QMetaObject::connectSlotsByName(UserDisplay);
    } // setupUi

    void retranslateUi(QMainWindow *UserDisplay)
    {
        UserDisplay->setWindowTitle(QApplication::translate("UserDisplay", "UserDisplay", Q_NULLPTR));
        label->setText(QApplication::translate("UserDisplay", "Todo:", Q_NULLPTR));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("UserDisplay", "Insert new item", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UserDisplay: public Ui_UserDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERDISPLAY_H
