#include <stdio.h>
#include <stdlib.h>
#include <jni.h>
#include "jnit.h"

static char buffer[20]={0};
static int i=0;
        

JNIEXPORT void JNICALL Java_jnit_test
  (JNIEnv *env, jobject obj) {
        for (i=0; i < 100000000; i++) {
            sprintf(buffer, "String%d", i);
        }
		
}
