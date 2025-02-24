#include<stdio.h>
#include<limits.h>
int min=INT_MAX,max=INT_MIN;
void minmax(int a[100],int low,int high)
{
    int mid;
    if(low==high){
        if(max<a[low])
            max=a[low];
        if(min>a[low])
            min=a[low];
    return;
    }
    if(low==high-1)
    {
        if(a[low]<a[high])
        {
            if(min>a[low])
                min=a[low];
            if(max<a[high])
                max=a[high];
        }
        else
        {
            if(min>a[high])
                min=a[high];
            if(max<a[low])
                max=a[low];
        }
        return;
    }
    mid=(low+high)/2;
    minmax(a,low,mid);
    minmax(a,mid+1,high);
}
int main()
{
    int n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    minmax(a,0,n-1);
    printf("min element:%d\n",min);
    printf("max element is:%d",max);
}

/*#include<stdio.h>
int min=9999,max=-1;
void minmaxer(int a[],int i,int j){

void minmax(int i,int j,int min,int max){
    if(i==j) {
        min=a[i];
        max=a[i];
    }
    else if( i==j-1){
        if(a[i]>a[j]){
            min=a[j];
            max=a[i];
        }
        else{
            max=a[j];
            min=a[i];
        }
    }
    else{
        int mid=(i+j)/2;
        minmax(i,mid,min,max);
        minmax(mid+1,j,min1,max1);
        if(min>min1) min=min1;
            if(max<max1) max=max1;
    }
    return;
}


}

void main(){
printf("Enter no of the elements");
int n;
scanf("%d",&n);
int a[n];
for (int i=0;i<n;i++)
    scanf("%d",&a[i]);
minmaxer(a,0,n-1);
printf("the min is %d and max is %d",min,max);


}*/
