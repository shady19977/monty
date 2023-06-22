#ifndef _MONTY_H_
#define _MONTY_H_
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <errno.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct global - Use in many files
 * @num: Stack numbers.
 * @buff: Buffer.
 * @file: File to open.
 */
typedef struct global
{
	char *num;
	char *buff;
	FILE *file;
} global;
extern global gl;

void op_cmd(stack_t **h, unsigned int cnt, char *cmd);
void _push(stack_t **h,  unsigned int cnt);
void ultrafree(stack_t *h);
void _pall(stack_t **h, unsigned int cnt);
void _pint(stack_t **ptr, unsigned int cnt);
void _pop(stack_t **ptr, unsigned int cnt);
void _swap(stack_t **ptr, unsigned int cnt);
void _add(stack_t **ptr, unsigned int cnt);
void _nop(stack_t **ptr, unsigned int cnt);
#endif /* _MONTY_H_ */
