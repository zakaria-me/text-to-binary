#!/usr/bin/bash
OPTION1="character-to-binary"
OPTION2="main"
OPTION3="exec"

if [ $1 == $OPTION1 ]; then 
  gcc ./character-to-binary/character-to-binary-test.c ./character-to-binary/character-to-binary.c -o executable -I ./character-to-binary/;
fi

if [ $1 == $OPTION2 ]; then
  gcc main.c  ./character-to-binary/character-to-binary.c ./string-to-word/split-string.c -o executable -I ./character-to-binary/ -I ./string-to-word;
fi

if [ $2 == $OPTION3 ]; then
  ./executable
  rm -rf executable
fi