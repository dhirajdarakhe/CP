
const int N = 1e5 + 7;
vector<int> graph[N];
bool col[N];
int vis[N];
bool DFSbipaterate(int source, bool color)
{
    col[source] = color;
    vis[source] = 1;
    for (auto child : graph[source])
    {
        if (vis[child] == 0)
        {
            if (DFSbipaterate(child, !color) == true)
            {
                return true;
            }
        }
        if (vis[child] == 1 && col[child] == col[source])
        {
            return true;
        }
    }
    return false;
}
