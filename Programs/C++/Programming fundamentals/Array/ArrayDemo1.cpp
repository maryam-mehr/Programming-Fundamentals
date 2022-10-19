

#include<iostream>
using namespace std;

int main()
{
	// interger array of five elements
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter marks of student " << i+1<< endl;
			cin >> marks[i];
	}
	
	
	// accessing array values	
	for (int i = 0; i < 5; i++)
	{
		cout << "Marks of student" << i+1<< " : ";
		cout << marks[i] << endl;
	}

	
		
	cout << "size of marks array : " << sizeof(marks) << endl;
	
	return 0;
}
