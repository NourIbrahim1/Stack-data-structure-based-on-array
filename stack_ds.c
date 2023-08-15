#include "stack_ds.h"
/**
* @brief  initialize the stack pointer
* @param  my_stack  pointer to the stack
* @retval return the status of the initialization process

*/

return_status_t stack_init(stack_ds_t *my_stack)
{
    return_status_t ret = R_NOK;
    if (my_stack == NULL)
    {
        ret = R_NOK;
    }
    else
    {

        my_stack->stack_pointer=-1;
        ret=R_OK;
    }
    return ret;
}
/**
* @brief  check if stack is full
* @param  my_stack  pointer to the stack
* @retval return the status of the stack
*/

static stack_status_t stack_full(stack_ds_t *my_stack)
{
    if(my_stack->stack_pointer == STACK_MAX_SIZE-1)
    {
       // printf("stack is full! \n");
        return STACK_FULL;
    }
    else
    {
        // printf("stack is not full \n");
        return STACK_NOT_FULL;
    }

}
/**
* @brief  check if stack is empty
* @param  my_stack  pointer to the stack
* @retval return the status of the stack
*/

static stack_status_t stack_empty(stack_ds_t *my_stack)
{
    if(my_stack->stack_pointer == -1)
    {
       // printf("stack is empty! \n");
        return STACK_EMPTY;
    }
    else
    {
        // printf("stack is not empty \n");
        return STACK_NOT_FULL;
    }

}



/**
* @brief  add (Push) a new value to the stack
* @param  my_stack  pointer to the stack , uint32_t value  the value that 'll be added
* @retval return the status of the stack
*/
 return_status_t stack_push (stack_ds_t *my_stack,uint32_t value){
     return_status_t ret = R_NOK;

    if ((NULL==my_stack) || (STACK_FULL== stack_full(my_stack) ))
    {
        #ifdef STACK_DEBUG
        printf("Error!! can't push any new element!!\n");
        #endif // STACK_DEBUG
        ret = R_NOK;
    }
    else
    {
        my_stack->stack_pointer ++;
        my_stack->data[my_stack->stack_pointer] = value;
        #ifdef STACK_DEBUG
        printf("Value %i is added successfully to the stack \n",value);
        #endif // STACK_DEBUG
        ret = R_OK;
    }
        return ret;
}
/**
* @brief  take a value from the stack
* @param  my_stack  pointer to the stack ,*value pointer to the popped value
* @retval return the status of the stack
*/
 return_status_t stack_pop (stack_ds_t *my_stack,uint32_t *value)
 {
    return_status_t ret = R_NOK;
    if ((NULL==my_stack) || (NULL==value) || STACK_EMPTY == stack_empty(my_stack))
    {
        #ifdef STACK_DEBUG
        printf("Error!! can't pop any element!!\n");
        #endif // STACK_DEBUG
        ret = R_NOK;
    }
    else
    {
        *value = my_stack->data[my_stack->stack_pointer];
        my_stack->stack_pointer--;

        #ifdef STACK_DEBUG
        printf("Value %i is popped successfully from the stack \n",*value);
        #endif // STACK_DEBUG
        ret = R_OK;
    }
    return ret;
 }
/**
* @brief  shows the top element of the stack
* @param  my_stack  pointer to the stack,*value pointer to the top element
* @retval return the status of the stack
*/
 return_status_t stack_top (stack_ds_t *my_stack,uint32_t *value){
     return_status_t ret = R_NOK;
         if ((NULL==my_stack) || (NULL==value) || STACK_EMPTY == stack_empty(my_stack))
         {
             #ifdef STACK_DEBUG
             printf("Error!! can't show the top of the stack!!\n");
             #endif // STACK_DEBUG
             ret = R_NOK;
         }
         else
         {
             *value = my_stack->data[my_stack->stack_pointer];
                #ifdef STACK_DEBUG
                printf("The Top Element of the stack is %i \n",*value);
                #endif // STACK_DEBUG
                ret = R_OK;

         }

     return ret;
    }
/**
* @brief  shows the stack size -> num of elements
* @param  my_stack  pointer to the stack , *stack_size pointer to the size
* @retval return the status of the stack
*/
 return_status_t stack_size (stack_ds_t *my_stack,uint32_t *stack_size){
      return_status_t ret = R_NOK;
       if ((NULL==my_stack) || (NULL==stack_size))
       {

             ret = R_NOK;
       }
       else
       {
           *stack_size = my_stack->stack_pointer+1;

                ret = R_OK;
       }

      return ret;
}
/**
* @brief  prints the elements of the stack
* @param  my_stack  pointer to the stack
* @retval return the status of the stack
*/
 return_status_t stack_display (stack_ds_t *my_stack){
     return_status_t ret = R_NOK;
     sint32_t l_counter =0;
      if ((NULL==my_stack) || STACK_EMPTY == stack_empty(my_stack))
         {
             #ifdef STACK_DEBUG
             printf("Error!!there are no elements at the stack!!\n");
             #endif // STACK_DEBUG
             ret = R_NOK;
         }
         else
         {
             printf (" The stack elements are : ");
             for (l_counter=my_stack->stack_pointer;l_counter>=0;l_counter--)
             {
                 printf("%i\t",my_stack->data[l_counter]);
                  ret = R_OK;
             }

             printf("\n");
         }


    return ret;

}
