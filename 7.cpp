#include<iostream>
using namespace std;
int main()
{
	int n[10],i;
	int t=0,avg,a[10];
	//遍历输入 
	for(i=1;i<=10;i++)
	{
		 
		cin>>n[i]>>a[i];
	}
	//计算成绩的总和 
	for(i=1;i<=10;i++)
	{
		t += a[i];
	}
	//取平均值 
	avg = t/10;
	for(i=1;i<=10;i++)
	{
		if(a[i]>avg)
		{
			cout<<"学号:"<<n[i]<<"成绩:"<<a[i]<<endl;
		}
	}
	return 0;
}
