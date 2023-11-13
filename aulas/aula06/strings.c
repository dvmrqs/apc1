#include <stdio.h>
#include <string.h>

int main() {
  char string[31]; // terminar com '/0'

  // problemas
  // string = "Uma string";
  // string = string + "outra string";
  // string == "uma string"; 

  //preencher um caracter
  memset(string, 'a', 10); // aaaaaaaaaa
  printf("%s\n", string);
  
  //copiar uma string
  strcpy(string, "uma string");
  printf("%s\n", string);
  
  // concatear uma string
  strcat(string, "outra string");
  printf("%s\n", string);
  
  //comparar uma string
  printf("sao iguais? %i\n", strcpm(string, "Uma string"));
  
  //tamanho da string
  printf("tamanho = %i\n", strlen(string));


  return 0;
}