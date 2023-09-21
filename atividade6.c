#include <stdio.h>

main(){

    /*Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim, apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores.
    O algoritmo deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade de frutas. Ao final, apresente o valor total da compra.*/

    int menu, qntd;
    float valorTotal = 0;

    do{
        printf("Escolha uma fruta:\n");
        printf("Abacaxi\n");
        printf("Maca\n");
        printf("Pera\n");
        printf("0 Finalizar Compra\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &menu); 

    switch(menu){

          case 1:
               printf("Quantidade de Abacaxi desejada: ");
               scanf("%d", &qntd);
               valorTotal += 5 * qntd;
               break;
          case 2:
               printf("Quantidade de Maca desejada: ");
               scanf("%d", &qntd);
               valorTotal += 1 * qntd;
              break;
          case 3:
               printf("Quantidade de Pera desejada: ");
               scanf("%d", &qntd);
               valorTotal += 4 * qntd;
               break;
    }
   
    }while(menu != 0);

     printf("Valor total da compra: R$%.2f\n", valorTotal);


}