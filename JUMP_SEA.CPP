//Program on jump search.

#include<constream.h>
#include<math.h>
void main(){
clrscr();
int n,sk;
cout<<"Enter the size of an array:";
cin>>n;
int a[16];
cout<<"Enter the elements of an array in sorted manner:\n";
for(int i=0;i<n;i++)
	cin>>a[i];
cout<<"Enter the seek key to be search:";
cin>>sk;
int step=sqrt(n);

int prev=0,found=0;

while(a[step-1] < sk){
	prev=step;
	step+=step;
}
while(a[prev] < sk){
	prev++;
}

if(a[prev]==sk)
	found=1;
if(found==1)
	cout<<"Element found at position "<<prev;
else
	cout<<"Element not found";

getch();
}