#include "iostream"
#include "BMI.h"
#include <string>

using namespace std;

int main() 
{
	BMI bmi1("John Doe", 19, 145, 70);
	cout << "The BMI for " << bmi1.getName() << " is " << bmi1.getBMI() << " " << bmi1.getStatus() << endl;
	BMI bmi2("Susan King", 215, 70);
	cout << "The BMI for " << bmi2.getName() << " is " << bmi2.getBMI() << " " << bmi2.getStatus() << endl;
	BMI a;
	cout << a.s << endl;
	return 0;
}