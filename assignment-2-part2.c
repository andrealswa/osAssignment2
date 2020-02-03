#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main()
{
  system("./assignment-2.c &");
  system("ps -l");
  sleep(10);
  system("kill -9 $(ps -l | grep -w Z | tr -s ' ' | cut -d ' ' -f 5)");
  sleep(10);
  printf("\nUpdated list of processes with their states\n");
  system("ps -l");
  return 0;
}