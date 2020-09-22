#include <map>
#include <string>
#include <algorithm>

template<class F, class S>
class value_equales
{
public:
	value_equales(const S& s)
		:
		second(s)
	{}

	bool operator() (std::pair<const F, S> elem)
	{
		return elem.second == second;
	}

private:
	S second;
};

typedef std::map<int, std::string> isMap;
typedef isMap::value_type isValueType;
typedef isMap::iterator isMapItor;

int main()
{
	isMap map;
	map.insert(isValueType(1, "a"));
	map.insert(isValueType(2, "b"));
	map.insert(isValueType(3, "c"));

	//isMapItor it = std::find_if(map.begin(), map.end(), value_equales<int, std::string>("b"));
	isMapItor it = std::find_if(map.begin(), map.end(), [](const isValueType& elem)
		{
			return elem.second == "b";
		});
	return 0;
}