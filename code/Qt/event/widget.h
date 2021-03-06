#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
#include<QPushButton>
#include<QHBoxLayout>
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();
protected:
    void moveEvent(QMoveEvent *e);
    void keyPressEvent(QKeyEvent * e);
    void timerEvent(QTimerEvent *e);
private:
     QLabel *label;
     QPushButton *button;
     QHBoxLayout *hbox;
private slots:
    void onButtonCliecked();
};

#endif // WIDGET_H
