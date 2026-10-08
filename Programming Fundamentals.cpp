#include <iostream>
using namespace std;
int main()
{
	int Marks;
	cout << "Please enter your marks:" << endl;
	cin >> Marks;
	if (Marks >= 90 && Marks <= 100)
	{
		cout << "Your grade is A+" << endl;
		cout << "And your scholarship is 100%" << endl;
		cout << "Actual fee = 75000" << " After Scholarship = 00000" << endl;
	}
	else if (Marks >= 80 && Marks <= 89)
	{
		cout << "Your grade is A" << endl;
		cout << "And your scholarship is 100%" << endl;
		cout << "Actual fee = 75000" << " After Scholarship = 00000" << endl;
	}
	else if (Marks >= 78 && Marks <= 79)
	{
		cout << "your grade is A-" << endl;
		cout << "And your scholarship is 50%" << endl;
		cout << "Actual fee = 75000" << " After Scholarship = 37500" << endl;
	}
	else if (Marks >= 74 && Marks <= 77)
	{
		cout << "your grade is B+" << endl;
		cout << "And your scholarship is 50%" << endl;
		cout << "Actual fee = 75000" << " After Scholarship = 37500" << endl;
	}
	else if (Marks >= 70 && Marks <= 73)
	{
		cout << "your grade is B" << endl;
		cout << "And your scholarship is 50%" << endl;
		cout << "Actual fee = 75000" << " After Scholarship = 37500" << endl;
	}
	else if (Marks >= 68 && Marks <= 69)
	{
		cout << "your grade is B-" << endl;
		cout << "And your scholarship is 25%" << endl;
		cout << "Actual fee = 75000" << " After Scholarship = 56250" << endl;
	}
	else if (Marks >= 64 && Marks <= 67)
	{
		cout << "your grade is C+" << endl;
		cout << "And your scholarship is 25%" << endl;
		cout << "Actual fee = 75000" << " After Scholarship = 56250" << endl;
	}
	else if (Marks >= 60 && Marks <= 63)
	{
		cout << "your grade is C" << endl;
		cout << "And your scholarship is 25%" << endl;
		cout << "Actual fee = 75000" << " After Scholarship = 56250" << endl;
	}
	else if (Marks >= 58 && Marks <= 59)
	{
		cout << " your grade is C-" << endl;
		cout << "you are not eligible for a scholarship" << endl;
	}
	else if (Marks >= 54 && Marks <= 57)
	{
		cout << "your grade is D+" << endl;
		cout << "you are not eligible for a scholarship" << endl;
	}
	else if (Marks >= 50 && Marks <= 53)
	{
		cout << "your grade is D" << endl;
		cout << "you are not eligible for a scholarship" << endl;
	}
	else if (Marks < 50)
	{
		cout << "your grade is F" << endl;
	}
	else if (Marks > 100)
	{
		cout << "invalid marks" << endl;
	}

}