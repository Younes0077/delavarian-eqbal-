#include <iostream>
#include <iomanip>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
float  test(float  *a,int n,int &s,float &min,int &k){
	float max=a[0];
	 for(int i=0;i<n;i++){
	 	if(a[i]>max){
	 	  max=a[i];
	 	  s=i;
}
}
   min=a[0];
   for(int i=0;i<n;i++){
      if(a[i]<min){
      	min=a[i];
      	k=i;
	  }
}
return max;
}
int main(int argc, char** argv) {
	float min;
	int k;
	float max;
	int s;
	float *a;
	int n;
	cin>>n;
	a=new float[n];
	if(!a)
	  return 0;
    for(int i=0;i<n;i++)
       cin>>a[i];
    
//    test(a,n,s);
    cout<<"bishtarin gamaiat :"<<test(a,n,s,min,k)<<endl;
    cout<<"roze bishtarin gamaiat :"<<s+1<<endl;
    cout<<"kamtarin gamaiat :"<<min<<endl;
    cout<<"kamtarin gamaiat :"<<k+1<<endl;
	return 0;
}