#include "filaprova.h"

void criarFila( TFilaEncCab * fila ){
	fila->inicio = fila->final = NULL;
    fila->tamanho = 0;
}

no* aloca( void ){ return ( (no*) malloc( sizeof(no) ) ); }

int enfileirar( TFilaEncCab *fila, int elemento ){
    no* novo;
	if ( (novo = aloca()) == NULL ) return 0;

    novo->dado = elemento;
    novo->prox = NULL;

    if( filaVazia(*fila) ) fila->inicio = novo;
    else (fila->final)->prox = novo;

    fila->final = novo;
    (fila->tamanho)++;
 	return 1;
}

void imprimir( TFilaEncCab fila ){
	printf("\nFila=[ ");
   	// varrendo todos os elementos
   	for (  ; fila.inicio != NULL; fila.inicio = (fila.inicio)->prox )
		printf( "%d ", (fila.inicio)->dado );
   	printf("]\n");
}

int filaVazia( TFilaEncCab fila ){
	return ( fila.inicio == NULL && fila.final == NULL );
}

int elementoFrente( TFilaEncCab fila, int *valor ){
	// se fila está vazia
    if ( filaVazia( fila ) ) return 0;
    *valor = (fila.inicio)->dado;
    return 1;
}

int emfileirar_grupo( TFilaEncCab* fila, int vetor[]){
			int x;
			if(vetor != NULL){
				for(x=0; x<5; x++){
					enfileirar( fila, vetor[x]);
				}
				return 1;
			}
			else(vetor==NULL);{
				printf("error");
				return 0;
			}
}
void clonar(TFilaEncCab *fila,TFilaEncCab *fila_clone){
	if(fila->inicio == NULL){
		printf("fila vazia");
	}
	else{
		no *aux =fila->inicio;
		while(aux != NULL){
			enfileirar(fila_clone,aux->dado);
			aux= aux->prox;
		}
		printf("clonado\n");
	}
}
