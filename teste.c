

#define DTW_1_0_0_MOCK_ALL
#if !defined(DTW_1_0_0_MOCK_STDIO_H) || !defined(DTW_1_0_0_MOCK_ALL) 
    #include <stdio.h>
#endif

typedef struct dtw_1_0_0_Dependencies{
    int (*print)(const char *fmt,...);
}dtw_1_0_0_Dependencies;


const char * dtw_1_0_0_init_dependencie_funtions(dtw_1_0_0_Dependencies *dependencies){

    #if !defined(DTW_1_0_0_MOCK_STDIO_H) || !defined(DTW_1_0_0_MOCK_ALL) 
        if(dependencies->print == NULL){
            dependencies->print = printf;
        }
    #endif

    if(dependencies->print == NULL){
        return "Error: print function is NULL";
    }
    return NULL;

}

void dtw_1_0_0_print_x_and_y(dtw_1_0_0_Dependencies *dependencies,int x,int y){
    dependencies->print("x: %d y: %d\n",x,y);
}

int main(){
  
    char *teste = NULL;

}