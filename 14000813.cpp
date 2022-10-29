#include <iostream>
#include <iomanip>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void test(float *a,int n,float &avg,float &max,float &min,int &k,int &s){
	float sum=0;
	for(int i=0;i<n;i++)
	   sum=sum+a[i];
	   
	avg=sum/n;
	
    max=a[0];
	for(int i=0;i<n;i++)
	  if(a[i]>max)
	     max=a[i];
	            	   
    min=a[0];
	for(int i=0;i<n;i++)
	   if(a[i]<min)
	     min=a[i];
	     
    int j=-1;
	while(1){
		j++;
		if(a[j]==min)
		 break;
	}
	k=j+1;
	
     int l=-1;
    while(l<n){
    	l++;
    	if(a[l]==max)
    	break;	
	}  
     s=l+1;
}
int main(int argc, char** argv) {
	float avg;
	float max;
	float min;
	int k;
	int s;
	float *a;
	int n;
	cout<<"teadad roz ra vard konid:  ";
	cin>>n;
	a=new float[n];
	if(!a)
	  return 0;
	
	cout<<"mizan barandgi ra vard konid:  "<<endl;
    for(int i=0;i<n;i++){
    	cin>>a[i];
 }
 
    test(a,n,avg,max,min,k,s);
    cout<<"kam trin mizan barsh="<<min<<endl;
    cout<<"roze kam tarin mizan barsh="<<k<<endl;
    cout<<"bishtarin mizan barsh="<<max<<endl;
    cout<<"roze bishtarin mizan barsh="<<s<<endl;
    cout<<"miangin barsh ha="<<avg<<endl;
    
     
	return 0;
}