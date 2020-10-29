#include <stdio.h>
/*function finds the user input l,h,c. these are the only values it returns*/
char getAnswer(){
	/*prompt user*/
	printf("Was my number too high, too low, or correct?\n");
	char a[120];
	char b;
	int c,d;
	/*d is set to 0 for infinite loop*/
	d = 0;
	while(d == 0){
		/*get input and parse. input is stored in b*/
		fgets(a,120, stdin);
		c = sscanf(a,"%c",&b);
		/*if just one arg ok*/
		if(c == 1){
			/*if b is c,l,or h, return that input to main*/
			if((b == 'c') || (b == 'h') || (b == 'l')){
				return b;
			} /*be in an infinite loop if else. continue to ask for valid input*/
			else{
				printf("wrong number");
				d = 0;
			}				
		}/*if too many args, continue to ask for valid input*/
		else{
			printf("too much stuff written in");
			d = 0;
		}	
	}	
}	

