#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,sum=0;
    printf("Enter a  Five digit number: ");
    scanf("%d",&a);
    b=a/10; //1234
    c=(a%10)*10000;//5
    d=b/10;//123
    e=(b%10)*1000;//4
    f=d/10;//12
    g=(d%10)*100;//3
    h=(f/10)*1;//1
    i=(f%10)*10;//2
    sum=c+e+g+i+h;
    printf("%d",sum);
    
}
