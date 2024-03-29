// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to add edges
void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
}

// Function to print adjacency list
void adjacencylist(vector<int> adj[], int V)
{
	for (int i = 0; i < V; i++) {
		cout << i << "->";
		for (int& x : adj[i]) {
			cout << x << " ";
		}
		cout << endl;
	}
}

// Function to initialize the adjacency list
// of the given graph
void initGraph(int V, int edges[3][2], int noOfEdges)
{
	// To represent graph as adjacency list
	vector<int> adj[V];

	// Traverse edges array and make edges
	for (int i = 0; i < noOfEdges; i++) {

		// Function call to make an edge
		addEdge(adj, edges[i][0], edges[i][1]);
	}

	// Function Call to print adjacency list
	adjacencylist(adj, V);
}

// Driver Code
int main()
{
	// Given vertices
	int V = 3;

	// Given edges
	int edges[3][2] = { { 0, 1 }, { 1, 2 }, { 2, 0 } };

	int noOfEdges = 3;

	// Function Call
	initGraph(V, edges, noOfEdges);

	return 0;
}
