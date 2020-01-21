/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <chartview.h>
#include <chartviewmedian.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget_2;
    QWidget *tabSignal;
    QVBoxLayout *verticalLayout;
    ChartView *chartView;
    QWidget *tabAfc;
    QVBoxLayout *verticalLayout_2;
    ChartViewMedian *chartViewAfc;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QVBoxLayout *verticalLayoutTab_1;
    QWidget *tab_2;
    QVBoxLayout *verticalLayoutTab_2;
    QLabel *labelConnectState;
    QComboBox *comboBoxPortsList;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnRefreshPorts;
    QPushButton *btnDisconnect;
    QPushButton *btnConnect;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tabWidget_2 = new QTabWidget(centralWidget);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setMinimumSize(QSize(1, 1));
        tabSignal = new QWidget();
        tabSignal->setObjectName(QStringLiteral("tabSignal"));
        verticalLayout = new QVBoxLayout(tabSignal);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        chartView = new ChartView(tabSignal);
        chartView->setObjectName(QStringLiteral("chartView"));

        verticalLayout->addWidget(chartView);

        tabWidget_2->addTab(tabSignal, QString());
        tabAfc = new QWidget();
        tabAfc->setObjectName(QStringLiteral("tabAfc"));
        verticalLayout_2 = new QVBoxLayout(tabAfc);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        chartViewAfc = new ChartViewMedian(tabAfc);
        chartViewAfc->setObjectName(QStringLiteral("chartViewAfc"));

        verticalLayout_2->addWidget(chartViewAfc);

        tabWidget_2->addTab(tabAfc, QString());

        horizontalLayout->addWidget(tabWidget_2);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(160, 0));
        tab_1 = new QWidget();
        tab_1->setObjectName(QStringLiteral("tab_1"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tab_1->sizePolicy().hasHeightForWidth());
        tab_1->setSizePolicy(sizePolicy1);
        verticalLayoutTab_1 = new QVBoxLayout(tab_1);
        verticalLayoutTab_1->setSpacing(6);
        verticalLayoutTab_1->setContentsMargins(11, 11, 11, 11);
        verticalLayoutTab_1->setObjectName(QStringLiteral("verticalLayoutTab_1"));
        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        sizePolicy1.setHeightForWidth(tab_2->sizePolicy().hasHeightForWidth());
        tab_2->setSizePolicy(sizePolicy1);
        verticalLayoutTab_2 = new QVBoxLayout(tab_2);
        verticalLayoutTab_2->setSpacing(6);
        verticalLayoutTab_2->setContentsMargins(11, 11, 11, 11);
        verticalLayoutTab_2->setObjectName(QStringLiteral("verticalLayoutTab_2"));
        labelConnectState = new QLabel(tab_2);
        labelConnectState->setObjectName(QStringLiteral("labelConnectState"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelConnectState->sizePolicy().hasHeightForWidth());
        labelConnectState->setSizePolicy(sizePolicy2);
        labelConnectState->setMinimumSize(QSize(1, 1));

        verticalLayoutTab_2->addWidget(labelConnectState);

        comboBoxPortsList = new QComboBox(tab_2);
        comboBoxPortsList->setObjectName(QStringLiteral("comboBoxPortsList"));
        sizePolicy2.setHeightForWidth(comboBoxPortsList->sizePolicy().hasHeightForWidth());
        comboBoxPortsList->setSizePolicy(sizePolicy2);
        comboBoxPortsList->setMinimumSize(QSize(1, 1));

        verticalLayoutTab_2->addWidget(comboBoxPortsList);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btnRefreshPorts = new QPushButton(tab_2);
        btnRefreshPorts->setObjectName(QStringLiteral("btnRefreshPorts"));
        sizePolicy2.setHeightForWidth(btnRefreshPorts->sizePolicy().hasHeightForWidth());
        btnRefreshPorts->setSizePolicy(sizePolicy2);
        btnRefreshPorts->setMinimumSize(QSize(1, 1));

        horizontalLayout_2->addWidget(btnRefreshPorts);

        btnDisconnect = new QPushButton(tab_2);
        btnDisconnect->setObjectName(QStringLiteral("btnDisconnect"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnDisconnect->sizePolicy().hasHeightForWidth());
        btnDisconnect->setSizePolicy(sizePolicy3);
        btnDisconnect->setMinimumSize(QSize(1, 1));
        QFont font;
        font.setKerning(true);
        btnDisconnect->setFont(font);
        btnDisconnect->setAutoRepeatDelay(300);
        btnDisconnect->setAutoRepeatInterval(100);

        horizontalLayout_2->addWidget(btnDisconnect);

        btnConnect = new QPushButton(tab_2);
        btnConnect->setObjectName(QStringLiteral("btnConnect"));
        sizePolicy2.setHeightForWidth(btnConnect->sizePolicy().hasHeightForWidth());
        btnConnect->setSizePolicy(sizePolicy2);
        btnConnect->setMinimumSize(QSize(1, 1));

        horizontalLayout_2->addWidget(btnConnect);


        verticalLayoutTab_2->addLayout(horizontalLayout_2);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout->addWidget(tabWidget, 0, Qt::AlignTop);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget_2->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tabSignal), QApplication::translate("MainWindow", "Signal", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tabAfc), QApplication::translate("MainWindow", "AFC", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("MainWindow", "Operation", Q_NULLPTR));
        labelConnectState->setText(QApplication::translate("MainWindow", "disconnected", Q_NULLPTR));
        btnRefreshPorts->setText(QApplication::translate("MainWindow", "Refresh", Q_NULLPTR));
        btnDisconnect->setText(QApplication::translate("MainWindow", "dis", Q_NULLPTR));
        btnConnect->setText(QApplication::translate("MainWindow", "Connect", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Connection", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
