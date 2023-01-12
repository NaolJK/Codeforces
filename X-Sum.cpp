#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tests, cols, rows;
 
    cin >> tests;
 
    for (int _ = 0; _ < tests; ++_)
    {
 
        cin >> rows;
        cin >> cols;
 
        int matrix[rows][cols];
        map<int, int> sum;
        map<int, int> diff;
 
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                cin >> matrix[i][j];
            }
        }
 
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                int sum_idx = i + j;
                int diff_idx = i - j;
                sum[sum_idx] += matrix[i][j];
                diff[diff_idx] += matrix[i][j];
            }
        }
 
        int maximum = 0;
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                int d_index = i - j;
                int s_index = i + j;
                int total = sum[s_index] + diff[d_index];
                total -= matrix[i][j];
                maximum = max(maximum, total);
            }
        }
        cout << maximum << endl;
    }
    return 0;
}
