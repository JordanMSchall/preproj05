#include "csci4500utils.h"
#include <stdio.h>
#include <string.h>


int main (){
	// constants 
	char * batchLine;
	int BUF_SIZE = 1024;
	char * delim = ";";

	while (1){
		readline(0, batchLine, BUF_SIZE);
		printf( "Batchline: %s\n", batchLine );

		// read command token
		char * job = strtok(batchLine, delim);

		while( job != NULL ) {
			printf( "Job: %s\n", job );
			char * command = strtok(job, "&&");

			while (command != NULL){
		  		printf( "Command: %s\n", command );
		  		command = strtok(NULL, "&&");
			}
	      
	      job = strtok(NULL, delim);
	      
   		}

   
		
	}
}

