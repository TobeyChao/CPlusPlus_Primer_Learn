/*
 * 在Alice生日的那天，Bob送给了她n个灯泡。
 * 他们决定用这些灯泡玩一个游戏：他们把这些灯泡从左往右排成一行，
 * 在初始时，有些灯泡是点亮的，有些灯泡是熄灭的。接下来，
 * 他们轮流进行操作，Alice首先操作。在每一次操作中，
 * 轮到操作的人需要选择一个点亮的灯泡，
 * 然后把它以及它右边的所有灯泡的状态进行一次改变，
 * 即把点亮的灯泡熄灭，把熄灭的灯泡点亮。如果在某一个人操作完之后，所有的灯泡都变成了熄灭状态，
 * 那么那个人就赢得了游戏。Alice和Bob都想赢得游戏，
 * 在他们都足够聪明的情况下，最后谁会赢呢？
 */

#include <iostream>
using namespace std;

int main()
{
	int num_light;
	while (cin >> num_light)
	{
		int *a = new int[num_light];
		for (int i = 0; i < num_light; i++)
			cin >> a[i];
		if (a[num_light - 1])
			cout << "Alice";
		else
			cout << "Bob";
	}     return 0;
}