#include <stdio.h>

#define ROWS 8
#define COLS 12

// 0=floor, 1=wall, 2=water, 3=player_start
int tilemap[ROWS][COLS] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 3, 0, 0, 0, 2, 2, 0, 0, 0, 0, 1},
    {1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 1},
    {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1},
    {1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1},
    {1, 0, 0, 0, 2, 2, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};

// Print the whole tilemap
// '#' = WALL, '.' = FLOOR, '~' = WATER, '@' = PLAYER
void draw(int playerCol, int playerRow)
{
    // ล้างหน้าจอคอนโซลก่อนวาดใหม่ (ระบบ Windows ใช้ "cls" ถ้าเป็น Mac/Linux ให้เปลี่ยนเป็น "clear")
    printf("\033[H\033[J");

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (i == playerRow && j == playerCol)
            {
                printf("@ "); // ใส่ช่องว่างเพื่อให้สัดส่วนแผนที่ดูเป็นจัตุรัสมากขึ้น
            }
            else if (tilemap[i][j] == 1)
            {
                printf("# ");
            }
            else if (tilemap[i][j] == 2)
            {
                printf("~ ");
            }
            else
            {
                printf(". ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int playerCol = 1, playerRow = 1;
    char move;

    while (1)
    {
        draw(playerCol, playerRow);
        printf("Move [wasd] or Quit [q] (แล้วกด Enter): ");
        scanf(" %c", &move);

        if (move == 'q')
        {
            printf("ออกจากเกมแล้ว ขอบคุณที่เล่นครับ!\n");
            break;
        }

        int nextCol = playerCol;
        int nextRow = playerRow;

        if (move == 'w')
            nextRow--;
        if (move == 's')
            nextRow++;
        if (move == 'a')
            nextCol--;
        if (move == 'd')
            nextCol++;

        // [แก้ไขจุดนี้] เช็กขอบเขตอาร์เรย์ และห้ามเดินชนกำแพง (1) และห้ามเดินลุยน้ำ (2)
        if (nextRow >= 0 && nextRow < ROWS && nextCol >= 0 && nextCol < COLS)
        {
            if (tilemap[nextRow][nextCol] != 1 && tilemap[nextRow][nextCol] != 2)
            {
                playerCol = nextCol;
                playerRow = nextRow;
            }
        }
    }

    return 0;
}
