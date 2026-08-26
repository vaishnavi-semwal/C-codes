#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long arr[n], prefix[n];
    for(int i = 0; i < n; i++)   {
        cin >> arr[i];
        if(i == 0)
            prefix[i] = arr[i];
        else
            prefix[i] = prefix[i - 1] + arr[i];    }
   long long maxSum = -10000000000;
    for(int i = 0; i < n; i++)    {
        long long sum = 0;
        int pos = i;
        int len = 1;
   while(pos + len <= n)
        {
            if(pos == 0)
                sum += prefix[pos + len - 1];
            else
                sum += prefix[pos + len - 1] - prefix[pos - 1];
                pos += len;
            len++;
        }
        if(sum > maxSum)
            maxSum = sum;
    }
    cout << maxSum;
    return 0;
}
