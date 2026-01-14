#include <stdio.h>
#include <stdbool.h>


//Upravte funkci, aby vracela true, pokud 
//zadané číslo není dělitelné jedním z čísel {2, 3, 5, 7}. Napište výraz
//bez použití ternárního operátoru.

bool non2357(unsigned int n)
{
return n%2!=0 && n%3!=0 && n%5!=0 && n%7!=0;
}

int main() {
    if (non2357(11) == true) {
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}
