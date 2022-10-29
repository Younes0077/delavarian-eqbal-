#include <iostream>
#include <iomanip>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int test(int a[],int n,int &avg){
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+a[i];
	}
	avg=sum/n;
	int j=0;
	for(int i=0;i<n;i++){
		if(a[i]>avg)
		  j++;
	}
	return j;
}
int main(int argc, char** argv) {
	int *a;
	int n=30;
	cout<<"taeadad roz 30 ast  "<<endl;
	a=new int[n];
	int avg;
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<"teadad roze hay baltar az miangin:"<<endl;
	cout<<test(a,n,avg)<<endl;
	cout<<"miangin:";
	cout<<avg;
	return 0;
}