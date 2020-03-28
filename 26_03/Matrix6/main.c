#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 3
#define N 3

int main()
{
    int i,j,k;
    int a[M][N];
     srand(time(NULL));


    for (i=0; i<M; i++)
    {
        for (j=0; j<N; j++)
        {
            a[i][j]=rand()%2;
            printf("%5d", a[i][j]);
        }
        printf ("\n");
    }

    for (i=0; i<M; i++)
        for (k=1; k<=(M-1-i); k++)
            for (j=0; j<N; j++)
            {
                if ((a[i][j]==a[i+k][j]) && (j==N-1))
                {
                    printf ("\nTrue");
                    return;
                }
                if (a[i][j]!=a[i+k][j])
                break;
            }

    return 0;
}
