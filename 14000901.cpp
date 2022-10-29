#include <iostream>
#include <iomanip>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

struct book{
	char name[20];
	char nviname[20];
	float sal;
	float ghe;
	int safhe;
}; 

void read(book &a){
	cin>>a.name>>a.nviname>>a.sal>>a.ghe>>a.safhe;
}
void print(book a){
	cout<<a.name<<endl;
	cout<<a.nviname<<endl;
	cout<<a.ghe<<endl;
    cout<<a.safhe<<endl;
				
}
int main(int argc, char** argv) {
	book a;
	read(a);
	cout<<"--------------------"<<endl;
	print(a);
	return 0;
}