#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <glib.h>

typedef struct _DemoSource DemoSource;

struct _DemoSource {
    GSource source;
    int interval;
    GTimeVal last;
};

DemoSource *s1, *s2;
const char *cur_source_name = NULL;

static glong my_time_val_difference(const GTimeVal *compare, const GTimeVal *now)
{
    return (compare->tv_sec - now->tv_sec) * 1000 + (compare->tv_usec - now->tv_usec) / 1000;
}

static const char* get_source_str(GSource *source)
{
    if ((unsigned int)source == (unsigned int)s1)
        return "s1";
    else if ((unsigned int)source == (unsigned int)s2)
        return "s2";

    return "unknow";
}

/*
 * 是否添加到poll的pollfd数组中
 *
 */
static gboolean prepare_func(GSource *source, gint *timeout)
{
    DemoSource *src = (DemoSource *)source;
    GTimeVal now, target;
    glong diff;

    cur_source_name = get_source_str(source);
    g_source_get_current_time(source, &now);
    target = src->last;
    g_time_val_add(&target, src->interval);
    diff = my_time_val_difference(&now, &target);
    printf("-------%s Enter ------\n", __FUNCTION__);
    if (diff >= 0) { 
        *timeout = 0;
        printf("Source %s need to dispatch right now. D: %d\n", cur_source_name, diff);
        return TRUE;
    }
    else {
        *timeout = -diff;
        printf("Source %s need to sleep %d ms.\n", cur_source_name, *timeout);
        return FALSE;
    }
    printf("----%s Exit ----\n", __FUNCTION__);
}

static gboolean check_func(GSource *source)
{
    DemoSource *src = (DemoSource*)source;
    GTimeVal now, target;
    glong diff;

    cur_source_name = get_source_str(source);
    g_source_get_current_time(source, &now);
    target = src->last;
    g_time_val_add(&target, src->interval);
    printf("----%s Enter -----\n", __FUNCTION__);
    if (diff >= 0) {
        printf("Yes. Source %s need to dispatch.\n", cur_source_name);
        return TRUE;
    } else {
        printf("No.Source %s want to sleep.\n", cur_source_name);
        return FALSE;
    }
    printf("----%s Exit ----\n", __FUNCTION__);
}

static gboolean dispatch_func(GSource *source, GSourceFunc callback, gpointer user_data)
{
        cur_source_name = get_source_str(source);
        printf("----%s Enter ----\n", __FUNCTION__);
        DemoSource *src = (DemoSource *)source;
        g_get_current_time(&src->last);
        printf("Source %s dispatched.\n", cur_source_name);
        printf("----%s Exit----\n", __FUNCTION__);
}

static void finalize_func(GSource *source)
{
    cur_source_name = get_source_str(source);
    printf("----%s Enter ----\n", __FUNCTION__);
    printf("Source %s finalized.\n", cur_source_name);
    printf("----%s Exit----\n", __FUNCTION__);
}

GSourceFuncs source_funcs = {
    prepare_func,
    check_func,
    dispatch_func,
    finalize_func,
};

int main(int argc, char *argv[])
{
    GMainLoop *loop;
    loop = g_main_loop_new(NULL, TRUE);
    s1 = g_source_new(&source_funcs, sizeof(DemoSource));
    s2 = g_source_new(&source_funcs, sizeof(DemoSource));
    s1->interval = 2000 * 1000;
    s2->interval = 3000 * 1000;

    g_get_current_time(&s1->last);
    g_get_current_time(&s2->last);

    g_source_attach((GSource *)s1, NULL);
    g_source_attach((GSource *)s2, NULL);

    printf("s1 addr: 0x%x\n", (unsigned int)s1);
    printf("s2 addr: 0x%x\n", (unsigned int)s2);
    
    g_main_loop_run(loop);
    return 0;
}
