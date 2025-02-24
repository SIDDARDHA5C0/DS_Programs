#include<stdio.h>
void knapsack(int n,float cap,float pro[],float wei[]){
int i,j;
float pr=0.0,x[n],u=cap;
for (int i=0;i<n;i++) x[i]=0.0;

for (int i=0;i<n;i++){
    printf("pro %f wei %f  sig %f\n",pro[i],wei[i],x[i]);
}
for ( i=0;i<n;i++){
    if (wei[i]>u) break;
    else{
        x[i]=1.0;
        pr=pr+pro[i];
        u=u-wei[i];
        printf("%f   %f  %f \n ",pr,u,x[i]);
    }
}
if (i<n){
    x[i]=u/wei[i];
    printf("%f",x[i]);
    pr+=pro[i]*x[i];
}
printf("the total profit is %f\n",pr);
for (i=0;i<n;i++){
    printf("%f\t \n",x[i]);
}
}
void main(){
int n,cap;
printf("Enter your size and the capacity");
scanf("%d %d",&n,&cap);
float pro[n],wei[n],rat[n],t;
for (int i=0;i<n;i++){
    scanf("%f %f", &pro[i],&wei[i]);
    rat[i]=pro[i]/wei[i];
    printf("pro %f wei %f \n",pro[i],wei[i]);
}
for (int i=0;i<n;i++){
    printf("pro %f wei %f \n",pro[i],wei[i]);
}
for (int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(rat[i]<rat[j]){
            t=rat[j];
            rat[j]=rat[i];
            rat[i]=t;
            t=pro[j];
            pro[j]=pro[i];
            pro[i]=t;
            t=wei[j];
            wei[j]=wei[i];
            wei[i]=j;
        }
    }
}
for (int i=0;i<n;i++){

   printf("pro %f wei %f  %f \n",pro[i],wei[i],rat[i]);
}
knapsack(n,cap,pro,wei);
}
