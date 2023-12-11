#include <iostream>
#include <algorithm>
using namespace std;

struct Process {
    int id;
    int burstTime;
};

bool compare(Process p1, Process p2) {
    return p1.burstTime < p2.burstTime;
}

int main() {
    int n; // Number of processes
    cout << "Enter the number of processes: ";
    cin >> n;

    Process processes[n];

    cout << "Enter burst time for each process:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Process " << i + 1 << " Burst Time: ";
        cin >> processes[i].burstTime;
        processes[i].id = i + 1;
    }

    sort(processes, processes + n, compare);

    int waitingTime[n], turnaroundTime[n];
    waitingTime[0] = 0;
    turnaroundTime[0] = processes[0].burstTime;

    // Calculating waiting time and turnaround time
    for (int i = 1; i < n; ++i) {
        waitingTime[i] = turnaroundTime[i - 1];
        turnaroundTime[i] = waitingTime[i] + processes[i].burstTime;
    }

    // Displaying results
    cout << "\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n";
    for (int i = 0; i < n; ++i) {
        cout << processes[i].id << "\t" << processes[i].burstTime << "\t\t" << waitingTime[i] << "\t\t" << turnaroundTime[i] << "\n";
    }

    return 0;
}
