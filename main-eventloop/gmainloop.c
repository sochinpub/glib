
#include <stdio.h>
#include <glib.h>

/*
 *
GMainLoop;
GMainLoop *         g_main_loop_new(GMainContext *context, gboolean is_running);
GMainLoop *         g_main_loop_ref(GMainLoop *loop);
void                g_main_loop_unref(GMainLoop *loop);
void                g_main_loop_run(GMainLoop *loop);
void                g_main_loop_quit(GMainLoop *loop);
gboolean            g_main_loop_is_running(GMainLoop *loop);
MainContext *       g_main_loop_get_context(GMainLoop *loop);
#define             g_main_new(is_running)                              // deprecated
#define             g_main_destroy(GMainLoop *loop)                     // deprecated
#define             g_main_run(GMainLoop *loop)                         // deprecated
#define             g_main_quit(GMainLoop *loop)                        // deprecated
#define             g_main_is_running(GMainLoop *loop)                  // deprecated

#define             G_PRIORITY_HIGH                     -100
#define             G_PRIORITY_DEFAULT                  0
#define             G_PRIORITY_HIGH_IDLE                100
#define             G_PRIORITY_DEFAULT_IDLE             200
#define             G_PRIORITY_LOW                      300

#define             G_SOURCE_CONTINUE                   TRUE
#define             G_SOURCE_REMOVE                     FALSE
 *
 */
