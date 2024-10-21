#include <iostream>
#include "random.h"
void ShowList(int** list, const int sizex, const int sizey) {
    for (int i = 0; i < sizey; i++) {
        for (int j = 0; j < sizex; j++) {
            std::cout << list[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
void ShowList(char** list, const int sizex, const int sizey) {
    for (int i = 0; i < sizey; i++) {
        for (int j = 0; j < sizex; j++) {
            std::cout << list[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
int** CreateList(const int sizex, const int sizey) { //int CreateList(int **&list, const int sizex, const int sizey)
    int** list = new int* [sizey];

    for (int i = 0; i < sizey; ++i) {
        list[i] = new int[sizex];
    }

    for (int i = 0; i < sizey; i++) {
        for (int j = 0; j < sizex; j++) {
            list[i][j] = 0;
        }
    }
    return list;
}
char** CreateMaskList(const int sizex, const int sizey) {
    char** list = new char* [sizey];
    for (int i = 0; i < sizey; i++) {
        list[i] = new char[sizex];
    }
    return list;
}
void CreateMaskField(char** list, const int sizex, const int sizey, const char symb) {
    for (int i = 0; i < sizey; i++) {
        for (int j = 0; j < sizex; j++) {
            list[i][j] = symb;
        }
    }
}
void CreateFieldMine(int** list, const int sizex, const int sizey, int mines) {
    while (mines > 0) {
        int pos_i = random::GetRandomU32() % sizey;
        int pos_j = random::GetRandomU32() % sizex;
        if (list[pos_i][pos_j] != -1) {
            list[pos_i][pos_j] = -1;
            mines--;
        }
    }
    for (int i = 0; i < sizey; i++) {
        for (int j = 0; j < sizex; j++) {
            if (list[i][j] == -1) {
                continue;
            }
            for (int i_check = -1; i_check <= 1; i_check++) {
                for (int j_check = -1; j_check <= 1; j_check++) {
                    int ni = i + i_check;
                    int nj = j + j_check;
                    if (ni >= 0 && ni < sizey && nj >= 0 && nj < sizex && list[ni][nj] == -1) {
                        list[i][j] += 1;
                    }
                }
            }
        }
    }
}
bool CheckRule(int** field, const int x, const int y) {
    if (field[y][x] == -1) {
        std::cout << "You lose";
        return false;
    }
    else {
        return true;
    }
}
void OpenSq(int** field, char**& maskfield, const int x, const int y) {
    char listnum[] = { '0', '1', '2', '3','4','5','6','7','8','9' };
    if (field[y][x] == 0) {
        float pi = 3.14;
        int r = 3;
        for (int i = -r; i <= r; i++) {
            for (int j = -r; j <= r; j++) {

            }
        }
    }
    if (field[y][x] == -1) {
        maskfield[y][x] = '*';
        return;
    }
    maskfield[y][x] = listnum[field[y][x]];
}
void EngGame(char**& maskfield, int** field, const int j, const int i) {
    bool game = true;
    int x, y;
    while (game) {
        std::cout << "Enter the coordinats: ";
        std::cin >> y >> x;
        OpenSq(field, maskfield, x - 1, y - 1);
        ShowList(maskfield, j, i);
        game = CheckRule(field, x - 1, y - 1);
    }
}