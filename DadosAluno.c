#include<stdio.h>
//Exercicio 1 - Variaveis, Operadores, Entrada e Saida
// Faca um programa chamado DadosAluno.c, que peca ao usuario as seguintes informacoes: NOME, RA, IDADE, e a ALTURA.
//Em seguida mostre todas estas informações na tela.
// Ex:
//      Digite seu Nome: Antonio
//      Digite seu RA: 11111
//      Digite sua Idade: 35
//      Digite sua Altura: 1,72
//      Seja bem vindo Antonio, seu RA é 11111 na nossa faculdade, você está matriculado com sucesso.

void main (){
     char nome[25];
     int ra, idade;
     float altura;
     
     printf("Digite o seu nome: ");
     gets(nome);
     printf("\nDigite seu RA: ");
     scanf("%d", &ra);
     printf("\nDigite sua idade: ");
     scanf("%d", &idade);
     printf("\nDigite sua altura: ");
     scanf("%f", &altura);
     printf("\n\nSeja bem vindo %s, seu RA eh %d na nossa faculdade, voce esta matriculado com sucesso.", nome, ra);

}
