/*SCORE READ, WRITE HEADER FILE*/

typedef struct _Score{
	char *score;
	int time;
}Score;

void Score_write(WINDOW* win, int i);
void print_Background(WINDOW* win);
int isName(char* name);
void saveNickname(char* name);
char* nicknameEnter(WINDOW* win);
void writeScore(char* playerName, int TIME);
void exit_Error();
void Menu_Records(WINDOW* win);
void print_RecordBackground(WINDOW* win);
int flen(char* name);
