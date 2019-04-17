# OS_Project2

For SJF algorithm,
        (i) We randomly generate the number of jobs. There must be a limit on the number of jobs in a system. 
        (ii)The execution time of the generated jobs is also not known. Here, we are generating the CPU burst of each job making use of the               past history.
        (iii)All the jobs are then arranged in a queue where searching is done to find the one with the least CPU burst. There may be two                 jobs in queue with the same execution time then FCFS approach is to be performed.
  Case a) If the algorithm is non-preemptive in nature, then the newly arriving job is to be added to the job queue even though it is of                  lesser execution time than the one running on the processor.
  Case b) Otherwise pre-emption is performed.

Assume values of arrival time, burst time (when required) by your own.
