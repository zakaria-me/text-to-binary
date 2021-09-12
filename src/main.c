#include <stdlib.h>
#include "character-to-binary.h"

char* set_text_source(char input_string[]){
/*  while (*input_string){
  printf("%c", *input_string);
  ++input_string;
 }
 printf("\n") */;
 return input_string;
}

int main(int argc, char *argv[]){
/*   char *input_string = set_text_source(argv[1]); */
  character_to_binary('c');
  exit(0);
}