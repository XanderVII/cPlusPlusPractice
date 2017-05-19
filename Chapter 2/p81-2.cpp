/* XanderVII
   Starting Out With C++
   Program Challenge page 81
   2. Sales Prediction
   
   The East Coast sales division of a company generates 62 percent of total sales.
   Based on that percentage, write a program that will predict how much the East Coast 
   divison will generate if the company has $4.6 million in sales this year.
*/

#include <iostream>
using namespace std;

// Main Body
int main()
{
	int sales = 4600000;
	double percent = .62;
	
	double total = 0; 
	total = sales * percent;
	
	cout << total << endl;
}
