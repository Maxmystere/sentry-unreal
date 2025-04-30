// Copyright (c) 2024 Sentry. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "SentrySymbolUploadCommandlet.generated.h"

/**
 * 
 */
UCLASS()
class SENTRYEDITOR_API USentrySymbolUploadCommandlet : public UCommandlet
{
	GENERATED_BODY()

public:
	virtual int32 Main(const FString& Params) override;
};
