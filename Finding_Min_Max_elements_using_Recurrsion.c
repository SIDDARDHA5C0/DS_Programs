#include<stdio.h>
int min(int a[],int n,int m){
if(n<0)
    return m;
else{
    if(m>a[n]){
        int temp=a[n];
        a[n]=m;
        m=temp;
    }
    return min(a,n-1,m);
}

}
int max(int a[],int n,int m){
   // printf("%d\n",n);
if (n<0)
    return m;
else{
    if(m<a[n]){
          //  printf("%d %5d %4d\n",m,a[n],n);
        int temp=a[n];
        a[n]=m;
        m=temp;
    }
  //  printf("%d\n",m);
    return max(a,n-1,m);
}


}
void main(){
int n;
printf("Enter the size of the array");
scanf("%d",&n);
int a[n];
printf("Enter your elements one by one");
for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
printf("The min and Max elements are %d       %d",min(a,n-1,a[n-1]),max(a,n-1,a[n-1]));
//printf("%d",a[n-1]);

}
