#include <iostream>
#include <climits>
#define MOD 1000000007
using namespace std;
int dp[1000005];
int main() {
	int n,sum;
	cin>>n>>sum;
	int c[n];
	for(int i=0;i<sum+2;i++)
		dp[i] = 0;
	dp[0] = 1;
	for(int i=0;i<n;i++)
		cin>>c[i];
	for(int i=1;i<=sum;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(c[j]<=i)
			{
				dp[i] = (dp[i] + ((dp[i-c[j]])))%MOD;
			}
		}
	}
	cout<<dp[sum]<<endl;
	return 0;
}
