#include<stdio.h>
int max,min,a[50];
void minmax(int i,int j){
    printf("hai");
int mid,min1,max1;
if (i==j) max=min=a[i];
else if(i==j-1){
    if(a[i]<a[j]){
        max=a[j];
        min=a[i];}
    else{
        max=a[i];
        min=a[j];}}
else{
    mid=(i+j)/2;
    minmax(i,mid);
    min1=min;
    max1=max;
    minmax(mid+1,j);
    if (min>min1)
        min=min1;
    if(max1>max)
        max=max1;}}
void main(){
printf("Enter your size");
int n;
min=9999;
max=-1;
scanf("%d",&n);
for (int i=1;i<=n;i++)
    scanf("%d",&a[i]);
minmax(1,n);
printf("the min is %d and max is %d",min,max);
}
