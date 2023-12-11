#include <iostream>
using namespace std;

int main() {
    int n; // Number of processes
    cout << "Enter the number of processes: ";
    cin >> n;

    int arrivalTime[n], burstTime[n], waitingTime[n], turnaroundTime[n];

    cout << "Enter arrival time and burst time for each process:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Process " << i + 1 << " Arrival Time: ";
        cin >> arrivalTime[i];
        cout << "Process " << i + 1 << " Burst Time: ";
        cin >> burstTime[i];
    }

    waitingTime[0] = 0;
    turnaroundTime[0] = burstTime[0];

    // Calculating waiting time and turnaround time
    for (int i = 1; i < n; ++i) {
        waitingTime[i] = turnaroundTime[i - 1];
        turnaroundTime[i] = waitingTime[i] + burstTime[i];
    }

    // Displaying results
    cout << "\nProcess\tArrival Time\tBurst Time\tWaiting Time\tTurnaround Time\n";
    for (int i = 0; i < n; ++i) {
        cout << i + 1 << "\t" << arrivalTime[i] << "\t\t" << burstTime[i] << "\t\t" << waitingTime[i] << "\t\t" << turnaroundTime[i] << "\n";
    }

    return 0;
}
