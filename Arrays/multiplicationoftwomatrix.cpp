//program for matrix multiplication
#include <stdio.h>
int main() {
int i,j, A[10][10], B[10][10], AB[10][10]={0};
int m,n, p,q,k;
printf("Enter the size of first matrix:");
scanf("%d%d",&m,&n);
printf("Enter the size of second matrix:");
scanf("%d%d",&p,&q);
if(n!=p)
{
    printf("Multiplication of matrix is not possible");
}
else
{
    printf("Enter the values for matrix A:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++){
            printf("Enter A[%d][%d]:",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter the values for matrix B:");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++){
            printf("Enter B[%d][%d]:",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    //matrix multipliation
    for(i=0;i<m;i++){
        for(j=0;j<q;j++)
        {
            AB[i][j]=0;
            for(k=0;k<n;k++){
                AB[i][j]=AB[i][j]+A[i][k]*B[k][j];
            }
        }
    }
    //displaying product matrix
    printf("Multiplication of matrix is:\n " );
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++){
            printf("%d \t",AB[i][j]);
        }
            printf("\n");
        }
    }
}
