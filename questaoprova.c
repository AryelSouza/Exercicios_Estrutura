#include <stdio.h>
/*Gosto de codar digitando as variaveis em inglês,espero que o senhor não se importe:)*/
int main ()
{
    int age;
    printf("Digite sua idade: ");
    scanf("%d", &age);
    unsigned int seconds = age * 31622400 ;
    while (age<=0) {
      printf("Essa idade não é possivel,Digite uma idade valida\n");
      scanf("%d", &age);
    }
    printf("%d anos de idade são iguais a %u segundos\n",age,
    seconds);

    return 0;
}
