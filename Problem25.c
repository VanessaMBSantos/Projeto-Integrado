#include <stdio.h>

int main(void) {
  	int i = 0;
  	int j = 0;
  	int num1[120];
  	int num2[120];
  	int num3[120];
  	int counter = 0;
	
	for (i = 0; i < 120; i++) {
	  	num1[i] = 0;
	 	num2[i] = 0;
	  	num3[i] = 0;
	}
	
	num1[0] = 1;
	num2[0] = 1;
	counter = 2;
	i = 0;

	while (i == 0) {
	  	counter++;
	 	for (j = 0; j < 120; j++) {
	    	num3[j] = num2[j] + num1[j];
	  	}
	  	for (j = 0; j < 120-1; j++) {
	    	while (num3[j] >= 1000000000) {	
	    		num3[j] -= 1000000000;	
	    		num3[j+1]++;
	    	}
	  	}
	  	if (num3[111] >= 1)
	    	break;
	  	for (j = 0; j < 120; j++) {
	    	num1[j] = num2[j];
	    	num2[j] = num3[j];
	  	}
	}	
	printf("%d\n", counter);  
}

// Solução: 4782
