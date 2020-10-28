#include <math.h>
int predict(int low, int high){
	double a,b,f,h,j;
	int c;
	a = (double) high;
	h = (double) low;
	j = a - h;
	b = log2(1+j);
	f = 1 + b;
	c = (int) f;
	return c;
}
