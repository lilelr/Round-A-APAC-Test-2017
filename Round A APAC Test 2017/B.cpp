#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <queue>
#include <set>
#include <unordered_map>

using namespace std;
//https://code.google.com/codejam/contest/11274486/dashboard#s=p1
//BFS+最小堆
struct node {
    int x, y, h;
    node(int xx, int yy, int hh) : x(xx), y(yy), h(hh) {}
    
    node() {}
};

struct compp {
    bool operator()(node a, node b) {
        return a.h > b.h;  //从小到大排序，如果我比你大，我就排后面
    }
};

int m, n, res;
int grid[51][51];
bool visited[51][51];

void solve() {
    priority_queue<node, vector<node>, compp> queue;//最小堆
    memset(visited, false, sizeof(visited));
    
    for (int i = 0; i < n; i++) {
        queue.push(node(0, i, grid[0][i]));
        queue.push(node(m - 1, i, grid[m - 1][i]));
        visited[0][i] = true;
        visited[m - 1][i] = true;
    }
    
    for (int i = 0; i < m; i++) {
        queue.push(node(i, 0, grid[i][0]));
        queue.push(node(i, n - 1, grid[i][n - 1]));
        visited[i][0] = true;
        visited[i][n - 1] = true;
    }
    
    while (!queue.empty()) {
        node curr = queue.top();
        queue.pop();
        visited[curr.x][curr.y] = true;
        int directions[][2] = {-1, 0, 1, 0, 0, 1, 0, -1};
        for (int i = 0; i < 4; i++) {
            int nextX = curr.x + directions[i][0];
            int nextY = curr.y + directions[i][1];
            if (nextX < 0 || nextX > m - 1 || nextY < 0 || nextY > n - 1 ||
                visited[nextX][nextY]) {
                continue;
            }
            
            node next(nextX, nextY, grid[nextX][nextY]);
            next.h = max(curr.h, next.h);
            res += next.h - grid[nextX][nextY];
            grid[nextX][nextY] = next.h;  //及时更新grid，水位已经升高
            queue.push(next);
        }
    }
}

int main() {
    freopen("/Users/yuxiao/XcodeProject/Round A APAC Test 2017/Round A APAC Test 2017/in","r",stdin);
    freopen("/Users/yuxiao/XcodeProject/Round A APAC Test 2017/Round A APAC Test 2017/out","w",stdout);
    
    int T;
    cin >> T;
    int t = 1;
    while (T--) {
        res = 0;
        cin >> m >> n;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> grid[i][j];
            }
        }
        solve();
        cout << "Case #" << t++ << ": " << res << endl;
    }
    return 0;
}



