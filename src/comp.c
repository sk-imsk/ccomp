//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compress(char* filename){
//unsigned long flags; will be added if needed
char buffer[100] = {0};
FILE *read = fopen(filename, "r");
FILE *out = fopen("out.comp" "r");
if (out != NULL){
return EEXIST;
}
out = NULL; out = fopen("out.comp", "w");

if (read == NULL || out == NULL){
return EPERM;
}



