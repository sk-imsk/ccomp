//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compress(char* filename){
unsigned long flags;
char buffer[100] = {0};

FILE *read = fopen(filename, "r");
FILE *out = fopen("out.comp" "w");
if (read == NULL || out == NULL){
return EPERM;
}


(void)fread(buffer, 100, 1, out);
if (strncmp(buffer, "\0", 1)){
return EEXIST;
}
