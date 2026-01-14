#include <stdio.h>

/*
2. Úloha
Naprogramujte funkci arrayCut(), která z pole arr1 (o velikosti len1) vezme/zkopíruje len2 prvků
(začínajících na indexu idx) a vloží je na začátek pole arr2. Předpokládejte, že arr2 má dostatečnou
kapacitu a platí idx + len2 <= len1.
*/
void arrayCut(int array1[], unsigned len1, int arr2[], unsigned len2, unsigned idx){
    for (int i = 0; i < len2; i++){
        arr2[i] = arr1[idx+i];
    }
    for (int i = 0; i < len2; i++){
        arr1[idx+i] = arr1[idx + 1 + len2]; 
    }
}

int main() {
  printf("Hello World!");
  return 0;
}
