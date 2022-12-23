typedef struct nofila {
	int dado;
    struct nofila *prox;
}no;

typedef struct cabeca {
	no* inicio;
    no* final;
    int tamanho;
}TFilaEncCab;
//cria a fila//
void criarFila( TFilaEncCab * fila );
//organiza a fila//
int enfileirar( TFilaEncCab *fila, int elemento );
//printa a fila//
void imprimir( TFilaEncCab fila );
//da um no//
no* aloca( void );
//verifica se a fila esta vazia//
int filaVazia( TFilaEncCab fila );
//verifica e mostra o elemento da frente//
int elementoFrente( TFilaEncCab fila, int *valor );
//organiza o grupo por vetor//
int emfileirar_grupo( TFilaEncCab* fila, int vetor[]);
//clona uma fila existente//
void clonar(TFilaEncCab *fila,TFilaEncCab *fila_clone);
