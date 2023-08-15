
#include"types.h"
#include "stack_ds.h"


stack_ds_t stack1;
stack_ds_t stack2;
uint32_t stack_top_val=0;


int main()
{
    return_status_t ret = R_NOK;
    ret = stack_init(&stack1);
    if (R_NOK == ret)
    {
        printf("Failed to be initialized !!\n");
    }
    else
    {
          ret = stack_push(&stack1,11);
          ret = stack_push(&stack1,45);
          ret = stack_push(&stack1,41);
          ret = stack_push(&stack1,16);
          ret = stack_push(&stack1,88);
          ret = stack_push(&stack1,14);
          ret = stack_push(&stack1,132);
          ret = stack_display(&stack1);
          ret = stack_top(&stack1,&stack_top_val);

    }




    return 0;
}
