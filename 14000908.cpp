#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct date{
	int y;
	int m;
	int d;
};
struct food{
	char name[30];
	int vazn;
	date tolid;
	date angheza;
	float kalri;
};
food read(){
	food a;
	cin>>a.name>>a.vazn>>a.tolid.y>>a.tolid.m>>a.tolid.d>>a.angheza.y>>a.angheza.m>>a.angheza.d>>a.kalri;
	return a;
}
void print(food a){
	cout<<a.name<<endl;
	cout<<a.vazn<<endl;
	cout<<a.tolid.y<<endl;
	cout<<a.tolid.m<<endl;
	cout<<a.tolid.d<<endl;
	cout<<a.angheza.y<<endl;
	cout<<a.angheza.m<<endl;
	cout<<a.angheza.d<<endl;
	cout<<a.kalri<<endl;
}
int main(int argc, char** argv) {
	food *a;
	int n;
	cin>>n;
    a=new food[n];
    for(int i=0;i<n;i++)
        a[i]=read();
    
   int teadad=0;
    for(int i=0;i<n;i++){
        if(a[i].vazn>100)
           teadad++;
}
cout<<teadad<<endl;

    int teadad2=0;
    for(int i=0;i<n;i++){
    	if(a[i].angheza.m==10)
    	   teadad2++;
	}
cout<<teadad2<<endl;

    food b=a[0];
    int min=a[0].tolid.y;
    int min1=a[0].tolid.m;
    int min2=a[0].tolid.d;
    for(int i=0;i<n;i++)
        if(a[i].tolid.y>min){
           min=a[i].tolid.y;
           b=a[i];
       }
        else if(a[i].tolid.m>min1){
            min1=a[i].tolid.m;
            b=a[i];
        }
        else if(a[i].tolid.d>min2){
        	min2=a[i].tolid.d;
        	b=a[i];
		}
print(b);

	return 0;
}