#include<stdio.h>
int main()
{
    int n[3][3]={1,2,3,4,5,6,7,8,9};
    int m[3][3],i,j;
      printf("Original Matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          printf("%d ",n[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose of Matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          m[i][j]=n[j][i];
        }

    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    return 0;
}
