#include <iostream>

using namespace std;

int main()
{
   int i,n,x;
   cout<<"���������֣�";
   cin>>x;
	cout<<x<<"���ڵ������У�"<<endl;
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
