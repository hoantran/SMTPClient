//
//  main.c
//  SMTP
//
//  Created by Hoan Tran on 12/2/18.
//  Copyright © 2018 Hoan Tran. All rights reserved.
//

#include <stdio.h>
#include "SMTPManager.h"

int main(int argc, const char * argv[]) {
  printf("Hello, SMTP!\n");
  struct SMTPClient *ptr = createSMTPClient();
  printf("Socket #%d \n", ptr->sd);
  return 0;
}
