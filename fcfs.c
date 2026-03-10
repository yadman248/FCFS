#include <stdio.h>
int main() {
int n, i;
char pid[10][10];
int at[10], bt[10], wt[10], tat[10];
int time = 0;
float avg_wt = 0, avg_tat = 0;
printf("Enter the no. of process:");
scanf("%d", &n);
printf("p at bt\n");
for(i = 0; i < n; i++) {
scanf("%s %d %d", pid[i], &at[i], &bt[i]);
}
for(i = 0; i < n; i++) {
if(time < at[i])
time = at[i];

wt[i] = time - at[i];
tat[i] = wt[i] + bt[i];
time += bt[i];
avg_wt += wt[i];
avg_tat += tat[i];
}
printf("Waiting Time:\n");
for(i = 0; i < n; i++) {
printf("%s %d\n", pid[i], wt[i]);
}
printf("Turnaround Time:\n");
for(i = 0; i < n; i++) {
printf("%s %d\n", pid[i], tat[i]);
}
printf("Average Waiting Time: %.2f\n", avg_wt/n);
printf("Average Turnaround Time: %.2f\n", avg_tat/n);
return 0;
}
