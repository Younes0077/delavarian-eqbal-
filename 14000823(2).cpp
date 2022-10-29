
using namespace std;
#include <iomanip>
#include <iostream>
struct danesh {
    char lastname[10];
	char name[10];
	float sh;
	char ln[10];
	float m;
	int sv;
	int st;
};

int main(){
	danesh *a;
	int n;
	cout<<"tadad dansh joyan ra vard konid"<<endl;
	cin >> n;
	a = new danesh[n];
	if(!a)
	  return 0;

	for (int i = 0; i < n; i++) {
		cout << "name ra vared konid" << endl;
		cin >> a[i].name;
		cout << endl;
		cout <<"shomar danesh joi ra vard konid"<< endl;
		cin >> a[i].sh;
		cout << endl;
		cout <<"name khnvadgi ra vard koid"<< endl;
		cin>>a[i].ln;
		cout << endl;
		cout << "moadel" <<endl;
		cin >> a[i].m;
		cout << endl;
		cout <<"sal vorod ra vard konid"<< endl;
		cin >> a[i].sv;
		cout << endl;
		cout <<"sal tavalod ra vard konid"<<endl;
		cin >> a[i].st;
	}


	return 0;


}