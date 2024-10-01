//program to find compound interest
#include<stdio.h>
#include<math.h>

int main(){
    //declearing intialization
    float principal;
    float rate;
    int time;
    int n;
    float CI;
    float amount;

    printf("enter princial");
    scanf("%f",&principal);
    printf("enter rate");
    scanf("%f",&rate);
    printf("enter time");
    scanf("%d",&time);
    printf("enter n");
    scanf("%d",&n);
    printf("enter amount");
    scanf("%f",&amount);
    //formula to calculate compount interest
    amount = principal*pow((1+rate/n),n*time);
    CI=amount-principal;
    printf("compount interestis%f\n",CI);
    return 0;
}

