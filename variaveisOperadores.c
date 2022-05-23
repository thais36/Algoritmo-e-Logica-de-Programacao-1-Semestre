#include <stdbool.h>
#include <stdio.h>


//Exercício 2- Variáveis, Operadores, Entrada e Saída
//Crie 4 informações em variáveis separadas, e com estas informações crie 4 expressões relacionais 
//cuja a resposta seja booleana (verdadeiro ou falso), juntamente com 4 variáveis que receberão estas afirmações, 
//e adicione um comentário informando se a afirmação será verdadeira ou falsa.
// Ex:
//   int temperatura = 25;
//   boolean frio = (temperatura < 15);
//   int humidade = 25;
//   boolean tempoSeco = (humidade < 30)


void main(){

    int indicePluviometrico=0, sinalWifi=0, alturaDaOnda=0, itensidadeDor=0;
    
    printf("\n*****Verificando pancadas de chuva****");
    printf("\nDigite o indice pluviometrico (01-100): ");
    scanf("%d", &indicePluviometrico);
    _Bool pancadasDeChuva = (indicePluviometrico>=50);
    printf("Pancadas de Chuva: %s", pancadasDeChuva ? "true" : "false");
    

    printf("\n\n*****Verificando Sinal Ruim do Wi-fi****");
    printf("\nQuantas barras aparecem da internet sem fio (01-05):  ");
    scanf("%d", &sinalWifi);
    _Bool sinalRuim = (sinalWifi<3);
    printf("Sinal Ruim: %s", sinalRuim ? "true" : "false");

    printf("\n\n*****Verificando ondas gigantes****");
    printf("\nDigite a altura da onda em metros (00-80): ");
    scanf("%d", &alturaDaOnda);
    _Bool OndaGigante = (alturaDaOnda>=20);
    printf("Onda gigante: %s", OndaGigante ? "true" : "false");


    printf("\n\n*****Verificando intensidade da Dor****");
    printf("\nDigite a intensidade da dor (00-09): ");
    scanf("%d", &itensidadeDor);
    _Bool ausenciaDeDor = (itensidadeDor==0);
    printf("Ausencia de dor: %s", ausenciaDeDor ? "true" : "false");

}
