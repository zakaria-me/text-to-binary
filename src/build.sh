#!/usr/bin/bash
OPTION1="character-to-binary"
OPTION2="main"

if [ $1 == $OPTION1 ]; then 
gcc ./character-to-binary/character-to-binary-test.c ./character-to-binary/character-to-binary.c -o executable -I ./character-to-binary/;
fi

if [ $1 == $OPTION2 ]; then
gcc main.c  ./character-to-binary/character-to-binary.c -o executable -I ./character-to-binary/;
fi

./executable

rm -rf executable