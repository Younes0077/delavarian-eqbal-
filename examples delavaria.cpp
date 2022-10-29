//
//  Created by Mohadeseh Delavarian

//Structured Programming
//Object Oriented Programming (OOP)


#include <iostream>
#include <iomanip>
using namespace std;

class Rec{
    
public:
   float pre()
    {
        return 2*(len+wid);
    }
    float area()
    {
        return len*wid;
    }
    void read()
    {
        cin>>len>>wid;
    }
    void print()
    {
        cout<<len<<endl<<wid<<endl;
    }
    void changelen(float x)
    {
        len=x;
    }
    void changewid(float x)
    {
        wid=x;
    }
    
    
private:
    float len, wid;
};

int main()
{
    Rec a;
    a.read();
    a.print();
    cout<<a.pre();
    //1
    if (a.area()>100)
        cout<<a.area();
    //2
    float c;
    c=a.area();
    if (c>100)
        cout<<c;
    a.changelen(1000);
    float m;
    cin>>m;
    a.changewid(m);
    
    
    return 0;
}


