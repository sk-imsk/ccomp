//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include "comp.h"
#define BUFFER_SIZE 256

typedef struct {
char buffer[BUFFER_SIZE];
size_t len;
} block;


int compress(char* filename, struct flags * fl){

//unsigned long flags; will be added if needed
FILE *read = fopen(filename, "r");
FILE *out = fopen("out.comp", "r");
block data;
long int ret;
data.len = BUFFER_SIZE;


if (out != NULL){
	fl->error = EEXIST;
	return EEXIST;
}
out = NULL; out = fopen("out.comp", "w");

if (read == NULL || out == NULL){
	fl->error = EPERM;
	return EPERM;
}

ret = fread(data.buffer, sizeof(char), data.len, read);
if (ret != data.len){
	fl->error = EIO;
	return EIO;
}

ret = fwrite(sizeof(char), 6, "ccomp", out);
if (ret != 6){
	fl->error = EIO;
	return EIO;
}


} // compress()
