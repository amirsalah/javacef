/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_embedded_browser_Chromium */

#ifndef _Included_org_embedded_browser_Chromium
#define _Included_org_embedded_browser_Chromium
#ifdef __cplusplus
extern "C" {
#endif
#undef org_embedded_browser_Chromium_DISPOSED
#define org_embedded_browser_Chromium_DISPOSED 1L
#undef org_embedded_browser_Chromium_CANVAS
#define org_embedded_browser_Chromium_CANVAS 2L
#undef org_embedded_browser_Chromium_KEYED_DATA
#define org_embedded_browser_Chromium_KEYED_DATA 4L
#undef org_embedded_browser_Chromium_DISABLED
#define org_embedded_browser_Chromium_DISABLED 8L
#undef org_embedded_browser_Chromium_HIDDEN
#define org_embedded_browser_Chromium_HIDDEN 16L
#undef org_embedded_browser_Chromium_LAYOUT_NEEDED
#define org_embedded_browser_Chromium_LAYOUT_NEEDED 32L
#undef org_embedded_browser_Chromium_LAYOUT_CHANGED
#define org_embedded_browser_Chromium_LAYOUT_CHANGED 64L
#undef org_embedded_browser_Chromium_LAYOUT_CHILD
#define org_embedded_browser_Chromium_LAYOUT_CHILD 128L
#undef org_embedded_browser_Chromium_THEME_BACKGROUND
#define org_embedded_browser_Chromium_THEME_BACKGROUND 256L
#undef org_embedded_browser_Chromium_DRAW_BACKGROUND
#define org_embedded_browser_Chromium_DRAW_BACKGROUND 512L
#undef org_embedded_browser_Chromium_PARENT_BACKGROUND
#define org_embedded_browser_Chromium_PARENT_BACKGROUND 1024L
#undef org_embedded_browser_Chromium_RELEASED
#define org_embedded_browser_Chromium_RELEASED 2048L
#undef org_embedded_browser_Chromium_DISPOSE_SENT
#define org_embedded_browser_Chromium_DISPOSE_SENT 4096L
#undef org_embedded_browser_Chromium_TRACK_MOUSE
#define org_embedded_browser_Chromium_TRACK_MOUSE 8192L
#undef org_embedded_browser_Chromium_FOREIGN_HANDLE
#define org_embedded_browser_Chromium_FOREIGN_HANDLE 16384L
#undef org_embedded_browser_Chromium_DRAG_DETECT
#define org_embedded_browser_Chromium_DRAG_DETECT 32768L
#undef org_embedded_browser_Chromium_MOVE_OCCURRED
#define org_embedded_browser_Chromium_MOVE_OCCURRED 65536L
#undef org_embedded_browser_Chromium_MOVE_DEFERRED
#define org_embedded_browser_Chromium_MOVE_DEFERRED 131072L
#undef org_embedded_browser_Chromium_RESIZE_OCCURRED
#define org_embedded_browser_Chromium_RESIZE_OCCURRED 262144L
#undef org_embedded_browser_Chromium_RESIZE_DEFERRED
#define org_embedded_browser_Chromium_RESIZE_DEFERRED 524288L
#undef org_embedded_browser_Chromium_IGNORE_WM_CHANGEUISTATE
#define org_embedded_browser_Chromium_IGNORE_WM_CHANGEUISTATE 1048576L
#undef org_embedded_browser_Chromium_SKIN_NEEDED
#define org_embedded_browser_Chromium_SKIN_NEEDED 2097152L
#undef org_embedded_browser_Chromium_DEFAULT_WIDTH
#define org_embedded_browser_Chromium_DEFAULT_WIDTH 64L
#undef org_embedded_browser_Chromium_DEFAULT_HEIGHT
#define org_embedded_browser_Chromium_DEFAULT_HEIGHT 64L
#undef org_embedded_browser_Chromium_MAJOR
#define org_embedded_browser_Chromium_MAJOR 5L
#undef org_embedded_browser_Chromium_MINOR
#define org_embedded_browser_Chromium_MINOR 80L
/*
 * Class:     org_embedded_browser_Chromium
 * Method:    browser_init
 * Signature: (ILjava/lang/String;Lorg/embedded/browser/ChromeSettings;)V
 */
JNIEXPORT void JNICALL Java_org_embedded_browser_Chromium_browser_1init
  (JNIEnv *, jobject, jint, jstring, jobject);

/*
 * Class:     org_embedded_browser_Chromium
 * Method:    browser_new
 * Signature: (IILjava/lang/String;Lorg/embedded/browser/ChromeSettings;)V
 */
JNIEXPORT void JNICALL Java_org_embedded_browser_Chromium_browser_1new
  (JNIEnv *, jobject, jint, jint, jstring, jobject);

/*
 * Class:     org_embedded_browser_Chromium
 * Method:    browser_close
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_embedded_browser_Chromium_browser_1close
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_embedded_browser_Chromium
 * Method:    browser_shutdown
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_embedded_browser_Chromium_browser_1shutdown
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_embedded_browser_Chromium
 * Method:    browser_clean_cookies
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_embedded_browser_Chromium_browser_1clean_1cookies
  (JNIEnv *, jobject);

/*
 * Class:     org_embedded_browser_Chromium
 * Method:    browser_setUrl
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_embedded_browser_Chromium_browser_1setUrl
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     org_embedded_browser_Chromium
 * Method:    browser_resized
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_embedded_browser_Chromium_browser_1resized
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_embedded_browser_Chromium
 * Method:    browser_back
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_embedded_browser_Chromium_browser_1back
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_embedded_browser_Chromium
 * Method:    browser_forward
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_embedded_browser_Chromium_browser_1forward
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_embedded_browser_Chromium
 * Method:    browser_reload
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_embedded_browser_Chromium_browser_1reload
  (JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
