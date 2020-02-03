#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(void)
{
  //to store child PID
  pid_t pid;

  pid = fork();
  //if fork was unsuccessful
  if (pid < 0)
  {
    perror("Error");
    return -1;
  }

  //child process
  if (pid == 0)
  {
    printf("I am the child, I will now terminate\n");
    exit(0);
  }

  //parent process
  if (pid > 0)
  {
    printf("I am the parent, my pid is: %d\n", getpid());
    sleep(20);
  }
  return 0;
}