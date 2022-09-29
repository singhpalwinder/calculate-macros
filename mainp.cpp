#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void calculateMacros();
void calculateAmount();

struct macros
{
	double protein, proteinEaten, carbs;
	double carbsEaten, weight, carbsPerDay, proteinPerPound;

};

macros buffDude;

int main()
{
	int choice;

	cout << "What would you like to do today?\n";
	cout << "Choice 1: Figure out how much protein/carbs you need.\n";
	cout << "Choice 2: Figure out how many g/oz of protein/carbs you need.\n";
	cout << "Choice 3: Surprise";
	
	cin >> choice;

	switch (choice)
	{
		case 1: calculateMacros();
		case 2: calculateAmount();
		case 3: cout << "DNE\n";
	}








	system("pause");
	return 0;

}

void calculateMacros()
{
	cout << "How much do you weigh in lbs?\n";
	cin >> buffDude.weight;

	cout << "How many grams of protein do you want per lb of bodyweight?\n";
	cin >> buffDude.proteinPerPound;

	cout << "How many carbs do you want per day?\n";
	cin >> buffDude.carbsPerDay;

	cout << "How much protein have you had so far in the day?\n";
	cin >> buffDude.proteinEaten;

	buffDude.protein = (buffDude.weight * buffDude.proteinPerPound) - buffDude.proteinEaten;

	cout << "How many carbohydrates have you had so far in the day?\n";
	cin >> buffDude.carbsEaten;

	buffDude.carbs = buffDude.carbsPerDay - buffDude.carbsEaten;

	cout << setprecision(2) << fixed;
	cout << "You need: " << buffDude.protein << "grams of protein.\n";
	cout << setw(15) << buffDude.carbs << "grams of carbohydrates.\n";

	


	

}

void calculateAmount()
{
	double chickenProtein = 22, chickenOunces = 4;
	double brownRiceCarbs = 35, riceGrams = 50;
	double sweetPotatoes = 23, potatoesOunces = 4;
	double sweetPotatoesNeeded;
	double chickenOuncesNeeded;
	double riceGramsNeeded;
	
	sweetPotatoesNeeded = (buffDude.carbs / sweetPotatoes) * potatoesOunces;
	chickenOuncesNeeded = (buffDude.protein / chickenProtein) * chickenOunces;
	riceGramsNeeded = (buffDude.carbs / brownRiceCarbs) * riceGrams;

	system("cls");
	cout << "You need " << chickenOuncesNeeded << " oz of chicken.\n";
	cout << "You need " << riceGramsNeeded << " grams of brown rice.\n";
	cout << "Or " << sweetPotatoesNeeded << " oz of sweet potatoes.\n";

	cout << "Main?";
	char ans;
	cin >> ans;
	if (ans == toupper('Y'))
		main();
}