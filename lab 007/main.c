#include <stdio.h>
#include <stdlib.h>

int main()
{

    int ary1[3][3]= {3,2,4,1,4,6,4,3,2},ary2[3][3]= {2,6,3,4,3,2,5,1,7},i,j;

    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",ary1[i][j]);

        }

        printf("\t");

        if (i==1)
            printf("+");
            printf("\t");

        for(j=0;j<3;j++)
        {
            printf("%d",ary2[i][j]);

        }
        printf("\t");
        if (i==1)
            printf("=");
            printf("\t");

        for (j=0;j<3;j++)
        {
            printf("%d",ary1[i][j]+ary2[i][j]);

        }
        printf("\n");
    }

    return 0;

}
