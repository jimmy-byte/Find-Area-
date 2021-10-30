//find the area of Pentagon using C++ program

#include<bits/stdc++.h>
using namespace std;

// Function for find area of pentagon
float findArea(float a)
{
	float Area;

	// Formula foe find area
	Area = (sqrt(5 * (5 + 2 * (sqrt(5)))) * a * a) / 4;

	return Area;
}

// Driver code for  find the area of  Pentagon
int main()
{
	float a = 5;
	
	// function calling in here 
	cout << "Area of Pentagon is = " << findArea(a);
	
	return 0;
}
