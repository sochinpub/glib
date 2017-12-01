#include <stdio.h>
#include <glib.h>
/*

GSource *           g_timeout_source_new                (guint interval);
GSource *           g_timeout_source_new_seconds        (guint interval);
guint               g_timeout_add                       (guint interval,GSourceFunc function, gpointer data);
guint               g_timeout_add_full                  (gint priority, guint interval, GSourceFunc function, gpointer data,GDestroyNotify notify);
guint               g_timeout_add_seconds               (guint interval, GSourceFunc function, gpointer data);
guint               g_timeout_add_seconds_full          (gint priority, guint interval, GSourceFunc function, gpointer data, GDestroyNotify notify);

GSource *           g_idle_source_new                   (void);
guint               g_idle_add                          (GSourceFunc function, gpointer data);
guint               g_idle_add_full                     (gint priority, GSourceFunc function, gpointer data, GDestroyNotify notify);
gboolean            g_idle_remove_by_data               (gpointer data);

typedef             GPid;
void                (*GChildWatchFunc)                  (GPid pid, gint status, gpointer user_data);
GSource *           g_child_watch_source_new            (GPid pid);
guint               g_child_watch_add                   (GPid pid, GChildWatchFunc function, gpointer data);
guint               g_child_watch_add_full              (gint priority, GPid pid, GChildWatchFunc function, gpointer data, GDestroyNotify notify);

struct              GPollFD;
gint                g_poll                              (GPollFD *fds, guint nfds, gint timeout);
#define             G_POLLFD_FORMAT

*/
