#include "character-to-binary.h"
#include "string-to-word.h"
#include "source-to-sentences.h"

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
  //char  string_to_convert[] = "This is it\n Ici c'est Paris";
  //char * token = strtok(string_to_convert, "\n");
  //string_to_word(token);
  //printf("%s\n", argv[1]);
  source_text_to_sentences(argv[1]);
  exit(0);
}