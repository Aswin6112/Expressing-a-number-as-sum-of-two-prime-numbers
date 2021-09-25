#include<iostream>
using namespace std;
int prime(int x);

int main()
{
	int times=0;
	int n;
	cout<<"Enter a number to express it as a sum of two prime numbers : ";
	cin>>n;
	//finding prime numbers
	for(int i=1;i<=n/2;i++)
	{
		
		if(prime(i))
		{
			
			if(prime(n-i))
			{
				cout<<"\n"<<n<<" = "<<i<<" + "<<n-i;
				times++;
			}
		}
	}
	
	if(times==0)
	{
		cout<<"\n"<<n<<" cannot be expressed as a sum of two prime numbers";
	}
	
	return 0;
}


int prime(int x)
{
	int div=0;
	
	for(int i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			div=div+1;
		}
	}
	
	if(div==2)
	{
		return 1;
	}
	
	else
	{
		return 0;
	}
}
