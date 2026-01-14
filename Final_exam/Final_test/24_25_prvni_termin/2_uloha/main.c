#include <stdio.h>

/*
Implementujte funkci insertArray, která do pole arr1 o velikosti len1 na index daný parametrem idx vloží prvky
z pole arr2 o velikosti len2. Předpokládejte, že pole arr1 má kapacitu len1 + len2 a platí idx <= len1.
*/

/**
 * @desc Funkce vkládá pole arr2 do pole arr1 na index idx. Žádný z prvků v poli arr1 není ztracen.
 * @param arr1 první pole
 * @param len1 délka pole arr1
 * @param arr2 druhé pole
 * @param len2 délka pole arr2
 * @param idx index do pole arr1, na který vložit pole arr2
 */
void insertArray(int arr1[], unsigned len1, int arr2[], unsigned len2, unsigned idx)
{
    for (int i = len1 - 1; i >= idx; i--)
    {
        arr1[ ________ ] = arr1[ ________ ];
    }

    for (int i = 0; i < len2; i++)
    {
        arr1[ ________ ] = arr2[ ________ ];
    }
}

int main() {
  printf("Hello World!");
  return 0;
}
