#include <stdlib.h>
#include <assert.h>

#include "cell_space.h"
#include "input.h"

CellSpace* create_random_cells(int height, int width) {
    CellSpace *cs = create_cell_space(height, width);

    for (int i = 0; i < height; i++)
        for (int j = 0; j < width; j++)
            cs->cell[i][j] = random() % 2;

    return cs;
}

CellSpace* create_blinker() {
    CellSpace *cs = create_cell_space(3,3);

    cs->cell[0][0] = 0;cs->cell[0][1] = 0;cs->cell[0][2] = 0;
    cs->cell[1][0] = 1;cs->cell[1][1] = 1;cs->cell[1][2] = 1;
    cs->cell[2][0] = 0;cs->cell[2][1] = 0;cs->cell[2][2] = 0;

    return cs;
}

CellSpace* create_toad() {
    CellSpace *cs = create_cell_space(4,4);
    
    cs->cell[0][0] = 0;cs->cell[0][1] = 0;cs->cell[0][2] = 0;cs->cell[0][3] = 0;
    cs->cell[1][0] = 0;cs->cell[1][1] = 1;cs->cell[1][2] = 1;cs->cell[1][3] = 1;
    cs->cell[2][0] = 1;cs->cell[2][1] = 1;cs->cell[2][2] = 1;cs->cell[2][3] = 0;
    cs->cell[3][0] = 0;cs->cell[3][1] = 0;cs->cell[3][2] = 0;cs->cell[3][3] = 0;

    return cs;
}

CellSpace* create_beacon() {
    CellSpace *cs = create_cell_space(4,4);

    cs->cell[0][0] = 1;cs->cell[0][1] = 1;cs->cell[0][2] = 0;cs->cell[0][3] = 0;
    cs->cell[1][0] = 1;cs->cell[1][1] = 0;cs->cell[1][2] = 0;cs->cell[1][3] = 0;
    cs->cell[2][0] = 0;cs->cell[2][1] = 0;cs->cell[2][2] = 0;cs->cell[2][3] = 1;
    cs->cell[3][0] = 0;cs->cell[3][1] = 0;cs->cell[3][2] = 1;cs->cell[3][3] = 1;

    return cs;
}
