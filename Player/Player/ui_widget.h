/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qvideowidget.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *read_video_but;
    QLabel *label_3;
    QPushButton *shrink_but;
    QPushButton *large_but;
    QPushButton *close_but;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QVideoWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *begin_label;
    QSlider *run_slider;
    QLabel *end_label;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *stop_but;
    QPushButton *pre_but;
    QPushButton *play__but;
    QPushButton *rear_but;
    QPushButton *next_video_but;
    QLabel *label;
    QSlider *volume_slider;
    QLabel *label_2;
    QSlider *playratio_slider;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *hide_playlist_but;
    QWidget *widget_right;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QListWidget *listWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(701, 600);
        Widget->setStyleSheet(QString::fromUtf8("#Widget{ border:1px solid steelblue;}\n"
"QLabel{ color:white}\n"
""));
        verticalLayout_2 = new QVBoxLayout(Widget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        read_video_but = new QPushButton(Widget);
        read_video_but->setObjectName(QString::fromUtf8("read_video_but"));
        read_video_but->setMinimumSize(QSize(30, 30));
        read_video_but->setStyleSheet(QString::fromUtf8("border-image: url(:/icons/800ppi/1_2.png);"));

        horizontalLayout_3->addWidget(read_video_but);

        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("#label_3{border:1px solid steelblue;\n"
"	color:black;\n"
"	font: 16pt \"\345\256\213\344\275\223\";\n"
"}"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);

        shrink_but = new QPushButton(Widget);
        shrink_but->setObjectName(QString::fromUtf8("shrink_but"));
        shrink_but->setMinimumSize(QSize(20, 20));
        shrink_but->setStyleSheet(QString::fromUtf8("border-image: url(:/icons/800ppi/1_4.png);"));

        horizontalLayout_3->addWidget(shrink_but);

        large_but = new QPushButton(Widget);
        large_but->setObjectName(QString::fromUtf8("large_but"));
        large_but->setMinimumSize(QSize(20, 20));
        large_but->setStyleSheet(QString::fromUtf8("border-image: url(:/icons/800ppi/1_1.png);"));

        horizontalLayout_3->addWidget(large_but);

        close_but = new QPushButton(Widget);
        close_but->setObjectName(QString::fromUtf8("close_but"));
        close_but->setMinimumSize(QSize(20, 20));
        close_but->setMaximumSize(QSize(20, 20));
        close_but->setStyleSheet(QString::fromUtf8("border-image: url(:/icons/800ppi/1.png);"));

        horizontalLayout_3->addWidget(close_but);

        horizontalLayout_3->setStretch(1, 11);
        horizontalLayout_3->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 5, 5, 5);
        widget = new QVideoWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("#widget{\n"
"\n"
"border:1px solid steelblue;\n"
"	background-color: rgb(0, 0, 0);\n"
"}"));

        verticalLayout_3->addWidget(widget);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        begin_label = new QLabel(Widget);
        begin_label->setObjectName(QString::fromUtf8("begin_label"));
        begin_label->setMinimumSize(QSize(80, 0));
        begin_label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        begin_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(begin_label);

        run_slider = new QSlider(Widget);
        run_slider->setObjectName(QString::fromUtf8("run_slider"));
        run_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(run_slider);

        end_label = new QLabel(Widget);
        end_label->setObjectName(QString::fromUtf8("end_label"));
        end_label->setMinimumSize(QSize(80, 0));
        end_label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        end_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(end_label);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        stop_but = new QPushButton(Widget);
        stop_but->setObjectName(QString::fromUtf8("stop_but"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stop_but->sizePolicy().hasHeightForWidth());
        stop_but->setSizePolicy(sizePolicy);
        stop_but->setMinimumSize(QSize(50, 50));
        stop_but->setStyleSheet(QString::fromUtf8("border-image: url(:/icons/800ppi/4_5.png);"));

        horizontalLayout_2->addWidget(stop_but);

        pre_but = new QPushButton(Widget);
        pre_but->setObjectName(QString::fromUtf8("pre_but"));
        pre_but->setMinimumSize(QSize(50, 50));
        pre_but->setStyleSheet(QString::fromUtf8("border-image: url(:/icons/800ppi/6_2.png);"));

        horizontalLayout_2->addWidget(pre_but);

        play__but = new QPushButton(Widget);
        play__but->setObjectName(QString::fromUtf8("play__but"));
        play__but->setMinimumSize(QSize(50, 50));
        play__but->setStyleSheet(QString::fromUtf8("border-image: url(:/icons/800ppi/4_1.png);"));

        horizontalLayout_2->addWidget(play__but);

        rear_but = new QPushButton(Widget);
        rear_but->setObjectName(QString::fromUtf8("rear_but"));
        rear_but->setMinimumSize(QSize(50, 50));
        rear_but->setStyleSheet(QString::fromUtf8("border-image: url(:/icons/800ppi/6_1.png);"));

        horizontalLayout_2->addWidget(rear_but);

        next_video_but = new QPushButton(Widget);
        next_video_but->setObjectName(QString::fromUtf8("next_video_but"));
        next_video_but->setMinimumSize(QSize(50, 50));
        next_video_but->setStyleSheet(QString::fromUtf8("border-image: url(:/icons/800ppi/4_2.png);"));

        horizontalLayout_2->addWidget(next_video_but);

        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(50, 50));
        label->setMaximumSize(QSize(50, 50));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icons/800ppi/4.png")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);

        volume_slider = new QSlider(Widget);
        volume_slider->setObjectName(QString::fromUtf8("volume_slider"));
        volume_slider->setMaximumSize(QSize(16777215, 60));
        volume_slider->setMaximum(100);
        volume_slider->setOrientation(Qt::Vertical);

        horizontalLayout_2->addWidget(volume_slider);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(50, 30));
        label_2->setMaximumSize(QSize(50, 50));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/icons/800ppi/1_5.png")));
        label_2->setScaledContents(true);

        horizontalLayout_2->addWidget(label_2);

        playratio_slider = new QSlider(Widget);
        playratio_slider->setObjectName(QString::fromUtf8("playratio_slider"));
        playratio_slider->setMinimumSize(QSize(60, 0));
        playratio_slider->setMaximumSize(QSize(60, 16777215));
        playratio_slider->setMinimum(5);
        playratio_slider->setMaximum(20);
        playratio_slider->setSingleStep(5);
        playratio_slider->setPageStep(5);
        playratio_slider->setValue(5);
        playratio_slider->setTracking(true);
        playratio_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(playratio_slider);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalLayout_3->setStretch(0, 9);
        verticalLayout_3->setStretch(2, 1);

        horizontalLayout->addLayout(verticalLayout_3);

        hide_playlist_but = new QPushButton(Widget);
        hide_playlist_but->setObjectName(QString::fromUtf8("hide_playlist_but"));
        hide_playlist_but->setMaximumSize(QSize(20, 20));
        hide_playlist_but->setStyleSheet(QString::fromUtf8("border-image: url(:/icons/800ppi/4_1.png);"));

        horizontalLayout->addWidget(hide_playlist_but);

        widget_right = new QWidget(Widget);
        widget_right->setObjectName(QString::fromUtf8("widget_right"));
        verticalLayout_5 = new QVBoxLayout(widget_right);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_4 = new QLabel(widget_right);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255);"));

        verticalLayout_5->addWidget(label_4);

        listWidget = new QListWidget(widget_right);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setStyleSheet(QString::fromUtf8("#listWidget{\n"
"		\n"
"	\n"
"	color: rgb(0, 0, 0);\n"
"	font: 12pt \"Arial\";\n"
"	background-color: rgb(255, 255, 255);\n"
"	border:1px solid steelblue;\n"
"}"));

        verticalLayout_5->addWidget(listWidget);


        horizontalLayout->addWidget(widget_right);

        horizontalLayout->setStretch(0, 8);
        horizontalLayout->setStretch(2, 2);

        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        read_video_but->setText(QString());
        label_3->setText(QString());
        shrink_but->setText(QString());
        large_but->setText(QString());
        close_but->setText(QString());
        begin_label->setText(QCoreApplication::translate("Widget", "00:00:00", nullptr));
        end_label->setText(QCoreApplication::translate("Widget", "00:00:00", nullptr));
        stop_but->setText(QString());
        pre_but->setText(QString());
        play__but->setText(QString());
        rear_but->setText(QString());
#if QT_CONFIG(tooltip)
        next_video_but->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        next_video_but->setWhatsThis(QCoreApplication::translate("Widget", "NextVideo", nullptr));
#endif // QT_CONFIG(whatsthis)
        next_video_but->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        hide_playlist_but->setText(QString());
        label_4->setText(QCoreApplication::translate("Widget", "PlayList", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
