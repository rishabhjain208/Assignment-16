#include<stdio.h>
int main()
{
    int n[3][3]={1,2,3,4,5,6,7,8,9};
    int m,i,j;
      printf("Original Matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          printf("%d ",n[i][j]);
        }
        printf("\n");
    }
      printf("\nSum of Right diagonal of Matrix\n");

       m=n[0][0]+n[1][1]+n[2][2];

          printf("%d ",m);
    return 0;
}

