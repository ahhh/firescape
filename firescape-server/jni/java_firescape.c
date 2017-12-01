// JNI functions for the Go <=> Java bridge.
//   gobind -lang=java -javapkg=org.firescape.go firescape
//
// File is generated by gobind. Do not edit.

#include <android/log.h>
#include <stdint.h>
#include "seq.h"
#include "_cgo_export.h"
#include "firescape.h"

jclass proxy_class_firescape_GoPlayer;
jmethodID proxy_class_firescape_GoPlayer_cons;

JNIEXPORT void JNICALL
Java_org_firescape_go_firescape_Firescape__1init(JNIEnv *env, jclass _unused) {
    jclass clazz;
    clazz = (*env)->FindClass(env, "org/firescape/go/firescape/GoPlayer");
    proxy_class_firescape_GoPlayer = (*env)->NewGlobalRef(env, clazz);
    proxy_class_firescape_GoPlayer_cons = (*env)->GetMethodID(env, clazz, "<init>", "(Lgo/Seq$Ref;)V");
}

JNIEXPORT jobject JNICALL
Java_org_firescape_go_firescape_GoPlayer__1_1New(JNIEnv *env, jclass clazz) {
    int32_t refnum = new_firescape_GoPlayer();
    return go_seq_from_refnum(env, refnum, NULL, NULL);
}

JNIEXPORT jstring JNICALL
Java_org_firescape_go_firescape_GoPlayer_getUsername(JNIEnv* env, jobject __this__) {
    int32_t o = go_seq_to_refnum_go(env, __this__);
    nstring r0 = proxyfirescape_GoPlayer_GetUsername(o);
    jstring _r0 = go_seq_to_java_string(env, r0);
    return _r0;
}

JNIEXPORT void JNICALL
Java_org_firescape_go_firescape_GoPlayer_sayHello(JNIEnv* env, jobject __this__) {
    int32_t o = go_seq_to_refnum_go(env, __this__);
    proxyfirescape_GoPlayer_SayHello(o);
}

JNIEXPORT void JNICALL
Java_org_firescape_go_firescape_GoPlayer_setUsername(JNIEnv* env, jobject __this__, jstring s) {
    int32_t o = go_seq_to_refnum_go(env, __this__);
    nstring _s = go_seq_from_java_string(env, s);
    proxyfirescape_GoPlayer_SetUsername(o, _s);
}

JNIEXPORT void JNICALL
Java_org_firescape_go_firescape_GoPlayer_setUsername(JNIEnv *env, jobject this, jstring v) {
    int32_t o = go_seq_to_refnum_go(env, this);
    nstring _v = go_seq_from_java_string(env, v);
    proxyfirescape_GoPlayer_Username_Set(o, _v);
}

JNIEXPORT jstring JNICALL
Java_org_firescape_go_firescape_GoPlayer_getUsername(JNIEnv *env, jobject this) {
    int32_t o = go_seq_to_refnum_go(env, this);
    nstring r0 = proxyfirescape_GoPlayer_Username_Get(o);
    jstring _r0 = go_seq_to_java_string(env, r0);
    return _r0;
}
