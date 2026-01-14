#include <stdio.h>

/*
Mějme definici konstant určující dny v týdnu (MON=pondělí až SUN=neděle):
*/
enum DoW { MON, TUE, WED, THU, FRI, SAT, SUN, TOTAL_DAYS };
/*

Doplňte následující funkce, aby vrátily den v týdnu odpovídající zítřku a včerejšku.
Použijte pouze aritmetické operátory.
*/


int getTomorrow(enum DoW today) // vrací den v týdnu následující dni dle parametru today
{
    return (today+1)%7;
}

int getYesterday(enum DoW today) // vrací den v týdnu předcházející dni dle parametru today
{
    return (today+7-1)%7;
}

int main() {
  printf("Hello World!");
  return 0;
}
