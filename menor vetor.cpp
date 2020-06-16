#include <stdio.h>
#include <stdlib.h>

int main()
{

    int vet[10];
    int menor, i;

    printf("insira 10 numeros para o vetor:\n");

    for (i = 0; i < 10; i++) {
        scanf("%i", &vet[i]);
    }

    menor = vet[0];

    for (i = 1; i < 10; i++) {
        if (vet[i] <= menor) {
            menor = vet[i];
        }
    }

    for (i = 0; i < 10; i++) {
        if (vet[i] == menor)
            printf("\n\no menor elemento: %i \n\nposiçao do menor elemento: %i", menor, i);

    }


    return 0;
}