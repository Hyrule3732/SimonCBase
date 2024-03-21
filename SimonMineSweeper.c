#include <stdio.h>
#include <stdlib.h>

typedef struct Minesweeper
{
    int C, R, totalMines, totalTile;
}Minesweeper;

void custom(){
    Minesweeper m;

    printf("Please enter the size of the dimensions\n");
    printf("Columns: ");
    scanf_s("%d\n", &m.C);
    printf("Row: ");
    scanf_s("%d\n", &m.R);
    m.totalMines = (m.C*m.R)/5;
    m.totalTile = m.C*m.R;
}
 
void minefieldGenerator()
{
    Minesweeper m;

    int x;
    int* blankTile = (int)malloc(sizeof(int)*m.totalTile);
    if(blankTile == NULL)
        exit(0);
    
    for(int i = 0; i < m.totalTile; ++i)
    {
        blankTile[i]=0;
    }

    for(int i=0; i<m.R; ++i)
    {
        for(int j=0; j<m.C; ++j)
        {
            if(blankTile[j] == 1){
                printf(" [O]");
            }else{
                printf(" [ ]");
            }
        }
        printf("\n");
    }
}
        
    

void main(){
    custom();
    minefieldGenerator();
}
