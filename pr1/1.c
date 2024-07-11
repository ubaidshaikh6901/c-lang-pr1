#include<stdio.h>
int main(){
    int c,f;  // Celcius (c) , Fahrenheit(f)
    printf("enter temprature in celcius :");
    scanf("%d",&c);

    f=(9/5 * c)+32;
    printf("temperature from degrees Celsius to Fahrenheit is : %d",f);

    return 0;
}