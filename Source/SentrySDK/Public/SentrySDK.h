// Copyright (c) 2022 Sentry. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

class USentrySettings;

class FSentrySDKModule : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	/**
	 * Singleton-like access to this module's interface. This is just for convenience!
	 * Beware of calling this during the shutdown phase, though. Your module might be already unloaded.
	 *
	 * @return Returns singleton instance, loading the module on demand if needed.
	 */
	static inline FSentrySDKModule& Get();

	/**
	 * Check if this module is loaded and ready. It is only valid to call Get() if IsAvailable() returns true.
	 *
	 * @return True if the module is loaded and ready to use.
	 */
	static inline bool IsAvailable();

	/** Getter for internal settings object to support runtime configuration changes. */
	USentrySettings* GetSettings() const;

	static const FName ModuleName;

private:
	USentrySettings* SentrySettings = nullptr;
};