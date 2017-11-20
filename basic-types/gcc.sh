#usage: gcc.sh test.c [test]
#gcc `pkg-config --cflags --libs glib-2.0` $1 -lpthread -o $_o
_o=${2:-${1%.*}}

gcc `pkg-config --cflags --libs glib-2.0` `pkg-config --cflags --libs gthread-2.0` $1 -o $_o

