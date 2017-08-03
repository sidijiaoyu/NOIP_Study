/*
����:Guoguo (Github�˺ţ�qwedc001)
��Ŀ:�������
Author Guoguo(Github ID:qwedc001)
Problem:summation of series
ע������Ŀ����CodeVS
PS:This problem is from CodeVS
*/
/*
��ĿҪ����֪��Sn= 1+1/2+1/3+��+1/n����1+����֮һ+����֮һ+.....+n��֮һ����Ȼ��������һ������K����n�㹻���ʱ��Sn����K��
�����ָ���һ������K��1<=k<=15����Ҫ������һ����С��n��ʹ��Sn��K��
Problem Content:Known conditions is Sn= 1+1/2+1/3+��+1/n��(1 plus one half plus one third plus .... plus one n).Clearly for a random k,if n is larger enough,Sn will more than K.
now there's a integer K(1<=k<=15),This program will calculate a minimum n,And let Sn>K.

 */
#include <stdio.h>//��������� Include basic library
int main ()//������ main function
{
	int k, n=1;
	printf("���������K   Please input var K:");
	scanf("%d",&k);//������ĿҪ�������� input the integer
	double sum=0;//������� This var is result
	while (sum <= k)//���sumС�ڻ��ߵ���k����ô�ͼ���ִ�С� If sum less than or equal to k,then continue.
		sum += 1.0/n++;//���������1/n�� Plus 1/n to Result
	printf("�����  The result is��%d",n-1);//������ Output result
	system("pause");
	return 0;
}

