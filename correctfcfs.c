#include <stdio.h>

int main() {
    int bt[10], at[10], tat[10], wt[10], ct[10];
    int n, i;
    float totalTAT = 0, totalWT = 0;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    printf("Enter arrival time and burst time for each process:\n");
    for (i = 0; i < n; i++) {
        printf("Arrival time of process [%d]: ", i + 1);
        scanf("%d", &at[i]);
        printf("Burst time of process [%d]: ", i + 1);
        scanf("%d", &bt[i]);
        printf("\n");
    }

    // Initialize ct array
    int current_time = 0;
    for (i = 0; i < n; i++) {
        if (current_time < at[i]) {
            current_time = at[i];
        }
        ct[i] = current_time + bt[i];
        current_time += bt[i];
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
        totalTAT += tat[i];
        totalWT += wt[i];
    }

    printf("Solution:\n\n");
    printf("Pid\t AT\t BT\t CT\t TAT\t WT\n\n");
    for (i = 0; i < n; i++) {
        printf("P%d\t %d\t %d\t %d\t %d\t %d\n", i + 1, at[i], bt[i], ct[i], tat[i], wt[i]);
    }

    printf("Average Turnaround Time = %.2f\n", totalTAT / n);
    printf("Average Waiting Time = %.2f\n", totalWT / n);

    return 0;
}

