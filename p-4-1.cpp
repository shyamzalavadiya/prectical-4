#include <iostream>
using namespace std;
class Employee
{
private:
	int emp_id;
	string emp_name;

public:
	void getdata()
	{
		cout << "Enter the Employee id   :: ";
		cin >> emp_id;
		cin.ignore();
		cout << "Enter the Employee Name :: ";
		getline(cin, emp_name);
	}
	void putdata()
	{
		cout << "Employee id is  :: " << emp_id << endl;
		cout << "Empoyee name is :: " << emp_name << endl;
		cout <<"shyam zalavadiya";
		cout<<"2201301815";
	}
};
int main()
{
	int n, i;
	cout << "Enter the number of Employee :: ";
	cin >> n;
	Employee emp[n];
	for (i = 0; i < n; i++)
	{
		cout << "Enter the employees details :: emp -> " << (i + 1) << ":: " << endl;
		emp[i].getdata();
	}
	for (i = 0; i < n; i++)
	{
		cout << "Details of employee is      :: emp -> " << (i + 1) << ":: " << endl;
		emp[i].putdata();
	}
}
