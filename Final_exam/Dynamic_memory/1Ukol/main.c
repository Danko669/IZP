//== knihovny ==
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//== deklarace funkci ==
int* vektorovySoucet (int delka, int arrA[], int arrB[]);
int* skalarniSoucin (int delka, int arrA[], int arrB[]);
char* konkatenaceRetezcu (char strA[], char strB[]);

//== definice funkci ==
int* vektorovySoucet (int delka, int arrA[], int arrB[])
{
    int* arrC = malloc(delka * sizeof(int));                   //dynamicky alokujeme pole

    if (arrC != NULL)                              //pokud alokace uspela
    {
        /*???*/                                    //spocitame vektorovy soucet
        for(int i=0; i < delka; i++)
        {
            arrC[i]=arrA[i]+arrB[i];
        }
    }                                    

    return arrC;                                   //vracime nove pole
}

int* skalarniSoucin (int delka, int arrA[], int arrB[])
{
    int* soucin = malloc(sizeof(int));
    
    if (soucin != NULL)
    {
        *soucin = 0;                         // inicializace akumulátoru
        for (int i = 0; i < delka; i++)
        {
            *soucin += arrA[i] * arrB[i];   // přičítáme hodnoty, ne posouváme ukazatel
        }
    }
    return soucin;
}

char* konkatenaceRetezcu (char strA[], char strB[])
{
    /*???*/
    int lenA = strlen(strA);
    int lenB = strlen(strB);

    char* vysledek=malloc(lenA+lenB+1);
    if(vysledek != NULL)
    {
        memcpy(vysledek, strA, lenA);
        memcpy(vysledek + lenA, strB, lenB);
        vysledek[lenA+lenB] = '\0';
    }
    return vysledek;
}

int main()
{
    int arrA[3] = {10, 20, 30};                    //prvni pole cisel
    int arrB[3] = {40, 50, 60};                    //druhe pole cisel
    char strA[6] = "Hello";                        //prvni textovy retezec
    char strB[5] = "Ahoj";                         //druhy textovy retezec

    int* arrC = vektorovySoucet(3, arrA, arrB);    //volame funkci soucet

    if (arrC != NULL)                              //pokud alokace uspela
    {                            
        printf("Soucet: ");
        for (int i = 0; i < 3; i++)                //pro vsechny prvky pole
        {
            printf("%i ", arrC[i]);                //vypisujeme jednotlive soucty
        }
        printf("\n");                              //vypisujeme konec radku
    }

    int* soucin = skalarniSoucin(3, arrA, arrB);   //volame funkci soucin

    if (soucin != NULL)                            //pokud alokace uspela
        printf("Soucin: %i\n", *soucin);           //vypisujeme soucin

    char* strC = konkatenaceRetezcu(strA, strB);   //volame funkci konkatenace

    if (strC != NULL)                              //pokud alokace uspela
        printf("Konkatenace: %s\n", strC);         //vypisujeme konkatenaci    

    if (arrC != NULL)                              //pokud alokace pole pro soucet uspela
        free(arrC);                                //uvolnujeme dynamicky alokovanou pamet
    if (soucin != NULL)                            //pokud alokace cisla pro soucin uspela
        free(soucin);                              //uvolnujeme dynamicky alokovanou pamet
    if (strC != NULL)                              //pokud alokace pole pro konkatenaci
        free(strC);                                //uvolnujeme dynamicky alokovanou pamet

    return 0;                                      //konec programu
}