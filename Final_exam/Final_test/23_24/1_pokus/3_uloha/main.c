#include <stdio.h>

void zavorky(unsigned n)
{
    if(n==0) return;

    printf("(");
    zavorky(n-1);
    printf(")");

}

//od chata podobne zadani na procviceni
/*
Napiš funkci void odpocitavani(int n), která pro zadané n vypíše:

Pro n=3: 3 2 1 TEĎ 1 2 3

Pro n=1: 1 TEĎ 1

Pro n=0: TEĎ
*/

void odpocitavani(int n)
{
    if(n==0){
        printf("TED");
        return;
    }else if(n>0){
        printf("%d", n);
        odpocitavani(n-1);
    }
    printf("%d", n);

}

/*
Napiš rekurzivní funkci int mocnina(int zaklad, int exponent), která spočítá $zaklad^{exponent}$.
Příklad: mocnina(2, 3) vrátí 8 (protože $2 \cdot 2 \cdot 2 = 8$).
Příklad: mocnina(5, 1) vrátí 5.
Příklad: mocnina(10, 0) vrátí 1 (cokoliv na nultou je 1).
*/

int mocnina(int zaklad, int exponent)
{
    if(exponent==1)
    {
        return zaklad;
    }
    else if(exponent==0)
    {
        return 1;
    }
    else if(exponent > 1)
    {
        return zaklad * mocnina(zaklad, exponent-1);
    }
    return zaklad;
}

/*
Funkce void vypisCifry(int n), která vypíše číslo po cifrách s mezerou.

Vstup: 1234

Výstup: 1 2 3 4

Podmínka: Nesmíš použít pole ani převod na text. Musíš použít matematiku (% a /).
*/

void vypisCifry(int n)
{
    if(n==0) return;
    else if(n>0)
    {
        int x = n%10;
        n = (n-x)/10;
        vypisCifry(n);
        printf("%d ", x);
    }
}


int main() {
  printf("Hello World!");
  return 0;
}
