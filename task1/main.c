#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	double x, y, Y;
	y = 1;
	x = 0;
	Y = 2;
	printf("x        y\n");
	while (Y - y >= 0.000001)
	{
		Y = y;
		y *= 0.999;
		x += 0.001;
		printf("%f    %f\n", x, y);
	}

	return 0;
}