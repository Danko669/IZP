#include <stdio.h>

int rekfoo(int n) {
if (n == 0) {
return 0;
} else if (n == 1) {
return 1;
} else {
return rekfoo(n - 1) + rekfoo(n - 2);
}
}

/**
Jaký je význam podmíněných výrazů? Odpověď:
Podminky jsou nezbytne, jelikoz by doslo k zacykleni.

-----------------------------------------------------------------------
Jaký je problém při volání funkce s vysokou hodnotou parametru? Odpověď
Bude to trvat hrozne dlouho.


**/

int main() {
  printf("Hello World!");
  return 0;
}
