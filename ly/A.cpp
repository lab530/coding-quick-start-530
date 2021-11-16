#include<iostream>
using namespace std;
int main()
{
	int n,m,ans=0,arry[1000]={0};
	arry[1]=1,arry[2]=1;
	cin>>n>>m;
	if(n>=0 && m>=0)
	{
		for(int i=3;i<1000;i++)
		arry[i]=i;
		for(int i=2;i<1000;i*=2)
			arry[i]=1;		
		for(int i=3;i<1000;i++)
		{
			if(arry[i]!=1)
			{
				for(int j=1;j<=(i/2);j++)	
					arry[i]=min(arry[i],arry[j]+arry[i-j]);
			}
		}
		if(arry[n]<=m) cout<<arry[n]<<" "<<m<<endl;
		else cout<<arry[n]<<endl;
	}else cout<<"False"<<endl;
	return 0;
}