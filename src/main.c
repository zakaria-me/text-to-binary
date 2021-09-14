#include "character-to-binary.h"
#include "string-to-word.h"
#include "source-to-sentences.h"

int main(int argc, char *argv[]){
  source_text_to_sentences(argv[1]);
  exit(0);
}