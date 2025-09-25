//Reverse the array Elements.
#include<iostream>
using namespace std;

void ReverseArray(int arr[],int n)
{
    int temp=0,i,j;
    for(i=0,j=n-1; i<j; i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]= temp;
    }
    
}
int main()
{
    int n;
    cout<<"Enter Size:"<<endl;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    ReverseArray(arr,n);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
        
    cout<<endl;

    
    return 0;
}
