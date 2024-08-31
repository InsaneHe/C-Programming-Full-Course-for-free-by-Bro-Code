#include <stdio.h>
#include <math.h>

int main(){

    double A = sqrt(9);
    double B = pow(2, 4);
    int C = round(3.14);
    int D = ceil(3.14); // "ceil()" is used to round a number up
    int E = floor(3.99); // "floor()" is used to round a number down
    double F = fabs(-100); // "fabs()" is used to find the absolute value of a number
    double G = log(3); // "log()" is used to find the logarithm of a number
    double H = sin(45); // "sin()" is used to find the sine of a number
    double I = cos(45); // "cos()" is used to find the cosine of a number
    double J = tan(45); // "tan()" is used to find the tangent of a number

    printf("\n%lf", A);
    printf("\n%lf", B);
    printf("\n%d", C);
    printf("\n%d", D);
    printf("\n%d", E);
    printf("\n%lf", F);
    printf("\n%lf", G);
    printf("\n%lf", H);
    printf("\n%lf", I);
    printf("\n%lf", J);
}