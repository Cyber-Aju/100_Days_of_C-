

### FIFO (First-In-First-Out):

#### Logic:
1. Each process is assigned an arrival time.
2. Processes are scheduled based on their arrival time, and the one that arrives first is executed first.
3. Waiting time for a process is calculated as the sum of the burst times of all the processes that arrived before it.
4. Turnaround time for a process is the sum of its burst time and waiting time.

#### Complexities:
- **Time Complexity:**
  - Sorting the processes based on arrival time takes O(n log n) time.
  - Calculating waiting time and turnaround time takes O(n) time.

- **Space Complexity:**
  - O(n) for storing the processes and their details.

### SJF (Shortest Job First):

#### Logic:
1. Each process is assigned a burst time.
2. Processes are scheduled based on their burst time, and the one with the shortest burst time is executed first.
3. Waiting time for a process is calculated as the sum of the burst times of all the processes that have a shorter burst time.
4. Turnaround time for a process is the sum of its burst time and waiting time.

#### Complexities:
- **Time Complexity:**
  - Sorting the processes based on burst time takes O(n log n) time.
  - Calculating waiting time and turnaround time takes O(n) time.

- **Space Complexity:**
  - O(n) for storing the processes and their details.

### Priority:

#### Logic:
1. Each process is assigned a priority.
2. Processes are scheduled based on their priority, and the one with the highest priority is executed first.
3. Waiting time for a process is calculated as the sum of the burst times of all the processes that have a higher priority.
4. Turnaround time for a process is the sum of its burst time and waiting time.

#### Complexities:
- **Time Complexity:**
  - Sorting the processes based on priority takes O(n log n) time.
  - Calculating waiting time and turnaround time takes O(n) time.

- **Space Complexity:**
  - O(n) for storing the processes and their details.

These complexities are based on the assumption that the processes are initially stored in an array, and sorting is performed before calculating waiting time and turnaround time.