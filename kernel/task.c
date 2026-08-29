// GRR20221260 Rebeca Soares de Oliveira

// PingPongOS - PingPong Operating System

// Este arquivo PODE/DEVE ser alterado.

// Gerência básica de tarefas.

#include "task.h"
#include "dispatcher.h"

void task_init()
{
}

void task_term()
{
}

struct task_t * task_create(char *name, void (*entry)(void *), void *arg)
{
}

int task_destroy(struct task_t *task)
{
}

int task_id(struct task_t *task)
{
}

char *task_name(struct task_t *task)
{
}

void task_yield()
{
}

int task_wait(struct task_t *task)
{
}

void task_sleep(int t)
{
}

void task_exit(int exit_code)
{
}