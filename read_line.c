#include "battle_ship.h"

#include <stdio.h>

int read_line(const char *line,
	      battleship_result *result){
  if(sscanf(line, "winner = %d, loser = %d, round = %d",
	    & (result -> winner), & (result -> loser), & (result -> round))
     != 3){
    perror("reading a line from log file");
    return 0;
  }
  return 1;
}
