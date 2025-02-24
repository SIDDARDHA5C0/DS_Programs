#include<stdio.h>
int min(int art[] ,int visit[] ,int );
int k=0;
int min(int art[],int visit[],int a){

for(int i=0;i<a;i++){
        int mini=art[i];
    for (int j=i+1;j<a;j++){
        if(visit[i]){
            continue;
        }
        else{
            if(mini>art[j]){
                mini=art[j];
            }
        }
    }
return mini;
}


}
void main(){
int a,b,c,d,e,x,avgwt,avgtat;
printf("Enter no of processes\n");
scanf("%d",&a);
int pro[a],art[a],burst[a],start[a],complete[a],pro1[a],art1[a],burst1[a],visit[a],avisit[a],wait[a],tat[a];
for(int i=0;i<a;i++){
printf("Enter your process number\n");
scanf("%d",&pro[i]);
printf("Enter your arrival time of the process %d \n",i+1);
scanf("%d",&art[i]);
printf("Enter your burst time of the process %d \n",i+1);
scanf("%d",&burst[i]);
}
for(int i=0;i<a;i++){
b=min(art,visit,a);
printf(" the min number %d",b);
for(int i=0;i<a;i++){
    if(art[i]==b){
        visit[i]=1;
        avisit[i]=1;
    }
}
for(int i=0;i<a;i++){
    if(avisit[i]==1){
        x=burst[i];
        for(int j=i+1;j<a;j++){
            if(avisit[j]==1){
                if(x>burst[j]){
                    x=burst[j];
                }
            }
        }
        if(x!=burst[i]){
            pro1[k++]=pro[i];
            art1[k++]=art[i];
            burst1[k++]= burst[i];
        }
    }
}
}
for(int i=0;i<a;i++){
printf("%d   ",pro1[i]);
printf("%d   ",art1[i]);
printf("%d   ",burst1[i]);
printf("\n");

}

start[0]=art1[0];
for(int i=1;i<a;i++){
    start[i]=start[i-1]+burst1[i-1];
}
for(int i=0;i<a;i++){
    complete[i]=start[i]+burst1[i];
}
wait[0]=art1[0];
for(int i=1;i<a;i++){
wait[i]=start[i]-art1[i];
}
for(int i=0;i<a;i++){
tat[i]=complete[i]-art1[i];
}

for(int i=0;i<a;i++){
d+=wait[i];
e+=tat[i];
}
avgwt=d/a;
avgtat=e/a;






printf("sno\tprocess\tarrival time\tburst time\twaiting time\tturn around time\t\n");
for(int i=0;i<a;i++){
printf("%d\t%d\t  %d\t   %d\t  %d\t     %d\t\n",i,pro1[i],art1[i],burst1[i],wait[i],tat[i]);

}
printf("The average waiting time is %d and average turn around time is %d",avgwt,avgtat);
}
