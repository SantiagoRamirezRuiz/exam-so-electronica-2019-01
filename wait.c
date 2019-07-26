#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
volatile int p;
int main() {
int rc = fork();
int status;
 if (rc>0) {
// parent goes down this path (main)
p=(int) getpid();
sleep(2);
printf("Hello\n");
} else {
// child (new process)
waitpid(p, 0, p);
printf("Goodbye\n");
}
return 0;
}
