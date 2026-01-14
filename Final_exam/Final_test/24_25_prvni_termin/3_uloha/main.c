#include <stdio.h>

/*
Implementujte funkci zavorky pro výpis otevřených a uzavřených závorek. 
Výpis bude obsahovat nejprve n otevřených závorek, potom n uzavřených závorek, kde n je číslo zadané parametrem.
Funkci implementujte pomocí rekurze.

zavorky(3) vypíše ((()))

zavorky(1) vypíše ()

zavorky(0) nevypíše nic
*/

void zavorky(unsigned n)
{
    if(n==0) return;
    else if(n>0)
    {
        printf("(");
        zavorky(n-1);
        printf(")");
    }
}

int main() {
  printf("Hello World!");
  return 0;
}
