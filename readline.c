#include "csci4500utils.h"
#include <stdio.h>
#include <unistd.h>

int readline( int fd, char *buf, int bufsz ){
	int rval = 1; 
	char c;


	while (1){

		int result = read(fd, &c, 1);

		if ( result == -1 ){
			return -1;
		} else if ( result == 0 ){
			return 0;
		}

		if ( rval - 1 >= bufsz){
			return rval;
		}

		if (c == '\n'){
			c = '\0';
			buf[rval - 1] = c;
			return rval;
		}

		if ( rval - 1 >= bufsz){
			return rval;
		}

		buf[rval - 1] = c;

	  rval++;

	}  
	  return rval;
}