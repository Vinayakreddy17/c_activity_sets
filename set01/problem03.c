#include <stdio.h>
int input();
int add(int a, int b);
void output(int a, int b, int sum);
int main()
{
    int a,b;
    a=input();
    b=input();
    int sum;
    sum=add(a,b);
    output(a,b,sum);
    return 0;
}
int input()
{
    int x;
    printf("Enter the numbers");
    scanf("%d",&x);
    return x;
}
int add(int a,int b)
{
    int sum=0;
    sum=a+b;
    return sum;
}
void output(int a,int b,int sum)
{
    printf("sum of numbers is %d",sum);
}