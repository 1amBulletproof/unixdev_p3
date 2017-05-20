/*
 * This program shall use the thread_mgr library to create up to twelve threads, and then wait for all the threads to complete before exiting. The program shall require one argument which shall be an integer indicating how many threads to create (which must be between 1 and 12, inclusive).
 *
 * The program shall start all of these threads concurrently. Each thread shall execute a funciton that shall perform some extensive mathematical computations of your choice. One sample program incremented an integer variable five billion times; but this number depends on the machine running the program. Anythread should takea bout roughly 5-20 seconds to execute (make sure the thred is busy; don't allow the thread to block).
 *
 * Each thread should announce its creation with a log message using your log_mgr thread of homework2.
 *
 * It is allowed and recommmended to have status of thread creation and exit displayed on standard output as wella s in the log file. After all threads have completed their work, they can exit normally (using th_exit()) funciton in your thread_mgr library). Be sure to log the event of thread exit as well
 *
 * @author Brandon Tarney
 * @date    5/11/2017
 */

//TODO make this app
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "thread_mgr.h"


void *thread_action(void *arg)
{
        printf("thread running\n");
        int i = 0;
        while (i < 10000)
        {
                i++;
        }
        printf("thread ending\n");
        return NULL;
}

main()
{
        printf("Program start\n");
        //todo input specifiying number of threads
        //todo create 2-12 threads
        //todo threads all execute a mathematic computation like incrementing 1 billion times
        th_execute(&thread_action);
        th_execute(&thread_action);
        //todo wait for the threads to complete before exiting (join)
        //
        //
        sleep(5);
        printf("Program end\n");
        exit (0);
}










