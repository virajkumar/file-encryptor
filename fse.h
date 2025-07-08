/* fse.h */
#define _GNU_SOURCE

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <wolfssl/wolfcrypt/arc4.h>
#include <assert.h>
#include <sys/random.h>

byte *securerand(word16);
byte *readkey(byte*);
int main(int, char**);