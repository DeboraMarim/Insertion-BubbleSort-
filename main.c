/*AQUI VAO AS CHAMADAS DAS FUNÇOES*/


#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"

int main()
{


    int op = 0;
    int tam = 0;
    int i;



 /*Criação e Leitura do vetor*/
    printf("\n informe o tamanho do vetor");
    scanf("%d", &tam);
    int vet[tam];
    printf("\n Digite o vetor: \n");
    for(i = 0; i<tam; i++){
            scanf("%d", &vet[i]);
    }

    int *p;
    p = vet;

 /*Exibe opçoes*/
    printf("Informe O Metodo de Ordenação");
    printf("\n Digite 1 para Insertion Sort");
    printf("\n Digite 2 para Bubble Sort");
/*Le opcao*/
    scanf("%d", &op);


      if(op == 1){
        InsertionSort(vet, tam);
      }
       if(op == 2){
        BubbleSort(vet, tam);
      }
       if(op !=1 && op !=2){
        printf("\n Digite uma opcao valida");

      }
}


