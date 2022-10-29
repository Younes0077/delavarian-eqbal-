#include <iostream>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void test(char *a,int c,int &teadad,int &s){
	int p;
	for(int i=0;i<c;i++)
	     if(a[i]=='.')
	         s++;
	for(int i=0;i<c;i++)
      if(a[i]=='z'||a[i]=='a')
         p++;
         
    teadad=p+s;
    
a[0]='!';	        
for(int i=0;i<c;i++)
if(a[i]=='.'){
	a[i+1]='!';
}
}
int main(int argc, char** argv){
	char *a;
	a=new char;
	int c=0;
	int s;
	int teadad;
	cin>>a;
	while(true){
		c++;
		if(c=='!')
		break;
	}
//	for(int i=0;i<c;i++)
//	    cin>>a[i];
	for(int i=0;i<c;i++)
    cout<<a[i];
    cout<<endl;
	test(a,c,teadad,s);
	cout<<"teadad 'z','.','a' : "<<teadad<<endl;
	for(int i=0;i<c;i++)
    cout<<a[i];
    cout<<endl;
    cout<<"TEADA KALAMAT="<<(s+1)<<endl;

	return 0;
}