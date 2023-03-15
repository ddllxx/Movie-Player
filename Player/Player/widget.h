#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QListWidgetItem>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_close_but_clicked();

    void on_stop_but_clicked();

    void on_pre_but_clicked();

    void on_play__but_clicked();

    void on_rear_but_clicked();

    void on_next_video_but_clicked();

    void on_volume_slider_valueChanged(int value);

    void on_playratio_slider_valueChanged(int value);
    void on_read_video_but_clicked();

    void on_run_slider_valueChanged(int value);

    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_hide_playlist_but_clicked();

    void on_shrink_but_clicked();

    void on_large_but_clicked();

public slots:
    void medianPlayerStateChanged(QMediaPlayer::State st);

    void mediaPlayerDurationChanged(quint64 duration);

    void mediaPlayerPosChanged(quint64 pos);

    void mediaListCurrentIndexChanged(int index);
private:
    void initPlayer();
private:
    Ui::Widget *ui;

    QMediaPlayer *mVideoPlayer;
    QMediaPlaylist *mMediaPlaylist;
};
#endif // WIDGET_H
