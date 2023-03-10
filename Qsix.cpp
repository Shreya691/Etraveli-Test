#include <bits/stdc++.h>
using namespace std;

bool isCyclic(int V, vector<vector<int>>& adj)
{
    vector<int> index(V, 0);

    for (int i = 0; i < V; i++)
    {
        for (auto it : adj[i])
        {
            index[it]++;
        }
    }

    queue<int> q;
    for (int i = 0; i < V; i++)
    {
        if (index[i] == 0)
        {
            q.push(i);
        }
    }

    int count = 0;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        count++;

        for (auto it : adj[node])
        {
            index[it]--;
            if (index[it] == 0)
            {
                q.push(it);
            }
        }
    }

    if (count == V)
    {
        return false;
    }
    return true;
}

int main()
{

    int V = 4;

    vector<vector<int>> adj = {
        {1, 2},
        {2, 3},
        {3, 4},
        {4, 1},
    };

    if (isCyclic(V, adj) == true)
    {
        cout << "Graph contains a Cycle";
    }
    else
    {
        cout << "There's no cycle in a graph";
    }
    return 0;
}