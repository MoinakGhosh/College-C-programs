#include <stdio.h>
#include <stdlib.h>
void insert();
void display();
void input();
void del();
int *a,i,size,ele;
int main()
{
     printf("Enter the Array size : ");
     scanf("%d",&size);
     a = (int *)malloc(sizeof(int)*size);
     printf("Enter total no of Element : ");
     scanf("%d",&ele);
     input();
     insert();
     display();
     del();
     display();
     return 0;
}
void del()
{
    int pos;
    printf("\nEnter the Delete position : ");
    scanf("%d",&pos);
    pos--;
    for(i=pos;i<ele-1;i++)
        a[i] = a[i+1];
    ele--;
}
void display()
{
    printf("Array is :");
    for(i=0;i<ele;i++)
        printf("%d ",*(a+i));
}
void input()
{
    printf("Enter the Array : ");
     for(i=0;i<ele;i++)
        scanf("%d",(a+i));
}
void insert()
{
    if(ele==size)
    {
        printf("Insertion no possible");
        return;
    }
    int pos,val;
    printf("Enter the pos & val: ");
    scanf("%d%d",&pos,&val);
    pos--;
    for(i=ele-1;i>=pos;i--)
    {
        a[i+1] = a[i];
    }
    *(a+pos) = val;
    ele++;
}
