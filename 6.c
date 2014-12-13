#include <gtk/gtk.h>

int main (int argc,
	  char *argv[])
{
    GtkWidget *window;
    GtkWidget *bbox;
    GtkWidget *button_a;
    GtkWidget *button_b;

    gint homogeneous;
    gint spacing;
    gint expand;
    gint fill;
    gint padding;
    
    gtk_init (&argc, &argv);

    window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "¿Seguro?");
    gtk_widget_set_size_request(window,200,100);

    bbox = gtk_button_box_new(GTK_ORIENTATION_HORIZONTAL);

    button_a = gtk_button_new_with_label ("Aceptar");
    g_signal_connect (button_a, "clicked", G_CALLBACK (gtk_main_quit), NULL);
    gtk_box_pack_start(GTK_BOX (bbox), button_a, expand, fill, padding);

    button_b = gtk_button_new_with_label ("Cancelar");
    g_signal_connect (button_b, "clicked", G_CALLBACK (gtk_main_quit), NULL);
    gtk_box_pack_start(GTK_BOX (bbox), button_b, expand, fill, padding);


    gtk_container_add (GTK_CONTAINER (window), bbox);
    gtk_container_set_border_width (GTK_CONTAINER (window), 10);

    gtk_widget_show (window);
    gtk_widget_show (button_a);
    gtk_widget_show (button_b);
    gtk_widget_show (bbox);
    gtk_main ();
    return 0;
}
