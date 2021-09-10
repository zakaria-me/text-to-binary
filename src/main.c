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
    if(result_modulo == 1){
      rpz_binaire[*str_length_ptr] = '1';
    }else if(result_modulo == 0){
      rpz_binaire[*str_length_ptr] = '0';
    }
    character /= 2;
    ++*(str_length_ptr);
   }    
   printf("%s\n", rpz_binaire);
   return rpz_binaire;
}

char* reverse_char_array(char *rpz_binaire, int *str_length_ptr, char* final_rpztation){
   for(int index = 0; index <= *str_length_ptr; ++index){
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
/*   char *input_string = set_text_source(argv[1]);
  decimal_to_binary(input_string); */
  char character = 'c';
  int result_modulo;
  char rpz_binaire[100] = "" ;
  char final_rpztation[100]= "";
  int str_length = 0;
  int *str_length_ptr = (int*) &str_length;
  decimal_to_binary(character, str_length_ptr, rpz_binaire);
  reverse_char_array(rpz_binaire, str_length_ptr, final_rpztation); 
  printf("%s\n%ld\n", final_rpztation, sizeof(final_rpztation)); 
  exit(0);
}