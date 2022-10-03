#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    double BMI,m,h;
    cin>>m>>h;
    BMI=m/(h*h);
    if (BMI<18.5)
        printf("Underweight");
    else
        if (BMI<24)
            printf("Normal");
        else
            cout<<BMI<<endl<<"Overweight";
    return 0;
}