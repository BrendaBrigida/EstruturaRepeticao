#include <stdio.h>

main(){

    //Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente.

    int N;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    int i = N;

    while (i >= 0) {
        printf("%d\n", i);
        i--;
    }




}