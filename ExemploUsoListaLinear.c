#include <stdio.h>
#include "list.h"

int main(void)
{
    Lista* l = criar();
    int i, j = 4;
    
    /* Inseri 5 elementos na lista */
    for (i = 0; i < 5; i++)
      inserir(l,j * i);
    
    /* Apresenta os elementos inseridos na lista*/   
	printf("Lista completa\n"); 
    imprimir(l);

    /* Remove o segundo elemento da lista*/
    remover(l,j);

	printf("\nLista apos a exclusão do segundo elemento\n");
    imprimir(l);        
}