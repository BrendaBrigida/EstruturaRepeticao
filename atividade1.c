#include <stdio.h>

main(){

    //Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente. 

    int N;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    int i = 0;
    
    while (i <= N) {
        printf("%d\n", i);
        i++;
    }


}