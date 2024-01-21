
void swap(int a,int b)
{ 
int t;
t=a;
a=b;
b=t;
return ;
}
#include<stdio.h>
void swap(int a,int b);
int main()
{

int a=5;
int b=2;
printf("before swap value of a  %d\n",a);
printf("before swap value of b  %d\n",b);
swap(a,b);
printf("after swap value of a %d\n",a);
printf("after swap value of b %d\n",b);
return 0;
}
