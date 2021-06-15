#include "kernel/types.h"
#include "user/user.h"

int main(int argn, char *argv[]){
	if(argn != 2){
        //int fprintf(FILE *stream, const char *format, ...) 
		fprintf(2, "must input 1 argument for sleep\n");
		exit(1);
	}
	int sleep_time = atoi(argv[1]);
	printf("(nothing happens for a little while)\n");
	sleep(sleep_time);
	exit(0);
}
