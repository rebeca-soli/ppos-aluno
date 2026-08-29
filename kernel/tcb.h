// PingPongOS - PingPong Operating System
// © Prof. Carlos A. Maziero, DINF UFPR
// Versão 2.1 -- 06/2026

// Este arquivo PODE/DEVE ser alterado.

// Descritor de tarefas (TCB - Task Control Block).

#ifndef __PPOS_TCB__
#define __PPOS_TCB__

#include "ctx.h"

enum task_status_t {
    READY,
    RUNNING,
    SUSPENDED,
    TERMINATED
};

enum exit_code_t {
    EXIT_OK = 0,
    EXIT_ERROR = -1
};

// Task Control Block (TCB), infos sobre uma tarefa
struct task_t
{
    int id;         // identificador da tarefa
    char *name;     // nome da tarefa
    struct ctx_t context;  // contexto da tarefa
    enum task_status_t status; // estado da tarefa
    enum exit_code_t exit_code; // código de saída da tarefa
    
    int vg_id;      // id da pilha da tarefa no Valgrind
};

#endif
