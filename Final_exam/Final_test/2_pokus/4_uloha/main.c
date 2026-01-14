#include <stdio.h>

/*
 Upravte následující dvě funkce tak, aby každá zobrazila všechny prvky na hlavní diagonále čtvercové matice
řádu n po řádcích v opačném pořadí uložené ve dvojrozměrném poli daném parametrem array.
*/

void printMainDiagRev_A(int n, int array[n][n])
{
for (int i = n-1; i >= 0; i--)
printf("%d \n", array[i][i]);
}
void printMainDiagRev_A(int n, int array[n][n])
{
for (int i = 0; i < n;i++)
printf("%d \n", array[n-i-1][n-i-1]);
}

int main() {
  printf("Hello World!");
  return 0;
}
