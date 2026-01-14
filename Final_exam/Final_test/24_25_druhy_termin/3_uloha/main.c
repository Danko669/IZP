#include <stdio.h>

/*
3. Úloha
Naprogramujte funkciu printMainSideDiag(), ktorá zobrazí všetky prvky na hlavnej aj vedľajšej diagonále
v poradí zľava doprava, zhora dole uložené v dvojrozmernom poli array. Priesečníky sa zobrazia iba raz.
    Príklad použitia:
    array[0] = {1,2,3} => 1 3 
    array[0] = {4,5,6} => 5
    array[0] = {7,8,9} => 7 9
*/
void printMainSideDiag(int n, int array[n][n]){
    for (int i = 0;i<n;i++){
        if (n-i-1==i){
            printf("%d \n", array[i][i]);
        }
        else
            printf("%d %d \n", array[i][i < n/2 ? i : n-i-1],
                               array[i][i < n/2 ? n-i-1 : i]);
    }
}

int main() {
  printf("Hello World!");
  return 0;
}
