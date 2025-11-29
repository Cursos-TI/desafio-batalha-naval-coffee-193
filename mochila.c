#include <stdio.h>
#include <string.h>

typedef struct {
    char nome [30];
    char tipo [30];
    int quantidade;    
    }Item;

void removerItem(Item mochila[], int *contador) {
    char nomeRemover[30];
    printf("Digite o nome do item que quer remover: ");
    scanf("%s", nomeRemover);

    int encontrado = -1;

    
    for (int i = 0; i < *contador; i++) {
        if (strcmp(mochila[i].nome, nomeRemover) == 0) {
            encontrado = i;
            break;
        }
    }

    if (encontrado == -1) {
        printf("Item não encontrado!\n");
        return;
    }

    for (int i = encontrado; i < *contador - 1; i++) {
        mochila[i] = mochila[i + 1];
    }

    (*contador)--;

    printf("Item removido com sucesso!\n");
}

void listarItens(Item mochila[], int contador) {
    if (contador == 0) {
        printf("A mochila está vazia!\n");
        return;
    }

    printf("\n===== ITENS NA MOCHILA =====\n");

    for (int i = 0; i < contador; i++) {
        printf("\nItem %d:\n", i + 1);
        printf("Nome: %s\n", mochila[i].nome);
        printf("Tipo: %s\n", mochila[i].tipo);
        printf("Quantidade: %d\n", mochila[i].quantidade);
    }
}




int main()
{

    Item mochila[10];
    int contador = 0;
    int opcao;


    do {
        printf("\n===== Inventario =====\n");
        printf("1 - Colocar Item\n");
        printf("2 - Listar Item\n");
        printf("3 - Retirar Item\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                char nomeItem[30];
                char tipoItem[30];
                int quantidadeItem;

                printf("Você escolheu: Colocar Item\n");

                if (contador <= 10) {
                    
                    printf("Nome: ");
                    scanf("%s", mochila[contador].nome);

                    printf("Tipo: ");
                    scanf("%s", mochila[contador].tipo);

                    printf("Quantidade: ");
                    scanf("%d", &mochila[contador].quantidade); 
                } contador++;
                break;

            case 2:
                printf("Você escolheu: Listar Itens\n");

                listarItens(mochila, contador);
                
                break;

            case 3:

                removerItem(mochila, &contador);

                break;

            case 0:
                printf("Saindo...\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }

    } while (opcao != 0);
    
    

    return 0;
}