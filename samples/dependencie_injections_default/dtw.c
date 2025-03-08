#include "dtw.h"


const char * dtw_1_0_0_init_dependencie_funtions(dtw_1_0_0_Dependencies *dependencies){

    #if !defined(DTW_1_0_0_MOCK_STDIO_H) && !defined(DTW_1_0_0_MOCK_ALL) 
        if(dependencies->print == NULL){
            dependencies->print = printf;
        }
    #endif

    #if !defined(DTW_1_0_0_MOCK_STDLIB_H) && !defined(DTW_1_0_0_MOCK_ALL) 
        if(dependencies->malloc == NULL){
            dependencies->malloc = malloc;
        }
    #endif

    if(dependencies->print == NULL){
        return "Error: print function is NULL";
    }
    
    if(dependencies->malloc == NULL){
        return "Error: malloc function is NULL";
    }
    return NULL;

}

void dtw_1_0_0_print_x_and_y(dtw_1_0_0_Dependencies *dependencies,int x,int y){
    dependencies->print("x: %d y: %d\n",x,y);
}