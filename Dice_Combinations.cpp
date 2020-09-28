#define MOD 1000000007
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;
int memo[1000005];
int isZero = false;
int dp(int n)
{
	if(memo[n] != -1) return memo[n];
	if(n<0) return 0;
	else if(n==0) return memo[0] = 1;
	int maxRes = 0;
	for(int i=1;i<=6;i++)
	{
		if(n-i>=0)
			maxRes = (maxRes+dp(n-i))%MOD;
	}
	return (memo[n] = maxRes);
}
int main() {
	int n;
	cin>>n;
	memset(memo,-1,sizeof(memo));
	cout<<dp(n)<<endl;
	return 0;
}
