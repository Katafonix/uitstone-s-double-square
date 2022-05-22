/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *input_text;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *keyword_1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *keyword_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QTextBrowser *output_text;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *encrypt;
    QPushButton *decipher;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(417, 324);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_6 = new QVBoxLayout(centralwidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        input_text = new QLineEdit(centralwidget);
        input_text->setObjectName(QString::fromUtf8("input_text"));

        horizontalLayout->addWidget(input_text);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(20);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        keyword_1 = new QLineEdit(centralwidget);
        keyword_1->setObjectName(QString::fromUtf8("keyword_1"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(keyword_1->sizePolicy().hasHeightForWidth());
        keyword_1->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(keyword_1);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(12);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        keyword_2 = new QLineEdit(centralwidget);
        keyword_2->setObjectName(QString::fromUtf8("keyword_2"));

        horizontalLayout_3->addWidget(keyword_2);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        output_text = new QTextBrowser(centralwidget);
        output_text->setObjectName(QString::fromUtf8("output_text"));

        verticalLayout_2->addWidget(output_text);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        encrypt = new QPushButton(centralwidget);
        encrypt->setObjectName(QString::fromUtf8("encrypt"));

        horizontalLayout_4->addWidget(encrypt);

        decipher = new QPushButton(centralwidget);
        decipher->setObjectName(QString::fromUtf8("decipher"));

        horizontalLayout_4->addWidget(decipher);


        verticalLayout_4->addLayout(horizontalLayout_4);


        verticalLayout_5->addLayout(verticalLayout_4);


        verticalLayout_6->addLayout(verticalLayout_5);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 417, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\230\321\201\321\205\320\276\320\264\320\275\321\213\320\271 \321\202\320\265\320\272\321\201\321\202:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\233\320\265\320\262\321\213\320\271 \320\272\320\273\321\216\321\207:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\321\213\320\271 \320\272\320\273\321\216\321\207:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\250\320\270\321\204\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\271/\320\240\320\260\321\201\321\210\320\270\321\204\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\271 \321\202\320\265\320\272\321\201\321\202", nullptr));
        encrypt->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\321\210\320\270\321\204\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        decipher->setText(QCoreApplication::translate("MainWindow", "\320\224\320\265\321\210\320\270\321\204\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
