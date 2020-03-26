#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#define M 5
#define N 10

int main()
{
  int a[M][N];
  int b[M];
  int t[M];
  int i,j,l,y=0;
  int x=1;

  for(i = 0; i < M; i++) {
     for(j = 0; j < N; j++) {
        a[i][j] = rand()%100;
        printf("%5d", a[i][j]);}
     printf("\n");
  }

  for(i = 0; i < M; i++) {
     for(j = 0; j < N; j++) {
        for (l=j+1; l<N; l++){
            if (a[i][j]==a[i][l])
                x++;
        }
        t[j]=x;
        x=1;
     }

     b[0]=t[0];
     for(j = 0; j < N-1; j++)
     {
         if (t[j]<t[j+1])
            b[i]=t[j+1];
     }
  }

  for (j=M-1; j>=0; j--)
  {
   if (b[j]>y)
        y=b[j];
  }

  printf("\n%d", y);
  return 0;
}
