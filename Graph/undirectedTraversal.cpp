#include <bits/stdc++.h>
using namespace std;

void builtGraph(vector<vector<int>>& adj, vector<pair<int, int>>& edges) {
    for(auto edge : edges) {
        adj[edge.first].push_back(edge.second);
        adj[edge.second].push_back(edge.first);
    }
}

void BFS(int node, vector<vector<int>>& adj) {
    vector<bool> visited(adj.size(), false);
    queue<int> q;
    q.push(node);
    visited[node] = true;

    while(!q.empty()) {
        int tmp = q.front();
        q.pop();

        cout << tmp << " ";
        for(int neighbor : adj[tmp]) {
            if(!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

void DFS(int node, vector<vector<int>>& adj) {
    vector<bool> visited(adj.size(), false);
    stack<int> s;
    s.push(node);
    visited[node] = true;

    while(!s.empty()) {
        int tmp = s.top();
        s.pop();

        cout << tmp << " ";
        for(int i = 0; i < adj[tmp].size(); i++) {
            int neighbor = adj[tmp][i];
            if(!visited[neighbor]) {
                visited[neighbor] = true;
                s.push(neighbor);
            }
        }
    }
}

void DFSRec(int node, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;
    cout << node << " ";

    for(int neighbor : adj[node]) {
        if(!visited[neighbor]) {
            DFSRec(neighbor, adj, visited);
        }
    }
}

void DFSRecWrapper(int node, vector<vector<int>>& adj) {
    vector<bool> visited(adj.size(), false);
    DFSRec(node, adj, visited);
}

void clearGraph(vector<vector<int>>& adj, vector<pair<int, int>>& edges) {
    for(auto& neighbors : adj) {
        neighbors.clear();
    }
    edges.clear();
}

int main() {

    vector<pair<int, int>> edges = {
        {0, 1}, {0, 2}, {1, 2}, {1, 3}, {2, 4}, {3, 4}
    };
    vector<vector<int>> adj(5);

    builtGraph(adj, edges);
    cout << "Graph Built..." << endl;

    cout << "BFS Traversal: ";
    BFS(0, adj);
    cout << endl;

    cout << "DFS Traversal: ";
    DFS(0, adj);
    cout << endl;

    cout << "DFS Recursive Traversal: ";
    DFSRecWrapper(0, adj);
    cout << endl;

    clearGraph(adj, edges);
    cout << "Graph Cleared..." << endl;

    return 0;
}