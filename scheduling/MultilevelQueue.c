#include &lt;stdio.h&gt;
int main() {
int n, i, j, time = 0, remain, tq;
printf(&quot;Enter number of processes: &quot;);
scanf(&quot;%d&quot;, &amp;n);
int bt[n], wt[n], tat[n], rt[n], queue[n];
// Input burst time and queue number
for(i = 0; i &lt; n; i++) {
printf(&quot;Enter Burst Time for P%d: &quot;, i+1);
scanf(&quot;%d&quot;, &amp;bt[i]);
rt[i] = bt[i];
printf(&quot;Enter Queue (1: RR, 2: FCFS) for P%d: &quot;, i+1);
scanf(&quot;%d&quot;, &amp;queue[i]);
}
printf(&quot;Enter Time Quantum for Queue 1 (RR): &quot;);
scanf(&quot;%d&quot;, &amp;tq);
remain = n;
//First execute Queue 1 (Round Robin)
printf(&quot;\nExecution Order (Queue 1 - RR):\n&quot;);
while(remain &gt; 0) {
for(i = 0; i &lt; n; i++) {
if(queue[i] == 1 &amp;&amp; rt[i] &gt; 0) {
if(rt[i] &lt;= tq) {
time += rt[i];
rt[i] = 0;
remain--;
tat[i] = time;
wt[i] = tat[i] - bt[i];
printf(&quot;P%d &quot;, i+1);

} else {
time += tq;
rt[i] -= tq;
printf(&quot;P%d &quot;, i+1);
}
}
}
// break if no process left in queue 1
int flag = 0;
for(i = 0; i &lt; n; i++) {
if(queue[i] == 1 &amp;&amp; rt[i] &gt; 0) {
flag = 1;
break;
}
}
if(flag == 0) break;
}
//Execute Queue 2 (FCFS)
printf(&quot;\nExecution Order (Queue 2 - FCFS):\n&quot;);
for(i = 0; i &lt; n; i++) {
if(queue[i] == 2 &amp;&amp; rt[i] &gt; 0) {
time += rt[i];
tat[i] = time;
wt[i] = tat[i] - bt[i];
rt[i] = 0;
remain--;
printf(&quot;P%d &quot;, i+1);
}
}
//Display Results
printf(&quot;\n\nProcess\tBT\tWT\tTAT\n&quot;);
for(i = 0; i &lt; n; i++) {
printf(&quot;P%d\t%d\t%d\t%d\n&quot;, i+1, bt[i], wt[i], tat[i]);
}
return 0;
}
