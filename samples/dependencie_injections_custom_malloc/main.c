
#include "dtw.h"
#include <string.h>
char arena[1000];
int stack_point = 0;
void *custom_malloc(size_t size){
    void *ptr = arena + stack_point;
    stack_point += size;
    return ptr;
}


int main(){
  
    dtw_1_0_0_Dependencies dependencies = {0};
    dependencies.malloc = custom_malloc;
    const char *error = dtw_1_0_0_init_dependencie_funtions(&dependencies);
    if(error != NULL){
        printf("%s\n",error);
        return 1;
    }
    char *ptr = (char *)dependencies.malloc(10);    
    strcpy(ptr,"Hello");
    printf("%s\n",ptr);
    printf("stack_point: %d\n",stack_point);

    return 0;
}