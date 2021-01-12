/*using Kande Algorithm To find Max Sum Value in sub max array
1.Calculate Current_Sum_Value=Current_Sum_Value+A[i] // using for loop (Whose Complexity O{n}
2.Check IF Current_Sum_Value>Max_Sum_Value Then Update Max_Sum_Value
3.Ingore -Ve Current_Sum_Value And Mark With =0
*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
   int n;
   cin>>n;
   int A[n];
   for(int i=0;i<n;i++)
    cin>>A[i];
    
    /*Kandene Algorithm */
    int Max_Sum_Value=0;
    int Current_Sum_Value=0;
    for(int i=0;i<n;i++)
    {   Current_Sum_Value=Current_Sum_Value+A[i];
        if(Current_Sum_Value<0)
        {
            Current_Sum_Value=0;
        }
        if(Max_Sum_Value<Current_Sum_Value)
        {
            Max_Sum_Value=Current_Sum_Value;
        }
    }
    cout<<"Max_Sum_Value="<<Max_Sum_Value;
	return 0;
}
