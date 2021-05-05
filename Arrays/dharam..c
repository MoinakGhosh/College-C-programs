#include<stdio.h>
#include<conio.h>
int main()
{
    int a[]={23,5,78,51,67};
    int i;
    bubble_sort(a,4);
    for(i=0;i<=3;i++);
    printf("%d",a[i]);

}
void bubble_sort(int a[],int n)
{
    int round,i,temp;
    for(i=round;round<=n-1;round++)
        for(i=0;i<=n-1-round;i++)
    if(a[i]>a[i+1])
       {
           temp=a[i];
           a[i]=a[i+1];
           a[i+1]=temp;
       }

}
