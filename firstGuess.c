int firstGuess(int low, int high){
	/*finds the guess. low and high converted to double and th firstGuess finds the average*/
	double a,b,d,f;
	/*converts low and high to double*/
	a = (double)low;
	d = (double)high;
	/*a and d added*/
	f = a + d;
	/*f divided by 2*/
	b = f/2;
	/*b converted to int*/
	int c;
	c = (int) b;
	/*function returns b*/
	return b;
}
