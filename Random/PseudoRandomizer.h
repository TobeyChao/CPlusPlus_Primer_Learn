#pragma once
class PseudoRandomizer
{
public:
	PseudoRandomizer(unsigned long ulGen1,
					unsigned long ulSeed,
					unsigned long ulMax)
	{
		this->ulGen1 = ulGen1;
		this->ulGen2 = ulGen1 * 2;
		this->ulSeed = ulSeed;
		this->ulMax = ulMax;
	}

	~PseudoRandomizer()
	{
	}

	unsigned long PseudoRandom()
	{
		unsigned long ulNewSeed;
		ulNewSeed = ulGen1 * ulSeed + ulGen2;
		ulNewSeed = ulNewSeed % ulMax;
		ulSeed = ulNewSeed;
		return ulNewSeed;
	}

private:
	unsigned long ulGen1;
	unsigned long ulGen2;
	unsigned long ulSeed;
	unsigned long ulMax;
};