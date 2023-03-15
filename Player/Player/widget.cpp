#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    setWindowFlags(Qt::FramelessWindowHint);

    //初始化播放器
    initPlayer();

}

Widget::~Widget()
{
    delete ui;

}


void Widget::on_close_but_clicked()
{
    QApplication::exit();
}

void Widget::on_stop_but_clicked()
{

    mVideoPlayer->stop();
}

void Widget::on_pre_but_clicked()
{
    if(mVideoPlayer->state()==QMediaPlayer::State::PlayingState){
        mVideoPlayer->setPosition(std::max(qint64(0),mVideoPlayer->position()-15000));
    }

}

#include <QFileDialog>
#include <QMessageBox>
void Widget::on_play__but_clicked()
{


   int state = mVideoPlayer->state(); // 获取播放的状态
   switch (state) {
   case QMediaPlayer::StoppedState:
       /* 媒体播放 */
       mVideoPlayer->play();

       break;
   case QMediaPlayer::PlayingState:
       /* 媒体暂停 */
       mVideoPlayer->pause();

       break;
   case QMediaPlayer::PausedState:
       mVideoPlayer->play();

       break;
   }



}

void Widget::on_rear_but_clicked()
{
    if(mVideoPlayer->state()==QMediaPlayer::State::PlayingState){

        mVideoPlayer->setPosition(std::min(mVideoPlayer->duration(),mVideoPlayer->position()+15000));
    }

}

void Widget::on_next_video_but_clicked()
{
    mVideoPlayer->stop();
    int count = mMediaPlaylist->mediaCount();
    if (0 == count)
        return;

    mMediaPlaylist->next();
    mVideoPlayer->play();

}

void Widget::on_volume_slider_valueChanged(int value)
{
//    ui->label->setText("音量("+QString::number(value)+")");

    mVideoPlayer->setVolume(value);
}

void Widget::on_playratio_slider_valueChanged(int value)
{

//    ui->label_2->setText("倍速("+QString::number(value*1.0/10.0,'f',1)+")");

    mVideoPlayer->setPlaybackRate(value*1.0/10.0);

}

void Widget::medianPlayerStateChanged(QMediaPlayer::State st)
{
    switch (st) {
    case QMediaPlayer::StoppedState:
        qDebug()<<"Stop STatus"<<endl;
//        ui->play__but->setText("播放");
        ui->play__but->setStyleSheet("border-image: url(:/icons/800ppi/4_1.png);");
        break;
    case QMediaPlayer::PlayingState:
//        ui->play__but->setText("暂停");
        ui->play__but->setStyleSheet("border-image: url(:/icons/800ppi/4_4.png);");

        break;
    case QMediaPlayer::PausedState:
//        ui->play__but->setText("播放");
        ui->play__but->setStyleSheet("border-image: url(:/icons/800ppi/4_1.png);");

        break;
    }

}

QString getString(quint64 v,int tp){

    int v2=0;
    switch (tp) {
        case 0:v2=v/3600000;
        break;
    case 1:
        v2=v/60000;
        break;
       case 2:
        v2=v%60000/1000;
        break;

    }

    if(v2<10){
        return "0"+QString::number(v2);
    }else{
        return QString::number(v2);
    }

}
void Widget::mediaPlayerDurationChanged(quint64 duration)
{
    qDebug()<<duration<<endl;
    ui->begin_label->setText("00:00:00");
    ui->end_label->setText(getString(duration,0)+":"+getString(duration,1)+":"+getString(duration,2));
    ui->run_slider->setRange(0,duration);

}

void Widget::mediaPlayerPosChanged(quint64 pos)
{
    ui->run_slider->setValue(pos);
    ui->begin_label->setText(getString(pos,0)+":"+getString(pos,1)+":"+getString(pos,2));
}

void Widget::mediaListCurrentIndexChanged(int index)
{
    ui->listWidget->setCurrentRow(index);
}

void Widget::initPlayer()
{
    mVideoPlayer=new QMediaPlayer(this);
    mMediaPlaylist=new QMediaPlaylist(this);
    mMediaPlaylist->clear();
    mVideoPlayer->setPlaylist(mMediaPlaylist);
    mVideoPlayer->setVideoOutput(ui->widget);
    mMediaPlaylist->setPlaybackMode(QMediaPlaylist::Loop);
    mVideoPlayer->setVolume(80);

    ui->volume_slider->setValue(80);
    ui->playratio_slider->setValue(10);
    connect(mVideoPlayer,&QMediaPlayer::stateChanged,this,&Widget::medianPlayerStateChanged);
    connect(mVideoPlayer,&QMediaPlayer::durationChanged,this,&Widget::mediaPlayerDurationChanged);
    connect(mVideoPlayer,&QMediaPlayer::positionChanged,this,&Widget::mediaPlayerPosChanged);
    connect(mMediaPlaylist,&QMediaPlaylist::currentIndexChanged,this,&Widget::mediaListCurrentIndexChanged);
}

void Widget::on_read_video_but_clicked()
{
    QString url=QFileDialog::getOpenFileName(nullptr,"","","(*.mp4 *.avi *.wmv)");

    if(url==""){
         QMessageBox::warning(nullptr,"警告","路径不能为空");
         return;
    }
    QString fileName=url.split("/").back();

    mMediaPlaylist->addMedia(QUrl::fromLocalFile(url));

    ui->listWidget->addItem(fileName);

    on_next_video_but_clicked();

    ui->label_3->setText(fileName);
    ui->listWidget->setCurrentRow(ui->listWidget->count()-1);
}

void Widget::on_run_slider_valueChanged(int value)
{


    if(ui->run_slider->isSliderDown()){

        mVideoPlayer->setPosition(value);
    }


}

void Widget::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    int rowInex=ui->listWidget->row(item);
    if(rowInex==0){
        mVideoPlayer->stop();
        mMediaPlaylist->setCurrentIndex(0);
        mVideoPlayer->play();
    }else if(rowInex>0){
        mMediaPlaylist->setCurrentIndex(rowInex-1);
        on_next_video_but_clicked();
    }



}

void Widget::on_hide_playlist_but_clicked()
{
    if(ui->widget_right->isHidden()){
         ui->hide_playlist_but->setStyleSheet("border-image: url(:/icons/800ppi/4_1.png);");
         ui->widget_right->show();
    }else{
         ui->hide_playlist_but->setStyleSheet("border-image: url(:/icons/800ppi/4_1_2.png);");
        ui->widget_right->hide();
    }


}

void Widget::on_shrink_but_clicked()
{
    showMinimized();
}

void Widget::on_large_but_clicked()
{
    if(isFullScreen()){
        showNormal();
    }else{
        showFullScreen();
    }

}
