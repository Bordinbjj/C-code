#include <stdio.h>
#include <pthread.h>

// Função executada pela thread
void *funcaoThread(void *arg) {
    printf("Olá da thread!\n");
    pthread_exit(NULL);
}

int main() {
    pthread_t thread;

    // Criando a thread
    if (pthread_create(&thread, NULL, funcaoThread, NULL) != 0) {
        printf("Erro ao criar a thread.\n");
        return 1;
    }

    // Aguardando a conclusão da thread
    if (pthread_join(thread, NULL) != 0) {
        printf("Erro ao aguardar a thread.\n");
        return 1;
    }

    printf("Programa principal concluído.\n");

    return 0;
}
