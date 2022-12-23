#include <stdio.h>
#include <stdlib.h>
// consegui juntar as duas funçoes em uma

//funçao da contagem
void count_vowels_and_consonant(char* str)
{
    // Declaração das variaveis
    int vowels = 0, consonants = 0;

    int i;
    char ch;

    // checa a string
    for (i = 0; str[i] != '\0'; i++) {

        ch = str[i];

        // aumentar o contador das vogais
        if (   ch == 'a' || ch == 'e'
            || ch == 'i' || ch == 'o'
            || ch == 'u' || ch == 'A'
            || ch == 'E' || ch == 'I'
            || ch == 'O' || ch == 'U')
            vowels++;

        // pular espaço
        else if (ch == ' ')
            continue;

        else
            // aumentar o contador das consoantes
            consonants++;
    }

    // Printar
    printf("\nVogais: %d", vowels);
    printf("\nConsoantes: %d", consonants);
}
//principal
int main()
{
    char * str;
    int tam=1;
    str = (char*) malloc(tam * sizeof(char));
    scanf(" %[^\n]s",str);
    printf("%s", str);

    count_vowels_and_consonant(str);

    return 0;
}
