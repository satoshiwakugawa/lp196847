#include <stdio.h>

int main()
{
    float F1, F2;
    double D1, D2;
    
    scanf("%f %f %lf %lf", &F1, &F2, &D1, &D2);
    printf("A = %f, B = %f\n", F1, F2);
    printf("C = %lf, D = %lf\n", D1, D2);
    printf("A = %.1f, B = %.1f\n", F1, F2);
    printf("C = %.1lf, D = %.1lf\n", D1, D2);
    printf("A = %.2f, B = %.2f\n", F1, F2);
    printf("C = %.2lf, D = %.2lf\n", D1, D2);
    printf("A = %.3f, B = %.3f\n", F1, F2);
    printf("C = %.3lf, D = %.3lf\n", D1, D2);
    printf("A = %.3E, B = %.3E\n", F1, F2);
    printf("C = %.3E, D = %.3E\n", D1, D2);
    printf("A = %.0f, B = %.0f\n", F1, F2);
    printf("C = %.0lf, D = %.0lf\n", D1, D2);

    return 0;
}
