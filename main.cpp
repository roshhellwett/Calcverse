#include <stdio.h>
#include <math.h>

double simpleFunc(double p, double r, double t);

double compoundFunc(double p, double r, double t, double n);

double discountFunc(double fv, double pv, double n);

int main()
{
    printf("\n----CREATED BY ROSHHELLWETT----\n");
    int user_cho;
    double p, r, n, t, pv, fv;
    printf("Please Enter Your Choice: ");
    printf("\n");
    printf("1. Simple Interest\n2. Compound Interest\n3. Discount Rate\n");
    scanf("%d", &user_cho);
    switch (user_cho) {
        case 1: {
            printf("\nEnter Your Principal : ");
            scanf("%lf", &p);
            printf("\nEnter Your Rate : ");
            scanf("%lf", &r);
            printf("\nEnter Your Time in Years : ");
            scanf("%lf", &t);

            double result = simpleFunc(p, r, t);

            printf("\nThe result is %.2lf", result);
            break;
        }
        case 2: {
            printf("\nEnter Your Principal :");
            scanf("%lf", &p);
            printf("\nEnter Your Rate :");
            scanf("%lf", &r);
            printf("\nEnter Your Time in Years :");
            scanf("%lf", &t);
            printf("\nEnter Number of Times Interest is Compounded per Year :");
            scanf("%lf", &n);

            double result = compoundFunc(p, r, t, n);

            printf("\nThe result is %.2lf", result - p);
            break;
        }
        case 3: {
            printf("\nEnter Future Value :");
            scanf("%lf", &fv);
            printf("\nEnter Present Value :");
            scanf("%lf", &pv);
            printf("\nEnter Your Number of Periods :");
            scanf("%lf", &n);

            double result = discountFunc(fv, pv, n);

            printf("\nThe result is %.2lf%%", result * 100);
            break;
        }
        default:
            printf("\nWrong Choice !\n");
    }
    return 0;
}

double simpleFunc(double p, double r, double t) {
    return (p * r * t) / 100;
}

double compoundFunc(double p, double r, double t, double n) {
    return p * pow((1 + r / 100), t);
}

double discountFunc(double fv, double pv, double n) {
    return pow(fv / pv, 1.0 / n) - 1;
}
