#include <glib.h>
#include <stdio.h>
/* efficient way to allocate groups of equal-sized chunks of memory
gpointer            g_slice_alloc(gsize block_size);
gpointer            g_slice_alloc0(gsize block_size);
gpointer            g_slice_copy(gsize block_size, gconstpointer mem_block);
void                g_slice_free1(gsize block_size, gpointer mem_block);
void                g_slice_free_chain_with_offset(gsize block_size, gpointer mem_chain, gsize next_offset);

#define             g_slice_new(type)
#define             g_slice_new0(type)
#define             g_slice_dup(type, mem)
#define             g_slice_free(type, mem)
#define             g_slice_free_chain(type, mem_chain, next)

 */
typedef struct {
    gint8 a;
    gint32 b;
    gpointer p;
}TYPE;

int main()
{
    gchar *mem[10000];
    gint i,j;
    for (i = 0; i < 10000; i++) {
        mem[i] = g_slice_alloc(50);
        for (j = 0; j < 50; j++)
            mem[i][j] = i * j;
    }
    for (i = 0; i < 10000; i++) {
        g_slice_free1(50, mem[i]);
    }
   
    TYPE *t =  g_slice_new0(TYPE);
    t->a = 'a';
    printf("%c, %u, %ld\n", t->a, t->b, t->p);
    
    return 0;
}
