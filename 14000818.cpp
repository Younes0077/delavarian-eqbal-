#include <iostream>
#include <iomanip>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
float  test(float  *a,int n,int &s){
	float max=a[0];
	 for(int i=0;i<n;i++){
	 	if(a[i]>max)
	 	  max=a[i];
}

while(true){
	s++;
	if(a[s]==max)
	  break;
}
return max;
}
int main(int argc, char** argv) {
	float max;
	int s;
	float *a;
	int n;
	cin>>n;
	a=new float[n];
    for(int i=0;i<n;i++)
       cin>>a[i];
    
    test(a,n,s);
    cout<<"bishtarin gamaiat :"<<test(a,n,s)<<endl;
    cout<<"roze bishtarin gamaiat :"<<s<<endl;
	return 0;
}