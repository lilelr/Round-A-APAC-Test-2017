B 矩阵及搜索题
写代码思路：1 确定数据结构 优先队列，BFS
2 struct node定时及构造函数，并确定比较大小的方法
3 数组 grid[m][n] 初始化，以及visited[m][n]
4 写一个solve函数。
priority_queue<node, vector<node>, compp> queue;//最小堆
memset(visited, false, sizeof(visited));
BFS开始，确定好优先队列的开始的nodes,在本题中，为矩阵边界点
5 用一个数组确定搜索方向，上下左右
BFS 取出front节点，标记其visited为true.
根据方向确定下一个访问节点的x,y，并判定x,y是否越界；若越界，则continue
6 currentNode与grid[nextY][nextY] 值比较，更新next Node的h值，与此同时，也更新grid[nextY][nextY]的值。最后记录增加的高度。