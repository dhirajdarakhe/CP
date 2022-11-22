// https://www.spoj.com/problems/NAKANJ/
#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9 + 10;
vector<pair<int, int>> chess;
int vis[8][8];
int level[8][8];

int conversionX(string s) {
	return s[0] - 'a';
}
int conversionY(string s) {
	return s[1] - '1';
}
bool isValid(int x , int y) {
	return x >= 0 && y >= 0 && x < 8 && y < 8;
}
vector<pair<int, int>> movement = {
	{1, 2},     {2, 1},
	{ -1, 2},   { -2, 1},
	{1, -2},    {2, -1},
	{ -1, -2},  { -2, -1},
};
void resetLEVEL() {
	for (int i = 0; i < 8; ++i)
	{	for (int j = 0; j < 8; ++j)
		{level[i][j] = 0; vis[i][j] = 0;}
	}
}
int bfs(string source , string disti) {

	int Sx = conversionX(source);
	int Sy = conversionY(source);
	int Dx = conversionX(disti);
	int Dy = conversionY(disti);
	queue<pair<int, int>> q;
	q.push({Sx, Sy});
	vis[Sx][Sy] = 1;
	level[Sx][Sy] = 1;
	while (!q.empty()) {
		auto cur_position = q.front();
		q.pop();
		for (auto places : movement)
		{
			int X = places.first + cur_position.first;
			int Y = places.second + cur_position.second;
			if (!isValid(X, Y)) continue;
			if (!vis[X][Y]) {
				q.push({X, Y});
				vis[X][Y] = 1;
				level[X][Y] = level[cur_position.first][cur_position.second] + 1;
			}
		}
		if (level[Dx][Dy] != 0) {
			break;
		}
	}
	return  level[Dx][Dy];

}
int main()
{	int t;
	cin >> t;
	while ( t-- )
	{	resetLEVEL();
		string s1;
		string s2;
		cin >> s1 >> s2;
		cout << bfs(s1, s2) - 1<< endl;
	}
	return 0;
}