#include <gtk/gtk.h>

// Função chamada quando o botão é clicado
static void on_button_clicked(GtkWidget *widget, gpointer data) {
    g_print("Botão clicado!\n");
}

int main(int argc, char *argv[]) {
    // Inicializando GTK
    gtk_init(&argc, &argv);

    // Criando a janela principal
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Exemplo GTK em C");
    gtk_container_set_border_width(GTK_CONTAINER(window), 10);
    gtk_window_set_default_size(GTK_WINDOW(window), 300, 200);

    // Criando um botão
    GtkWidget *button = gtk_button_new_with_label("Clique-me!");
    g_signal_connect(button, "clicked", G_CALLBACK(on_button_clicked), NULL);

    // Adicionando o botão à janela
    gtk_container_add(GTK_CONTAINER(window), button);

    // Exibindo todos os widgets
    gtk_widget_show_all(window);

    // Conectando o sinal de destruição da janela para encerrar o loop de eventos
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Iniciando o loop de eventos GTK
    gtk_main();

    return 0;
}
