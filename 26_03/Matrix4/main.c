#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#define M 5 /* Число строк матрицы */
#define N 10 /* Число столбцов матрицы */

int main()
{
  int a[M][N];
  int b[M];
  int i,j;
  int min=INT_MAX;

  for(j = 0; j < N; j++)
  {
     for(i = 0; i < M; i++)
    {
        a[i][j] = rand()%100;
        if (min>=a[i][j])
            min=a[i][j];
    }
    b[j]=min;
    min=INT_MAX;
  }

  for(i = 0; i < M; i++){
      for(j = 0; j < N; j++)
        printf("%5d", a[i][j]);
      printf("\n");
  }

  printf("\n");
  for(j = 0; j < N; j++)
        printf("%d ", b[j]);

  return 0;
}
