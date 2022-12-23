#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *reverse(char *frase,int tamanho);

int main(){
    char nome[41];
    char *ponteiro;
    int tamanho;
    char funcao;
    printf("digite uma frase ou nome com até 40 caracteres\n");
    scanf(" %[^\n]s",nome);
    ponteiro=&nome;
    tamanho=strlen(nome);
    funcao=reverse(ponteiro,tamanho);
    return 0;

}
char *reverse(char *frase, int tamanho){
    for(int i = 0; i < tamanho / 2; i++) {
       char tmp = frase[i];
       frase[i] = frase[tamanho - i - 1];
       frase[tamanho- i - 1] = tmp;
    }
    printf("%s", frase);
}
