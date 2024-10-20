#include <iostream>
#include "SapperEngine.h"
#include "random.h"

#define DEBUG true

int main(){
    const unsigned int sizex = 5, sizey = 5, mines = 5;
    int** field = nullptr;
    char** maskfield=nullptr;
    field = CreateList(sizex, sizey);
    maskfield = CreateMaskList(sizex, sizey);
    CreateFieldMine(field, sizex, sizey, mines);
    CreateMaskField(maskfield, sizex, sizey, '#');
#if DEBUG == true
    ShowList(field, sizex, sizey);
#endif // DEBUG
    EngGame(maskfield, field, sizex, sizey);
}