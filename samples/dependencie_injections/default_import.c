
#include "dtw/dtw.h"

int main(){
  
    dtw_1_0_0_Dependencies dependencies = {0};
    const char *error = dtw_1_0_0_init_dependencie_funtions(&dependencies);
    if(error != NULL){
        printf("%s\n",error);
        return 1;
    }

    dtw_1_0_0_print_x_and_y(&dependencies,10,20);

}