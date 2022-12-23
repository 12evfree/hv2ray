 #ifndef QPLAINTEXT_H
  #define QPLAINTEXT_H

#include <QPlainTextEdit>

  class Console : public QPlainTextEdit
  {
      Q_OBJECT

     public:
      explicit Console(QWidget *parent = nullptr);
      void putData(const QString &text);
 };

void notify_send(const char *app_name, const char *text, const char *icon);

  #endif // QPLAINTEXT_H
