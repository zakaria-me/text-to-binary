#include "character-to-binary.h"

char* decimal_to_binary(char character, int *str_length_ptr, char* rpz_binaire){
  int result_modulo;
  while(character!= 0){
    result_modulo = character % 2;
    rpz_binaire = realloc(rpz_binaire, sizeof(char) + 1);
    if(result_modulo == 1){
      rpz_binaire[*str_length_ptr] = '1';
    }else if(result_modulo == 0){
      rpz_binaire[*str_length_ptr] = '0';
    }
    character /= 2;
    ++*(str_length_ptr);
   }    
   return rpz_binaire;
}

char* reverse_char_array(char *rpz_binaire, int *str_length_ptr, char* final_rpztation){
   for(int index = 0; index <= *str_length_ptr; ++index){
     final_rpztation = realloc(final_rpztation, sizeof(char) + 1);
     final_rpztation[index] = rpz_binaire[*str_length_ptr - (index + 1)];
   }
   return final_rpztation;
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
  //printf("%s\n%s\n",rpz_binaire, final_rpztation);   
  return final_rpztation;
}