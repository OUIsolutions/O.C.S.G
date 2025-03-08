

### Dependencie Injection
Every Function must be able to be injected by the user, so the code can be tested and run in any plataform.

In These example it auto imports the **stdio.h** and **stdlib.h** and set as the default **Impure Function** the **printf** function.
```c 



//==================================LIBSTART==================================
//FILE: dtw.h
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

//FILE: dtw.c

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

//==================================LIBEND==================================



int main(){
  
    dtw_1_0_0_Dependencies dependencies = {0};
    const char *error = dtw_1_0_0_init_dependencie_funtions(&dependencies);
    if(error != NULL){
        printf("%s\n",error);
        return 1;
    }

    dtw_1_0_0_print_x_and_y(&dependencies,10,20);

}
```

but it will generate a error if you define the **DTW_1_0_0_MOCK_STDIO_H** or **DTW_1_0_0_MOCK_STDLIB_H** or **DTW_1_0_0_MOCK_ALL**.

