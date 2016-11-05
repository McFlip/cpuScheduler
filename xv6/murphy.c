#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  int i;
//
//   for(i = 1; i < argc; i++)
//     printf(1, "%s%s", argv[i], i+1 < argc ? " " : "\n");

	printf(1, "Setting Priority to 50 \n");
	i = setpriority(50);
	printf(1, "Priority = %d \n", i);
	printf(1, "Setting Priority to 0 \n");
	i = setpriority(0);
	printf(1, "Priority = %d \n", i);
	printf(1, "Setting Priority to -1 \n");
	i = setpriority(-1);
	printf(1, "Priority = %d \n", i);
	printf(1, "Setting Priority to 201 \n");
	i = setpriority(201);
	printf(1, "Priority = %d \n", i);
	printf(1, "Setting Priority to 100 \n");
	i = setpriority(100);
	printf(1, "Priority = %d \n", i);
  exit();
}
