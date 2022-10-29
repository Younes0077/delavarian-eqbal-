#include <iostream>
#include <iomanip>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
char test(float a[],int n){
	char s='y';
	char g='n';
	bool f=true;
	for(int i=0;i<n;i++){
	  if(a[i]<a[i-1])
	    f=false;
}
if(f==true)
return s;
else
return g; 
}
int main(int argc, char** argv) {
	float a[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	  cin>>a[i];
	cout<<test(a,n);
	
	return 0;
}