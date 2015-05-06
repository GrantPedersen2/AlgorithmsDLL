#include"Algorithms.h"

//Default Constructor
Algorithms::Algorithms()
{
	
}

Algorithms::Algorithms(const int &size, const int & randomNumber)
{
	//Create the size of the array
	sizeOfNumberArray = new int(size);
	numberArray = new int[*sizeOfNumberArray];

	//Lazy sorted way to create random numbers in array
	for (int i = 0; i < *sizeOfNumberArray; i++)
	{
		//Add random number to previous number
		//*(numberArray + i) is similar to numberArray[i]
		numberArray[i] = (i > 0) ? randomNumber + numberArray[i - 1] : randomNumber;
		cout << numberArray[i] << endl;
	}
}

//Copy Constructor
Algorithms::Algorithms(const Algorithms & algorithms)
{

}

//Deconstructor
Algorithms::~Algorithms()
{
	if (numberArray != NULL)
	{
		delete[] numberArray;
		numberArray = NULL;
	}
}

int * Algorithms::GetRandomNumberArray()
{
	return numberArray;
}

int Algorithms::DynamicSearch(const int low, const int high, const int find)
{
	//Iterations of search
	int size = 40;
	int prev = low;

	//Prevent division of zero if we had user select size
	//Also allows for higher random numbers in our array
	if (size > high - low)
	{
		size = high - low;
	}
	else if (size < high + low)
	{
		size = high + low;
	}

	for (int i = 0; i < size; i++)
	{
		//Move forward in area
		int temp = floor((low + high) * i / size);

		if (temp > *sizeOfNumberArray - 1)
		{
			temp -= (*sizeOfNumberArray);
		}

		if (find == numberArray[temp])
		{
			return temp;
		}
		if (find < numberArray[temp])
		{
			return DynamicSearch(prev, temp, find);
		}
		prev = temp;
	}

	//Could not find the number in array
	return -1;
}