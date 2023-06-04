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

/**
#include <stdio.h>

int main(void)
{
    long x, y;

    printf("x: "); scanf("%li", &x);
    printf("y: "); scanf("%li", &y);

    // divide x by y
    float z = x / y;
    printf("%f\n", z);
}
**/ // o programa está truncando os valores inputados. Compreendido :)

/**
#include <stdio.h>

int main(void)
{
    float regular;
    printf("regular price: "); scanf("%f", &regular);
    
    float sale = regular * .85;
    printf("Sale Price: %.3f\n", sale);
}
**/ //ao escrever %nf, estamos setando n c. decimais. Compreendido :)

/**
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Missing arguments\n");
        return 1;
    }
    printf("hello, %s\n", argv[1]);
    return 0;
}
**/ //return fecha o processo de execução. Compreendido :)

/**
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main(void) {
  
  int n, d;
  char c = '0';
  
  while(true) {
    printf("width: ");
    d = scanf("%d", &n);
    printf("> d = %d n = %d\n", d, n);
    if ( d == 1 && n > 1 && n < 100 )
      break;
    if (d == 0) {
      do {
        c = getchar();
      }
      while (!isdigit(c));
      ungetc(c, stdin);
    }
  }
  
  for (int i = 0; i < n; i++)
    printf("?");
  printf("\n");
}
**/ //não compreendi a necessidade do if (d == 0) e sua função.

/**
#include <stdio.h>

int main(int argc, char *argv[]) {
  
  // check command-line arguments
  int n;

  if (argc != 2) {
    printf("Usage:\n parity NUMBER\n");
    return 1;
  } else {
    sscanf(argv[1], "%i", &n);
  }
  
  if (n % 2 == 0) 
    printf("even\n");
  else 
    printf("odd\n");
}
**/ //o sscanf puxa valores de uma variável string, não da stdin. Compreendi :)

#include <stdio.h>

int get_value(char prompt[]) {
  int tmp;
  do {
    printf("%s", prompt);
    scanf("%d", &tmp);
  } while (tmp <= 0);
  return tmp;
}

float average(int length, int array[])
{
  int sum = 0;
  for (int i = 0; i < length; i++)
    sum += array[i];
  return sum / (float) length;
}

int main(void)
{
  int n = get_value("How many scores? ");
  int scores[n];
  for (int i = 0; i < n; i++)
    scores[i] = get_value("Score: ");

  printf("Average: %f\n", average(n, scores));
}

