#include <stdio.h>

main(){

    //Uma pesquisa sobre algumas características físicas da população de uma determinada região coletou os seguintes dados, referentes a cada habitante.

    char sexo, corOlhos, corCabelos;
    int idade;
    float salario;
    int totalHabitantes = 0;
    int mulheresCastanhas = 0;

    while (1) {

        //informações do habitante

        printf("Informe o sexo (m/f): ");
        scanf(" %c", &sexo);
        
        //Verifica se o usuário deseja encerrar a pesquisa

        if (sexo == 'm' && idade == -1) {
            break;
        }
        
        printf("Informe a cor dos olhos (a/v/c/p): ");
        scanf(" %c", &corOlhos);
        
        printf("Informe a cor dos cabelos (l/c/p/r): ");
        scanf(" %c", &corCabelos);
        
        printf("Informe a idade: ");
        scanf("%d", &idade);
        
        //Verifica se a idade é -1 para encerrar a pesquisa

        if (idade == -1) {
            break;
        }
        
        printf("Informe o salario: ");
        scanf("%f", &salario);
        
        //os dados

        if ((sexo == 'm' || sexo == 'f') &&
            (corOlhos == 'a' || corOlhos == 'v' || corOlhos == 'c' || corOlhos == 'p') &&
            (corCabelos == 'l' || corCabelos == 'c' || corCabelos == 'p' || corCabelos == 'r') &&
            (idade >= 10 && idade <= 100) &&
            salario >= 0) {
            
            //Contabiliza o habitante

            totalHabitantes++;
            
            //Verifica se a habitante é uma mulher com as características desejadas

            if (sexo == 'f' && idade >= 18 && idade <= 35 && corOlhos == 'c' && corCabelos == 'c') {
                mulheresCastanhas++;
            }
        } else {
            printf("fim do habitante\n");
        }
    }
    
    
    float porcentagem = 0.0;
    if (totalHabitantes > 0) {
        porcentagem = ((float)mulheresCastanhas / totalHabitantes) * 100.0;
    }
    
    printf("Porcentagem de mulheres com idade entre 18 e 35 anos, olhos castanhos e cabelos castanhos: %.2f%%\n", porcentagem);
    
  
}