#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, d, x1, x2;

	printf("Input value: ");
	scanf("%f%f%f", &a, &b, &c);
	d = b * b - 4 * a * c;
	if (d < 0)
        {
                puts("Negative discriminant");
                return 0;
        }
	if (d >= 0)
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
	}
	printf("x1 = %.6f, x2 = %.6f\n", x1, x2);
	return 0;
}
