#include <stdlib.h>
#include "character-to-binary.h"
#include "string-to-word.h"

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
  char  string_to_convert[] = "This is it\n Ici";
  string_to_word(string_to_convert);
  //printf("%s\n", argv[1]);
  exit(0);
}