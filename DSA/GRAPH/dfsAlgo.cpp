

const int N = 1e3 + 10;
vector<int> graph[N];
bool vis[N];
void dfs( int vertex) {
	// take action on vertex
	// after entering the vertex
	cout << vertex << endl;
	vis[vertex] = true;
	for (int child : graph[vertex])
	{
		//take a action on child
		// before enter the child
		if (vis[child]) continue;
		cout << "parent > " << vertex << " child > " << child << endl;
		dfs(child);
		//take action on child before
		//after existing the child
	}
	// take action on vertex
	// before existing child
	cout<< "Exiting from the loop of "<< vertex<<endl;
}
