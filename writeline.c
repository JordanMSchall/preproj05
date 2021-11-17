#include "csci4500utils.h"
#include <stdio.h>
#include <unistd.h>

int writeline( int fd, const char *str ) {
  
  int result = 0;
  int rval = 1; 
  char c = str[rval - 1];


  while (rval < 256){

  	if ( c == '\0' ){
  		c = '\n';
			result = write(fd, &c, 1);
  		if ( result == - 1 ){
  			return - 1;
  		}
  		return rval++;
  	}

  	result = write(fd, &c, 1);

  	if ( result == -1 ){
  		return -1;
  	}

  	rval++;
  	c = str[rval - 1];

  }

  return rval;
}