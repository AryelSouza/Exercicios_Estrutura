#include <stdio.h>
#include <stdlib.h>
#include "main_filaprova.c"

int main(){
		TFilaEncCab fila;
		TFilaEncCab fila_clonada;
		int vetor[5]={10,200,52,77,511};
		int frente;

		criarFila( &fila );
		criarFila(&fila_clonada);
		if( filaVazia( fila ) ) printf( "tá vazia!" );
		emfileirar_grupo( &fila, vetor);
    elementoFrente( fila, &frente );
		printf( "\nElemento frente é: %d", frente  );
		imprimir(fila);
		clonar(&fila,&fila_clonada);
		printf("fila clonada com sucesso");
		imprimir(fila_clonada);
		return 0;
}
