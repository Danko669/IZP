#include <stdio.h>


//ZADANI//
/**
Implementujte funkci insertArrayItem, která do pole arr o velikosti len na index daný parametrem idx
vloží prvek item. Předpokládejte, že pole má kapacitu len + 1 a platí idx ≤ len 


* @desc Funkce vkládá prvek item do pole arr na index idx. Žádný z prvků v poli arr není ztracen.
* @param arr první pole
* @param len délka pole arr
* @param idx index do pole arr
* @param item prvek, který se má vložit do pole
*/
void insertArrayItem(int arr1[], unsigned len, unsigned idx, int item)
{
for (int i = len - 1;i >= (int)idx ; i--)
{
arr[i+1] = arr[i];
}
arr[idx] = item;
}

int main() {
  printf("Hello World!");
  return 0;
}
