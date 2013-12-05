#include <iostream>
#include <limits.h>
using namespace std;
int fact(int);
int main()
{
	int n;
	cin>>n;
	cout<<fact(n);
}
int fact(int n)
{
	int answer;
	if(n==0)
	{
		return 1;
	}
	else if(n > INT_MAX/fact(n-1))
	{
		return 0;
	}
	else
	{
		answer=fact(n-1)*n;
	}
}