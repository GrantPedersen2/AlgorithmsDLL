#ifndef ALGORITHMS
#define ALGORITHMS

#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>

using namespace std;

class Algorithms
{
	public:
		
		//Constructors
		Algorithms();
		Algorithms(const int &size, const int & randomNumber);
		Algorithms(const Algorithms & algorithms);
		~Algorithms();

		//Functions
		int DynamicSearch(const int low, const int high, const int find);
		int * GetRandomNumberArray();

	private:
		int *numberArray;
		int *sizeOfNumberArray;
};

#endif
