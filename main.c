#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

int main(int argc, char ** argv){
	intro();
	int a,b;
	if(argc == 1){
		a = 0;
		b = 100;
		show_num_range(a,b);
	}
	else if(argc == 2){
		a = 0;
		sscanf(argv[1],"%d",&b);
		show_num_range(a,b);
	}
	else if(argc == 3){
		sscanf(argv[1],"%d",&a);
		sscanf(argv[2],"%d",&b);
		show_num_range(a,b);
	}
	else{
		printf("too many arguements\n");
		return 0;
	}
	int c;
	c = predict(a,b);
	printf("I will try to guess you number in %d guesses.\n",c);
	int d,e;
	d = c-1;
	e = firstGuess(a,b);
	printf("Is the number %d?\n",e);
	char f;
	f = getAnswer();
	int j;
	char o;
	int i = 0;
 	while (i <= d){
		j = guessNum(e,f);
		printf("Is the number %d?\n",j);
		o = getAnswer();
		f = o;
		e = j;	
		if(f == 'c'){
			printf("Thanks for playing.\n");
			break;
                }
		i++;
	}
	


}
