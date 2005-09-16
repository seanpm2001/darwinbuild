/*
 * Copyright (c) 2005 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_BSD_LICENSE_HEADER_START@
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 
 * 1.  Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer. 
 * 2.  Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution. 
 * 3.  Neither the name of Apple Computer, Inc. ("Apple") nor the names of
 *     its contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission. 
 * 
 * THIS SOFTWARE IS PROVIDED BY APPLE AND ITS CONTRIBUTORS "AS IS" AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL APPLE OR ITS CONTRIBUTORS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 * @APPLE_BSD_LICENSE_HEADER_END@
 */

#ifndef __cfutils_h__
#define __cfutils_h__

#include <CoreFoundation/CoreFoundation.h>

CFPropertyListRef read_plist(char* path);
char* strdup_cfstr(CFStringRef str);
CFStringRef cfstr(const char* str);
int cfprintf(FILE* file, const char* format, ...);
CFArrayRef dictionaryGetSortedKeys(CFDictionaryRef dictionary);
int writePlist(FILE* f, CFPropertyListRef p, int tabs);
CFArrayRef tokenizeString(CFStringRef str);
CFDictionaryRef mergeDictionaries(CFDictionaryRef dst, CFDictionaryRef src);
void arrayAppendArrayDistinct(CFMutableArrayRef array, CFArrayRef other);

extern CFArrayCallBacks cfArrayCStringCallBacks;
extern CFDictionaryKeyCallBacks cfDictionaryCStringKeyCallBacks;
extern CFDictionaryValueCallBacks cfDictionaryCStringValueCallBacks;

#endif // __cfutils_h__
