#include <stdio.h>

/*
7. Úloha
Upraviť funkciu tak, aby informovala volajúceho pri neočakávvaných znakoch v reťazci.
(Toto bola nejaká funkcia, ktorá mala previesť rodné číslo na číslo, doplňte ak si pamätáte viac)
Pozn. uint64int_t je 64-bitové číslo bez znamienka
*/
uint64_t get_birth_number(char *bnum_str){
    uint64_t bnum = 0;
    for (int i = 0;bnum_str[i] != 0;i++){
        if (bnum_str[i] == "/") continue;
        if (isdigit(bnum_str[i])){
            bnum = bnum*10 + bnum_str[i]-"0";
        }
        return bnum;
    }
}


int main() {
  printf("Hello World!");
  return 0;
}
