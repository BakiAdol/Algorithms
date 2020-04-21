/**
 * is n a square?
 * that means is a number x is present that x*x=n
 * */
#include <bits/stdc++.h>

using namespace std; 

bool isSquare(int n)
{
	int low=0,high=n,mid;
	
	while(low<=high)
	{
		mid=low+(high-low)/2;
		if(mid*mid==n) return true;
		if(mid*mid<n) low=mid+1;
		else high=mid-1; 
	}
	return false;
}

int main() 
{ 
	int n;
	
	cin >> n;
	
	if(isSquare(n)) cout << "Yes" << endl;
	else cout << "NO" << endl;
	
	return 0;
} 
