#include <stdio.h>
#include <stdlib.h>
#include <glib.h>
/*
 *
 gboolean       :typedef gint   gboolean;
 gpointer       :typedef void* gpointer;
 gconstpointer  :typedef const void *gconstpointer;
 gchar          :typedef char   gchar
 guchar         :typedef unsigned char   guchar;
 gint           :typedef int    gint;
 guint          :typedef unsigned int    guint;
 gshort         :typedef short  gshort;
 gushort        :typedef unsigned short  gushort;
 glong          :typedef long   glong;
 gulong         :typedef unsigned long   gulong;
 gint8          :typedef signed char gint8;
 guint8         :typedef unsigned char guint8;
 gint16         :typedef signed short gint16;
 guint16        :typedef unsigned short guint16;
 gint32         :typedef signed int gint32;
 guint32        :typedef unsigned int guint32;
 gint64         :typedef signed long gint64;
 guint64        :typedef unsigned long guint64;
 gfloat         :typedef float   gfloat;
 gdouble        :typedef double  gdouble;
 gsize          :typedef unsigned long gsize;
 gssize         :typedef signed long gssize;
 goffset        :typedef gint64 goffset;
 gintptr        :typedef signed long gintptr;
 guintptr       :typedef unsigned long guintptr;
 *
 */

int main()
{
    gboolean gb = TRUE;
    gpointer gp;
    gsize gs;
    printf("%d\n", sizeof(gb));
    printf("%d\n", sizeof(gp));
    printf("%d\n", sizeof(gs));
    return 0;
}
