#include <DirectXMath.h>
#include <iostream>

using namespace DirectX;
using namespace std;

float u = 0;
float c = 1;
float cc = 1;
float e = 2.718281828459045;
float pi = 3.1415926;
float a = 0;

void ConstructGaussianFunction(float param)
{
	// param ²»ÄÜÎª0
	c = param;
	cc = c * c;
	a = 1 / (cc * 2 * pi);
}

float GaussianFunction(float x, float y)
{
	return a * powf(e, -(x * x + y * y) / (2 * cc));
}

int main()
{
	ConstructGaussianFunction(1.5);

	XMFLOAT2 base[9] = {
		{ 0, 0 },
		{ 0, 1 },
		{ 1, 1 },
		{ 1, 0 },
		{ 1, -1 },
		{ 0, -1 },
		{ -1, -1 },
		{ -1, 0 },
		{ -1, 1 } };

	for (size_t i = 0; i < 9; i++)
	{
		cout << "G:" << GaussianFunction(base[i].x, base[i].y) << endl;
	}

	return 0;
}