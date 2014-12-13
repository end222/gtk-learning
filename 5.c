#include <gtk/gtk.h>
#include <gtk/gtkbox.h>

int main (int argc, char *argv[]){
    GtkWidget *bbox;
    GtkWidget *window;
    GtkWidget *button;
    GtkWidget *button2;

    gint expand;
    gint fill;
    gint padding;

    gtk_init (&argc, &argv);
    bbox = gtk_button_box_new(GTK_ORIENTATION_VERTICAL);
    window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Cerrar");
    gtk_widget_set_size_request(window,200,100);
    
    gtk_container_add (GTK_CONTAINER (window), bbox);
    gtk_container_set_border_width (GTK_CONTAINER (window), 10);
    
    button = gtk_button_new_with_label ("Cerrar");
    g_signal_connect (button, "clicked", G_CALLBACK (gtk_main_quit), NULL);
    gtk_box_pack_start(GTK_BOX (bbox), button, expand, fill, padding); 

    button2 = gtk_button_new_with_label ("Cerrar2");
    g_signal_connect (button, "clicked", G_CALLBACK (gtk_main_quit), NULL);
    gtk_box_pack_start(GTK_BOX (bbox), button2, expand, fill, padding);

    gtk_widget_show (button);
    gtk_widget_show (button2);
    gtk_widget_show (window);
    gtk_widget_show (bbox);
    gtk_main ();
return 0;
}
