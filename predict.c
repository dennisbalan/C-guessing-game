#include <math.h>
int predict(int low, int high){
	double a,b,f;
	int c;
	a = (double) high - low;
	b = log(1+a);
	f = 1 +b;
	c = (int) f;
	return c;
}
