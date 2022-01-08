//#include <iostream>
//#include <vector>
//#include <sstream>
//#include <algorithm>
//using namespace std;
//
////int main()
////{
////    int num;
////    cin >> num;
////    std::vector<int> vec1;
////    string str;
////    getline(cin, str);
////    getline(cin, str);
////    int num1 = 0;
////    for (auto ch : str)
////    {
////        if (isdigit(ch))
////        {
////            vec1.push_back(ch - '0');
////        }
////    }
////    string str2;
////    getline(cin, str2);
////    for (auto ch : str2)
////    {
////        if (isdigit(ch))
////        {
////            vec1.push_back(ch - '0');
////        }
////    }
////    sort(vec1.begin(), vec1.end());
////    int res = (vec1[num] + vec1[num - 1]) / 2.0f;
////	return 0;
////}
//
//int MaxSubSequence(vector<int> A, int N)
//{
//    int ThisSum, MaxSum, j;
//    ThisSum = MaxSum = 0;
//    for (j = 0; j < N; j++)
//    {
//        ThisSum += A[j];
//
//        if (ThisSum > MaxSum)
//            MaxSum = ThisSum;
//        else if (ThisSum < 0)
//            ThisSum = 0;
//    }
//    return MaxSum;
//}
//
//
//int main()
//{
//    int num;
//    cin >> num;
//    std::vector<int> vec1;
//    string str;
//    getline(cin, str);
//    getline(cin, str);
//    int num1 = 0;
//    for (auto ch : str)
//    {
//        if (isdigit(ch))
//        {
//            vec1.push_back(ch - '0');
//        }
//    }
//    cout << MaxSubSequence(vec1, num);
//    return 0;
//}