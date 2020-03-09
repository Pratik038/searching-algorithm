#include <iostream>

using namespace std;

int main()
{
    int n,sk,arr[10];//n is no.of elements and sk is the seek key.
    cout<<"Enter the number of elements :";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
         cin>>arr[i];
    cout<<"Enter the element to be searched:";
    cin>>sk;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==sk){
            cout<<"Element found at " <<i+1<<" Position";
            break;
        }
    }
    return 0;
}
