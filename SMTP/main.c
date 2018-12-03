#include <stdio.h>
#include <stdlib.h>
#include "SMTPManager.h"

int main(int argc, char *argv[]) {
  struct SMTPClient *ptr = createSMTPClient();
  printf("Socket #%d\n", ptr->sd);
	return 0;
}
