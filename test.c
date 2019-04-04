#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(){
	int pid = fork();
	if(pid == 0)
	{
		int i;
		int k = 1;
		for(i = 1; i <= 2000000000; ++i)//Wasteful computation.
			k = (k + i)%1000000007;
		printf(1, "%d\n", k);
	}
	else{
		wait();
		printf(1, "Done!\n");
	}
	exit();
}