//
// Created by liuxiang on 2017/7/23.
//

#ifndef IDCARD_UTILS_H
#define IDCARD_UTILS_H
extern "C" {
void bitmap2Mat(JNIEnv *env, jobject bitmap, Mat &dst,
                jboolean needUnPremultiplyAlpha = false);
void mat2Bitmap(JNIEnv *env, Mat &src, jobject bitmap,
                jboolean needPremultiplyAlpha = false);
};
#endif //IDCARD_UTILS_H
