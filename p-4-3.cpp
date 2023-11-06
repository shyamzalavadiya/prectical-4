#include <iostream>
#include <string>

using namespace std;

class Student 
{
	private:
    	string name;
    	float spi;

	public:
    	void getData()
		 {
        	cout << "Enter student name: ";
        	cin.ignore(); // Clear the newline character from the buffer
        	getline(cin, name);
        	cout << "Enter SPI: ";
        	cin >> spi;
    	}

    	float getSPI()
		{
        	return spi;
    	}

    	string getName() 
		{
        	return name;
    	}
};

int main() {
    const int numStudents = 10;
    Student students[numStudents];

    // Input SPI data for each student
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter data for Student " << (i + 1) << ":\n";
        students[i].getData();
    }

    // Find the student with the highest SPI
    int highestIndex = 0;
    for (int i = 1; i < numStudents; ++i) {
        if (students[i].getSPI() > students[highestIndex].getSPI()) {
            highestIndex = i;
        }
    }

    // Print the student with the highest SPI
    cout << "\nStudent with the highest SPI:\n";
    cout << "Name: " << students[highestIndex].getName() << endl;
    cout << "SPI: " << students[highestIndex].getSPI() << endl;
    cout <<"shyam zalavadiya";
    cout<<"2201301815";
 
    return 0;
}

