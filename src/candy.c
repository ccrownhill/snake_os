#include <game_ui.h> // for field dimensions and other info
#include <random.h> // for spawning at random location
#include <candy.h>

// in main.c
extern int is_game_running;

candy_t candy;

void spawn_candy()
{
  // put candy at random new position
  candy.x_pos = FIELD_X_OFFSET + (u8)(rand() % FIELD_COLS) + 1;
  candy.y_pos = FIELD_Y_OFFSET + (u8)(rand() % FIELD_ROWS) + 1;
}

void draw_candy()
{
  if (!is_game_running)
    return;

  print_char(CANDY_CHAR, candy.x_pos, candy.y_pos, CANDY_COLOR);
}
