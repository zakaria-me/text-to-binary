#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

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
  char character = '5';
  char *rpz_binaire = NULL ;
  char *final_rpztation= NULL;
  
  int str_length = 0;
  int *str_length_ptr = (int*) &str_length;

  // Character to binary
  rpz_binaire = decimal_to_binary(character, str_length_ptr, rpz_binaire);
  final_rpztation = reverse_char_array(rpz_binaire, str_length_ptr, final_rpztation); 

  // Display results
  printf("%s\n%s\n",rpz_binaire, final_rpztation);   
  exit(0);
}