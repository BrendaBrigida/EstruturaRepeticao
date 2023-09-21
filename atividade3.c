#include <stdio.h>

main(){

    //Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares (sem usar comando condicional).
    
    int N;
    
    printf("Digite um numero N: ");
    scanf("%d", &N);
    
    int numero_impar = 1;
    
    for (int i = 0; i < N; i++) {
        printf("%d\n", numero_impar);
        numero_impar += 2;
    }
    
    
}