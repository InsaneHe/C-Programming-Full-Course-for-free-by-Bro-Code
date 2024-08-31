#include <stdio.h>

double square(double x)
// Here before "square()" we need to specify the data type we will return
{
    double result = x * x;
    return result;
}

int main()
{
    // return = returns a value back to a calling function

    double x = square(3.14);
    printf("%lf", x);

    return 0;
}