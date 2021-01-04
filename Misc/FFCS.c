#include <stdio.h>
struct process
{
    int pid;
    int btime;
    int wtime;
    int ttime;
} p[10];
int main()
{
    printf("First Come First Served (FCFS) Scheduling\n\n");
    int i,j,k,n,tot_turnaround,tot_waiting;
    float awat,atur;
    printf("Please input the no of process for this JOB :"); 
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Burst time for process %d :",(i+1));
        scanf("%d", &p[i].btime);
        p[i].pid = i+1;
    }
    p[0].wtime = 0;
    for(i=0; i<n; i++){
        p[i+1].wtime = p[i].wtime + p[i].btime;
        p[i].ttime = p[i].wtime + p[i].btime;
    }
    tot_turnaround = tot_waiting = 0;
    for(i=0; i<n; i++){
        tot_turnaround += p[i].ttime;
        tot_waiting += p[i].wtime;
    }
    awat = (float)tot_waiting / n;
    atur = (float)tot_turnaround / n;
    for(i=0; i<28; i++)
        printf("*");
    printf("\nProcess B-Time T-Time WTime\n"); for(i=0; i<28; i++)
    printf("*");
    for(i=0; i<n; i++)
        printf("\n P%d\t%4d\t%3d\t%2d",p[i].pid,p[i].btime,p[i].ttime,p[i].wtime);
    printf("\n");
    for(i=0; i<28; i++)
        printf("*");
    printf("\n\nGANTT Chart\n");
    printf("*");
    for(i=0; i<(p[n-1].ttime + 2*n);i++)
        printf("*");
    printf("\n");
    printf("|");
    for(i=0; i<n; i++){
        k = p[i].btime/2;
        for(j=0; j<k;j++) 
            printf(" ");
        printf("P%d",p[i].pid);
        for(j=k+1; j<p[i].btime; j++)
            printf(" ");
        printf("|");
    }
    printf("\n");
    printf("*");
    for(i=0; i<(p[n-1].ttime + 2*n); i++) 
        printf("*");
    printf("\n");
    printf("0");
    for(i=0; i<n; i++){
        for(j=0; j<p[i].btime; j++)
            printf(" ");
        printf("%2d",p[i].ttime);
    }
    printf("\n\nSo The Average waiting time is : %5.5fms", awat);
    printf("\nSo The Average turn around time is : %5.5fms\n", atur);
}