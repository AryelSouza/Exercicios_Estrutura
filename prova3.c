#include <stdio.h>

typedef struct elementoLista {
    int *dado;
    struct elementoLista *seguinte;
}elemento;

typedef struct ListaDetectada{
  elemento *inicio;
  elemento *fim;
  int tamanho;
} Fila;

void inicializacao(Fila * sequencia);

void exibir(Fila *sequencia);

int inserir (Fila * sequencia, elemento * atual, char *dado);

int main(){
    Fila * fila;
    int x;
    int vetor[]={1,2,3,4,5};
    inicializacao(fila);
    inserir(fila,fila->fim,1);
    exibir(fila);
}
void inicializacao (Fila * sequencia){
  sequencia->inicio = NULL;
  sequencia->fim = NULL;
  sequencia->tamanho = 0;
}

void exibir (Fila *sequencia){
  elemento *atual;
  int i;
   atual = sequencia->inicio;

  for(i=0;i<sequencia->tamanho;++i){
    printf(" %d ", atual->dado);
    atual = atual->seguinte;
  }
}

int inserir (Fila * sequencia, elemento * atual, char *dado){
  elemento *novo_elemento;
  if ((novo_elemento = (elemento *) malloc (sizeof (elemento))) == NULL)
    return -1;
  if ((novo_elemento-> dado = (char *) malloc (50 * sizeof (char)))
      == NULL)
    return -1;
  strcpy (novo_elemento->dado, dado);

  if(atual== NULL){
    if(sequencia->tamanho == 0)
      sequencia->fim = novo_elemento;
    novo_elemento->seguinte = sequencia->inicio;
    sequencia-> inicio = novo_elemento;
  }else {
    if(atual->seguinte == NULL)
      sequencia->fim = novo_elemento;
    novo_elemento->seguinte = atual->seguinte;
    atual->seguinte = novo_elemento;
  }
  sequencia->tamanho++;
  return 0;
}
