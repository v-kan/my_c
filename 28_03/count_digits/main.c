#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    1) Реализуйте функцию, которая принимает параметром строку и возвращает количество цифр в этой строке.
    int count_digits(char *s)
*/

int count_digits (char *s, int *p)
{
    int i;
    for (i=0; i<sizeof(s); i++)
    {
        if ((int) s[i]<=57)
            if ((int) s[i]>=48)
                *p=*p+1;
    }
}

int main()
{
    char str[1000];
    int x=0;

    scanf("%s", str);
    count_digits(str, &x);
    printf("%d\n", x);
    return 0;
}
