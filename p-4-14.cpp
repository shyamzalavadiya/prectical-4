#include <iostream>
using namespace std;

class MyClass
{
	public:
    	MyClass()
		{
        	cout << "Object created" << endl;
    	}

    	~MyClass()
		{
        	cout << "Object destroyed" << endl;
    	}
};

int main() 
{
    MyClass obj1;

    {
        MyClass obj2;
}
	cout <<"shyam zalavadiya";
	cout<<"2201301815";

    return 0;
}

