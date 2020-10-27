#include <math.h>
int predict(int low, int high){
	double a,b;
	int c;
	a = (double) high - low;
	b = 1+log(1+a);
	c = (int) b;
	return c;
}
