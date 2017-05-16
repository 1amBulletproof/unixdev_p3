/*
   * Library to handle threading
   *
   * @author brandon tarney
   * @date  5/17/2017
   */
#include <sys/file.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#include "thread_mgr.h"


/*
 * executes the argument function as an independent thread within the process. Create a name for the thread and maintain it within the library. Also create a unique integer handle (TheadHandles) and return it upon successful execution. If the function fails it shall return THD_ERROR (-1)
 *
 */
ThreadHandles th_execute(Funcptrs fcn)
{
        printf("th_execute");
        return 0;
}

/*
 * blocks the calling thread until the thread associated with the argument handle terminates. 
 * Returns THD_ERROR if the argument is not a valid thread. Otherwise the thread returns THD_OK(0). After the thread terminates, the thread library should purge the stored thread information for the argument thread
 */
int th_wait(ThreadHandles threadHandles)
{
        printf("th_wait");
        return 0;
}

/*
 * blocks until all threads in the library terminate. This funciton retursn THD_ERROR if the libraryis not managing any threads or pon any other error condition. Otherwise, the function returns THD_OK after all threads terminate. The thread library should purge the stored thread information for all threads upon successful execution of this call
 * */
int th_wait_all(void)
{
        printf("th_wait_all");
        return 0;
}

/*
 * cancels the executing thread associated with the argument thread handle, and updates the status of the thread appropriately. This function returns THD_ERROR if the argument is not a valid thread handle. Note that this call is not required to asynchronouslykill the thread; the thread may be cancelled until the thread reaches its cancellation point, and cleaned up after the application waits for the thread
 * */
int th_kill(ThreadHandles threadHandles)
{
        printf("th_kill");
        return 0;
}

/*
 * cancels all threads in the library. this funciton returns THD_ERROR if the library is not managing any threads. otherwise, the function returns THD_OK after all threads are cancelled. 
 */
int th_kill_all(void)
{
        printf("th_kill_all");
        return 0;
}

/*
 * This function should allow the thread that calls this function to clean up its information from the library and exit. The thread information in the library should not be purgaed at this time; however, proper status should be logged to the log file, and the internatl status of the thread should be updated. The thread information in the library shouldn't be changed until another thread "waits" for the thread (using one of the "th_wait" calls). This call does not return if executed successfully; thus the onlypossible return value for this function is THD_ERROR.
 */
int th_exit(void)
{
        printf("th_exit");
        return 0;
}

/* Signal Handler 
 * When receiving a SIGINT signal
 * library should print out to stdout
 * thread handle, thread name, status of the threads that are being managed by the libraRY
 * ALSO handle SIGQUIT signal, forcibly terminate or cancel all threads and clear out the local thread databases
 */

