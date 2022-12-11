#include <stdio.h>
#include <stdlib.h>
typedef struct no {
  int valor;
  struct no *esq;
  struct no *dir;
} No;
No *cria_no(int valor) {
  No *novo = (No *) malloc(sizeof(No));
  novo->valor = valor;
  novo->esq = NULL;
  novo->dir = NULL;
  return novo;
}
No *insere(No *raiz, int valor) {
  if (raiz == NULL) {
    return cria_no(valor);
  }
  if (valor < raiz->valor) {
    raiz->esq = insere(raiz->esq, valor);
  } else {
    raiz->dir = insere(raiz->dir, valor);
  }
  return raiz;
}
void imprime_pre_ordem(No *raiz) {
  if (raiz == NULL) {
    return;
  }
  printf("%d ", raiz->valor);
  imprime_pre_ordem(raiz->esq);
  imprime_pre_ordem(raiz->dir);
}
void imprime_em_ordem(No *raiz) {
  if (raiz == NULL) {
    return;
  }
  imprime_em_ordem(raiz->esq);
  printf("%d ", raiz->valor);
  imprime_em_ordem(raiz->dir);
}
void imprime_pos_ordem(No *raiz) {
  if (raiz == NULL) {
    return;
  }
  imprime_pos_ordem(raiz->esq);
  imprime_pos_ordem(raiz->dir);
  printf("%d ", raiz->valor);
}
int main() {
  No *raiz = NULL;
  raiz = insere(raiz, 10);
  raiz = insere(raiz, 5);
  raiz = insere(raiz, 15);
  raiz = insere(raiz, 3);
  raiz = insere(raiz, 7);
  raiz = insere(raiz, 12);
  raiz = insere(raiz, 17);
  imprime_pre_ordem(raiz);
  printf("\n");
  imprime_em_ordem(raiz);
  printf("\n");
  imprime_pos_ordem(raiz);
  printf("\n");
  return 0;
}
