#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"A constructor\n";
		}
		~A(){
			cout<<"A Destructor\n";
		}
};
class B{
	public :
		B(){
			cout<<"B constructor\n";
		}
		~B(){
			cout<<"B Destructor\n";
		}
};
class C{
	public :
		C(){
			cout<<"C constructor\n";
		}
		~C(){
			cout<<"C Destructor\n";
		}
};
class D: public A,public B,public C{
	public :
		D(){
			cout<<"D constructor\n";
		}
		~D(){
			cout<<"D Destructor\n";
		}
};
int main(){
	D obj;
}
