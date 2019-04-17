#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
	printf("\t\t\t\t\t*****************************************************\n");
	printf("\t\t\t\t\t****\t\tWELCOME TO MY PROGRAM\t\t ****\n");
	printf("\t\t\t\t\t*****************************************************\n");
	int choice;	
		printf("\n->Enter 1 for Non-Premption\n->Enter 2 for Premption");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
	 
if(choice==2)
	{
	 int a[10],b[10],x[10];
	 int w[10],t[10],c[10];
	 int i,j,littile,count=0,time,n;
	 double avg=0,tt=0,end;
	 
	 printf("\nEnter the number of Processes: ");
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
	   printf("\nEnter arrival time of process %d : ",i+1);
	   scanf("%d",&a[i]);
	 }
	 for(i=0;i<n;i++)
	 {
	   printf("\nEnter burst time of process %d : ",i+1);
	   scanf("%d",&b[i]);
	 }
	 for(i=0;i<n;i++)
	 x[i]=b[i];
	
	  b[9]=9999;
	 //printf("time => process number");
	 for(time=0;count!=n;time++)
	 {
	   littile=9;
	  for(i=0;i<n;i++)
	  {
	   if(a[i]<=time && b[i]<b[littile] && b[i]>0 )
	   littile=i;
	  }
	  b[littile]--;
	  //printf("\n%d => p%d",time+1,littile);
	  if(b[littile]==0)
	  {
	   count++;
	   end=time+1;
	   c[littile] = end;
	   w[littile] = end - a[littile] - x[littile];
	   t[littile] = end - a[littile];
	   // printf("\n %d  %d   %d",littile,wt[littile],ttp[littile]);
	  }
	 }
	 printf("\nProcess_Id\t Burst_Time \t Arival_Time \tWaiting_Time \tTurnaround_Time \tCompletion_Time");
	 for(i=0;i<n;i++)
	 {
	   printf("\n %d \t \t  %d   \t\t %d   \t\t%d  \t\t%d\t\t\t%d",i+1,x[i],a[i],w[i],t[i],c[i]);
	   avg = avg + w[i];
	   tt = tt + t[i];
	 }
	 //printf("\n  %lf   %lf",avg,tt);
	 printf("\n\nAverage waiting time = %lf\n",avg/n);
	 printf("\nAverage Turnaround time = %lf\n",tt/n);
}

else if(choice==1)
{
	int flag, i, j, lt, total = 0, pt;
      float aw_t, at_t;
      int b_t[20], p[20], w_t[20], t_t[20];
      printf("\nEnter Total Number of Processes:\t");
      scanf("%d", &lt); 
      for(i = 0; i < lt; i++)
      {
            printf("Enter Burst Time For Process[%d]:\t", i + 1);
            scanf("%d", &b_t[i]);
            p[i] = i + 1;
      }
      for(i = 0; i < lt; i++)
      {
            pt = i;
            for(j = i + 1; j < lt; j++)
            {
                  if(b_t[j] < b_t[pt])
                  {
                        pt = j;
                  }
            }
            flag = b_t[i];
            b_t[i] = b_t[pt];
            b_t[pt] = flag;
            flag = p[i];
            p[i] = p[pt];
            p[pt] = flag;
      }	
      w_t[0] = 0;
      for(i = 1; i < lt; i++)
      {
            w_t[i] = 0;
            for(j = 0; j < i; j++)
            {
                  w_t[i] = w_t[i] + b_t[j];
            } 
            total = total + w_t[i];
      }
      aw_t = (float)total / lt;
      total = 0;
      printf("\nProcess ID\t\tBurst Time\t Waiting Time\t Turnaround Time\n");
      for(i = 0; i < lt; i++)
      {
            t_t[i] = b_t[i] + w_t[i];
            total = total + t_t[i];
            printf("\nProcess[%d]\t\t%d\t\t %d\t\t %d\n", p[i], b_t[i], w_t[i], t_t[i]);
      }
      at_t = (float)total / lt;
      printf("\nAverage Waiting Time:\t%f\n", aw_t);
      printf("\nAverage Turnaround Time:\t%f\n", at_t);
     
}
}
