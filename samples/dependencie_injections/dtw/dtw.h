
#ifndef DTW_1_0_0_DECLARATIONS
#define DTW_1_0_0_DECLARATIONS
#if !defined(DTW_1_0_0_MOCK_STDIO_H) && !defined(DTW_1_0_0_MOCK_ALL) 
    #include <stdio.h>
#endif

#if !defined(DTW_1_0_0_MOCK_STDLIB_H) && !defined(DTW_1_0_0_MOCK_ALL) 
    #include <stdlib.h>
#endif

typedef struct dtw_1_0_0_Dependencies{
    int (*print)(const char *fmt,...);
    void *(*malloc)(long unsigned int size);
}dtw_1_0_0_Dependencies;

const char * dtw_1_0_0_init_dependencie_funtions(dtw_1_0_0_Dependencies *dependencies);

void dtw_1_0_0_print_x_and_y(dtw_1_0_0_Dependencies *dependencies,int x,int y);
#endif 