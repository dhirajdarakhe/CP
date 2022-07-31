#include <bits/stdc++.h>
using namespace std;
struct node
{
    int x, y, time;
    node(int x1, int y1, int time1)
    {
        x = x1;
        y = y1;
        time = time1;
    }
};

class Solution
{
public:
    bool isValidPlace(int x, int y, int m, int n)
    {
        return (x >= 0 && y >= 0 && x < m && y < n);
    }
    int orangesRotting(vector<vector<int>> &grid)
    {

        queue<node> q;
        int countOforange = 0;
        int m = grid.size();
        int n = grid[0].size();
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (grid[i][j] == 2)
                {
                    q.push(node(i, j, 0));
                }
                if (grid[i][j] == 1)
                    countOforange++;
            }
        }
        int dx[] = {-1, 0, 1, 1};
        int dy[] = {0, 1, 0, -1};
        int ans = 0;
        while (!q.empty())
        {
            node curr_node = q.front();
            int x = curr_node.x;
            int y = curr_node.y;
            int time = curr_node.time;
            ans = max(ans, time);
            for (int i = 0; i < 4; ++i)
            {
                int newX = x + dx[i];
                int newY = y + dy[i];
                if (isValidPlace(newX, newY, m, n) && grid[newX][newY] == 1)
                {
                    grid[newX][newY] == 2;
                    q.push(node(newX, newY, time + 1));
                    countOforange--;
                }
            }
        }
        if (countOforange)
            return -1;
        return ans;
    }
};