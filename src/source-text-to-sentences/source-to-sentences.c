#include "character-to-binary.h"
#include "string-to-word.h"
#include "source-to-sentences.h"

void source_text_to_sentences(char * source_text_path){
  FILE *source_text = fopen(source_text_path, "r");
  if(source_text == NULL){
    printf("The file cannot be opened. Exiting...\n");
    exit(1);
  }
  
  if(setvbuf(source_text, NULL, _IOLBF, BUFSIZ)){
    printf("The file buffering failed!\n");
    exit(2);
  }
  char *lineptr = NULL;
  size_t n =  0;
  while(getline(&lineptr, &n, source_text) != -1){
    printf("%s\n", lineptr);
    char * token = strtok(lineptr, "\n");
    string_to_word(token);
  }
}