#include <iostream>
#include <iomanip>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int test(int a[],int n){
int j;
	for(int i=0;i<n;i++){
		for(int l=0;l<n;l++){
			if(a[i]==a[l])
			   j=j+1;
		}
	}
	if(j==0)
	return -1;
	else
	return j;
}
int main(int argc, char** argv) {
	int a[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<test(a,n)<<endl;
	return 0;
}