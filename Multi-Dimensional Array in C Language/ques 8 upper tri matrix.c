#include<stdio.h>
int main()
{
    printf("\n\nDisplay the upper triangular of a given matrix :\n");
    printf("----------------------------------------------------\n");
    int n[3][3]={1,2,3,4,5,6,7,8,9};
    int i,j;
      printf("Given Matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          printf("%d ",n[i][j]);
        }
        printf("\n");
    }
    printf("\nSetting zero in upper triangular matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j>=i)
            printf("%d ",n[i][j]);
            else
                printf("%d ",0);
        }
        printf("\n");
    }




    return 0;
}




