#include <iostream>
#include <vector>
using namespace std;

class myInt
{
public:
    myInt(int a ,int b):m_li(a),m_ri(b)
     {}
	myInt():m_li(0),m_ri(0)
     {}
    void print()
    {
        cout<<"m_li = "<<this->m_li<<endl;
        cout<<"m_ri = "<<this->m_ri<<endl;
    }
 
    void set(int li, int ri)
    {
        this->m_li = li;
        this->m_ri = ri;
    }
private:
    int m_li;
    int m_ri;
    string name;
};
 
 
int main() {
 
	vector<myInt> v1(30);
	for(vector<myInt>::iterator iter = v1.begin(); iter != v1.end(); iter++)
    {
        iter->print();
    }
    cout <<""<<endl;
    cout <<""<<endl;
    cout <<""<<endl;
    cout <<""<<endl;
    cout <<""<<endl;
    cout <<""<<endl;

    cout <<""<<endl;
    cout <<""<<endl;

    cout <<""<<endl;
    cout <<""<<endl;

    cout <<""<<endl;
    cout <<""<<endl;

    
    cout<<"zouchenglong"<<endl;

 
	return 0;
}