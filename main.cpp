#include <iostream>

using namespace std;

int main()
{
   int i,n,x;
   cout<<"请输入数字：";
   cin>>x;
	cout<<x<<"以内的素数有："<<endl;
	for (i=2;i<x;i++)
	{
		for (n=2;n<i;n++)
		{
			if (i%n==0)
			break;
		}
		if (n>=i&&i<=x)
			cout<<i<<" ";
	}
	cout<<endl;
    return 0;
}
