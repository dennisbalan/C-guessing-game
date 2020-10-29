#include <math.h>
/*uses an algorithm to find the number of guesses needed based on low and high*/
int predict(int low, int high){
	double a,b,f,h,j;
	int c;
	/*convers a and h to double(a and b)*/
	a = (double) high;
	h = (double) low;
	/*find difference of a and b, save it in j*/
	j = a - h;
	/*find the binary log of j + 1, save it in b*/
	b = log2(1+j);
	/*add 1 to b, save it in f*/
	f = 1 + b;
	/*convert f to int c, return */
	c = (int) f;
	return c;
}
