#include <iostream>
#include <queue>
#include <vector>

using namespace std;

class Graph {
    int V; // Number of vertices
    vector<vector<int>> adj; // Adjacency list representation

public:
    Graph(int V) : V(V) {
        adj.resize(V);
    }

    // Function to add an edge between vertices u and v
    void addEdge(int u, int v) {
        adj[u].push_back(v);
    }

    // Function to perform BFS traversal
    void BFS(int start) {
        vector<bool> visited(V, false);
        queue<int> q;

        visited[start] = true;
        q.push(start);

        while (!q.empty()) {
            int current = q.front();
            cout << current << " ";
            q.pop();

            for (int i = 0; i < adj[current].size(); ++i) {
                int neighbor = adj[current][i];
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
    }
};

int main() {
    // Create a graph with 4 vertices
    Graph g(4);

    // Add edges between vertices
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "BFS traversal starting from vertex 2: ";
    g.BFS(2); // Start BFS traversal from vertex 2

    return 0;
}

