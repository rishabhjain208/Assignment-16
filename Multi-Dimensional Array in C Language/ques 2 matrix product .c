
#include<stdio.h>
int main()
{
    int n[100][100],m[100][100],sum,pr[100][100],i,j,r,c,k;
    printf("Enter the value of row and column = ");
    scanf("%d%d",&r,&c);
    printf("Enter the value of matrix 1\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          scanf("%d ",&n[i][j]);
        }
    }
    printf("Matrix 1\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          printf("%d ",n[i][j]);
        }
        printf("\n");
    }
    printf("Enter the value of matrix 2\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          scanf("%d ",&m[i][j]);
        }
    }
    printf("Matrix 2\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    printf("\nproduct\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          for(k=0;k<c;k++)
         {

          sum=sum + n[i][k]*m[k][j];

         }
          pr[i][j]=sum;
          sum=0;
        }

    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          printf("%d ",pr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
