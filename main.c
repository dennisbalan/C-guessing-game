#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

int main(int argc, char ** argv){
	/*a and b are the number ranges for the guessing game. default 0 to 100. 1 cmd line arg is 0 to arg, 2 comd line arg are arg to arg2*/
	int a,b;
	if(argc == 1){
		/*no arg, default range 0 - 100 */
		a = 0;
		b = 100;
		/*show intro*/
		intro();
		/*show num range*/
		show_num_range(a,b);
	}
	else if(argc == 2){
		/*1 command line arg*/
		a = 0;
		char z[120];
		int w;
		/*scan for z, argv[1] and converts to b. If there is anything more than an int */
		w = sscanf(argv[1],"%d%s",&b,z);
		/*checks to see if there is just one arguement. no decimal points, valid integer*/
		if(w == 1){
			if( a >= b){
				/*checks if a > b*/
				printf("invalid assignment\n");
				return 0;
			}
			/*intro and show number range*/
			intro();
			show_num_range(a,b);
		}
		/*terminates program when else executes.*/
		else{
			printf("You number is not good enough\n");
			return 0;
		}
	}
	else if(argc == 3){
		/*parses argv[1] and argv[2] seperately*/
		char x[120];
		char y[120];
		int l, v;
		l = sscanf(argv[1],"%d%s",&a,x);
		v = sscanf(argv[2],"%d%s",&b,y);
		/*checks to see if both arg 1 and arg 2 are valid*/
		if((l == 1) && (v == 1)){
			/*checks to see if a > b, which is invalid. terminates if condition true*/
			if(a >= b){
				printf("Invalid assignment\n");
				return 0;
			}
			/*show intro and num range*/
			intro();
			show_num_range(a,b);
		}
		/*terminates program if else*/
		else{
			printf("You numbers are not good enough\n");
			return 0;
		}
	}
	/*terminates if too many command line args*/
	else{
		printf("too many arguements\n");
		return 0;
	}
	/*c is number of guesses. c is the max number of guesses. Is found with the preduct function*/
	int c;
	c = predict(a,b);
	/*enter key*/
	char enter_u[4];
	fgets(enter_u,4,stdin);
	/*print c or number of guesses*/
	printf("I will try to guess you number in %d guesses.\n",c);
	/*i is the inc value, e is the number the computer guess. j is the number if guesses in human speak*/
	int i,e,j;
	/*loops until c is reached*/
	for(i= 0;i < c;i++){
		/*j is inc, which starts at 0, plus 1*/
		j = i+1;
		/*e, the computer guess is found in firstGuess func. e and j are printed*/
 		e = firstGuess(a,b);
		printf("Guess %d = %d is my guess correct?",j,e);
		/*f is the input the user gives to the getAnswer func*/
		char f;
		f = getAnswer();
		/*if f is c, terminate, guess correct*/
		if(f == 'c'){
			printf("That was easy.\n");
			break;
		}
		/*if f is l,computer guess is the low num. a is set to e*/
		else if(f == 'l'){
			a=guessNum(e,f);
			
		}
		/*if f is h, computer guess is the high num. b is set e*/
		else if(f == 'h'){
			b=guessNum(e,f);
			
		}
		/*if a is > b, cheating detected. terminate*/
		if(a > b){
			printf("You did something weird with your number. Disqualified\n");
			return 0;
		}
	}
}

    
