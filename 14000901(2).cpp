#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct date{
	float y;
	float m;
	float d;
};
struct klass{
	char klasname[50];
	char nameostad[20];
	int zarfiat;
	int teadad;
	date amtehan;
};
klass read(){
///	p=new klass[n];
    klass p;
//    int n;
//	for(int i=0;i<n;i++)
	cin>>p.klasname>>p.nameostad>>p.zarfiat>>p.teadad>>p.amtehan.y>>p.amtehan.m>>p.amtehan.d;
	return p;
}

int main(int argc, char** argv) {
	klass *a;
	int n; 
	cin>>n;
	a=new klass[n];
	for(int i=0;i<n;i++){
	a[i]=read();
}
	
	
	int t=0;
	for(int i=0;i<n;i++){
	if(a[i].amtehan.m==10)
	t++;
}
	cout<<"-------------------"<<endl;
	cout<<t<<endl;

	return 0;
}