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
	char enter_u[4];
	fgets(enter_u,4,stdin);
	int i,e,j;
	for(i= 0;i < c;i++){
		j = i+1;
 		e = firstGuess(a,b);
		printf("Guess %d = %d is my guess correct?",j,e);
		char f;
		f = getAnswer();
		if(f == 'c'){
			printf("That was easy.\n");
			break;
		}
		else if(f == 'l'){
			a=guessNum(e,f);
			
		}
		else if(f == 'h'){
			b=guessNum(e,f);
			
		}
	}
}

    
