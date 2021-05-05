#include <stdio.h>
#include <stdlib.h>
void input(int *);
void display(int *);
void sum();
void sub();
void mul();
int *a,*b,*sum_matrix,*sub_matrix,*mul_matrix,n,i,j;
int main()
{
    printf("Enter the n: ");
    scanf("%d",&n);
    a = (int*)malloc(sizeof(int)*n*n);
    b = (int*)malloc(sizeof(int)*n*n);
    sum_matrix = (int*)malloc(sizeof(int)*n*n);
    sub_matrix = (int*)malloc(sizeof(int)*n*n);
    mul_matrix = (int*)malloc(sizeof(int)*n*n);
    printf("Enter the array a:\n");
    input(a);
    printf("Enter the array b:\n");
    input(b);
    printf("Array a :\n");
    display(a);
    printf("Array b :\n");
    display(b);
    sum();
    printf("Sum is :\n");
    display(sum_matrix);
    sub();
    printf("Sub is :\n");
    display(sub_matrix);
    mul();
    printf("Mul is :\n");
    display(mul_matrix);
    return 0;
}
void mul()
{
    int k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            *(mul_matrix+i*n+j) = 0;
            for(k=0;k<n;k++)
                *(mul_matrix+i*n+j) += *(a+i*n+k) * *(b+k*n+j);
        }
    }
}
void sub()
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            *(sub_matrix+i*n+j) = *(a+i*n+j) - *(b+i*n+j);
    }
}
void sum()
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            *(sum_matrix+i*n+j) = *(a+i*n+j) + *(b+i*n+j);
    }
}
void input(int *ptr)
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",(ptr+i*n+j));
    }
}
void display(int *ptr)
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",*(ptr+i*n+j));
        printf("\n");
    }
    printf("\n");
}
