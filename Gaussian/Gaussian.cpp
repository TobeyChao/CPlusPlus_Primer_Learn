#include <DirectXMath.h>
#include <iostream>
#include <iomanip>

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
		{ -1, 1 },
		{ 0, 1 },
		{ 1, 1 },
		{ -1, 0 },
		{ 0, 0 },
		{ 1, 0 },
		{ -1, -1 },
		{ 0, -1 },
		{ 1, -1 }
	};

	float sum = .0f;
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			sum += GaussianFunction(base[i].x, base[i].y);
			cout << GaussianFunction(base[i].x, base[i].y) << "\t";
		}
		cout << endl;
	}
	cout << endl;
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			//printf("%.2f\t", GaussianFunction(base[i].x, base[i].y) / sum);
			cout << fixed << setprecision(2);
			cout << GaussianFunction(base[i].x, base[i].y) / sum << "\t";
		}
		cout << endl;
	}

	return 0;
}