#include <stdio.h>

typedef struct
{
int a;
int b;
} tdata;
typedef struct item titem;
struct item
{
tdata data;
titem *next; // poslední položka má hodnotu NULL
};

/*
Definujte funkci listFindOppositeSign, která vrací ukazatel na první položku seznamu (daném parametrem funkce), která
má složky a a b s vzájemně opačným znaménkem. V případě, že je seznam prázdný nebo taková položka v seznamu není,
funkce vrací NULL.
*/

titem *listOfOppositeSigns(list *head)
{
    titem *p = head;

    if(p != NULL)
    {
        if((p->data.a < 0 && p->data.b > 0) || (p->data.a > 0 && p->data.b < 0))
        {
            return *p;
        }
        return p->next;
    }
    return NULL;
}


int main() {
  printf("Hello World!");
  return 0;
}
