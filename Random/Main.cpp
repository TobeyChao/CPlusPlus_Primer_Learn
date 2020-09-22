#include "PseudoRandomizer.h"
#include <iostream>

using namespace std;

int main()
{
	PseudoRandomizer* randomizer = new PseudoRandomizer(2, 3, 30);
	for (size_t i = 0; i < 40; i++)
	{
		auto number = randomizer->PseudoRandom();
		cout << number << endl;
	}
	return 0;
}