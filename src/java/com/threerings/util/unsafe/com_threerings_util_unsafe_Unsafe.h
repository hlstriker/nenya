/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_threerings_util_unsafe_Unsafe */

#ifndef _Included_com_threerings_util_unsafe_Unsafe
#define _Included_com_threerings_util_unsafe_Unsafe
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_threerings_util_unsafe_Unsafe
 * Method:    enableGC
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_threerings_util_unsafe_Unsafe_enableGC
  (JNIEnv *, jclass);

/*
 * Class:     com_threerings_util_unsafe_Unsafe
 * Method:    disableGC
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_threerings_util_unsafe_Unsafe_disableGC
  (JNIEnv *, jclass);

/*
 * Class:     com_threerings_util_unsafe_Unsafe
 * Method:    nativeSleep
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_threerings_util_unsafe_Unsafe_nativeSleep
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_threerings_util_unsafe_Unsafe
 * Method:    nativeSetuid
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_threerings_util_unsafe_Unsafe_nativeSetuid
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_threerings_util_unsafe_Unsafe
 * Method:    nativeSetgid
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_threerings_util_unsafe_Unsafe_nativeSetgid
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_threerings_util_unsafe_Unsafe
 * Method:    nativeSeteuid
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_threerings_util_unsafe_Unsafe_nativeSeteuid
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_threerings_util_unsafe_Unsafe
 * Method:    nativeSetegid
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_threerings_util_unsafe_Unsafe_nativeSetegid
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_threerings_util_unsafe_Unsafe
 * Method:    init
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_threerings_util_unsafe_Unsafe_init
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
