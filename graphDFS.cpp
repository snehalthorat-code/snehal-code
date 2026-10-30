#include<iostream>
using namespace std;

int G[20][20],visited[20],n;
void DFS(int i)
{
    int j;
    cout<<i<<" ";
    visited[i]=1;
    for(j=1;j<=n;j++)
    {
        if(!visited[j] && G[i][j]==1)
        {
            DFS(j);
        }
    }
}
    int main()
    {
        int i,j;
        cout<<"\nEnter number of vertices: ";
        cin>>n;

        if(n<1 || n>20) 
        {
            cout<<"\nInvalid number of vertices !";
            return 1;
        }
        cout<<"\nEnter adjacency matrix: \n";
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                cin>>G[i][j];
            }
        }
        for(i=1;i<=n;i++)   
        {
            visited[i]=0;
        }
        cout<<"\nDFS Traversal:";
        for(i=1;i<=n;i++)
        {
            if(visited[i]==0)
            {
                DFS(i);
            }
        }
        cout<<"\n";
        return 0;
    }
/*OUTPUT
D:\snehal thorat>cd "d:\snehal thorat\" && g++ graphDFS.cpp -o graphDFS && "d:\snehal thorat\"graphDFS

Enter number of vertices: 4

Enter adjacency matrix: 
1 0 1 1
0 1 0 1 
1 1 1 0
0 0 0 1

DFS Traversal:1 3 2 4 

d:\snehal thorat>
*/

