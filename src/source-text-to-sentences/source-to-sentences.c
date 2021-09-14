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
  // open the file to output to
  char *output_file_name = "text-to-binary.txt";
  FILE *output_file = fopen(output_file_name, "w");
  if(output_file == NULL){
    printf("Failed to open the output file! Exiting...\n");
  }
  while(getline(&lineptr, &n, source_text) != -1){
    fputs(lineptr, output_file);
    fputc('\n', output_file);
    char * token = strtok(lineptr, "\n");
    string_to_word(token, output_file);
  }
  // close opened file
  fclose(source_text);
  fclose(output_file);
}