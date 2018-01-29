#include <stdio.h>
#include <stdlib.h>

#include "cell_space.h"
#include "input.h"
#include "output.h"

int main(int argc, char** argv) {
    if (argc < 1)
        exit(-1);

    CellSpace *cs = create_from_file(argv[1]);
    //CellSpace* cs = create_random_cells(42, 124);
    //print_transitions(cs, 100, stdout);
    //print_transitions_stop_motion(cs);
    show_transitions(cs, 1000000);
    delete_cell_space(cs);
}
