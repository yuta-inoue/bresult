#include "battle_ship.h"

#include <stdlib.h>
#include <stdio.h>
  
battleship_stats * calc_stats(const battleship_result *result, 
			      const int num_result, int *num_player){
  // max id (num_player)
  int i;
  int max=0;
  for(i = 0; i < num_result; i++){
    ....
  }

  *num_player = max;

  // allocate memmory for stats
  battleship_stats * stats = (battleship_stats *)calloc( max, sizeof(battleship_stats));
  if(stats == NULL){
    perror("mallc error");
    exit(EXIT_FAILURE);
  }

  // summing

  for(i=0; i < num_result; i++){
    ...
  }

  // store to stats
  for(i=0; i < max; i++){
    ...
  }

  return stats;
}
