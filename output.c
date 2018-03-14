//Function definition of output_results()
#include <stdio.h>
#include "score.h"

void output_results(const int m[], const int stat[]){
	int i;
	printf("Here are the marks: \n");
	for (i=0; i <MAX && m[i] != -1; i++){
		printf("%d ", m[i]);
	}
	printf("\n");
	printf("Here are the statistics: \n");
	for (i=0; i<6; i++){
	printf("Marks %d: %d hits \n", i, stat[i]);
	}
}
