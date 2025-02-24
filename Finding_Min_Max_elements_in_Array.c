#include<stdio.h>
void main(){
int n,min,max,temp;
printf("Enter your size of Array");
scanf("%d",&n);
int a[n];
printf("Enter your elements one by one");
for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    min=a[0];max=a[0];
for(int i=0;i<n;i++){
 if(min>a[i]){
    temp=min;
    min=a[i];
    a[i]=temp;
 }
 if(max<a[i]){
    temp=max;
    max=a[i];
    a[i]=temp;
 }
}
printf("The max and min numbers are  %d%4d",max,min);
}
