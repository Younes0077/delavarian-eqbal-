#include <iostream>
#include <iomanip>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
char test(float *a,int n,float *b,int m,float avg1,float avg2){
	char yek='1';
	char ho='2';
	int sum1=0;
	for(int i=0;i<n;i++)
		sum1=sum1+a[i];
		
	avg1=sum1/n;
	
	int sum2=0;
	for(int i=0;i<m;i++)
	    sum2=sum2+b[i];
	    
	avg2=sum2/m;
	
	if(avg2>avg1)
	   return ho;
	else
	    return yek;
}
int main(int argc, char** argv) {
	float avg1,avg2;
	float *a;
	int n;
	cout<<"teadad dansh joyan clas 1 ra vard konid:"<<endl;
	cin>>n;
	a=new float[n];
	cout<<"nomarat danshjoyan clas 1 ra vard konid:  "<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
	//2
	float *b;
	int m;
	cout<<"teadad dansh joyan clas 2 ra vard konid:"<<endl;
	cin>>m;
	b=new float[m];
	cout<<"nomarat danshjoyan clas 2 ra vard konid:  "<<endl;
	for(int i=0;i<m;i++)
	    cin>>b[i];
	
	cout<<"klas  "<<test(a,n,b,m,avg1,avg2)<<"  dars khan tarand"<<endl;
	
	return 0;
}