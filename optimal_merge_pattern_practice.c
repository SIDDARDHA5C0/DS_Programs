#include<stdio.h>
#include<limits.h>

int merge(int arr[],int n){
int cost=0;
while(n>1){
    int min1=INT_MAX,min2=INT_MAX;
    int minindex1=0,minindex2=0;
    for (int i=0;i<n;i++){
        if(arr[i]<min1){
            min2=min1;
            minindex2=minindex1;
            min1=arr[i];
            minindex1=i;
        }
        else{
            if (arr[i]<min2){
                min2=arr[i];
                minindex2=i;
            }
        }
    }
    int merged= min1+min2;
    arr[minindex1]=merged;
    for(int i=minindex2+1;i<n;i++)
        arr[i-1]=arr[i];
    n--;
    cost+=merged;
}
return cost;
}
void main(){
printf("Enter your size");
int n,a[50];
scanf("%d",&n);
for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
printf("the cost is %d",merge(a,n));
}
