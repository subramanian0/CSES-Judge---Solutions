#include <iostream>
#include <sstream>
#include <climits>
#include <map>
#include <algorithm>
#include <cstring>
using namespace std;
int main() {
	int str;
	cin>>str;
	int dp[1000005];
	for(int i=0;i<=1000005;i++)
		dp[i] = INT_MAX;
	dp[0] = 0;
	for(int i=1;i<=str;i++)
	{
		if(i<=9) dp[i] = 1;
		else
		{
			int digit;
			string number;
			ostringstream oss;
			oss<<i;
			number = oss.str();
			oss.clear();
			for(int j=0;j<number.length();j++)
			{
				digit = (int) number[j]-'0';
				if(digit)
				dp[i] = min(dp[i], 1+dp[i-digit]);
			}
		}
	}
	cout<<dp[str]<<endl;
	return 0;
}
