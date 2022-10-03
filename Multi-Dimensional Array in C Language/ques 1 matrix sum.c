#include<stdio.h>
int main()
{
    int n[3][3]={1,2,3,4,5,6,7,8,9};
    int m[3][3]={1,2,3,4,5,6,7,8,9},sum[3][3],i,j,r,c;
  //  printf("Enter the value of row and column = ");
    //scanf("%d%d",&r,&c);
    //printf("Enter the value of matrix 1\n");
    /*for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          scanf("%d ",&n[i][j]);
        }
    }
    printf("Matrix 1\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          printf("%d ",n[i][j]);
        }
        printf("\n");
    }
    printf("Enter the value of matrix 2\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          scanf("%d ",&m[i][j]);
        }
    }
    printf("Matrix 2\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          printf("%d ",m[i][j]);
        }
        printf("\n");
    }*/
    printf("\nAdd\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          sum[i][j]=n[i][j]+m[i][j];
        }

    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
