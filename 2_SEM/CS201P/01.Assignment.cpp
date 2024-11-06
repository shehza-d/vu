#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	cout << "Student ID: BC240200311" << endl;
	cout << "Student Name: Shehzad Iqbal" << endl;

	int marks[3];

	for (int i = 0; i < 3; i++)
	{
		cout << "Enter marks for subject " << i + 1 << ": ";

		cin >> marks[i];

		while (marks[i] > 100)
		{
			cout << "Enter marks within 100: ";
			cin >> marks[i];
		}

		cout << "Subject 1 marks are " << marks[i] << endl;
	}

	cout << "\nMarks have been entered, here is your result:" << endl;

	const int total_marks = marks[0] + marks[1] + marks[2];
	const float average = total_marks / 3;

	cout << "Obtained marks out of 300: " << total_marks << endl;
	cout << "Average marks: " << average << endl;

	if (average >= 90)
	{
		cout << "Grade: " << "A" << endl;
	}
	else if (average >= 80)
	{
		cout << "Grade: " << "B" << endl;
	}
	else if (average >= 70)
	{
		cout << "Grade: " << "C" << endl;
	}
	else if (average >= 60)
	{
		cout << "Grade: " << "D" << endl;
	}
	else
	{
		cout << "Grade: " << "F" << endl;
	}

	// int lowest_marks= marks[0],>marks[1]:marks[2]>marks
	// int highest_marks=

	const int lowest = min({marks[0], marks[1], marks[2]});
	const int highest = max({marks[0], marks[1], marks[2]});

	cout << "Lowest marks: " << lowest << endl;
	cout << "Highest marks: " << highest << endl;

	return 0;
}