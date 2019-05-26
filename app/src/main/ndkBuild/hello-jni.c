#include <jni.h>

int test() {
    return 123;
}

JNIEXPORT jint JNICALL
Java_com_ff_makefile_MainActivity_nativeTest(JNIEnv *env, jobject instance) {

    return test();

}