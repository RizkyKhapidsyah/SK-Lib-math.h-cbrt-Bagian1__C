#include <stdio.h>      /* printf */
#include <math.h>       /* cbrt */
#include <conio.h>

int main() {
	double x, hasil;
	x = 674.0;
	hasil = cbrt(x);
	printf("cbrt (%f) = %f\n", x, hasil);
	
	_getch();
	return 0;
}