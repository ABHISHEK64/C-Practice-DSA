/*Merging Two Sorted Array
in Order(m+n) time complexity
*/



#include "iostream"
using namespace std;

int main() {
    int a[5]={1,3,4,6,7},b[6]={0,2,5,10,11,12};
     int c[10];
     int n1=sizeof(a)/sizeof(a[0]);
     int n2=sizeof(b)/sizeof(b[0]);
     int i=0,j=0,k=0;
     cout<<"n1="<<n1<<endl;
     cout<<"n2="<<n2<<endl;
     while(i<n1&&j<n2)
     {
         if(a[i]<b[j])
         {
             c[k++]=a[i++];
         }
         else{
             c[k++]=b[j++];
         }
     }
     while(i<n1)
     {
         c[k++]=a[i++];
     }
     while(j<n2)
     {
         c[k++]=b[j++];
     }
     cout<<"After Merging two array=";
     for(int k=0;k<n1+n2;k++)
     {
         cout<<c[k]<<" ";
     }
     
}