#include <stdio.h>
#include <assert.h>

/**
 * @desc Funkce vrací počet jedniček v poli arr
 * @param arr Ukazatel na první prvek v poli
 * @param n Počet prvků v poli
 * @return Počet jedniček v poli omezeném argumentem n. Vrací záporné číslo, pokud n <= 0
 */
int sum_ones(int *arr, int n);

//Řešení:
int data[] = { 0, 1, 2, 1 };
// zde doplňte příkazy jednotkového testu
assert(sum_ones(data,4) == 2);



int main() {
  printf("Hello World!");
  return 0;
}
