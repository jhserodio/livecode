#include <stdio.h>

typedef struct {
  int x;
  int y;
} Vector2D;

void translate(Vector2D *v, int x, int y) {
  v->x += x;
  v->y += y;
}

void whereIsPlayer(Vector2D *v) {
  printf(" posicao atual do jogador: x %d, y %d", v->x, v->y);
}

int main() {
  Vector2D player_position = {10, 20};

  translate(&player_position, -4, 0);

  printf(" posicao atual do jogador: x %d, y %d", player_position.x,
         player_position.y);

  translate(&player_position, 10, -10);

  whereIsPlayer(&player_position);
}
