#include<iostream>
using namespace std;
int main()
{
	//这一对大兔子到第三个月才能下一窝，下一窝是一对 小兔子，等两个月后第三个月才能下一窝
	 
	int i,n,t[3]={0,1,1};
	cout<<"输入N的值：";
	cin>>n;
	
	for(i=3;i<=n;i++)
	{
		t[i]=t[i-1]+t[i-2];		
		
	}
	cout<<"最终的对数:"<<t[n]<<endl;
	  
	return 0;
}

