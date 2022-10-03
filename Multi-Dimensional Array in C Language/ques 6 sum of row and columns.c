#include<stdio.h>
int main()
{

    printf("\n\nDisplay sum of rows and columns  :\n");
    printf("----------------------------------------------------\n");
    int n[3][3]={1,2,3,4,5,6,7,8,9};
    int m,i,j,sum=0;

      printf("Original Matrix \n");
          printf("----------------------------------------------------\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          printf("%d ",n[i][j]);
        }
        printf("\n");
    }

      printf("\nSum of row of Matrix\n");

      for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          sum = sum +n[i][j];

        }
        printf("%d ",sum);
            sum =0;
        //printf("\n");
    }

        printf("\nSum of columns of Matrix\n");
               for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          sum = sum +n[j][i];

        }
        printf("%d ",sum);
        sum =0;
        //printf("\n");
    }


    return 0;
}



