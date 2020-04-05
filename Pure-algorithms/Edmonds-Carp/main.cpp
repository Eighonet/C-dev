#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <climits>

using namespace std;

#define fi(n) for (int i(0); i < n; ++i)
#define mp(a, b) make_pair(a, b)

/*
int dfs(vector<vector<int>> & graph, vector<bool> & used, int begin, int vertexes, int points) {
    for (auto i : graph[begin]) {
        if (used[graph[begin][i]] == false) {
            used[graph[begin][i]] = true;
            dfs(graph, used, graph[begin][i], vertexes, points);
        }
    }
}
*/

int bfs (vector<vector<int>> & graph, vector<vector<int>> & flow, vector<vector<int>> & capacity, vector<pair<int,int>> & path, vector<pair<int,int>> & res, int start, int to) {

    path.clear();
    res[start] = mp(- 1, start);
    vector<bool> check(graph.size(), false);
    check[start] = true;
    queue<int> q;
    q.push(start);

    while (!q.empty()) {
        int v(q.front());
        q.pop();
        for (int i(0); i < graph[v].size(); ++i) {
            int curr(graph[v][i]);
            if ((!check[curr]) && (capacity[v][i] - flow[v][i] > 0)) {
                check[curr] = true;
                q.push(curr);
                res[curr] = mp(v, i);
            }
        }
    }

    if (!check[to]) {
        return 0;
    } else {
        pair<int, int> k;
        for (int v=to; v !=-1; v=res[v].first) {
            k = mp(v, res[v].second);
            path.push_back(k);
        }
        reverse(path.begin(), path.end());
        return 1;
    }
}

int edmondsKarp(vector<vector<int>> & graph, vector<vector<int>> & capacity, int start, int end) {
    vector<pair<int,int>> path;
    vector<pair<int,int>> res(graph.size());
    int maxflow(0);
    vector<vector<int>> flow(capacity);

    for (int i(0); i < flow.size(); ++i) {
        for (auto & j : flow[i]) {
            j = 0;
        }
    }

    while (bfs(graph, flow, capacity, path, res, start, end)) {
        int delta = INT_MAX;
        int tmp(start);
        for(int u = 0; u < path.size()-1; ++u)  {
            int a(capacity[path[u].first][path[u+1].second]);
            delta = min(delta, (capacity[path[u].first][path[u+1].second] - flow[path[u].first][path[u+1].second]));
        }

        for(int u = 0; u < path.size()-1; ++u)  {
            flow[path[u].first][path[u+1].second] += delta;
      /*
            if (flow[path[u+1].second].size() > path[u].first) {
                flow[path[u+1].second][path[u].first] -= delta;
            }
      */
        }

        maxflow+=delta;
    }
    return maxflow;
}
int main() {
 //   cout << "Your value - " << endl;
 //   cin >> points;
    int hg(100000);
 /*   vector<vector<int>> graph = {{1, 2, 5},
                                 {3, 4, 6},
                                 {3, 4, 5},
                                 {4, 6},
                                 {5, 6},
                                 {6},
                                 {}};
    vector<vector<int>> capacity =  {{10, 5, 8},
                                     {5, 3, 4},
                                     {4, 5, 10},
                                     {4, 9},
                                     {5, 6},
                                     {7},
                                     {}};*///    bfs(graph, 6, 0, 5);

 vector<vector<int>> graph = {{1, 3, 5},
                                 {2},
                                 {7, 13},
                                 {4},
                                 {11},
                                 {6},
                                 {11},
                                 {8},
                                 {9},
                                 {10},
                                 {29, 31},
                                 {12},
                                 {13, 15, 17, 19},
                                 {14},
                                 {27},
                                 {16},
                                 {29, 31},
                                 {18},
                                 {23},
                                 {20},
                                 {25},
                                 {22},
                                 {32, 41},
                                 {24},
                                 {31, 33},
                                 {26},
                                 {35, 39},
                                 {28},
                                 {35},
                                 {30},
                                 {35, 37, 39},
                                 {32},
                                 {37},
                                 {34},
                                 {37},
                                 {36},
                                 {41},
                                 {38},
                                 {41},
                                 {40},
                                 {21, 41},
                                 {42},
                                 {}};







 vector<vector<int>> capacity =  {{hg, hg, hg},
                                     {250},
                                     {hg, hg},
                                     {300},
                                     {hg},
                                     {400},
                                     {hg},
                                     {50},
                                     {hg},
                                     {150},
                                     {hg, hg},
                                     {540},
                                     {hg, hg, hg, hg},
                                     {160},
                                     {hg},
                                     {130},
                                     {hg, hg},
                                     {90},
                                     {hg},
                                     {120},
                                     {hg},
                                     {60},
                                     {hg, hg},
                                     {100},
                                     {hg, hg},
                                     {40},
                                     {hg, hg},
                                     {200},
                                     {hg},
                                     {200},
                                     {hg, hg, hg},
                                     {130},
                                     {hg},
                                     {60},
                                     {hg},
                                     {180},
                                     {hg},
                                     {100},
                                     {hg},
                                     {150},
                                     {hg, hg},
                                     {500},
                                     {}};

    for (int i(0); i < capacity.size(); ++i) {
        for (int j(0); j < graph[i].size(); ++j) {
            graph[graph[i][j]].push_back(i);
        }
    }

    cout << edmondsKarp(graph, capacity, 0, graph.size() - 1);

    vector<int> k(capacity.size(), 0);
    vector<vector<int>> matrix;
    for (int i(0); i < capacity.size(); i++) {
        matrix.push_back(k);
    }

    for (int i(0); i < capacity.size()-1; ++i) {
        for (int j(0); j < capacity[i].size(); ++j) {
            matrix[i][graph[i][j]] = capacity[i][j];
        }
    }

    cout << endl;
 //   cout << "[";
    for (int i(0); i < capacity.size(); ++i) {
  //      cout << "[";
        for (int j(0); j < capacity.size(); ++j) {
            cout << matrix[i][j]<< " ";
            if (j + 1 != capacity.size()) {
  //              cout << " ";
            }
        }
 //       cout << "],";
        cout << endl;
    }

    return 0;
}
