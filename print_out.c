#include "battle_ship.h"

#include <stdio.h>
#include <stdlib.h>

void print_out(const battleship_stats *sorted_stats, const int num_player, const int display_num){
  int temp = (display_num > num_player) ? num_player : display_num;
  int i;
  for(i=0; i<temp; i++) {
    fprintf(stdout, "ID:%04d wins:%d losses:%d rate:%.3lf avg. rounds%.2lf\n",
	    sorted_stats[i].id, sorted_stats[i].num_win, sorted_stats[i].num_lose,
	    sorted_stats[i].win_per, sorted_stats[i].ave_rnd);
  }
}
