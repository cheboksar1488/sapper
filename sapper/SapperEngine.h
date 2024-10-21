#ifndef ENGINE_H
#define ENGINE_H
void ShowList(int**, const int, const int);
void ShowList(char**, const int, const int);
int** CreateList(const int, const int);
char** CreateMaskList(const int, const int);
void CreateMaskField(char**, const int, const int, const char);
void CreateFieldMine(int**, const int, const int, int);
bool CheckRule(int**, const int, const int);
void OpenSq(int**, char**&, const int, const int, const int sizex, const int sizey);
void EngGame(char**&, int**, const int, const int);
#endif // !ENGINE_H
