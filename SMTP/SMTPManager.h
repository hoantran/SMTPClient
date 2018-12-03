//
//  STMPManager.h
//  SMTP
//
//  Created by Hoan Tran on 12/2/18.
//  Copyright © 2018 Hoan Tran. All rights reserved.
//

#ifndef STMPManager_h
#define STMPManager_h

typedef struct SMTPClient{
  int sd;
  int buffLen;
  char *buf;
}SMTPClient;

struct SMTPClient *createSMTPClient(void);

#endif /* STMPManager_h */
