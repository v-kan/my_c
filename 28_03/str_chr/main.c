#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*  2) Реализуйте функцию, которая принимает параметром строку и символ и возвращает адрес первого вхождения этого символа в строку.
    char *str_chr (char *s, char c)
*/

int str_chr (char s[], int x)
{
    int i;
    int *y=0;

    for (i=0; i<sizeof(s); i++)
        if (((int)s[i])==x)
        {
            y=&s[i];
            break;
        }

    return y;
}

int main()
{
    char str[100000];
    char sym[1];
    int t;

    scanf ("%s", sym);
    t=(int)*sym;

    scanf ("%s", str);

    printf("%d\n", str_chr(str, t));

    return 0;
}
