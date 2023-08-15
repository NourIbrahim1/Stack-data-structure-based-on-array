#ifndef _STACK_DS_H
#define _STACK_DS_H
#include "types.h"
#define STACK_MAX_SIZE 5
#define STACK_DEBUG

typedef struct
{
    uint32_t data[STACK_MAX_SIZE];
    uint32_t stack_pointer;

}stack_ds_t;
typedef enum stack_status
{
    STACK_EMPTY,
    STACK_FULL,
    STACK_NOT_FULL

}stack_status_t;

/**
* @brief  initialize the stack pointer
* @param  my_stack  pointer to the stack
* @retval return the status of the initialization process

*/
 return_status_t stack_init(stack_ds_t *my_stack);
 /**
* @brief  add (Push) a new value to the stack
* @param  my_stack  pointer to the stack , uint32_t value  the value that 'll be added
* @retval return the status of the stack
*/
 return_status_t stack_push (stack_ds_t *my_stack,uint32_t value);
 /**
* @brief  take a value from the stack
* @param  my_stack  pointer to the stack ,*value pointer to the popped value
* @retval return the status of the stack
*/
 return_status_t stack_pop (stack_ds_t *my_stack,uint32_t *value);
 /**
* @brief  shows the top element of the stack
* @param  my_stack  pointer to the stack,*value pointer to the top element
* @retval return the status of the stack
*/
 return_status_t stack_top (stack_ds_t *my_stack,uint32_t *value);
 /**
* @brief  shows the stack size -> num of elements
* @param  my_stack  pointer to the stack , *stack_size pointer to the size
* @retval return the status of the stack
*/
 return_status_t stack_size (stack_ds_t *my_stack,uint32_t *stack_size);
 /**
* @brief  prints the elements of the stack
* @param  my_stack  pointer to the stack
* @retval return the status of the stack
*/
 return_status_t stack_display (stack_ds_t *my_stack);



#endif // _STACK_DS_H
