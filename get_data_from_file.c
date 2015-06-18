#include <stdlib.h>
#include <stdio.h>
#include "battle_ship.h"

battleship_result * get_data_from_file(int *num, char *filename) {
	char buf[256];
	int cnt = 0;
	FILE *fp;
	battleship_result * ret = NULL;

	... // fopen

	while (fgets(buf, 256, fp) != NULL) {
		....
		read_line(buf, &ret[cnt - 1]);
	}

	*num = cnt;

	... //fclose

	return ret;
}

