#include<stdio.h>
#define M 100
void main(){
int a,b,c,d,e,min,temp;
printf("\nEnter no of process ");
scanf("%d",&a);
int at[a],bt[a],tat[a],wt[a],st[a],ct[a],pro[a], samer[a],at1[a],bt1[a],pro1[a],m,n,o,avg_wait,avg_tart;
for(int i=0;i<a;i++){
    printf("Enter your process name:");
    scanf("%d",&pro[i]);
    printf("Enter your arrival time:");
    scanf("%d",&at[i]);
    printf("Enter your burst time");
    scanf("%d",&bt[i]);
}
  printf("The process list:-");
  printf("process \t\t arrival time \t\t burst time \t\t");
for(int i=0;i<a;i++){
printf("%d \t\t%d \t\t %d \t\t",pro[i],at[i],bt[i]);
}
printf("1.preemptive\n2.non-preemptive\n 3.Exit\n");
printf("\nEnter your choice:");
scanf("%d",&b);
switch( b){
case 2:
    printf("\nThe  non-preemptive shortest job first is activated");
    for(int i=0;i<a;i++) // finding the minimum arrival time process first; # organise
        {
            min=at[i];
        for(int j=i+1;j<a;j++){
           if(at[j]<min){
               temp=at[j]; // changing the positions of the arrival time;
               at[j]=min;
               min=temp;

                temp=pro[j]; // changing the positions of the process names ;
               pro[j]=min;
               min=temp;

                temp=bt[j]; // changing the positions of the burst time;
               bt[j]=min;
               min=temp;

           }

        }
        for(int x=0,k=0;x<a;x++) //cheak whether the minimum arrival time is repeated or not and record the positions that are repeated;
            {
        if(min==at[x]){
            samer[k]=x;
            k++;
        }
        if(sizeof(samer)/sizeof(int)!=0) //if the same arrival time array is not equal to 0, repeation occured; ,#organise;
            {
         for(int p=0;p<sizeof(samer)/sizeof(int);p++){// finding the shortest burst time process for repeated ones; # organising the samer process;
                min=bt[samer[p]];
            for(int q=p+1;q<sizeof(samer)/sizeof(int);q++){
                if(min>bt[samer[q]]){
                    temp=bt[samer[q]]; // changing the positions of the burst times with the same arrival times;
                    bt[samer[q]]=min;
                    min=temp;

                    temp=pro[samer[q]]; // changing the positions of the process names with the same arrival times;
                    pro[samer[q]]=pro[samer[p]];
                    pro[samer[p]]=temp;

                }
            }


         }

        }

        }
        //if(at[i]!=min){} even changed or not.


    }
st[0]=at[0];
for(int i=1;i<a;i++){
    st[i]=st[i-1]+bt[i-1];}
ct[0]=bt[0]+st[0];
for(int i=0;i<a;i++){
    ct[i]=st[i]+bt[i];}
for(int i=0;i<a;i++){
    wt[i]=st[i]-at[i];}
for(int i=0;i<a;i++){
        tat[i]=ct[i]-at[i];}
for(int i=0;i<a;i++){
            avg_wait=wt[i];}
int avg_wait1=avg_wait/a;
for(int i=0;i<a;i++){
            avg_tart+=tat[i];}
int avg_tart1=avg_tart/a;
printf("The avg wt is %d",avg_wait1);
printf("The avg tat is %d",avg_tart1);
    }
}














