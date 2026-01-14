#include <stdio.h>

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
        arr1[i + len2] = arr1[i];
    }

    for (int i = 0; i < len2; i++)
    {
        arr1[idx+i] = arr2[i];
    }
}

int main() {
  printf("Hello World!");
  return 0;
}
