#include <stdio.h>
#include <stdlib.h>

//Exercício 4 - Variáveis, Operadores, Entrada e Saída
//Faça um programa para calcular a área de um retângulo, o programa deve solicitar ao usuário 
//as informações de base e altura, deve calcular a área com estas informações 
//e depois exibir o resultado na tela.
//area = base * altura

void main (){

        float area, base, altura;
        
        printf("*******Area do retangulo********");
        printf("\nDigite a base do retangulo: ");
        scanf("%f", &base);
        printf("\nDigite a altura do retangulo: ");
        scanf("%f", &altura);  
        area = base * altura;     
        printf("\nA A area do retangulo eh %.1f: ", area);
        system("pause");

}
