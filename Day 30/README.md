

### FIFO (First-In-First-Out) with Queue:

#### Logic:
1. Maintain a queue to store the processes in the order of their arrival.
2. The process at the front of the queue is selected for execution.
3. After execution, the process is removed from the queue.
4. Waiting time for a process is calculated as the sum of the burst times of all the processes that arrived before it.
5. Turnaround time for a process is the sum of its burst time and waiting time.

#### Complexities:
- **Time Complexity:**
  - Enqueuing and dequeuing each process takes O(1) time.
  - Calculating waiting time and turnaround time takes O(n) time.

- **Space Complexity:**
  - O(n) for storing the processes in the queue and their details.

### SJF (Shortest Job First) with Queue:

#### Logic:
1. Maintain a queue to store the processes in the order of their arrival.
2. The process with the shortest burst time at the front of the queue is selected for execution.
3. After execution, the process is removed from the queue.
4. Waiting time for a process is calculated as the sum of the burst times of all the processes that have a shorter burst time.
5. Turnaround time for a process is the sum of its burst time and waiting time.

#### Complexities:
- **Time Complexity:**
  - Enqueuing and dequeuing each process takes O(1) time.
  - Calculating waiting time and turnaround time takes O(n) time.

- **Space Complexity:**
  - O(n) for storing the processes in the queue and their details.

### Priority with Queue:

#### Logic:
1. Maintain a priority queue to store the processes based on their priority.
2. The process with the highest priority at the front of the queue is selected for execution.
3. After execution, the process is removed from the queue.
4. Waiting time for a process is calculated as the sum of the burst times of all the processes that have a higher priority.
5. Turnaround time for a process is the sum of its burst time and waiting time.

#### Complexities:
- **Time Complexity:**
  - Enqueuing and dequeuing each process takes O(log n) time for priority queue operations.
  - Calculating waiting time and turnaround time takes O(n) time.

- **Space Complexity:**
  - O(n) for storing the processes in the priority queue and their details.

These complexities consider the use of a queue or priority queue for scheduling processes based on the scheduling algorithm.