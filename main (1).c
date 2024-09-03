#include <stdio.h>
#include <string.h>

int main(void) {
  char frase[15], letraA[] = "Aa";
  int letra = 0, j;

  printf("Digite uma frase qualquer: ");
  scanf("%[^\n]", frase);

  for (int i = 0; frase[i] != '\0'; i++) {
      j = 0;
      while (j < strlen(letraA) && frase[i] != letraA[j])
          j++;
      if (j < strlen(letraA))
        letra++;
  }

  printf("A frase \"%s\" possui %d letra(s) A.\n", frase, letra);
  
  return 0;
}