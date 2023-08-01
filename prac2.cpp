#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];

cout<<"Enter the values of array"<<endl;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
cout<<"the element equal to its index is"<<endl;
for(int i=0;i<n;i++)
{
    if(arr[i]==i+1)
    {
        cout<<arr[i]<<endl;
    }
}
return 0;
}
