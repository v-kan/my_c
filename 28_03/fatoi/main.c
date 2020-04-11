#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 3) Реализовать функцию int fatoi (const char *str) для приведения (конвертации) строки в числовой вид.*/

void fatoi (const char *str)
{
    int i;

    for(i=0;i<strlen(str);i++)
    {
        printf("%d\n", (int)str[i]);
    }
}


int main()
{
    char s[1000];

    scanf("%s", s);

    fatoi(s);
    printf("Hello world!\n");
    return 0;
}
