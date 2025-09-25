//To find Maximum and Minimum Element in Array.
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Elements:"<<endl;
    cin >> n;
    int a[n];
    cout<<"Enter Array Elements:";
    for(int i=0; i<n; i++)
        cin >> a[i];
        
    int max =*max_element(a,a+n);
    int min =*min_element(a,a+n);
    
    cout<<"Max Element:"<<max<<endl;
    cout<<"Min Element:"<<min<<endl;
    
    return 0;
        
}
