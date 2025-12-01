#include <stdio.h>
#include <string.h>

typedef struct {
    char nome [50];
    char cor [30];
    int quantidadeTropas;    
    }Territorio;

void listarTerritorios(Territorio pais[], int contador) {

    printf("\n===== Territórios do jogo =====\n");

    for (int i = 0; i < contador; i++) {
        printf("\nTerritório %d:\n", i + 1);
        printf("Nome: %s\n", pais[i].nome);
        printf("Tipo: %s\n", pais[i].cor);
        printf("Quantidade de tropas: %d\n", pais[i].quantidadeTropas);
        printf("\n=====  =====\n");
    }
}




int main()
{

    Territorio pais[5];
    int contador = 0;

    printf("Bem vindo ao cadastro dos territórios! \n");
    printf("Para continuarmos, precisamos que cadastre 5 territórios. \n\n");

    if (contador < 5)
    {
        for (int i = 0; i < 5; i++)
    {
        printf("Nome do território %d: ", contador + 1);
        scanf("%s", pais[contador].nome);

        printf("Cor do exército: ");
        scanf("%s", pais[contador].cor);

        printf("Quantidade de tropas: \n");
        scanf("%d", &pais[contador].quantidadeTropas);

        contador++;
    }
    } else
    {
        listarTerritorios(pais, contador);
    }

    listarTerritorios(pais, contador);
    
    return 0;
}