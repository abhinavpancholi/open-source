#include<bits/stdc++.h>
using namespace std;
int sum(int arr[], int from, int to)
{
int total = 0;
for (int i = from; i <= to; i++)
total += arr[i];
return total;
}


int part(int arr[], int n, int k)
{

if (k == 1)
return sum(arr, 0, n - 1);
if (n == 1)
return arr[0];

int best = INT_MAX;


for (int i = 1; i <= n; i++)
best = min(best, max(part(arr, i, k - 1),
sum(arr, i, n - 1)));

return best;
}

int main()
{
int arr[] = {5,10,30,20,15};
int n = sizeof(arr) / sizeof(arr[0]);
int k = 3;
cout << part(arr, n, k) << endl;

return 0;
}
