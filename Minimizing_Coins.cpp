#include <iostream>
#include <climits>
using namespace std;
int dp[1000005];
int main() {
	int n,sum;
	cin>>n>>sum;
	int c[n];
	for(int i=0;i<sum+2;i++)
		dp[i] = INT_MAX;
	for(int i=0;i<n;i++)
	{
		cin>>c[i];
		dp[c[i]] = 1;
	}
	dp[0] = 0;
	for(int i=1;i<=sum;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(c[j]<=i)
			{
				if(dp[i-c[j]]!=INT_MAX)
				dp[i] = min(dp[i],1+dp[i-c[j]]);
			}
		}
	}
	if(dp[sum]!=INT_MAX)
	cout<<dp[sum]<<endl;
	else cout<<"-1"<<endl;
	return 0;
}
