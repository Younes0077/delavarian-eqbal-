#include <iostream>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	struct a{
		char name[10];
		int sal;
		float qeimat;
		float teadadsafhe;
	};
	
int main(int argc, char** argv) {
	a *ketab;
	int n;
	cout<<"teadad ketab ra vard konid"<<endl;
    cin>>n;
	ketab=new a[n];
	if(!ketab)
	   return 0;
	for(int i=0;i<n;i++){
	cout<<"name v naeme khanvadgi nevisandeh ketab ra vard konid"<<endl;

	cin>>ketab[i].name;
	//-------------------------------------------------
	cout<<"sal chap ra vard konid"<<endl;
	cin>>ketab[i].sal;
	//--------------------------------------
	cout<<"qeimat ketab ra vard konid"<<endl;
	cin>>ketab[i].qeimat;
	//----------------------------------------------------
	cout<<"tadad safhe ra vard konid"<<endl;
	cin>>ketab[i].teadadsafhe;

}
    for(int i=0;i<n;i++){
    		cout<<"______________________________"<<endl;
	cout<<"name  "<<endl;
	cout<<ketab[i].name;
	cout<<endl;
	cout<<"sal chap  "<<endl;
	cout<<ketab[i].sal;
	cout<<endl;
	cout<<"qeimat ketab  "<<endl;
	cout<<ketab[i].qeimat;
	cout<<endl;
	cout<<"tadad safhe  "<<endl;
	cout<<ketab[i].teadadsafhe;
	cout<<endl;
	cout<<"ketab badi________________________________________   "<<endl;
	cout<<endl;
	}
	
	return 0;
}