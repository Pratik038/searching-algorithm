#include <iostream>

using namespace std;

int main()
{
     int n,sk,arr[10],mid,lb=0;//n is no.of elements and sk is the seek key.
     char found='f';
    cout<<"Enter the number of elements :";
    cin>>n;
    int ub=n-1;
    cout<<"Enter the elements in sorted manner:";
    for(int i=0;i<n;i++)
         cin>>arr[i];
    cout<<"Enter the element to be searched:";
    cin>>sk;

    while(lb<=ub){
       mid=(lb+ub)/2;
       if(arr[mid]==sk)
            {
                found='t';
                cout<<"Element found at "<<mid+1<<" Position";
                break;
            }
       else if(arr[mid]<sk)
                lb=mid+1;
            else
                ub=mid-1;
    }
    if(found=='f')
        cout<<"Element not found";
    return 0;
}
