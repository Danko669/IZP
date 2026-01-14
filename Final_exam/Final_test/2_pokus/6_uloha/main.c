#include <stdio.h>
#include <stdlib.h>


typedef struct {
double *data; // prvky matice
unsigned n; // řád matice
} Matrix;

/*
Nechť je je čtvercová matice řádu n uložena v jednorozměrném poli o velikosti n*n. Implementujte funkci
mkIdentityMatrix, která alokuje data a inicializuje matici jako jednotkovou (prvky na hlavní diagonále budou mít hodnotu
1, všechny ostatní 0). Funkce vrací inicializovanou matici.
*/

Matrix mkIdentityMatrix(unsigned n)
{
    Matrix matice;
    matice.n = n;
    
    matice.data=malloc(sizeof(double)*(n*n));

    if(matice.data != NULL)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                int index = i * n + j;
                if(i==j)
                {
                    matice.data[index] = 1.00;
                }
                else
                {
                    matice.data[index] = 0.00;
                }
            }
        }
        return matice;
    }
    return matice;
}

int main() {
  printf("Hello World!");
  return 0;
}
