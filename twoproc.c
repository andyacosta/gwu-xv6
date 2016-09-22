#include "types.h"
#include "user.h"

int main(int argc, char* argv[]){
	int pid;

	pid = fork();
	
	if(pid == 0){
		for(int i = 0; i < 100; i++){
			printf(0, "+");
		}
	}
	else if(pid > 0) {
		//Parent
		for(int i = 0; i < 100; i++){
			printf(0, "-");
		}
		wait();
	}
	return 0;
}
