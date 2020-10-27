#include <stdio.h>
char getAnswer(){
	printf("Was my number too high, too low, or correct?\n");
	char a[120];
	char b;
	int c,d;
	d = 0;
	while(d == 0){
		fgets(a,120, stdin);
		c = sscanf(a,"%c",&b);
		if(c == 1){
			if((b == 'c') || (b == 'h') || (b == 'l')){
				return b;
			}
			else{
				printf("wrong number");
				d = 0;
			}				
		}
		else{
			printf("too much stuff written in");
			d = 0;
		}	
	}	
}	

