#include <stdio.h>
#include <stdlib.h>

int visited[20],reach[20],q[20],i,j,r=-1,f=0,a[20][20],u,n;

void bfs(int v) {
    q[++r] = v;
    visited[v] = 1;
    while (f <= r)
    {
        u = q[f++];
         for (int i = 1; i <= n; i++)
    {
        if ((a[u][i]) && !visited[i])
    {
        q[++r] = i;
        visited[i] = 1;
        printf("->%d",i);
    }
    } 
    }
    
   
}

void dfs(int v) { 
    reach[v] = 1;
    for (int i = 1; i <= n; i++)
    {
        if ((a[v][i]) && !reach[i])
        { reach[i] = 1;
            printf("->%d",i);
            dfs(i);
        }
        
    }
    
}

void main() {
    int v;
    printf("Enter the no of officers");
    scanf("%d",&n);
    printf("Enter the adjacency matrix");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d",&a[i][j]);
        } 
    }
    printf("Enter the starting officer node\n");
    scanf("%d",&v);
    if (v>n || v<1)
    {
            printf("Cannot proceed");
            return;
    }
    printf("Officers starting with node in bfs\n %d",v);
    bfs(v);
    printf("Officers starting with node in dfs\n %d",v);
    dfs(v);    
    
}