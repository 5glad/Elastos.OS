// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     api_generator
// For
//     org/chromium/base/BuildInfo

#ifndef ELASTOS_ORG_CHROMIUM_BASE_BUILDINFO_JNI
#define ELASTOS_ORG_CHROMIUM_BASE_BUILDINFO_JNI

//#include <jni.h>

#include "ElAndroid.h"
#include "elastos.h"
#include "base/logging.h"

//#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.

// Step 2: method stubs.

// Step 3: Callback init .
struct ElaBuildInfoCallback
{
    Elastos::String (*elastos_BuildInfo_getDevice)();
    Elastos::String (*elastos_BuildInfo_getBrand)();
    Elastos::String (*elastos_BuildInfo_getAndroidBuildId)();
    Elastos::String (*elastos_BuildInfo_getAndroidBuildFingerprint)();
    Elastos::String (*elastos_BuildInfo_getDeviceModel)();
    Elastos::String (*elastos_BuildInfo_getPackageVersionCode)(IInterface* context);
    Elastos::String (*elastos_BuildInfo_getPackageVersionName)(IInterface* context);
    Elastos::String (*elastos_BuildInfo_getPackageLabel)(IInterface* context);
    Elastos::String (*elastos_BuildInfo_getPackageName)(IInterface* context);
    Elastos::String (*elastos_BuildInfo_getBuildType)();
    Elastos::Int32 (*elastos_BuildInfo_getSdkInt)();
};

extern "C" {
static struct ElaBuildInfoCallback* sElaBuildInfoCallback;
__attribute__((visibility("default")))
void Elastos_BuildInfo_InitCallback(Elastos::Handle32 cb)
{
    sElaBuildInfoCallback = (struct ElaBuildInfoCallback*)cb;
    DLOG(INFO) << "init pointer for sElaBuildInfoCallback is:" << sElaBuildInfoCallback;
}
}; // extern "C"

static bool RegisterNativesImpl() {

  return true;
}

#endif  // ELASTOS_ORG_CHROMIUM_BASE_BUILDINFO_JNI
