#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fatoi (const char *str)
{
    int i;
    for(i=0;i<strlen(str);i++)
        printf("%d\n", (int)str[i]);
}

int main()
{
    char s[1000];

    scanf("%s", s);
    fatoi(s);
    return 0;
}
