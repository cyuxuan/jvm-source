/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class sun_awt_X11_XToolkit */

#ifndef _Included_sun_awt_X11_XToolkit
#define _Included_sun_awt_X11_XToolkit
#ifdef __cplusplus
extern "C" {
#endif
#undef sun_awt_X11_XToolkit_LONG_BITS
#define sun_awt_X11_XToolkit_LONG_BITS 64L
#undef sun_awt_X11_XToolkit_GRAB_EVENT_MASK
#define sun_awt_X11_XToolkit_GRAB_EVENT_MASK -2147483648L
#undef sun_awt_X11_XToolkit_MAX_BUTTONS_SUPPORTED
#define sun_awt_X11_XToolkit_MAX_BUTTONS_SUPPORTED 20L
#undef sun_awt_X11_XToolkit_DEFAULT_WAIT_TIME
#define sun_awt_X11_XToolkit_DEFAULT_WAIT_TIME 10000L
#undef sun_awt_X11_XToolkit_MAX_ITERS
#define sun_awt_X11_XToolkit_MAX_ITERS 20L
#undef sun_awt_X11_XToolkit_MIN_ITERS
#define sun_awt_X11_XToolkit_MIN_ITERS 0L
#undef sun_awt_X11_XToolkit_MINIMAL_EDELAY
#define sun_awt_X11_XToolkit_MINIMAL_EDELAY 0L
#undef sun_awt_X11_XToolkit_DEFAULT_DATATRANSFER_TIMEOUT
#define sun_awt_X11_XToolkit_DEFAULT_DATATRANSFER_TIMEOUT 10000L
#undef sun_awt_X11_XToolkit_AWT_MULTICLICK_DEFAULT_TIME
#define sun_awt_X11_XToolkit_AWT_MULTICLICK_DEFAULT_TIME 500L
#undef sun_awt_X11_XToolkit_PRIMARY_LOOP
#define sun_awt_X11_XToolkit_PRIMARY_LOOP 0L
#undef sun_awt_X11_XToolkit_SECONDARY_LOOP
#define sun_awt_X11_XToolkit_SECONDARY_LOOP 1L
#undef sun_awt_X11_XToolkit_WRAP_TIME_MILLIS
#define sun_awt_X11_XToolkit_WRAP_TIME_MILLIS 4294967295LL
#undef sun_awt_X11_XToolkit_XSUN_KP_BEHAVIOR
#define sun_awt_X11_XToolkit_XSUN_KP_BEHAVIOR 1L
#undef sun_awt_X11_XToolkit_XORG_KP_BEHAVIOR
#define sun_awt_X11_XToolkit_XORG_KP_BEHAVIOR 2L
#undef sun_awt_X11_XToolkit_IS_SUN_KEYBOARD
#define sun_awt_X11_XToolkit_IS_SUN_KEYBOARD 1L
#undef sun_awt_X11_XToolkit_IS_NONSUN_KEYBOARD
#define sun_awt_X11_XToolkit_IS_NONSUN_KEYBOARD 2L
#undef sun_awt_X11_XToolkit_IS_KANA_KEYBOARD
#define sun_awt_X11_XToolkit_IS_KANA_KEYBOARD 1L
#undef sun_awt_X11_XToolkit_IS_NONKANA_KEYBOARD
#define sun_awt_X11_XToolkit_IS_NONKANA_KEYBOARD 2L
#undef sun_awt_X11_XToolkit_WORKAROUND_SLEEP
#define sun_awt_X11_XToolkit_WORKAROUND_SLEEP 100LL
/*
 * Class:     sun_awt_X11_XToolkit
 * Method:    getTrayIconDisplayTimeout
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_sun_awt_X11_XToolkit_getTrayIconDisplayTimeout
  (JNIEnv *, jclass);

/*
 * Class:     sun_awt_X11_XToolkit
 * Method:    initIDs
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_sun_awt_X11_XToolkit_initIDs
  (JNIEnv *, jclass);

/*
 * Class:     sun_awt_X11_XToolkit
 * Method:    waitForEvents
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_sun_awt_X11_XToolkit_waitForEvents
  (JNIEnv *, jclass, jlong);

/*
 * Class:     sun_awt_X11_XToolkit
 * Method:    awt_output_flush
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_sun_awt_X11_XToolkit_awt_1output_1flush
  (JNIEnv *, jclass);

/*
 * Class:     sun_awt_X11_XToolkit
 * Method:    nativeLoadSystemColors
 * Signature: ([I)V
 */
JNIEXPORT void JNICALL Java_sun_awt_X11_XToolkit_nativeLoadSystemColors
  (JNIEnv *, jobject, jintArray);

/*
 * Class:     sun_awt_X11_XToolkit
 * Method:    getEnv
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_sun_awt_X11_XToolkit_getEnv
  (JNIEnv *, jclass, jstring);

/*
 * Class:     sun_awt_X11_XToolkit
 * Method:    awt_toolkit_init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_sun_awt_X11_XToolkit_awt_1toolkit_1init
  (JNIEnv *, jclass);

/*
 * Class:     sun_awt_X11_XToolkit
 * Method:    getDefaultXColormap
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_sun_awt_X11_XToolkit_getDefaultXColormap
  (JNIEnv *, jclass);

/*
 * Class:     sun_awt_X11_XToolkit
 * Method:    getDefaultScreenData
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_sun_awt_X11_XToolkit_getDefaultScreenData
  (JNIEnv *, jclass);

/*
 * Class:     sun_awt_X11_XToolkit
 * Method:    getNumberOfButtonsImpl
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_sun_awt_X11_XToolkit_getNumberOfButtonsImpl
  (JNIEnv *, jobject);

/*
 * Class:     sun_awt_X11_XToolkit
 * Method:    wakeup_poll
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_sun_awt_X11_XToolkit_wakeup_1poll
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif