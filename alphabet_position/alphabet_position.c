#define _GNU_SOURCE
#include <ctype.h> //per la toupper()
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  l'idea e' quella di concatenare in una stringa (usando l'allocazione
  automatica) della asprintf (riga 21) il codice ASCII (shiftato di 64, riga 19)
  di ogni lettera  i-esima di text. (essendo 'A' == 65 in ASCII, lo shiftiamo
  sottraendo a 1). impostando tutte le lettere in capslock, quelle comprese da 1
  e 26 (riga 20) saranno le nostre lettere da aggiungere alla stringa
*/

char *alphabet_position(const char *text) {
  int dec = 0;
  char *str = " ";
  for (int i = 0; i < strlen(text); i++) {
    dec = (toupper(text[i]) - 64);
    if (dec >= 1 && dec <= 26)
      asprintf(&str, "%s %d", str, dec);
  }
  return str;
}

int main(int argc, char *argv[]) {
  printf("%s", alphabet_position("The sunset sets at twelve o' clock."));
  return 0;
}
