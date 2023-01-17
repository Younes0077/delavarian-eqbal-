#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct node{
int data;
node *next;	
};

class linkedlist{
	public:
		linkedlist(){
			start = NULL;
		}
		void print(){
			for(node *p=start;p!=NULL;p=p->next){
				cout<<p->data<<endl;
			}
		}
		bool add(int x){
			node *t;
			t = new node;
			if(!t){
				return false;
			}
			t->data = x;
			t->next = NULL;
			if(!start || x<start->data){
				t->next = start;
				start = t;
				return true;
			}
		}
		

		void remove(int x){
			if(!start || x<start->data)
				return;
			if(x==start->data){
				node *temp =start;
				start = start->next;
				delete temp;
				return;
			}
			node *p = start;
			while(p->next && p->next->data < x){
				p = p->next;
			}
			if(p->next == NULL || p->next->data > x){
				return;
			}
			else{
				node *temp = p->next;
				p->next = p->next->next;
				delete temp;
				return;
			}
		}
		
		bool search(int x){
			for(node *p = start;p!=NULL;p=p->next){
				if(x==p->data){
					return true;
				}
			}
			return false;
		}
		bool min(int& min){
			bool f = true;
			min =start->data;
			if(start == NULL){
				f = false;
				return f;
			}
			for(node *p = start;p!=NULL;p=p->next){
				if(min>p->data){
					min = p->data;
				}
			}
			return f;			
		}
		bool max(int& max){
			bool f = true;
			max =start->data;
			if(start == NULL){
				f = false;
				return f;
			}
			for(node *p = start;p!=NULL;p=p->next){
				if(max<p->data){
					max = p->data;
				}
			}
			return f;			
		}
		bool isempty(){
			if(start->next == NULL){
				return true;
			}
			else{
				return false;
			}
		}

		
	private:
		node *start;
};
int main() {
	
	linkedlist a;
	int n,max,min;
	int data;
	// n add az karbar daryaft karde v be list azafe konad
	cout<<"enter size of list"<<endl;
	cin>>n;	 
	for(int i=0;i<n;i++){
		cout<<"enter node "<<i+1<<": "<<endl;
		cin>>data;
		a.add(data);
	}
	
	int x,y,m;
	// 3 add az karbar daryaft karde v hazf konad

	cout<<"enter two number for remove"<<endl;
	cin>>x>>y;
	a.remove(x);
	a.remove(y);
	a.remove(m);
	
	
	//max v min list ra namayesh dahad
	a.max(max);
	a.min(min);
	cout<<"max is: "<<max<<endl;
	cout<<"min is: "<<min<<endl;
	
	// akhtelaf min v max ra be das avarad	
	cout<<"max - min = "<<max-min<<endl;
	
	


	return 0;
}