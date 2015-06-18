#ifndef BATTL_SHIP_H
#define BATTL_SHIP_H

typedef struct {
  int winner;
  int loser;
  int round;
} battleship_result;

typedef struct {
  int id;
  int num_win;
  int num_lose;
  double win_per;
  double ave_rnd;
} battleship_stats;

int read_line(const char *line, battleship_result *result);
battleship_result * get_data_from_file(int *num, char *filename);
battleship_stats * calc_stats(const battleship_result *result, const int num_res, int *num_player);
void sort_by_win_per(battleship_stats * const stats, const int num_player);
void print_out(const battleship_stats *sorted_stats, const int num_player, const int display_num);
#endif 

