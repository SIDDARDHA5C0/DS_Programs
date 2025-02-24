
#include <stdio.h>
int max,min,a[50];
void maxmin(int i,int j)
{
    int mid,max1,min1;
    if(i==j) // when there is only one element
        max=min=a[i];
    else if(i==j-1) // when there are 2 elements
    {
        if(a[i]>a[j])
        {
            max=a[i];
            min=a[j];
        }
        else
        {
            max=a[j];
            min=a[i];
        }
    }
    else{
        mid=(i+j)/2;
        maxmin(i,mid); // first half division
        max1=max;
        min1=min;
        maxmin(mid+1,j); // second half division
        if(max1>max)
            max=max1;
        if(min1<min)
            min=min1;
    }
}

void main()
{
    int n,i;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    max=-1;
    min=9999;
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    maxmin(1,n);
    printf("Maximum of value %d\n",max);
    printf("Minimum of value %d\n",min);

}


