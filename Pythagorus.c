#include <stdio.h>
#include <math.h>

int main() {
    double a, b;
    
    scanf("%lf %lf", &a, &b);

    printf("%.6f", sqrt(a*a+b*b));

    return 0;
}