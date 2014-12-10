#include <gtk/gtk.h>
int main( int argc, char *argv[] ){
GtkWidget *ventana;
gtk_init (&argc, &argv);
ventana = gtk_window_new(GTK_WINDOW_TOPLEVEL);
gtk_window_set_title(GTK_WINDOW(ventana), "Hola");
gtk_widget_show(ventana);
gtk_main ();
return 0;
}
