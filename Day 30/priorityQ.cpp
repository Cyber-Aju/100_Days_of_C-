#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

struct Process {
    int id;
    int burstTime;
    int priority;
};

bool comparePriority(Process p1, Process p2) {
    return p1.priority > p2.priority;
}

int main() {
    int n; // Number of processes
    cout << "Enter the number of processes: ";
    cin >> n;

    queue<int> processQueue;

    Process processes[n];

    cout << "Enter burst time and priority for each process:\n";
    for (int i = 0; n < n; ++i) {
        cout << "Process " << i + 1 << " Burst Time: ";
        cin >> processes[i].burstTime;
        cout << "Process " << i + 1 << " Priority: ";
        cin >> processes[i].priority;
        processes[i].id = i + 1;

        processQueue.push(i);
    }

    sort(processes, processes + n, comparePriority);

    int currentTime = 0;
    int waitingTime[n], turnaroundTime[n];

    // Calculating waiting time and turnaround time
    while (!processQueue.empty()) {
        int currentProcess = processQueue.front();
        processQueue.pop();

        waitingTime[currentProcess] = currentTime;
        turnaroundTime[currentProcess] = waitingTime[currentProcess] + processes[currentProcess].burstTime;
        currentTime += processes[currentProcess].burstTime;
    }

    // Displaying results
    cout << "\nProcess\tBurst Time\tPriority\tWaiting Time\tTurnaround Time\n";
    for (int i = 0; i < n; ++i) {
        cout << processes[i].id << "\t" << processes[i].burstTime << "\t\t" << processes[i].priority << "\t\t" << waitingTime[i] << "\t\t" << turnaroundTime[i] << "\n";
    }

    return 0;
}
