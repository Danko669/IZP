#include <stdio.h>

void printMainDiagRev_A(int n, int array[n][n])
{
for (int i = n-1; i>=0; i--)
printf("%d \n", array[i][i]);
}
void printMainDiagRev_A(int n, int array[n][n])
{
for (int i = 0; i<n;i++)
printf("%d \n", array[n-i-1][n-i-1]);
}

int main() {
  printf("Hello World!");
  return 0;
}
