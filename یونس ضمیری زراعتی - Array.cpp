#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Array{
	private:
		int size,maxsize;
		float *ar;
		
		
	public:
		Array(int c=100){
			if(c>0){
				ar=new float[c];
				maxsize = c; 
				size = 0;
				if(!ar){
					maxsize = 0;
					size = 0;
				}
			}
			else{
				maxsize = 0;
				size = 0;
			}
		}
		void read(int size){
			this->size = size;
			for(int i=0;i<size;i++){
				cin>>ar[i];
			}
		}
		void print(){
			for(int i=0;i<size;i++){
				cout<<ar[i]<<endl;
			}	
		}
		float min(){
			float min=ar[0];
			for(int i=0;i<size;i++){
				if(ar[i]<min){
					min = ar[i];
				}
				}
			return min;
		}
		void search(float digit){
			bool f=false;
			for(int i=0;i<size;i++){
				if(ar[i]==digit){
					f=true;
				}
			}
			if(f==true){
				cout<<"found"<<endl;
			}
			else{
				cout<<"not found"<<endl;
			}
			
		}
		void add(int m){
			ar[size]=m;
			size++;
		}
		void remove(){
			ar[size]= NULL;
			size--;
		}
		~Array(){
			delete []ar;
		}
		float avg(){
			float avg;
			float sum;
			for(int i=0;i<size;i++){
				sum = sum + ar[i];
			}
			avg = sum/size;
			return avg;
		}
		float sum(){
			float sum;
			for(int i=0;i<size;i++){
				sum = sum + ar[i];
			}
			return sum;
		}
		float mul(){
			float mul = 1;
			for(int i=0;i<size;i++){
				mul = mul * ar[i];
			}
			return mul;
		}
		float max(){
			float max=ar[0];
			for(int i=0;i<size;i++){
				if(ar[i]>max){
					max = ar[i];
				}
				}
			return max;
		}
				
		void insertionSort()  
		{  
		    int i, key, j;  
		    for (i = 1; i < size; i++) 
		    {  
		        key = ar[i];  
		        j = i - 1;  
		  
		        while (j >= 0 && ar[j] > key) 
		        {  
		            ar[j + 1] = ar[j];  
		            j = j - 1;  
		        }  
		        ar[j + 1] = key;  
		    } 
			 
		    for (i = 0; i < size; i++)  
		        cout << ar[i] << " ";  
		    cout << endl;  
		}  
		
	};
			
    

int main(int argc, char** argv) {
	Array b(50);
	cout<<"Please enter the size"<<endl;
	int size;
	cin>>size;
	
	cout<<"enter array"<<endl;
	b.read(size);
	cout<<"the smallest number : "<<b.min()<<endl;
	cout<<"the largest  number : "<<b.max()<<endl;
	
	cout<<"enter digit for search"<<endl;
	int digit;
	cin>>digit;
	b.search(digit);
	
	cout<<"enter number for add"<<endl;
	int m;
	cin>>m;
	b.add(m);
	b.print();
	cout<<"number deleted"<<endl;
	b.remove();
	b.print();
	cout<<"avg is: "<<b.avg()<<endl;
	cout<<"sum is: "<<b.sum()<<endl;
	cout<<"mul is: "<<b.mul()<<endl;	
	cout<<"insertion sort: "<<endl;
	b.insertionSort();
		
	
	return 0;
}