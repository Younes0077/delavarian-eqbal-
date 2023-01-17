#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class queue{
	
	private:
		int maxsize,rear,front;
		int *q;
		
		public:
			queue(int c = 100){
				if(c > 0){
					q = new int[c];
				
				if(!q){
					maxsize = 0;
					rear = front = -1;
					return;
				}
				maxsize = c;
				rear = front = -1;
				}
				else{
				q = NULL;
				maxsize = 0;
				rear = front = -1;
			}
		}
			bool isfull(){
				if(rear == maxsize){
					return true;
				}
				else{
					return false;
				}
			}
			bool isempty(){
				if(front == maxsize){
					return true;
				}
				else{
					return false;
				}
			}
			bool add(int x){
				if(isfull()){
					return false;
				}
				else{
					rear++;
					q[rear] = x;
					return true;
				}
			}
			bool remove(int& x){
				if(isempty()){
					return false;
				}
				else{
					front++;
					x = q[front];
					return true;
				}
			}		
};

int main(int argc, char** argv) {
	queue a(20);
	int x,n;
	
	// n add be safe azafe konad:
	cout<<"enter size :"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"enter "<<i<<" number:";
		cin>>x;
		a.add(x);
	}
	// n add az safe hazfa v dar khoroji chap konid:
	int y,m;
	cin>>m;
	for(int i=0;i<m;i++){
		if(a.remove(y)){
			cout<<y<<endl;
	}
	}
	// alam konad aya saf khali ast ya na
	
	if(a.isempty()){
		cout<<"queue is empty!!"<<endl;
	}
	else{
		cout<<"queue is not empty"<<endl;
	}

	 
	
	return 0;
}