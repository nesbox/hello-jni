#include <cstring>
#include <jni.h>
#include <cinttypes>
#include <android/log.h>
#include <string>

#define LOGI(...) \
  ((void)__android_log_print(ANDROID_LOG_INFO, "hello-jni::", __VA_ARGS__))

/* This is a trivial JNI example where we use a native method
 * to return a new VM String. See the corresponding Java source
 * file located at:
 *
 *   src/main/java/com/example/hellojni/MainActivity.java
 */
extern "C" JNIEXPORT jstring JNICALL
Java_com_beam_hellojni_MainActivity_stringFromJNI(JNIEnv *env, jobject thiz) 
{
    LOGI("calling C function with JNI");

    return env->NewStringUTF("Beam says Hello from JNI library!");
}
