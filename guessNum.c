int guessNum(int guess, char a){
	int b;
	if(a == 'l'){
		b = guess++;
		return b;
	}
	else if(a == 'h'){
		b = guess - 1;
		return b;
	}}	
