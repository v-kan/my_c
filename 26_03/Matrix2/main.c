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
  int i,j,jmax,jmin;
  int min=INT_MAX;
  int max=INT_MIN;

  for(i = 0; i < M; i++) {
     for(j = 0; j < N; j++) {
        a[i][j] = rand()%100; /*заполнение и вывод массива*/
        printf("%5d", a[i][j]);}
     printf("\n");
  }

  for(i = 0; i < M; i++) {
     for(j = 0; j < N; j++)
     {
        if (min>=a[i][j]){
            min=a[i][j];
            jmin=j;}
        if (max<=a[i][j]){
            max=a[i][j];
            jmax=j;}
     }
     a[i][jmin]=max;
     a[i][jmax]=min;
     min=INT_MAX;
     max=INT_MIN;
  }

  printf("\n");
  printf("\n");

  for(i = 0; i < M; i++) {
     for(j = 0; j < N; j++)
        printf("%5d", a[i][j]);
     printf("\n");
  }

  return 0;
}
