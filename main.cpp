#include "..\gtk\gtk.h"
#include "..\gdk\gdk.h"  // ���������� GTK+
 
/* � ���� ������� �������� ��������� */
int main( int argc, char *argv[])
{
    /* ��������� GTK+ */
    gtk_init(&argc, &argv);
 
    /* ������� ����� ������ - ���� */
    GtkWidget *window;
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
 
    /* ���� ���� ��������� */
    gtk_window_set_title(GTK_WINDOW(window), "Example");
 
    /* ����� ������������ ������� ����, �� ����� �� ���������� */
    g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(gtk_main_quit), NULL);
 
    /* ���������� ���� */
    gtk_widget_show(window);
 
    /* ������� ���������� GTK+ */
    gtk_main();
 
    return 0;
}
