#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cin>>m;
	while(m--)
	{
		cin>>n;
		int flag=0;
		if(n == 1) cout<<"No"<<endl;
		else
		{
			for(int i = 2; i <n ;i++)
			{
				if(n%i == 0) 
				{
					flag=1;
					cout<<"No"<<endl;
					break;
				}
			}
			if(flag==0) cout<<"Yes"<<endl;
		}
		
	}
	return 0;
}