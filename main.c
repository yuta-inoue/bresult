#include "battle_ship.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
  // get data from file
  // file -> res
  int num_res;
  char *filename = NULL;
  
  if (argc != 2) {
		perror("no input files");
		exit(EXIT_FAILURE);
	} else {
    filename = argv[1];
  }
  
  fprintf(stderr, "getting data\n");
  battleship_result *res =
    get_data_from_file(&num_res,filename);
  
  // calculate winning percentage and average rounds for each player.
  // res -> stats
  int num_player;
  fprintf(stderr, "calculating stats\n");
  battleship_stats *stats = 
    calc_stats(res, num_res, &num_player);

  // sort stats
  // stats
  fprintf(stderr, "sorting stats\n");
  sort_by_win_per(stats, num_player);

  // print out 
  // sorted_stats -> display
  int display_num = 10;
  fprintf(stderr, "printing stats\n");
  print_out(stats, num_player, display_num);

  return 0;
}
