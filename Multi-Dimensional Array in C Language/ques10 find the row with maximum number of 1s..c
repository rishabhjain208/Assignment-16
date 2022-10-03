#include<stdio.h>
int main()
{
    int n[3][3]={1,1,1,1,5,6,7,8,9};
    int m,i,j,sum=0,max=0,index=0;
    printf("matrix\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          printf("%d ",n[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(n[i][j]==1)
            {
                sum=sum+n[i][j];
            }
            if(sum>max)
            {
                max=sum;
                index=i;
            }

        }
         printf("%d ",max);
    }
}
