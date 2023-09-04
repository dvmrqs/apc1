#include <stdio.h>

int global = 10;

int main () {
  int local = 5;

  printf("global = %i, local = %i\n", global, local);

  {
    float local = 2.5f;
    printf("global = %i, local = %f\n", global, local);
  }

  printf("global = %i, local = %i\n", global, local);
  
  return 0;
  } 