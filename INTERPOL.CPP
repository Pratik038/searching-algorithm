//Program on interpolation search.

#include<constream.h>

void main(){
	clrscr();
	int n;
	cout<<"Enter the size of an array:";
	cin>>n;
	int arr[10];
	cout<<"Enter the elements in an sorted manner and of equal interval:\n";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int lb=0,ub=n-1,sk,pos,found=0;
	cout<<"Enter the seek key to be search in an array:";
	cin>>sk;
	while(lb<=ub && sk>=arr[lb] && sk<=arr[ub]){
	 pos=lb+((sk-arr[lb])*(ub-lb))/(arr[ub]-arr[lb]);
	 if(arr[pos]==sk){
		found=1;
		break;
	 }
	 else if (arr[pos]<sk)
			lb=pos+1;
	 else
		ub=pos-1;
	}
	if(found==1)
		cout<<"Element found at "<<pos;
	else
		cout<<"Element not found";
	getch();
}