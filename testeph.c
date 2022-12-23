#include <stdio.h>

int main(void) {
int valor;
scanf("%d",&valor);

if (valor < 0) {
        printf("Digite o pH da solucao:\n"
        "Valor do pH deve estar entre 0 e 14.");
    }
else if (valor > 14) {
        printf("Digite o pH da solucao:\n"
        "Valor do pH deve estar entre 0 e 14.");
    }

else if (valor == 7) {
        printf("Digite o pH da solucao:\n"
        "Solucao neutra.");
    }

else if (valor > 0 && valor < 7) {
        printf("Digite o pH da solucao:\n"
        "Solucao acida.");
    }

else if (valor > 7 && valor < 14) {
        printf("Digite o pH da solucao:\n"
        "Solucao basica.");
    }

return 0;

}
