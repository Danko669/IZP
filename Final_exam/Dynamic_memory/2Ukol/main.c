//== knihovny ==
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//== nove datove typy == 
typedef struct Svektor
{
    int delka;                         //delka pole
    int *pole;                         //ukazatel na dynamicky alokovane pole
} vektor;

//== deklarace funkci == 
vektor* alokujVektor(int delka);
void nactiVektor(vektor* A);
void vypisVektor(vektor* A);
vektor* konkatenace(vektor* A, vektor* B);
bool jeMnozina(vektor* A);
void uvolniVektor(vektor* A);
vektor* prunik(vektor* A, vektor* B);

//== definice funkci == 
vektor* alokujVektor(int delka)         
{
    vektor* A = malloc(sizeof(vektor));       //dynamicky alokujeme vektor
    if (A != NULL)                               //pokud alokace neselhala
    {
        A->delka=delka;                        //nastavujeme delku vektoru
        A->pole=malloc(sizeof(int)*delka);                        //dynamicky alokujeme pole vektoru
    }
    return A;                          //vracime vektor
}

void nactiVektor(vektor* A)             
{
    if (A == NULL || A->pole == NULL) return;
    for (int i = 0; i < A->delka; i++) {
        if (scanf("%d", &A->pole[i]) != 1) { //pokud neco nejde, doplnime zbyvajici nulami
            for (int j = i; j < A->delka; j++) A->pole[j] = 0;
            break;
        }
    }
}

void vypisVektor(vektor* A)              
{
    /*???*/
    if(A == NULL || A->delka == NULL)
    {
        for(int i = 0; i < A->delka; i++)
        {
            printf("%d,", A->pole[i])
        }
    }

}

vektor* konkatenace(vektor* A, vektor* B)
{
    /*???*/
    if(A==NULL || B==NULL) return NULL;
    int total = A->delka+B->delka;

    vektor* C = alokujVektor(total);
    if(C!=NULL || C->pole != NULL)
    {
        for(int i = 0; i < A->delka; i++) C->pole[i]=A->pole[i];

        for(int i = 0; i < B->delka; i++) C->pole[A->pole+i]=B->pole[i];
        return C;
    }

}

bool jeMnozina(vektor* A)                  
{
    /*???*/
}

void uvolniVektor(vektor* A)
{
    /*???*/
}

vektor* prunik(vektor* A, vektor* B)
{
    /*???*/
}

int main()
{
    vektor* A = alokujVektor(4);               // alokujeme vektor A (a jeho pole)
    vektor* B = alokujVektor(3);               // alokujeme vektor B (a jeho pole)

    if (A == NULL || A->pole == NULL || B == NULL || B->pole == NULL) // osetreni alokace
    { 
        uvolniVektor(B);                       // uvolnujeme vektor B (pokud by se jedna z alokaci podarila)
        uvolniVektor(A);                       // uvolnujeme vektor A (pokud by se jedna z alokaci podarila)
        fprintf(stderr, "Alokace selhala\n");
        return 1;
    }

    nactiVektor(A);                            // do vektoru A nacitame vstup
    nactiVektor(B);                            // do vektoru B nacitame vstup
    
    printf("Vektor A:\n"); 
    vypisVektor(A);                            // vypisujeme vektor A
    printf("Vektor B:\n");
    vypisVektor(B);                            // vypisujeme vektor B

    vektor* C = konkatenace(A, B);             // vektor C je konkatenaci vektoru A a B
    if (C == NULL || C->pole == NULL)          // osetreni alokace
    {         
        uvolniVektor(C);                       // uvolnujeme vektor C (pokud by se jedna z alokaci podarila)
        uvolniVektor(B);                       // uvolnujeme vektor B
        uvolniVektor(A);                       // uvolnujeme vektor A
        fprintf(stderr, "Alokace konkatenace selhala\n");
        return 3;
    }

    printf("Konkatenace:\n");
    vypisVektor(C);                            // vypisujeme vektor C

    if (!jeMnozina(A) || !jeMnozina(B))        // osetreni vstupu
    {       
        fprintf(stderr, "Nektery z vektoru neni mnozina\n");
        uvolniVektor(C);                       // uvolnujeme vektor C
        uvolniVektor(B);                       // uvolnujeme vektor B
        uvolniVektor(A);                       // uvolnujeme vektor A
        return 2;
    }

    printf("Oba vektory jsou mnoziny\n");
    uvolniVektor(C);                           // uvolnujeme vektor C
    C = prunik(A, B);                          // C je prunikem A a B

    if (C == NULL || C->pole == NULL)          // osetreni alokace
    {       
        uvolniVektor(C);                       // uvolnujeme vektor C (pokud by se jedna z alokaci podarila)
        uvolniVektor(B);                       // uvolnujeme vektor B
        uvolniVektor(A);                       // uvolnujeme vektor A
        fprintf(stderr, "Alokace pruniku selhala\n");
        return 4;
    }

    printf("Prunik:\n");
    vypisVektor(C);                            // vypisujeme vektor C

    uvolniVektor(C);                           // uvolnujeme vektor C
    uvolniVektor(B);                           // uvolnujeme vektor B
    uvolniVektor(A);                           // uvolnujeme vektor A
    return 0;
}