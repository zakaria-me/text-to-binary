#include <assert.h>
#include "character-to-binary.h"

int main(int argc, char const *argv[])
{
  assert(2 == 2);
  assert(("1100011" == character_to_binary('c')) == 0);
  printf("All tests passed!\n");
  exit(0); 
}
