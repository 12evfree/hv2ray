#include "about.h"
#include "ui_about.h"

About::About(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);
    ui->label_3->setText("1.0");
    ui->label_4->setText("Allows you to be a client of the");
    ui->label_5->setText("V2ray project using Java Script.");
    ui->label_6->setText("Writing in Qt Core Framework.");
   quitbutton();
}

void About::quitbutton()
{
    QObject::connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(close()));
}
