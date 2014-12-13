#include <gtk/gtk.h>

int main (int argc,
	  char *argv[])
{
    GtkWidget *window;
    GtkWidget *button;
    GtkWidget *button2;
    GtkWidget *table;

    gtk_init (&argc, &argv);
    
    window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Tabla");
    gtk_widget_set_size_request(window,400,400);

    button = gtk_button_new_with_label ("1");
    g_signal_connect (button, "clicked", G_CALLBACK (gtk_main_quit), NULL);

    button2 = gtk_button_new_with_label ("2");
    g_signal_connect (button2, "clicked", G_CALLBACK (gtk_main_quit), NULL);

    void gtk_table_resize (GTK_TABLE(table),
			   guint rows(2),
			   guint columns(2));

    table = gtk_table_new (guint rows, guint columns, gboolean homogeneous);
    void gtk_table_attach_defaults (GTK_TABLE(table),
				    button,
				    guint left_attach);
				   
    void gtk_table_attach_defaults (GTK_TABLE(table),
				    button2,
				    guint right_attach);

    gtk_widget_show (window);
    gtk_widget_show (button);
    gtk_widget_show (button2);
    gtk_widget_show (table);
    gtk_main ();
    return 0;
}
