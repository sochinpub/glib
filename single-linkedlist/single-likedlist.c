#include <glib.h>

/*
struct GSList {
  gpointer data;
  GSList *next;
};

GSList *            g_slist_alloc(void);
// 结尾效率较低，一般先prepend,然后reverse
GSList *            g_slist_append(GSList *list, gpointer data);
GSList *            g_slist_prepend(GSList *list, gpointer data);
GSList *            g_slist_insert(GSList *list, gpointer data, gint position);
GSList *            g_slist_insert_before(GSList *slist, GSList *sibling, gpointer data);
GSList *            g_slist_insert_sorted(GSList *list, gpointer data, GCompareFunc func);
GSList *            g_slist_remove(GSList *list, gconstpointer data);
GSList *            g_slist_remove_link(GSList *list, GSList *link_);
GSList *            g_slist_delete_link(GSList *list, GSList *link_);
GSList *            g_slist_remove_all(GSList *list, gconstpointer data);
void                g_slist_free(GSList *list);
void                g_slist_free_full(GSList *list, GDestroyNotify free_func);
void                g_slist_free_1(GSList *list);
#define             g_slist_free1

guint               g_slist_length(GSList *list);
GSList *            g_slist_copy(GSList *list);
GSList *            g_slist_copy_deep(GSList *list, GCopyFunc func, gpointer user_data);
GSList *            g_slist_reverse(GSList *list);
GSList *            g_slist_insert_sorted_with_data(GSList *list, gpointer data, GCompareDataFunc func, gpointer user_data);
GSList *            g_slist_sort                        (GSList *list, GCompareFunc compare_func);
GSList *            g_slist_sort_with_data              (GSList *list, GCompareDataFunc compare_func, gpointer user_data);
GSList *            g_slist_concat                      (GSList *list1, GSList *list2);
void                g_slist_foreach(GSList *list, GFunc func, gpointer user_data);

GSList *            g_slist_last(GSList *list);
#define             g_slist_next(slist)
GSList *            g_slist_nth                         (GSList *list, guint n);
gpointer            g_slist_nth_data                    (GSList *list, guint n);

GSList *            g_slist_find                        (GSList *list, gconstpointer data);
GSList *            g_slist_find_custom                 (GSList *list, gconstpointer data, GCompareFunc func);
gint                g_slist_position                    (GSList *list, GSList *llink);
gint                g_slist_index(GSList *list, gconstpointer data);
*/
#include <stdio.h>


int main()
{ 
    /* Notice that these are initialized to the empty list. */
    GSList *list = NULL, *number_list = NULL;

    /* This is a list of strings. */
    list = g_slist_append(list, "first");
    list = g_slist_append(list, "second");
    list = g_slist_prepend(list, "before first");

    /* This is a list of integers. */
    number_list = g_slist_append(number_list, GINT_TO_POINTER (27));
    number_list = g_slist_append(number_list, GINT_TO_POINTER (14));
    number_list = g_slist_append(number_list, "third");
           
    return 0;
}
