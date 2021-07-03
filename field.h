#ifndef FIELD_H
#define FIELD_H

#define TITLE_ROW 7
#define TITLE_COL 38
#define PLAYER_X_MARK 'X'
#define OPPONENT_O_MARK 'O'

void init_field();
void insert_mark(char mark, short field_pos);

#endif
