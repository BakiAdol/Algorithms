/**
 * find lower bound in an sorted array
 * */
#include <bits/stdc++.h>

using namespace std; 

int lowerBound(int ar[], int n, int len)
{
	int low=0,high=len-1,mid;
	int pos=-1;
	while(low<=high)
	{
		mid=low+(high-low)/2;
		if(ar[mid]>=n)
		{
			pos=mid;
			high=mid-1;
		}
		else low=mid+1;
	}
	return pos;
}

int main() 
{ 
	int ar[]={3,4,9,10,15,23,56,60};
	int n=8;
	
	int pos=lowerBound(ar,12,n);
	if(pos==-1) cout << "Not Found!\n";
	else cout << ar[pos] << endl;
	
	return 0;
} 
