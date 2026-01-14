#include <stdio.h>

/*
1. Úloha
Naprogramujte funkciu days_elapsed(), ktorá na základe parametrov vráti početdní v roku k danému dátumu.
Ak je rok priestupný (rok má 366 dní (pribúda 29. február)), funkcia is_leap() vráti 1, inak vráti 0.
*/
int is_leap(int year);

int days_elapsed(int year, int month, int day){
    int dom[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int elapsed = 0;
    for (int m = 0; m < month-1; m++){
        elapsed += dom[m]
    }
    return elapsed + day + (is_leap(year) && month>2);
}


int main() {
  printf("Hello World!");
  return 0;
}
