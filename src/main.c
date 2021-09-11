#include <stdio.h>
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

char * character_to_binary(char character_to_convert){
  char *rpz_binaire = NULL ;
  char *final_rpztation= NULL;
  
  int str_length = 0;
  int *str_length_ptr = (int*) &str_length;

  // Character to binary
  rpz_binaire = decimal_to_binary(character_to_convert, str_length_ptr, rpz_binaire);
  final_rpztation = reverse_char_array(rpz_binaire, str_length_ptr, final_rpztation); 

  // Display results
  printf("%s\n%s\n",rpz_binaire, final_rpztation);   
  return final_rpztation;
}

int main(int argc, char *argv[]){
/*   char *input_string = set_text_source(argv[1]); */
  character_to_binary('c');
  exit(0);
}