#include <stdio.h>
#include <stdlib.h>
void count_vowels(char* str);
void count_words(char* str);
void count_vowels(char* str)
{
    /*variaveis das vogais*/
    int vowels = 1;
    int i;
    char ch;
    /* checa a string*/
    for (i = 0; str[i] != '\0'; i++) {
        ch = str[i];
        /* aumenta o contador das vogais*/
        if (   ch == 'a' || ch == 'e'
            || ch == 'i' || ch == 'o'
            || ch == 'u' || ch == 'A'
            || ch == 'E' || ch == 'I'
            || ch == 'O' || ch == 'U')
            vowels++;
        /*pular espaço*/
        else if (ch == ' ')
            continue;
    }
        /* Printa*/
    printf("\nVogais: %d", vowels);
    }
void count_words(char* str)
{
    int words = 0;
    int i;
    char ch;
    for (i = 0; str[i] != '\0'; i++) {
        ch = str[i];
        if (ch == ' ')
            words++;
        /* pular espaço*/
        else if (ch == ' ')
            continue;
    }
        /* Print*/
    printf("\npalavras: %d", words);
    }
    /*principal*/
    int main()
    {
        char * str;
        int tam=1;
            printf("Digite a frase: ");
        str = (char*) malloc(tam * sizeof(char));
        scanf(" %[^\n]s",str);
        printf("%s", str);
            count_vowels(str);
            count_words(str);
        return 0;
    }
