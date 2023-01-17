#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class stack{

private:
	int maxsize,top;
	int *st;
	
	
public:
	stack(int c=100){
		if(c<0){
			maxsize = 0;
			st = NULL;
			top = -1;
		}
		else{
			st = new int[c];
			if(!st){
				maxsize = 0;
				st = NULL;
				top = -1;
				return ;
			}
			maxsize = c;
			top = -1;
		}
	}
	bool isempty(){
		if(top == -1){
			return true;
		}
		else{
			return false;
		}
	}
	bool isfull(){
		if(maxsize-1 == top){
			return true;
		}
		else{
			return false;
		}
	}
	bool push(int x){
		if(isfull()){
			return false;
		}
		else{
			top++;
			st[top]=x;
			return true;
		}
	}
	int pop(){
		if(isempty()){
			return 0;
		}
		else{
			int x = st[top];
			top--;
			return x;
		}
	}
	void print(){
		for(int i=0;i<top;i++){
			cout<<st[i]<<endl;
		}
	}
	int ttop(){
		if(isempty()){
			return 0;
		}
		else{
			return st[top];       
		}
	}
	void checkpos(){
		if((st[top-1]*st[top-2]) > 0){
			cout<<"ok"<<endl;
		}
		else{
			cout<<"not ok"<<endl;
		}
	}
	void printdelete(){
		while(!isempty()){
		int l = st[top];
		if(l%2 == 0){
			cout<<"zoj:"<<l<<endl;
		}
		top--;
		}
	}

	
};


int main(int argc, char** argv) {
	
	
	stack a(20);
	a.push(2);
	a.push(10);
	int n,x,m;
	
	// n add be stack azafe konad
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		if(!a.push(x)){
			cout<<"stack is full"<<endl;
			break;
		}
	}
	a.checkpos();
	a.printdelete();
	
	// 5 add be stack azafe konad
	
	for(int i=0;i<5;i++){
		cout<<i<<":"<<a.pop()<<endl;
	}
	
	// namayehsh top stack
	cout<<"top"<<a.ttop()<<endl;
	
	

	if(a.ttop()>0){
		for(int i=0;i<2;i++){
			cin>>m;
			if(!a.push(m)){
				cout<<"stack is full"<<endl;
				break;
			}
		}
	}
	
	// azafe kardan be stack ta jaie ke porshavad
	while(a.isfull() == false){
		int xy;
		cin>>xy;
		if(!a.push(xy)){
			cout<<"stack is full"<<endl;
			break;
		}
	}

	
	return 0;
}