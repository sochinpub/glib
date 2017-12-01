#include <stdio.h>
#include <glib.h>
/*
struct              GSource;
void                (*GSourceDummyMarshal)(void);
struct              GSourceFuncs;
struct              GSourceCallbackFuncs;
GSource *           g_source_new(GSourceFuncs *source_funcs, guint struct_size);
GSource *           g_source_ref(GSource *source);
void                g_source_unref(GSource *source);
void                g_source_set_funcs(GSource *source, GSourceFuncs *funcs);
guint               g_source_attach(GSource *source, GMainContext *context);
void                g_source_destroy(GSource *source);
gboolean            g_source_is_destroyed(GSource *source);
void                g_source_set_priority(GSource *source, gint priority);
gint                g_source_get_priority(GSource *source);
void                g_source_set_can_recurse(GSource *source, gboolean can_recurse);
gboolean            g_source_get_can_recurse(GSource *source);
guint               g_source_get_id(GSource *source);
const char *        g_source_get_name(GSource *source);
void                g_source_set_name(GSource *source, const char *name);
void                g_source_set_name_by_id(guint tag, const char *name);
GMainContext *      g_source_get_context(GSource *source);
void                g_source_set_callback(GSource *source, GSourceFunc func, gpointer data, GDestroyNotify notify);
gboolean            (*GSourceFunc)(gpointer user_data);
void                g_source_set_callback_indirect(GSource *source, gpointer callback_data, GSourceCallbackFuncs *callback_funcs);
void                g_source_set_ready_time(GSource *source, gint64 ready_time);
gint64              g_source_get_ready_time(GSource *source);
gpointer            g_source_add_unix_fd(GSource *source, gint fd, GIOCondition events);
void                g_source_remove_unix_fd(GSource *source, gpointer tag);
void                g_source_modify_unix_fd(GSource *source, gpointer tag, GIOCondition new_events);
GIOCondition        g_source_query_unix_fd(GSource *source, gpointer tag);
void                g_source_add_poll(GSource *source, GPollFD *fd);
void                g_source_remove_poll(GSource *source, GPollFD *fd);
void                g_source_add_child_source(GSource *source, GSource *child_source);
void                g_source_remove_child_source(GSource *source, GSource *child_source);
gint64              g_source_get_time(GSource *source);
void                g_source_get_current_time(GSource *source, GTimeVal *timeval);
gboolean            g_source_remove(guint tag);
gboolean            g_source_remove_by_funcs_user_data(GSourceFuncs *funcs, gpointer user_data);
gboolean            g_source_remove_by_user_data(gpointer user_data);
*/
