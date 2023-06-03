/**
#include <stdio.h>

int main(void) {
  
  char c;
  printf("Do you agree? ");
  scanf("%c", &c);

  if (c == 'Y' || c == 'y')
    printf("Agreed.\n");
  else if (c == 'N' || c == 'n')
    printf("Not agreed.\n");
    }
**/ // retorna um valor diferente para cada resposta; compreendi :)

/**
#include <stdio.h>

int main(int argc, char *argv[]) {

  if (argc == 2)
    printf("hello %s, I am %s.\n",
           argv[1], argv[0]);
  else
    printf("hello, I am %s\n", argv[0]);

}
**/ //retorna uma msg com o argv[1] e o nome do arq; compreendi :)

/**
#include <stdio.h>

int main(int argc, char *argv[]) {
  
  for (int i = 0; i < argc; i++) {
    printf("%s\n", argv[i]);
  }

}
**/ //retorna os valores recebidos; compreendi :)

/**
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  
    for (int i = 0; i < argc; i++) {
      for (int j = 0, n = strlen(argv[i]); j < n; j++) {
	printf("%c\n", argv[i][j]);
      }
      printf("\n");
    }
}
**/ // retorna as strings dos args, uma char por linha; compreendi :)

/** 
#include <stdio.h>

int main(void)
{
  long x, y;

  printf("x: "); scanf("%li", &x);
  printf("y: "); scanf("%li", &y);

  printf("%li\n", x + y);
}
**/ //falta estudar tipos de variaveis

/**
#include <stdio.h>

int main(void)
{
  int x, y;

  printf("x: "); scanf("%d", &x);
  printf("y: "); scanf("%d", &y);

  float z = (float) x /(float)  y; 

  printf("%f\n", z);
}
**/









