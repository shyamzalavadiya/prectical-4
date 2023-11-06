#include<iostream>
using namespace std;

class get{
	private:
		int num;
	public:
		get(int value){
			num=value;
		}		
		display()
		{
			cout<<"The value is passed to paramiterized constructor is ::"<<num;
		}
};
int main()
{
	get g(5);
	g.display();
	cout <<"shyam zalavadiya";
	cout<<"2201301815";	
	return 0;
}

