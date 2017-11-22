#include <glib.h>
#include <stdio.h>
/*
#define             G_OS_WIN32
#define             G_OS_BEOS
#define             G_OS_UNIX

#define             G_DIR_SEPARATOR                     '\\'
#define             G_DIR_SEPARATOR_S                   "\\"
#define             G_IS_DIR_SEPARATOR(c)               ((c) == G_DIR_SEPARATOR || (c) == '/')
#define             G_SEARCHPATH_SEPARATOR              ';'
#define             G_SEARCHPATH_SEPARATOR_S            ";"

#define             TRUE                                (!FALSE)
#define             FALSE                               (0)

#define             NULL                                (0L)

#define             MIN(a,b)                            (((a) < (b)) ? (a) : (b))
#define             MAX(a,b)                            (((a) > (b)) ? (a) : (b))

#define             ABS(a)                              (((a) < 0) ? -(a) : (a))
#define             CLAMP(x,low,high)                   (((x) > (high)) ? (high) : (((x) < (low)) ? (low) : (x)))

#define             G_STRUCT_MEMBER                     (member_type, struct_p, struct_offset)
#define             G_STRUCT_MEMBER_P                   (struct_p, struct_offset)
#define             G_STRUCT_OFFSET                     (struct_type, member)

#define             G_MEM_ALIGN                         GLIB_SIZEOF_VOID_P

#define             G_CONST_RETURN    // deprecated

 */

typedef struct {
    int a;
    int b;
}TYPE;

int main()
{
    TYPE t = {
        .a = 10,
        .b = 20
    };
    /* Returns a member of a structure at a given offset, using the given type. */
    printf("%d\n", G_STRUCT_MEMBER(int, &t, 4));
    /* Returns an untyped pointer to a given offset of a struct. */    
    printf("address: %0x == %0x, value: %d == %d\n", &(t.b), G_STRUCT_MEMBER_P(&t, 4), 
                                         t.b, *(int *)G_STRUCT_MEMBER_P(&t, 4));
    /* Returns the offset, in bytes, of a member of a struct. */
    printf("%d\n", G_STRUCT_OFFSET(TYPE, b));

    printf("mem align: %d\n", G_MEM_ALIGN);
}
