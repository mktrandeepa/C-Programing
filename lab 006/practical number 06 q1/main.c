#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10];
    int i,minimumv,maximumv,sum=0,reverseorder;
    float avgv;
    for(i=0;i<10;i++)
    {
        printf("Enter %d th number",i+1);
        scanf("%d",&array[i]);
    }
     maximumv=array[0];
    for(i=0;i<10;i++)
    {

        if(array[i]>maximumv)
        {
        maximumv=array[i];
        }

    }
    minimumv=array[0];
    for(i=0;i<10;i++)
    {
        if(array[i]<minimumv)
        {
        minimumv=array[i];}
    }
    for(i=0;i<10;i++)
    {
        sum=sum+array[i];
    }
    avgv=(float)sum/10.0;

    printf(" Maximum value is-%d\n Minimum value is- %d\n Average is- %f\n",maximumv,minimumv,avgv);

    printf("reversed order- ");

    for(i=9;i>=0;i--)
    {
        printf("%d",array[i]);
    }


    return 0;
}
