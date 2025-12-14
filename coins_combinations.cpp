#include <iostream>
#include <vector>

int coins_combinations(int amount,vector<int> coins) {
std::vector<long long> dp(amount + 1,0);
dp[0] = 1;
for(int co :coins)
{
    for(int i = coins; i <= amount; ++i)
    {
        dp[i] += dp[i - co];
    }
}
return (int)dp[amount];
}

int main()

