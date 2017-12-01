#include <stdio.h>
#include <glib.h>

/*
 *
GMainContext;
GMainContext *      g_main_context_new(void);
GMainContext *      g_main_context_ref(GMainContext *context);
void                g_main_context_unref(GMainContext *context);
GMainContext *      g_main_context_default(void);
gboolean            g_main_context_iteration(GMainContext *context, gboolean may_block);
#define             g_main_iteration(may_block)                                 // deprecated
gboolean            g_main_context_pending(GMainContext *context);
#define             g_main_pending                                              // deprecated
GSource *           g_main_context_find_source_by_id(GMainContext *context, guint source_id);
GSource *           g_main_context_find_source_by_user_data(GMainContext *context,gpointer user_data);
GSource *           g_main_context_find_source_by_funcs_user_data(GMainContext *context,GSourceFuncs *funcs, gpointer user_data);
void                g_main_context_wakeup(GMainContext *context);
gboolean            g_main_context_acquire(GMainContext *context);
void                g_main_context_release(GMainContext *context);
gboolean            g_main_context_is_owner(GMainContext *context);
gboolean            g_main_context_wait(GMainContext *context, GCond *cond, GMutex *mutex);
gboolean            g_main_context_prepare(GMainContext *context,gint *priority);
gint                g_main_context_query(GMainContext *context, gint max_priority, gint *timeout_, GPollFD *fds, gint n_fds);
gint                g_main_context_check(GMainContext *context, gint max_priority, GPollFD *fds, gint n_fds);
void                g_main_context_dispatch(GMainContext *context);


void                g_main_context_set_poll_func        (GMainContext *context, GPollFunc func);
GPollFunc           g_main_context_get_poll_func        (GMainContext *context);
gint                (*GPollFunc)                        (GPollFD *ufds, guint nfsd, gint timeout_);
void                g_main_context_add_poll             (GMainContext *context, GPollFD *fd, int priority);
void                g_main_context_remove_poll          (GMainContext *context, GPollFD *fd);
gint                g_main_depth                        (void);
GSource *           g_main_current_source               (void);
#define             g_main_set_poll_func                (func)
void                g_main_context_invoke               (GMainContext *context, GSourceFunc function, gpointer data);
void                g_main_context_invoke_full          (GMainContext *context, gint priority, GSourceFunc function, gpointer data, GDestroyNotify notify);

GMainContext *      g_main_context_get_thread_default   (void);
GMainContext *      g_main_context_ref_thread_default   (void);
void                g_main_context_push_thread_default  (GMainContext *context);
void                g_main_context_pop_thread_default(GMainContext *context);
*/
