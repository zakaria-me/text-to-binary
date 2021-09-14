#include "string-to-word.h"
#include "character-to-binary.h"

void word_to_characters(char *string_array, FILE * output_file){
  for(int index = 0; string_array[index] != '\0' ; ++index){
    character_to_binary(string_array[index], output_file);
  }
}

void string_to_word(char * string_to_convert, FILE * output_file)
{
  char* token = strtok(string_to_convert, " ");
   while(token != NULL){
     // Send output to file
    fputs(token, output_file);
    fputc('\n', output_file);
    word_to_characters(token, output_file);
    token = strtok(NULL, " ");
  } 
} 
