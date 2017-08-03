/*
作者:Guoguo (Github账号：qwedc001)
题目:级数求和
Author Guoguo(Github ID:qwedc001)
Problem:summation of series
注：本题目来自CodeVS
PS:This problem is from CodeVS
*/
/*
题目要求：已知：Sn= 1+1/2+1/3+…+1/n。（1+二分之一+三分之一+.....+n分之一）显然对于任意一个整数K，当n足够大的时候，Sn大于K。
　　现给出一个整数K（1<=k<=15），要求计算出一个最小的n；使得Sn＞K。
Problem Content:Known conditions is Sn= 1+1/2+1/3+…+1/n。(1 plus one half plus one third plus .... plus one n).Clearly for a random k,if n is larger enough,Sn will more than K.
now there's a integer K(1<=k<=15),This program will calculate a minimum n,And let Sn>K.

 */
#include <bits/stdc++.h>
#include <stdlib.h>
//引入基本库 Include basic library
using namespace std;//使用标准输入输出命名空间 use the  input/output namespace
int main ()//主函数 main function
{
	int k, n=1;
	cout<<"请输入变量K Please input var K"<<endl;
	cin >> k;//输入题目要求中整数 input the integer
	double sum=0;//结果储存 This var is result
	while (sum <= k)//如果sum小于或者等于k，那么就继续执行。 If sum less than or equal to k,then continue.
		sum += 1.0/n++;//将结果加上1/n。 Plus 1/n to Result
	cout <<"结果是 The result is:"<< n-1 << endl;//输出结果 Output result
	system("pause");
	return 0;
}


