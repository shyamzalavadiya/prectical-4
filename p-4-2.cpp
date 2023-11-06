/*the key differences between static member functions and normal member
 functions in C++ are their association with the class
  or instances, access to instance-specific data, and usage scenarios. 
  Static member functions are often used for class-level operations, 
 while non-static member functions are used  for instance-specific operations.*/
#include <iostream>
using namespace std;
class MyClass 
{
	private:
    		static int count; // Static member variable

	public:
    		static void incrementCount() // Static member function
			{ 
        			count++;
    		}

    		static int getCount()
			{
        		return count;
    		}
};


int MyClass::count=5;// Initialize the static member variable

int main() 
{
    // Access the static member function without creating an instance of the class
    MyClass::incrementCount();
    MyClass::incrementCount();
    MyClass::incrementCount();
  
  

    // Access the static member function to get the count
    cout << "Count: " <<MyClass::getCount() <<endl;
    cout <<"shyam zalavadiya";
    cout<<"2201301815";

    return 0;
}

