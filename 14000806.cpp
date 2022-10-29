#include <iostream>
#include <iomanip>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float a[365];
	for(int i=0;i<5;i++)
	   cin>>a[i];
	float sum=0;
	for(int i=0;i<5;i++){
		sum=sum+a[i];
	}
	float avg1;
	avg1=sum/5;
	cout<<"miangin salane="<<avg1<<endl;
	//2
	float avg2;
	avg2=sum/12;
	cout<<"mingin mahane="<<avg2<<endl;
	//3
	int i;
	float max=a[0];
	for(i=0;i<5;i++){
		if(a[i]>max)
			max=a[i];
}
	cout<<"bishtarin tolid roze="<<max<<endl;
int o=0;
	while(1){
	o++;
	if(a[o]==max)
break;
}
if(0<o<30)
cout<<"mah aval "<<"roze"<<o+1<<endl;
else{
	if(30<o<60){
		cout<<"mah dovom"<<"roze"<<o+1<<endl;
	}
	else{
		if(60<o<90){
			cout<<"mah sevom"<<"roze"<<o+1<<endl;
		}
			
	}
	
}

	return 0;
}