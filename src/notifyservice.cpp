#include <iostream>
#include <libnotify/notify.h>
#include "qplaintext.h"
#include <unistd.h>
#include <stdlib.h>

void notify_send(const char *app_name, const char *text, const char *icon)
{
  system("notify-send hello");

  notify_init("HV2ray");
  NotifyNotification* n = notify_notification_new(app_name,
                                                    text,
                                                    icon);
   notify_notification_set_timeout(n, 5000);
  if(!notify_notification_show(n,0))
    {
    }
}
