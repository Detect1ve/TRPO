#include <stdio.h>
#include <math.h>

enum
{
    NUMBER_OF_READ_PARAMETERS = 3,
};

int main(void)
{
    float a;
    float b;
    float c;
    float d;
    float x1;
    float x2;
    int count_of_parameters;
    int ret = 0;

    printf("Input value: ");
    count_of_parameters = scanf("%f%f%f", &a, &b, &c);
    if (NUMBER_OF_READ_PARAMETERS != count_of_parameters)
    {
        fprintf(stderr, "Wrong number of arguments\n");
        ret = -1;
        goto finally;
    }

    d = b * b - 4 * a * c;

    if (d < 0)
    {
        fprintf(stderr, "Negative discriminant\n");
        ret = -2;
        goto finally;
    }
    else if (d >= 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
    }

    printf("x1 = %.6f, x2 = %.6f\n", x1, x2);

 finally:

    return ret;
}
