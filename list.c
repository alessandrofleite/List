#define N 10
#include <stdio.h>
#include "list.h"

struct lista{
  int cursor;
  int elemento[N];
};

/*
 * Aloca dinamicamente a estrutura lista, inicializando seus
 * campos e retorna seu ponteiro. A lista depois de criada
 * terá tamanho igual a zero.
 */
Lista* criar(void){
  Lista* l = (Lista*) malloc(sizeof(Lista));
  l->cursor = 0;
  return l;
}

/*
 * Insere o elemento e no final da lista l, desde que,
 * a lista não esteja cheia.
 */
void inserir(Lista* l, int e){
  if (l == NULL || l->cursor == N){
    printf("Error. A lista esta cheia!\n");
  }else{
    l->elemento[l->cursor++] = e;
  }
}

/*
 * Remove e retorna o elemento e da lista l,
 * desde que a lista não esteja vazia e o elemento
 * e esteja na lista. A fução retorna 0 se o elemento 
 * não for encontrado na lista ou 1 caso contrário
 */
int remover(Lista* l, int e){     
  int i, d = pesquisar(l,e);
  if (d != -1){
    for(i = d; i < l->cursor; i++)
    {
      l->elemento[i] = l->elemento[i + 1];
    }
    l->cursor--;
	return 1;
  }  
	return 0;
}

/**
 * Pesquisa na lista l o elemento e. A função retorna 
 * o endereço(índice) do elemento se ele pertencer a lista
 * ou -1 caso contrário.
 */
int pesquisar(Lista* l, int e){
  if (l == NULL)
    return;
  
  int i = 0;
  while (i <= l->cursor && l->elemento[i] != e)
    i++;
        
  return i > l->cursor ? -1 : i;
}

/* 
 * Apresenta os elementos da lista l. 
 */
void imprimir(Lista* l){
 int i;
 for(i = 0; i < l->cursor; i++)
   printf("%d ", l->elemento[i]);
 printf("\n");  
}

/*
 * Informa se a lista l está ou não vazia.
 */
int empty(Lista *l){
    return l->cursor == 0;
}

/*
 * Destrói a lista l, e assim libera toda a memória
 * usada pela estrutura.
 */
void destroy(Lista* l){
  free(l);
}