#include <stdio.h>
#include <stdbool.h>

void drawMaze(char maze[12][12]){
    for (int i = 0; i < 12; i++) {
            for (int j = 0; j < 12; j++) {
                    printf("%c ", maze[i][j]);
        }
        putchar('\n');
    }
}

bool mazeTraverse(char maze[12][12], int x, int y){
    maze[x][y] = 'x';
    drawMaze(maze);
    printf("\n");

    if (x == 4 && y == 11) {
        return true;
    }

    if (x + 1 < 12 && maze[x + 1][y] == '.') {
        if (mazeTraverse(maze, x + 1, y)) {
            return true;
        }
    }

    if (x - 1 >= 0 && maze[x - 1][y] == '.') {
        if (mazeTraverse(maze, x - 1, y)) {
            return true;
        }
    }

    if (y + 1 < 12 && maze[x][y + 1] == '.') {
        if (mazeTraverse(maze, x, y + 1)) {
            return true;
        }
    }

    if (y - 1 >= 0 && maze[x][y - 1] == '.') {
        if (mazeTraverse(maze, x, y - 1)) {
            return true;
        }
    }

    maze[x][y] = '.';

    return false;
}

int main(void)
{
    int x = 2, y = 0; //başlangıç tanımlama
    char maze[12][12] = { 
        {'#','#','#','#','#','#','#','#','#','#','#','#',},
        {'#','.','.','.','#','.','.','.','.','.','.','#',},
        {'.','.','#','.','#','.','#','#','#','#','.','#',},
        {'#','#','#','.','#','.','.','.','.','#','.','#',},
        {'#','.','.','.','.','#','#','#','.','#','.','.',},
        {'#','#','#','#','.','#','.','#','.','#','.','#',},
        {'#','.','.','#','.','#','.','#','.','#','.','#',},
        {'#','#','.','#','.','#','.','#','.','#','.','#',},
        {'#','.','.','.','.','.','.','.','.','#','.','#',},
        {'#','#','#','#','#','#','#','#','#','#','.','#',},
        {'#','.','.','.','.','.','.','#','.','.','.','#',},
        {'#','#','#','#','#','#','#','#','#','#','#','#',},
    };
    drawMaze(maze);
    
    if (mazeTraverse(maze, x, y)){
        printf("Labirent bitti!\n\n");
        drawMaze(maze);
    } 
    
    else { 
        printf("Çıkış bulunamadı!");
    }
    
    return 0;
}
