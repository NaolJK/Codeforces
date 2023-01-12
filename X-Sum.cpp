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
 
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                cin >> matrix[i][j];
            }
        }
 
        int maximum = 0;
 
        for (int row = 0; row < rows; ++row)
        {
 
            for (int col = 0; col < cols; ++col)
            {
 
                int r = row;
                int c = col;
                int total = matrix[r][c];
 
                while (c < cols - 1 && r < rows - 1)
                {
                    ++r;
                    ++c;
                    total += matrix[r][c];
                }
 
                r = row - 1;
                c = col - 1;
 
                while (r >= 0 && c >= 0)
                {
                    total += matrix[r][c];
                    --r;
                    --c;
                }
 
                r = row + 1;
                c = col - 1;
                while (r < rows && c >= 0)
                {
                    total += matrix[r][c];
                    ++r;
                    --c;
                }
 
                r = row - 1;
                c = col + 1;
                while (r >= 0 && c < cols)
                {
                    total += matrix[r][c];
                    --r;
                    ++c;
                }
 
                maximum = max(maximum, total);
            }
        }
 
        cout << maximum << endl;
    }
    return 0;
}
