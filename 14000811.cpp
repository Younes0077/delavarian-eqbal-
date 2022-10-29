#include <iostream>
#include <iomanip>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
char test(float a[],int m){
	char y='y';
	char n='n';
	int sum=0;
	bool f=false;
	for(int i=0;i<m;i++){
		sum=sum+a[i];
	}
	int avg;
	avg=sum/m;
	
	int tadad=0;
	for(int i=0;i<m;i++){
		if(a[i]>avg){
			tadad++;
		}
		
	}
	if(tadad>m/2){
		f=true;
	}
	if(f==true)
       return y;
	else
	   return n;
}
int main(int argc, char** argv) {
	float a[100];
	int m;
	cin>>m;
	for(int i=0;i<m;i++)
	   cin>>a[i];
	
	cout<<test(a,m)<<endl;
	return 0;
}