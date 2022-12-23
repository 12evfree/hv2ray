#include "qplaintext.h"
#include <QtCore/QDebug>
#include <QScrollBar>

 Console::Console(QWidget *parent)
      : QPlainTextEdit(parent)
  {
      document()->setMaximumBlockCount(100);
      QPalette p = palette();
      p.setColor(QPalette::Base, Qt::black);
      p.setColor(QPalette::Text, Qt::green);
      setPalette(p);

  }

 void Console::putData(const QString &text)
   {
       insertPlainText(QString(text));

       QScrollBar *bar = verticalScrollBar();
       bar->setValue(bar->maximum());
   }
