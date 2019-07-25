#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
int main() {
int rc = fork();
int status;
 if (rc>0) {
// parent goes down this path (main)
printf("Hello\n");
} else {
// child (new process)
waitpid(rc, &status, rc);
printf("Goodbye\n");
}
return 0;
}
