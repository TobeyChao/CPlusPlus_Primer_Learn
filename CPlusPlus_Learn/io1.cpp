#include "FileUtility.h"

using namespace std;

int main(int argc, char const* argv[])
{
	auto file = Utility::LoadFileSync(L"PeopleAndPhone.txt");

	return 0;
}