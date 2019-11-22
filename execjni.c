#include <stdio.h>
#include <stdlib.h>



int main(int argc, char** argv) {

	char input_buffer[1024] = {0};
	if ( argc != 2 ) exit (1);
	sprintf(input_buffer, "java -Djava.library.path=. %s", argv[1]);
	system(input_buffer);

	exit(EXIT_SUCCESS);

}
