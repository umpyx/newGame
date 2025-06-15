#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <unistd.h>
#include <string.h>

#define MIN_ARGS 2
#define progname "test"

int main(int argc, char *argv[]) {
	char *usagemessage = "Usage: %s [command]\nCommand can either be: \n"\
				"\tserver: creates a server and rpints out its port\n"\
				"\tclient: creates a client to connect to server (must specify port)\n";
	if (argc < MIN_ARGS) {
		fprintf(stderr, usagemessage, progname);
		exit(-1);
	}

	if (argv[1] == "server") {

	} else if (argv[1] == "client") {

	} else {
		fprintf(stderr, "ERROR: Unknown command: %s\n"
	}
	return 0;
}
