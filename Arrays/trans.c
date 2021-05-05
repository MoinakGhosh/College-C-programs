#include <stdio.h>
#include <stdlib.h>
int *a,*t,row,col,i,j;
void input(void);
void print(int *);
void arr_trans(void);

int main()
{
    printf("\nEnter the row and col number : ");
    scanf("%d%d",&row,&col);
    a = (int *)malloc(sizeof(int)*row*col);
    t = (int *)malloc(sizeof(int)*row*col);
    printf("\nEnter the Matrix : \n");
    input();
    printf("\nDisplay the original Matrix : \n");
    print(a);
    printf("\nTransposing the Matrix : \n");
    arr_trans();
    printf("\nDisplay the transpose Matrix : \n");
    print(t);
    return 0;
}
void input(void)
{

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            scanf("%d",(a+i*col+j));
    }
}
void print(int *ptr)
{
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            printf("%d ",*(ptr+i*col+j));
            printf("\n");
    }
    printf("\n");
}
void arr_trans(void)
{
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
           *(t+j*row+i)=*(a+i*row+j);
    }
}
