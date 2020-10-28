#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

int main(int argc, char ** argv){
	int a,b;
	if(argc == 1){
		a = 0;
		b = 100;
		intro();
		show_num_range(a,b);
	}
	else if(argc == 2){
		a = 0;
		char z[120];
		int w;
		w = sscanf(argv[1],"%d%s",&b,z);
		if(w == 1){
			if( a >= b){
				printf("inavlid assignment\n");
				return 0;
			}
			intro();
			show_num_range(a,b);
		}
		else{
			printf("You number is not good enough\n");
			return 0;
		}
	}
	else if(argc == 3){
		char x[120];
		char y[120];
		int l, v;
		l = sscanf(argv[1],"%d%s",&a,x);
		v = sscanf(argv[2],"%d%s",&b,y);
		if((l == 1) && (v == 1)){
			if(a >= b){
				printf("Invalid assignment\n");
				return 0;
			}
			intro();
			show_num_range(a,b);
		}
		
		else{
			printf("You numbers are not good enough\n");
			return 0;
		}
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
		if(a > b){
			printf("You did something weird with your number. Disqualified\n");
			return 0;
		}
	}
}

    
