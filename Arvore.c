//Programa que implementa uma fila

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//Declaração da estrutura do no

struct no {
    int numero;
    struct no *filho1;
    struct no *filho2;
    struct no *filho3;
    struct no *filho4;
    struct no *filho5;
};

//Funcao que insere um no na arvore

struct no *inserir(struct no *raiz, int numero) {
    //Caso 1: Arvore vazia
    if (raiz == NULL){
        raiz = (struct no *) malloc (sizeof(struct no));
        raiz -> numero = numero;
        raiz -> filho1 = NULL;
        raiz -> filho2 = NULL;
        raiz -> filho3 = NULL;
        raiz -> filho4 = NULL;
        raiz -> filho5 = NULL;
        return raiz;
    }
        
    //Caso 2: arvore nao vazia
    int sorteio = (1 + (rand() % 5)); //Sorteio de um numero entre 1 e 5
    if (sorteio == 1) {
        raiz -> filho1 = inserir (raiz -> filho1, numero);
    } else if (sorteio == 2) {
        raiz -> filho2 = inserir (raiz -> filho2, numero);
    } else if (sorteio == 3) {
        raiz -> filho3 = inserir (raiz -> filho3, numero);
    } else if (sorteio == 4) {
        raiz -> filho4 = inserir (raiz -> filho4, numero);
    } else {
        raiz -> filho5 = inserir (raiz -> filho5, numero);
    }
    return raiz;
}

//Funcao que navega a arvore

void navegar (struct no *raiz,int identacao, char *filho){
    //Caso 1: Raiz vazia
    if (raiz == NULL){
        return;
    }
    //Caso 2: Nao ta vazia
    printf("")

}
