//Find Second Largest Element in Array
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Size:"<<endl;
    cin >> n;
    int a[n];
    cout<<"Enter the Array Elements:"<<endl;
    for(int i=0; i<n; i++)
        cin >> a[i];
        
    sort(a,a+n,greater<int>());
        
    int first=a[0];
    int second = -1;
    for(int i=0; i<n; i++){
        if(a[i] != first){
        second = a[i];
        break;
        }
    }
    
    if(second == -1)
        cout<<"No Second Largest Element is found."<<endl;
    else
        cout<<"Second Largest Element:"<<second<<endl;
    return 0;
}
