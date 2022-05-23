#include <stdbool.h>
#include <stdio.h>

// Exercício 3 - Variáveis, Operadores, Entrada e Saída
//Crie 8 variáveis novas contendo expressões que envolvam as variáveis criadas no exercício anterior, 
// processadas com os operadores lógicos  E - AND (&&), OU - OR (||), OU EXCLUSIVO - XOR (^)
//Exemplo:
//   int temperatura = 10
//   int comFrio = temperatura < 15
//   int carrosNaRua = 20
//   int haTransito = carrosNaRua > 50
//   int darAulaOnline = comFrio && haTransito

void main(){

    int indicePluviometrico=0, sinalWifi=0, alturaDaOnda=0, intensidadeDor=0;
    int velocidadeDoVento=0, diasComSinalFraco=0, comprimentoDaOnda=0, diasComDor=0;

    printf("\n*****Verificando pancadas de chuva // tempestade****");
    printf("\nDigite o indice pluviometrico (01-100): ");
    scanf("%d", &indicePluviometrico);
    printf("\nDigite a velocidade do vento em km/h (01-90): ");
    scanf("%d", &velocidadeDoVento);
    _Bool pancadasDeChuva = (indicePluviometrico>=50);
    _Bool tempestade = (pancadasDeChuva==1 && velocidadeDoVento>=45);
    printf("Pancadas de Chuva: %s", pancadasDeChuva ? "true" : "false");
    printf("\nTempestade: %s", tempestade ? "true" : "false");


    printf("\n\n*****Verificando Sinal Ruim do Wi-fi // necessidade de troca****");
    printf("\nQuantas barras aparecem da internet sem fio (01-05):  ");
    scanf("%d", &sinalWifi);
    printf("\nTotal de dias que o sinal esta fraco:  ");
    scanf("%d", &diasComSinalFraco);
    _Bool sinalRuim = (sinalWifi<3);
    _Bool trocaDoRoteador = (sinalWifi<=2 || diasComSinalFraco>5);    
    printf("Sinal Ruim: %s", sinalRuim ? "true" : "false");
    printf("\nTrocar roteador: %s", trocaDoRoteador ? "true" : "false");

    printf("\n\n*****Verificando ondas gigantes / amplitude ****");
    printf("\nDigite a altura da onda em metros (00-80): ");
    scanf("%d", &alturaDaOnda);
    printf("\nDigite o comprimento da onda em km (00-300): ");
    scanf("%d", &comprimentoDaOnda);
    _Bool ondaGigante = (alturaDaOnda>=20);
    _Bool tsunami = (alturaDaOnda > 40 ^ comprimentoDaOnda > 180);    
    printf("Onda gigante: %s", ondaGigante ? "true" : "false");
    printf("\nTsunami: %s", tsunami ? "true" : "false");

    printf("\n\n*****Verificando intensidade da Dor / ir ao medico****");
    printf("\nDigite a itensidade da dor (00-09): ");
    scanf("%d", &intensidadeDor);
    printf("\nQuantidade de dias desde a primeira ocorrencia: ");
    scanf("%d", &diasComDor);
    _Bool ausenciaDeDor = (intensidadeDor==0);
    _Bool idaAoMedico = (intensidadeDor>=4 ^ diasComDor>=3);
    printf("Ausencia de dor: %s", ausenciaDeDor ? "true" : "false");
    printf("\nRecomedacao de ida ao medico: %s", idaAoMedico ? "true" : "false");

}
