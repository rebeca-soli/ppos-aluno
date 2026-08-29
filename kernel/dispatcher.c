// GRR20221260 Rebeca Soares de Oliveira

// PingPongOS - PingPong Operating System

// Este arquivo PODE/DEVE ser alterado.

// Dispatcher: gerencia os estados das tarefas.

#include <valgrind/valgrind.h>

#include "dispatcher.h"
#include "scheduler.h"
#include "lib/queue.h"
#include "tcb.h"
#include "task.h"

void dispatcher_init()
{
}

void dispatcher_term()
{
}

void dispatcher()
{
    // cria a tarefa inicial de usuário, que executará user_main()
    task_user = task_create(...)
    
    // enquanto houver tarefas de usuário
    enquanto ( userTasks > 0 )
    {
        // escolhe a próxima tarefa a executar
        próxima = scheduler()

        // escalonador escolheu uma tarefa?      
        se próxima != NULL
        {
            // transfere controle para a próxima tarefa
            task_run(próxima)
         
            // ao voltar ao dispatcher, trata a tarefa de acordo com seu estado
            caso o estado da tarefa "próxima" seja
            {
                PRONTA    : ...
                TERMINADA : ...
                SUSPENSA  : ...
                (etc)
            }
        }
    }

    // destrói a tarefa inicial do usuário
    task_destroy(task_user)
}

int task_switch(struct task_t *task)
{
}

void task_run(struct task_t *task)
{
}

void task_suspend(struct queue_t *queue)
{
}

void task_awake(struct task_t *task)
{
}