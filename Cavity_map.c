#include <stdio.h>
#include <stdlib.h>
int main(){
    int n; 
    scanf("%d",&n);
    char* grid[n];
    for(int grid_i = 0; grid_i < n; grid_i++){
       grid[grid_i] = (char *)malloc(1024 * sizeof(char));
       scanf("%s",grid[grid_i]);
    }
    for(int i=1;i<n-1;i++)
        {
        for(int j=1;j<n-1;j++)
            {
            if(grid[i][j]>grid[i][j+1]&&grid[i][j]>grid[i][j-1]&&grid[i][j]>grid[i+1][j]&&grid[i][j]>grid[i-1][j])
                grid[i][j]='X';
        }
        
    }
    for(int grid_i = 0; grid_i < n; grid_i++){
      
       printf("%s\n",grid[grid_i]);
    }
    return 0;
}
