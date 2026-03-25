#include <stdio.h>

int main() {
    int n, i, j, time = 0, remain, tq;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    int bt[n], wt[n], tat[n], rt[n], queue[n];

    // Input burst time and queue assignment
    for(i = 0; i < n; i++) {
        printf("Enter Burst Time for P%d: ", i + 1);
        scanf("%d", &bt[i]);
        rt[i] = bt[i];
        printf("Enter Queue (1: RR, 2: FCFS) for P%d: ", i + 1);
        scanf("%d", &queue[i]);
    }

    printf("Enter Time Quantum for Queue 1 (RR): ");
    scanf("%d", &tq);

    remain = n;

    // First execute Queue 1 (Round Robin)
    printf("\nExecution Order (Queue 1 - RR):\n");
    while(1) {
        int flag = 0;
        for(i = 0; i < n; i++) {
            if(queue[i] == 1 && rt[i] > 0) {
                flag = 1; // Mark that there's still work in Queue 1
                if(rt[i] <= tq) {
                    time += rt[i];
                    rt[i] = 0;
                    remain--;
                    tat[i] = time;
                    wt[i] = tat[i] - bt[i];
                    printf("P%d ", i + 1);
                } else {
                    time += tq;
                    rt[i] -= tq;
                    printf("P%d ", i + 1);
                }
            }
        }
        // Break if no process left in Queue 1
        if(flag == 0) break;
    }

    // Execute Queue 2 (FCFS)
    printf("\nExecution Order (Queue 2 - FCFS):\n");
    for(i = 0; i < n; i++) {
        if(queue[i] == 2 && rt[i] > 0) {
            time += rt[i];
            tat[i] = time;
            wt[i] = tat[i] - bt[i];
            rt[i] = 0;
            remain--;
            printf("P%d ", i + 1);
        }
    }

    // Display Results
    printf("\n\nProcess\tBT\tWT\tTAT\n");
    for(i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\n", i + 1, bt[i], wt[i], tat[i]);
    }

    return 0;
}
