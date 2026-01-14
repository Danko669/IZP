#include <stdio.h>
#include <stdlib.h>

typedef struct {
double *data; // prvky matice
unsigned n; // řád matice
} Matrix;

Matrix mkIdentityMatrix(unsigned n)
{
    Matrix vysledek;
    vysledek.n = n;
    vysledek.data = malloc(sizeof(double)*(n*n));
    if(vysledek.data != NULL)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int index = i * n + j;
                if(i==j)
                {
                    vysledek.data[index] = "1.00";
                }
                else
                {
                    vysledek.data[index] = "0.00";
                }
            }
            
        }
        return vysledek;
        
    }
    return vysledek;
}

int main() {
  printf("Hello World!");
  return 0;
}
