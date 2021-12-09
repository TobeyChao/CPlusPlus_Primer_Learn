#pragma once
template<typename T>
void Swap(T & t1, T& t2)
{
	T tmp = t2;
	t2 = t1;
	t1 = tmp;
}
