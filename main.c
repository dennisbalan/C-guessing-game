#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char ** argv){
	intro();
	if(argc == 1){
		show_num_range(0,100);
	}
	else if(argc == 2){
		int a;
		sscanf(argv[1],"%d",&a);
		show_num_range(0,a);
	}
	else if(argc == 3){
		int b,c;
		sscanf(argv[1],"%d",&b);
		sscanf(argv[1],"%d",&c);
		show_num_range(b,c);
	}
	else{
		printf("too many arguements\n");
		return 0;
	}


}
