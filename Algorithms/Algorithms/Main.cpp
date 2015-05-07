#include"Algorithms.h"

Algorithms * algorithms = nullptr;

int main(int * argc, char ** argv)
{
	int randomNumber = 0;
	int size = 0;

	cout << "What is your random number? " << endl;
	cin >> randomNumber;


	cout << "What is the size of the array? " << endl;
	cin >> size;

	algorithms = new Algorithms(size, randomNumber);

	int numberToFind = 0;
	int result = 0;

	cout << "What number from the array do you want to find? " << endl;
	cin >> numberToFind;

	result = algorithms->DynamicSearch(algorithms->GetRandomNumberArray()[0], algorithms->GetRandomNumberArray()[size - 1], numberToFind);
	
	if (result > -1)
	{
		cout << "Found in index at " << result << endl;
	}
	else
	{
		cout << "could not find " << result << endl;
	}

	system("pause");
	return 0;
}