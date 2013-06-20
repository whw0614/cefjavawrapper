// Copyright (c) 2010 Lime Wire, LLC. All rights reserved. Use of this source
// Copyright (c) 2013 Agitech http://agitech.net, LLC. All rights reserved. Use of this source
// Contributor Nassim MOUALEK nmoualek@agitech.net, agitechs@gmail.com
// code is governed by a BSD-style license that can be found in the LICENSE file.


#ifndef _CEFBROWSER_MAC_H
#define _CEFBROWSER_MAC_H

#include <cef.h>
#include <jni.h>

void GetWindowInfo(JNIEnv *env, jobject obj, int width, int height,
                   CefWindowInfo& windowInfo);

void SetWindowPos(CefWindowHandle window, int width, int height);

void SetWindowText(CefWindowHandle window, const CefString& title);

#endif // _CEFBROWSER_MAC_H


