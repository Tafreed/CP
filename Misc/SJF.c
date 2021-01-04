#include <stdio.h>
struct process{
    int pid;
    int btime;
    int wtime;
    int ttime;
}p[10], temp;

int main(){
    printf("Shortest Job First (SJF) Scheduling\n\n");
    int i,j,k,n,tot_turnaround,tot_wait;
    float awat,atur;
    printf("Please input the no of process for this JOB :");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Burst time for process %d :",(i+1));
        scanf("%d", &p[i].btime);
        p[i].pid = i+1;
    }
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if((p[i].btime > p[j].btime) || (p[i].btime == p[j].btime && p[i].pid > p[j].pid)){
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    p[0].wtime = 0;
    for(i=0; i<n; i++){
        p[i+1].wtime = p[i].wtime + p[i].btime;
        p[i].ttime = p[i].wtime + p[i].btime;
    }
    tot_turnaround = tot_wait = 0;
    for(i=0; i<n; i++){
        tot_turnaround += p[i].ttime;
        tot_wait += p[i].wtime;
    }
    awat = (float)tot_wait / n;
    atur = (float)tot_turnaround / n;
    for(i=0; i<28; i++)
        printf("*");
    printf("\nProcess B-Time T-Time WTime\n");
    for(i=0; i<28; i++)
        printf("*");
    for(i=0; i<n; i++)
        printf("\n P%-4d \t %4d \t %3d \t %2d",p[i].pid,p[i].btime,p[i].ttime,p[i].wtime);
    printf("\n");
    for(i=0; i<28; i++)
        printf("*");
    printf("\n\nGANTTChart\n"); 
    printf("*");
    for(i=0; i<(p[n-1].ttime + 2*n);i++)
        printf("*");
    printf("\n|");
    for(i=0; i<n; i++){
        k = p[i].btime/2;
        for(j=0; j<k;j++) 
            printf(" ");
        printf("P%d",p[i].pid);
        for(j=k+1; j<p[i].btime; j++)
            printf(" ");
        printf("|");
    }
    printf("\n*");
    for(i=0; i<(p[n-1].ttime + 2*n);i++) 
        printf("*");
    printf("\n0");
    for(i=0; i<n; i++){
        for(j=0; j<p[i].btime;j++) 
            printf(" ");
            printf("%2d",p[i].ttime);
        }
    printf("\n\nSo Average waiting time is : %5.5fms", awat);
    printf("\nSo Average turn around time is : %5.5fms\n", atur);
}
