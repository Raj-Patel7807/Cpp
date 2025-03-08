#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>> &maze, vector<vector<int>>& visited, int x, int y, int n) {
    if(x >= 0 && x < n && y >= 0 && y < n && maze[x][y] == 1 && visited[x][y] == 0) {
        return true;
    }
    return false;
}

void findPath(vector<vector<int>> &maze, vector<string> &paths, vector<vector<int>> &visited, int x, int y, int n, string path) {

    if(x == n-1 && y == n-1) {
        paths.push_back(path);
        return;
    }

    visited[x][y] = 1;

    if(isSafe(maze, visited, x+1, y, n)) {
        path.push_back('D');
        findPath(maze, paths, visited, x+1, y, n, path);
        path.pop_back();
    }
    if(isSafe(maze, visited, x, y-1, n)) {
        path.push_back('L');
        findPath(maze, paths, visited, x, y-1, n, path);
        path.pop_back();
    }
    if(isSafe(maze, visited, x, y+1, n)) {
        path.push_back('R');
        findPath(maze, paths, visited, x, y+1, n, path);
        path.pop_back();
    }
    if(isSafe(maze, visited, x-1, y, n)) {
        path.push_back('U');
        findPath(maze, paths, visited, x-1, y, n, path);
        path.pop_back();
    }

    visited[x][y] = 0;
}

int main() {

    int n;
    cin >> n;

    vector<vector<int>> maze(n, vector<int>(n, 0));

    vector<string> paths;

    vector<vector<int>> visited(n, vector<int>(n, 0));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> maze[i][j];
        }
    }

    if(maze[0][0] == 0 || maze[n-1][n-1] == 0) {
        cout << "No path exists" << endl;
        return 0;
    }

    string path = "";

    findPath(maze, paths, visited, 0, 0, n, path);

    sort(paths.begin(), paths.end());

    cout << paths.size() << endl;

    for(int i = 0; i < n; i++) {
        cout << paths[i] << endl;
    }

    return 0;
}