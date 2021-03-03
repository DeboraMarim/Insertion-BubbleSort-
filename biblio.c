
/*AQUI VAO OS ESCOPOS DAS FUNÇOES*/

#include "biblio.h"



InsertionSort(int *p, int t){

   /*variaveis auxiliares*/
        int k, j, aux;
        int n = t;
    /* processo de ordenacao*/
        for (k = 1; k <= n - 1; k++){
            aux = p[k];
            j = k - 1;
                while (j >= 0 && aux < p[j]) {
                    p[j+1] = p[j];
                    j--;
                }
            p[j+1] = aux;
       }

    int i;
    printf("\n VETOR ORDENADO:");
    for(i=0; i<t; i++){
         printf(" %d ", p[i]);
    }

};

BubbleSort(int *p, int t){

/*variaveis auxiliares*/
    int contador;
    int TAM;
    TAM = t;
    int i;
    int aux;

/* processo de ordenacao*/

 for (contador = 1; contador < TAM; contador++) {
   for (i = 0; i < TAM - 1; i++) {
     if (p[i] > p[i + 1]) {
       aux = p[i];
       p[i] = p[i + 1];
       p[i + 1] = aux;
     }
   }
 }


printf("\n VETOR ORDENADO: %d ");
for(i=0; i<TAM; i++){
     printf(" %d ", p[i]);
}
};
