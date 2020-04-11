#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*  2) Реализуйте функцию, которая принимает параметром строку и символ и возвращает адрес первого вхождения этого символа в строку.
    char *str_chr (char *s, char c)
*/

int str_chr (char *s, char *c)
{
    int i;
    int *y=0;

    for (i=0; i<strlen(s); i++)
        if ((int) *c==((int) s[i]))
        {
            y=&s[i];
            break;
        }

    return y;
}

int main()
{
    char str[10];
    char sym[2];
    int t;

    scanf ("%9s %9s", str, sym);

    printf("%d\n", str_chr(str, &sym));

    return 0;
}
