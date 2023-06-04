/********************
  *****************
   ***************
    *************
     ***********
      *********
       *******
        *****
         ***
          *   */
#include<stdio.h>
int main()
{
    int i,j,r,s;
    printf("Enter the number of rows");
    scanf("%d",&r);
    for(i=r;i>=1;i--)
    {
        for(s=r;s>=i;s--)
        printf(" ");
        for(j=1;j<=(2*i)-1;j++)
        {
            printf("*");

        }printf("\n");
    }
}