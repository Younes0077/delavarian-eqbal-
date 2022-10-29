#include <iostream>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char *p;
	p=new char;
	cin>>p;
	//cout<<p; 
	int c=0;
//	for(int i=0;i<10;i++){
	while(true){
	c++;
	cout<<c<<endl;
	if(p[c]=='1')
	break;
}
for(int i=0;i<c;i++){
	cout<<p[i];
}

/*int i=0;
	while(p[i]=='a'){
		cout<<p[i]<<endl;
		i++;
}*/
	return 0;
}