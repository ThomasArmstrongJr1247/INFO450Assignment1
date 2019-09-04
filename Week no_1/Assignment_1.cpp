// Week no_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Write a program that calculates area and perimeter of a rectangle
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
	// Initialize Variables
	double length{}, width{}, perimeter{}, area{};
	// Get Variables
	cout << endl
		<< "Enter the length of the rectangle in feet: ";
	cin >> length;
	cout << endl
		<< "Enter the width of the rectangle in feet: ";
	cin >> width;
	//Calculations
	perimeter = 2.0 * (length + width);

	area = (length * width);
	//Perimeter Calculation Results Banner
	cout << endl
		<< "The Perimeter of your rectangle with a Length of:" << length << "ft. and a Width of " << width << "ft. is: " << perimeter << "ft."
		<< endl;
	//Area Calculation Results Banner
	cout << endl
		<< "The Area of your rectangle with a Length of:" << length << "ft. and a Width of " << width << "ft. is: " << area << "ft."
		<< endl;
	system("pause");
}
