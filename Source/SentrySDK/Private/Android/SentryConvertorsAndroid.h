// Copyright (c) 2022 Sentry. All Rights Reserved.

#pragma once

#include "Android/AndroidJNI.h"

class SentryConvertorsAndroid
{
public:
	/** Conversions to native Java types */
	static jstring StringToNative(FString string);

	/** Conversions from native Java types */
	static FString StringToUnreal(jstring string);
};