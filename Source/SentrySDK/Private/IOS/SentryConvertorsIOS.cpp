// Copyright (c) 2022 Sentry. All Rights Reserved.

#include "SentryConvertorsIOS.h"
#include "SentryScope.h"
#include "SentryScopeIOS.h"

SentryLevel SentryConvertorsIOS::SentryLevelToNative(ESentryLevel level)
{
	SentryLevel nativeLevel;

	switch (level)
	{
	case ESentryLevel::Debug:
		nativeLevel = kSentryLevelDebug;
		break;
	case ESentryLevel::Info:
		nativeLevel = kSentryLevelInfo;
		break;
	case ESentryLevel::Warning:
		nativeLevel = kSentryLevelWarning;
		break;
	case ESentryLevel::Error:
		nativeLevel = kSentryLevelError;
		break;
	case ESentryLevel::Fatal:
		nativeLevel = kSentryLevelFatal;
		break;
	default:
		NSLog(@"Unknown sentry level value used!");
	}

	return nativeLevel;
}

USentryScope* SentryConvertorsIOS::SentryScopeToUnreal(TSharedPtr<SentryScopeIOS> scope)
{
	USentryScope* unrealScope = NewObject<USentryScope>();
	unrealScope->InitWithNativeImplIOS(scope);
	return unrealScope;
}