#include "string-to-word.h"
#include "character-to-binary.h"

void word_to_characters(char *string_array){
  for(int index = 0; string_array[index] != '\0' ; ++index){
    //printf("%c\n%d\n", string_array[index], strlen(string_array));
    character_to_binary(string_array[index]);
  }
}

void string_to_word(char * string_to_convert)
{
  char* token = strtok(string_to_convert, " ");
   while(token != NULL){
    printf("token: %s\n", token);
    word_to_characters(token);
    token = strtok(NULL, " ");
  } 
} 
