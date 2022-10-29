#include <iostream>
#include <iomanip>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void test(float *a,int n,int * mos,int * man){
	*mos=0;
	*man=0;
	for(int i=0;i<n;i++){
		if(a[i]>0){
			*mos=*mos+1;
		}
		else{
			*man=*man+1;
		}
	}
}
int main(int argc, char** argv) {
	float *a;
	int mos,man;
	int n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    test(a,n,&mos,&man);
    cout<<mos<<endl;
    cout<<man<<endl;
	return 0;
}