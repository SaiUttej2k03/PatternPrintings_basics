/*7 6 5 4 3 2 1
  7 6 5 4 3 2
  7 6 5 4 3
  7 6 5 4
  7 6 5
  7 6
  7 */

#include<stdio.h>
int main()
{
    int i, j;
    for(i=1;i<=7;i++)
    {
        for(j=7;j>=i;j--)
        {
            printf(" %d ",j);
        }printf("\n");
    }

    return 0 ;
}