#include <stdio.h>

/*
Upravte následující funkci tak, aby zobrazila všechny prvky nad vedlejší
diagonálou čtvercové matice řádu n (procházející v původním pořadí, tj. v obou směrech
ve směru rostoucích indexů) uložené ve dvourozměrném poli daném parametrem array.
Výsledný algoritmus by měl vykonat minimální možný počet iterací. Úpravu vyznačte přímo v uvedeném zdrojovém textu.
*/



void printAboveSideDiag(int n, int array[n][n])
{
    for (int row = 0; row < n-1; row++)
    {
        for (int col = 0;col<n-1-row ; col++)
        {
            printf("%d ", array[row][col]);
        }
        printf("\n");
    }
}


int main() {
  printf("Hello World!");
  return 0;
}
