#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
  int x, aleatorio,c=0;
  srand( time(NULL) );
  aleatorio = rand() % 21;
  printf("Adivinhe o numero aleatorio de 0 a 20\n");
  for (c=0;c<5;c++){
  scanf("%d",&x);
  if (x == aleatorio) {
    printf("Acertou *\\|)ouo)/*");
  } else {
    printf("Tente novamente\n");
      }
    }
  return 0;
}

