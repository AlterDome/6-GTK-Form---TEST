#include "..\gtk\gtk.h"
#include "..\gdk\gdk.h"  // подключаем GTK+
 
/* с этой функции стартует программа */
int main( int argc, char *argv[])
{
    /* запускаем GTK+ */
    gtk_init(&argc, &argv);
 
    /* создать новый виджет - окно */
    GtkWidget *window;
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
 
    /* дать окну заголовок */
    gtk_window_set_title(GTK_WINDOW(window), "Example");
 
    /* когда пользователь закроет окно, то выйти из приложения */
    g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(gtk_main_quit), NULL);
 
    /* отобразить окно */
    gtk_widget_show(window);
 
    /* передаём управление GTK+ */
    gtk_main();
 
    return 0;
}
