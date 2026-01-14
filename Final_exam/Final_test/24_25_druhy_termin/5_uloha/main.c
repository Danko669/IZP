#include <stdio.h>
#include <stdbool.h>

typedef struct {
    char name[52];
    int year;
} tdata;
//Nasledujúce štruktúry boli reálne totožné ako pri jednosmerne viazanom zozname ak si dobre pamätám
typedef struct item titem;
struct item {
    tdata data;
    titem *next;
}
typedef struct {
    titem *head;
    titem *tail;
} tlist;


/*
5. Úloha Implementujte funkci listIsValid, která projde zadaný jednosměrně vázaný seznam a ověří,
zda jsou všechna data v něm uložená platná (validní).

Data v jedné položce seznamu považujeme za validní, pokud splňují obě následující podmínky:

Jméno (name): Řetězec musí začínat velkým písmenem anglické abecedy (znaky 'A' až 'Z').

Rok (year): Hodnota musí být v uzavřeném intervalu od roku 1800 do roku this_year (včetně).
Hodnota this_year je předána parametrem.

Návratová hodnota:

Funkce vrátí 1 (true), pokud jsou všechny položky v seznamu validní (nebo je seznam prázdný).

Funkce vrátí 0 (false), pokud seznam obsahuje alespoň jednu neplatnou položku.
*/

bool ListIsValid(tlist *seznam, int this_year)
{
    titem *p = seznam->head;

    while(p!=NULL)
    {
        if((isupper(p->data.name[0])) && (p->data.year>=1800 && p->data.year<=this_year))
        {
            p=p->next;
        }
        else return 0;

    }
    return 1;

}


int main() {
  printf("Hello World!");
  return 0;
}
