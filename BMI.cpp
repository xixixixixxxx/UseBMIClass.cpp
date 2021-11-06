#include "BMI.h"
#include "iostream"
#include "string"
using namespace std;

BMI::BMI(const string& newName, int newAge, double newWeight, double newHeight)
{
	name = newName;
	age = newAge;
	weight = newWeight;
	height = newHeight;
}

BMI::BMI(const string& newName, double newWeight, double newHeight)
{
	name = newName;
	age = 18;
	weight = newWeight;
	height = newHeight;
}

double BMI::getHeight() const
{
	return height;
}

double BMI::getWeight() const
{
	return height;
}

int BMI::getAge() const
{
	return age;
}

string BMI::getName() const
{
	return name;
}

double BMI::getBMI() const
{
	const double KI = 0.45357237;
	const double ME = 0.0254;
	double bmi = weight * KI / ((height * ME) * (height * ME));
	return bmi;
}

string BMI::getStatus() const
{
	double bmi = getBMI();
	if (bmi < 18.5)
		return "Underweight";
	else if (bmi < 25)
		return "Normal";
	else if (bmi < 30)
		return "Overweight";
	else
		return "Obese";
}

BMI::BMI()
{
	s = "John";
}