//#include <iostream>
//#include <vector>
//struct node
//{
//	int N; int A; int B; int C;
//};
//int main(int argc, char* argv[])
//{
//	int num_group;
//	std::cin >> num_group;
//	std::vector<node> vec;
//	for (int i = 0; i < num_group; ++i)
//	{
//		node node1;
//		std::cin >> node1.N >> node1.A >> node1.B >> node1.C;
//		vec.push_back(node1);
//	}
//	
//	for (int i = 0; i < num_group; ++i)
//	{
//		int N, A, B, C;
//		N = vec[i].N;
//		A = vec[i].A;
//		B = vec[i].B;
//		C = vec[i].C;
//		if ((A + 2 * B + 3 * C) / 6 < N)
//		{
//			std::cout << "No" << std::endl;
//		}
//		bool isFalse = false;
//		while (N > 0)
//		{
//			if (A == 0 && B == 0 && C == 0)
//			{
//				isFalse = true;
//				break;
//			}
//			N -= A / 6;
//			A %= 6;
//			N -= B / 3;
//			B %= 3;
//			N -= C / 2;
//			C %= 2;
//			if (N <= 0)
//			{
//				break;
//			}
//			if (A == 5 && B == 2 && C == 1)
//			{
//				N -= 2;
//				A = 0;
//				B = 0;
//				C = 0;
//			}
//			else
//			{
//				if (C == 1 && B == 1 && C == 1)
//				{
//					N -= 1;
//					A = 0;
//					B = 0;
//					C = 0;
//				}
//				else if (C == 1 && A == 3)
//				{
//					N -= 1;
//					A = 0;
//					B = 0;
//					C = 0;
//				}
//				else if (B == 1 && A == 4)
//				{
//					N -= 1;
//					A = 0;
//					B = 0;
//					C = 0;
//				}
//				else if (B == 2 && A == 2)
//				{
//					N -= 1;
//					A = 0;
//					B = 0;
//					C = 0;
//				}
//				else
//				{
//					isFalse = true;
//					break;
//				}
//			}
//		}
//		if (isFalse)
//		{
//			std::cout << "No" << std::endl;
//		}
//		else
//		{
//			std::cout << "Yes" << std::endl;
//		}
//	}
//	//4
//	//1 1 1 1
//	//2 0 0 4
//	//3 0 2 5
//	//4 24 0 0
//	return 0;
//}
