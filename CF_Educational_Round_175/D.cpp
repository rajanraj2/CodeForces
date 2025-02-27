// this is the problem

// You are given a rooted tree, consisting of n
//  vertices. The vertices in the tree are numbered from 1
//  to n
// , and the root is the vertex 1
// . Let dx
//  be the distance (the number of edges on the shortest path) from the root to the vertex x
// .

// There is a chip that is initially placed at the root. You can perform the following operation as many times as you want (possibly zero):

// move the chip from the current vertex v
//  to a vertex u
//  such that du=dv+1
// . If v
//  is the root, you can choose any vertex u
//  meeting this constraint; however, if v
//  is not the root, u
//  should not be a neighbor of v
//  (there should be no edge connecting v
//  and u
// ).

// For example, in the tree above, the following chip moves are possible: 1→2
// , 1→5
// , 2→7
// , 5→3
// , 5→4
// , 3→6
// , 7→6
// .

// A sequence of vertices is valid if you can move the chip in such a way that it visits all vertices from the sequence (and only them), in the order they are given in the sequence.

// Your task is to calculate the number of valid vertex sequences. Since the answer might be large, print it modulo 998244353
// .

// Input
// The first line contains a single integer t
//  (1≤t≤104
// ) — the number of test cases.

// The first line of each test case contains a single integer n
//  (2≤n≤3⋅105
// ).

// The second line contains n−1
//  integers p2,p3,…,pn
//  (1≤pi<i
// ), where pi
//  is the parent of the i
// -th vertex in the tree. Vertex 1
//  is the root.

// Additional constraint on the input: the sum of n
//  over all test cases doesn't exceed 3⋅105
// .

// Output
// For each test case, print a single integer — the number of valid vertex sequences, taken modulo 998244353
// .



#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define vi vector<int>
#define vs vector<string>
#define ivec(arr) for (int i = 0; i < arr.size(); i++) cin >> arr[i];
#define w(x) int x; cin>>x; while(x--)
#define pb push_back

// class definition for the tree

// function to construct the binary tree just from arr
// and store level of each node in the level array
// root will always be 1

void construct_tree(vi arr, vi &level) {
    int n = arr.size() + 1;
    vector<vector<int>> tree(n + 1);
    for (int i = 0; i < n - 1; i++) {
        tree[arr[i]].push_back(i + 2);
    }

    queue<int> q;
    q.push(1);
    level[1] = 1;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        for (int i = 0; i < tree[node].size(); i++) {
            q.push(tree[node][i]);
            level[tree[node][i]] = level[node] + 1;
            // keep a count of total nodes at each level

        }
    }
}

int32_t main() {
    fio;
    w(t) {
        int n;
        cin >> n;
        
        vi arr(n - 1), child(n + 1, 0), level(n + 1, 0);
        for (int i = 0; i < n - 1; i++) {
            cin >> arr[i];
            child[arr[i]]++;
        }





        // each element in arr represents the parent of the that node
        // constructing the tree

        // code to find the level of each node

        construct_tree(arr, level);

        for (int i = 1; i <= n; i++) {
            // for each node in each level from level 2 
            // count(nodes in next level) - count(children of that node)
            // will be added to result
        }

        
        
    }    
    return 0;
}