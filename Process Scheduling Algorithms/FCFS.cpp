///First Come First Serve
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int numberOfProcess;
    double averageWaitingTime=0, averageTurnAroundTime;
    cout << "Enter number of process : ";
    cin >> numberOfProcess;
    int burstTime[numberOfProcess], waitingTime[numberOfProcess], turnAroundTime[numberOfProcess];
    cout << "Enter " << numberOfProcess << " process's brust time : ";
    for(int i=0;i<numberOfProcess;i++) cin >> burstTime[i];
    waitingTime[0]=0;
    turnAroundTime[0]=burstTime[0]+waitingTime[0];
    averageTurnAroundTime=turnAroundTime[0];
    for(int i=1;i<numberOfProcess;i++){
        waitingTime[i]=burstTime[i-1]+waitingTime[i-1];
        turnAroundTime[i]=burstTime[i]+waitingTime[i];
        averageWaitingTime+=waitingTime[i];
        averageTurnAroundTime+=turnAroundTime[i];
    }
    cout << "Process\tB.T\tW.T\tT.A.T"<<endl;
    for(int i=0;i<numberOfProcess;i++) cout << "P" << i+1 << "\t" << burstTime[i] << "\t" << waitingTime[i] << "\t" << turnAroundTime[i] << endl;
    cout << fixed << setprecision(2) << "Average waiting time = " << averageWaitingTime/(double)numberOfProcess;
    cout << " and Average turnaround time = " << averageTurnAroundTime/(double)numberOfProcess << endl;

    return 0;
}

