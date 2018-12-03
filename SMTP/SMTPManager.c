//
//  SMTPManager.c
//  SMTP
//
//  Created by Hoan Tran on 12/2/18.
//  Copyright © 2018 Hoan Tran. All rights reserved.
//

#include "SMTPManager.h"

struct SMTPClient *createSMTPClient(void) {
  struct SMTPClient *ptr = (struct SMTPClient *)malloc(sizeof(struct SMTPClient));
  ptr->sd = 42;
  return ptr;
}
