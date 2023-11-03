/*Reverse: Write a program that reads a sequence of positive integers from the user(-1
	to signal end of input), stores the numbers in an array and then creates a new array to
	store the numbers in reverse order.The program should output the two arrays.For
	example, assume the user entered the following integers at the prompt : 10 4 33 25 -
	1. The output should be :
Example run(user response in bold) :
	Please enter a sequence of positive integers(-1 to finish) :
	10
	7
	33
	25
	- 1
	You have entered 4 integers.
	Initial array: 10 7 33 25
	Reversed array : 25 33 7 10*/
#include<iostream>
using namespace std;
int main()
{
	const int MAX = 100;
	int Initial[MAX];
	int Reversed[MAX];
	int i = 0;
	cout << "Enter a sequence of positive integers(-1 to end):" << endl;
	do//Reads the numbers intoo the array
	{
		cin >> Initial[i];
		if (Initial[i] < -1)
		{
			cout << "Invalid input. Please Enter a POSITIVE number:";
			cin >> Initial[i];
		}
		else if (Initial[i] == -1)
		{
			break;
		}
		else
		{
			i++;
		}
	} while (Initial[i] != -1 && Initial[i] < MAX);
	return 0;
}