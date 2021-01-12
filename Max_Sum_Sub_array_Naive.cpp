/*Naive Approach to find max sum of containgious sub array sum With time complsity O(n^3)
1.firt take n values  of intege
2.intialize Max_Value of first array of element
3.sum of sum sub array which is used by for loop with O(n)
 and compare sum with Max_Value values using Max_Value=max(Max_Value,sum)
 4.print the output as a Max_Value )=O(n)
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int A[10];
	int n;
    cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>A[i];
	}
	/*calcualting part*/
	int Max_Value=A[0];
	for(int i=0;i<n;i++)
	{   int sum=0;
	    for(int j=i;j<n;j++)
	    {
	        sum+=A[j];
	        Max_Value=max(Max_Value,sum);
	        
	    }
	}
	cout<<"Max_Value="<<Max_Value;
	return 0;
}
/*input 8
8
-5 6 7 -20 3 5 8 -9*/
/*OutPut
Max_Value=16*/