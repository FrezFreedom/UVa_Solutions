#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    for (int testCase = 1; testCase <= testCases; testCase++)
    {
        int n; cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        cout << "Case " << testCase << ": " << arr[n - 1] << "\n";
    }
    return 0;
}