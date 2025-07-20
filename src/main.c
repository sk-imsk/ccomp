#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/types.h>
typedef char* file_name_t;


int compress(file_name_t from, file_name_t dst){
	return -ENOTSUP;


}

int decompress (file_name_t from, file_name_t dst){
	return -ENOTSUP;
}




int main(void){
	compress("135", "23");
	return 0;
}
