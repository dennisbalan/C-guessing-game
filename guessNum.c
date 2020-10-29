/*converts guess to high or low, depending on user stating if guess is high or low*/
int guessNum(int guess, char a){
	int b;
	if(a == 'l'){
		/*if guess is too low, add 1 to the guess and convert to low*/
		b = guess + 1;
		return b;
	}
	else if(a == 'h'){
		/*if guess is too high, subtract 1 to the guess and convert to high*/
		b = guess - 1;
		return b;
	}}	
