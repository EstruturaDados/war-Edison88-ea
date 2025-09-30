#include <stdio.h>
#include <string.h>

struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {

    const int NUM_TERRITORIOS = 5;
    struct Territorio territorios[NUM_TERRITORIOS];

    
    printf("--- Cadastro de Territorios ---\n\n");
    for (int i = 0; i < NUM_TERRITORIOS; i++) {
        
        printf("Cadastrando o Territorio %d:\n", i + 1);

        printf("Digite o nome: ");
      
        scanf("%s", territorios[i].nome);

        printf("Digite a cor do exercito: ");
        scanf("%s", territorios[i].cor);

        printf("Digite a quantidade de tropas: ");
       
        scanf("%d", &territorios[i].tropas);

        printf("\n"); 
    }

    printf("--- Territorios Registrados ---\n\n");
    for (int i = 0; i < NUM_TERRITORIOS; i++) {
        printf("--- Territorio %d ---\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do Exercito: %s\n", territorios[i].cor);
        printf("Quantidade de Tropas: %d\n", territorios[i].tropas);
        printf("---------------------\n\n");
    }

    return 0;
}