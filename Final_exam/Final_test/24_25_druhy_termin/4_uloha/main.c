#include <stdio.h>

/*
4. Úloha
Pomocí přímé rekurze naprogramujte funkci rekzav, která na výstup vypíše n do sebe vnořených párů závorek.
Typy závorek se musí pravidelně střídat v pořadí: kulaté ( ), hranaté [ ], složené { }. 
Po složených závorkách se cyklus opakuje znovu od kulatých.

    Príklad požitia:
    zavorky(0) = (nič)
    zavorky(1) = ()
    zavorky(2) = ([])
    zavorky(3) = ([{}])
    zavorky(6) = ([{([{}])}])

*/
void rekzav(unsigned n, int typ){
    char znaky_zav[2][3] = {{"(","[","{"},
                            {")","]","}"}};

    if(n==0) return;
        
    printf("%c",znaky_zav[0][typ]);

    rekzav(n-1,(typ+1)%3);
    
    printf["%c",znaky_zav[1][typ]];

}

void zavorky(unsigned n){
    rekzav(n,0);
}


int main() {
  printf("Hello World!");
  return 0;
}
