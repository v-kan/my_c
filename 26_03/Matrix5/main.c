#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#define M 5
#define N 10

int main()
{
    int i,j;
    int x=INT_MAX;
    int a[M][N];

    for (i=0; i<M; i++)
    {
        for (j=0; j<N; j++)
        {
            a[i][j]=rand()%10;
            printf("%5d ", a[i][j]);
        }
        printf("\n");
    }

    for (j=N-1; j>=0; j--)
    {
        for (i=0; i<M; i++)
        {
            if (a[i][j]%2==0)
            break;
            else
                if (i==M-1)
                x=j;
        }
    }

    if (x==INT_MAX)
        return 1;

    printf("\n%d", x);
    return 0;
}
