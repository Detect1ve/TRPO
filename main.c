#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c, d, x1, x2;

	printf("Input value: ");
	scanf("%d%d%d", &a, &b, &c);
	d = b * b - 4 * a * c;
	if(x >= 0)
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
	}
	if(x < 0)
	{
		puts("Negative discriminant");
		return 0;
	}
	return 0;
}
