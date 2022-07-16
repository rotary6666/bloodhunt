// Class Shark.SharkLocalDeveloperSettings
// Size: 0x38 (Inherited: 0x38)
struct USharkLocalDeveloperSettings : UDeveloperSettings {
};

// Class Shark.SharkA2SProtocolHandler
// Size: 0xc8 (Inherited: 0x30)
struct USharkA2SProtocolHandler : UGameInstanceSubsystem {
	char pad_30[0x98]; // 0x30(0x98)
};

// Class Shark.SharkLoginHelperLibrary
// Size: 0x28 (Inherited: 0x28)
struct USharkLoginHelperLibrary : UBlueprintFunctionLibrary {

	struct FString GetErrorMessage(struct FSharkLoginResult& InLoginResult); // Function Shark.SharkLoginHelperLibrary.GetErrorMessage // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x33fa4a0
};

// Class Shark.SharkAccounts
// Size: 0x90 (Inherited: 0x28)
struct USharkAccounts : UObject {
	char pad_28[0x60]; // 0x28(0x60)
	struct UShAccountSettings* Settings; // 0x88(0x08)

	void SharkUsernameRegisteredQueryCallback__DelegateSignature(bool bInSuccess, bool bIsAvailable, bool bIsProfanity, struct FString InUsername); // DelegateFunction Shark.SharkAccounts.SharkUsernameRegisteredQueryCallback__DelegateSignature // (Public|Delegate) // @ game+0x18b4070
	void SharkLoginCallback__DelegateSignature(struct FSharkLoginResult InResult); // DelegateFunction Shark.SharkAccounts.SharkLoginCallback__DelegateSignature // (Public|Delegate) // @ game+0x18b4070
	void SharkEmailRegisteredQueryCallback__DelegateSignature(bool bInSuccess, bool bInRegistered, struct FString InEmail); // DelegateFunction Shark.SharkAccounts.SharkEmailRegisteredQueryCallback__DelegateSignature // (Public|Delegate) // @ game+0x18b4070
	void SharkAccountActionCallback__DelegateSignature(struct FSharkAccountActionResult InResult); // DelegateFunction Shark.SharkAccounts.SharkAccountActionCallback__DelegateSignature // (Public|Delegate) // @ game+0x18b4070
	void SendRegistrationVerificationCode(struct FString InEmail, struct FDelegate InCallback); // Function Shark.SharkAccounts.SendRegistrationVerificationCode // (Final|Native|Public|BlueprintCallable) // @ game+0x33fb100
	void RegisterAndLogin(struct FSharkAccountRegistrationData InRegistrationData, struct FDelegate InCallback); // Function Shark.SharkAccounts.RegisterAndLogin // (Final|Native|Public|BlueprintCallable) // @ game+0x33faec0
	void QueryUsernameRegisterStatus(struct FString InUsername, struct FDelegate InCallback); // Function Shark.SharkAccounts.QueryUsernameRegisterStatus // (Final|Native|Public|BlueprintCallable) // @ game+0x33fad70
	void QueryEmailRegisterStatus(struct FString InEmail, struct FDelegate InCallback); // Function Shark.SharkAccounts.QueryEmailRegisterStatus // (Final|Native|Public|BlueprintCallable) // @ game+0x33fac20
	void PlatformLogin(struct FDelegate InCallback, bool bIsSharkmobAccountLoginEnabled); // Function Shark.SharkAccounts.PlatformLogin // (Final|Native|Public|BlueprintCallable) // @ game+0x33fab30
	void Login(struct FString InEmail, struct FString InPassword, struct FDelegate InCallback); // Function Shark.SharkAccounts.Login // (Final|Native|Public|BlueprintCallable) // @ game+0x33fa960
};

// Class Shark.ShAccountSettings
// Size: 0x60 (Inherited: 0x38)
struct UShAccountSettings : UDeveloperSettings {
	bool LogEnabled; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString SandboxUrl; // 0x40(0x10)
	struct FString ProductionUrl; // 0x50(0x10)
};

// Class Shark.SharkBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct USharkBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void UnregisterApplicationHasReactivatedForSelf(struct UObject* InSelf); // Function Shark.SharkBlueprintFunctionLibrary.UnregisterApplicationHasReactivatedForSelf // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x33fbf30
	void SetCustomPrimitiveDataVector4(struct UPrimitiveComponent* PrimitiveComponent, enum class ESharkCustomPrimitiveVector4DataName CustomDataName, struct FVector4 Value, bool bDoRuntimeUpdate); // Function Shark.SharkBlueprintFunctionLibrary.SetCustomPrimitiveDataVector4 // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x33fbde0
	void SetCustomPrimitiveDataVector3(struct UPrimitiveComponent* PrimitiveComponent, enum class ESharkCustomPrimitiveVector3DataName CustomDataName, struct FVector Value, bool bDoRuntimeUpdate); // Function Shark.SharkBlueprintFunctionLibrary.SetCustomPrimitiveDataVector3 // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x33fbc80
	void SetCustomPrimitiveDataVector2(struct UPrimitiveComponent* PrimitiveComponent, enum class ESharkCustomPrimitiveVector2DataName CustomDataName, struct FVector2D Value, bool bDoRuntimeUpdate); // Function Shark.SharkBlueprintFunctionLibrary.SetCustomPrimitiveDataVector2 // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x33fbb40
	void SetCustomPrimitiveDataFloat(struct UPrimitiveComponent* PrimitiveComponent, enum class ESharkCustomPrimitiveFloatDataName CustomDataName, float Value, bool bDoRuntimeUpdate); // Function Shark.SharkBlueprintFunctionLibrary.SetCustomPrimitiveDataFloat // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x33fb9f0
	void SetCastDynamicShadows(struct UPrimitiveComponent* InPrimitiveComponent, bool InValue); // Function Shark.SharkBlueprintFunctionLibrary.SetCastDynamicShadows // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x33fb930
	void RegisterApplicationHasReactivated(struct FDelegate InDelegate); // Function Shark.SharkBlueprintFunctionLibrary.RegisterApplicationHasReactivated // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x33fb8a0
	void OnAssetsLoaded__DelegateSignature(struct TArray<struct UObject*>& InLoadedObjects); // DelegateFunction Shark.SharkBlueprintFunctionLibrary.OnAssetsLoaded__DelegateSignature // (Public|Delegate|HasOutParms) // @ game+0x18b4070
	void LoadMultipleObjectsAsync(struct TArray<struct TSoftObjectPtr<UObject>>& SoftObjects, struct FDelegate OnLoaded); // Function Shark.SharkBlueprintFunctionLibrary.LoadMultipleObjectsAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x33fb770
	enum class ESharkPlatformType GetPlatformType(); // Function Shark.SharkBlueprintFunctionLibrary.GetPlatformType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x947b30
	int32_t GetNumMips(struct UTexture2D* InTexture); // Function Shark.SharkBlueprintFunctionLibrary.GetNumMips // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x33fb6e0
	void ApplicationLifetimeDelegate__DelegateSignature(); // DelegateFunction Shark.SharkBlueprintFunctionLibrary.ApplicationLifetimeDelegate__DelegateSignature // (Public|Delegate) // @ game+0x18b4070
};

// Class Shark.ShOnlineServerSettings
// Size: 0x90 (Inherited: 0x38)
struct UShOnlineServerSettings : UDeveloperSettings {
	struct FString ServerSecretDev; // 0x38(0x10)
	struct FString ServerSecretUat; // 0x48(0x10)
	struct FString ServerSecretProd; // 0x58(0x10)
	struct FString ServerSecretLocal; // 0x68(0x10)
	struct FString ServerSecretTracker; // 0x78(0x10)
	uint32_t SeasonConfigId; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class Shark.SharkOnlineSettings
// Size: 0x48 (Inherited: 0x38)
struct USharkOnlineSettings : UDeveloperSettings {
	float MaximumRetryDelaySeconds; // 0x38(0x04)
	int32_t MinimumAccountCreationAge; // 0x3c(0x04)
	int32_t PartyMaintenancePollIntervalSeconds; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Shark.SharkPlatformSettings
// Size: 0x40 (Inherited: 0x38)
struct USharkPlatformSettings : USharkLocalDeveloperSettings {
	enum class ESharkPlatformType PlatformType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Shark.SharkRenderingSettings
// Size: 0x1f8 (Inherited: 0x38)
struct USharkRenderingSettings : UDeveloperSettings {
	int32_t CustomPrimitiveFloatDataNameMapping[0x3a]; // 0x38(0xe8)
	int32_t CustomPrimitiveVector2DataNameMapping[0x13]; // 0x120(0x4c)
	int32_t CustomPrimitiveVector3DataNameMapping[0x19]; // 0x16c(0x64)
	int32_t CustomPrimitiveVector4DataNameMapping[0x9]; // 0x1d0(0x24)
	char pad_1F4[0x4]; // 0x1f4(0x04)
};

// Class Shark.SharkRoundRobinSettings
// Size: 0x50 (Inherited: 0x38)
struct USharkRoundRobinSettings : UDeveloperSettings {
	bool bEnabled; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct FSharkRoundRobinClassSettings> GroupSettings; // 0x40(0x10)
};

// Class Shark.SharkRoundRobinSubsystem
// Size: 0xc0 (Inherited: 0x30)
struct USharkRoundRobinSubsystem : UWorldSubsystem {
	char pad_30[0x90]; // 0x30(0x90)
};

// Class Shark.SharkServerMetrics
// Size: 0xe0 (Inherited: 0x30)
struct USharkServerMetrics : UGameInstanceSubsystem {
	char pad_30[0xb0]; // 0x30(0xb0)
};

// Class Shark.SharkTelemetry
// Size: 0x110 (Inherited: 0x28)
struct USharkTelemetry : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct FSharkTelemetrySettings TelemetryApplicationSettings; // 0x38(0x50)
	char pad_88[0x18]; // 0x88(0x18)
	struct TArray<struct FSharkTelemtryEventData> BufferedEvents; // 0xa0(0x10)
	char pad_B0[0x50]; // 0xb0(0x50)
	struct UGameInstance* GameInstance; // 0x100(0x08)
	char pad_108[0x8]; // 0x108(0x08)
};

// Class Shark.ShUserSecrets
// Size: 0x28 (Inherited: 0x28)
struct UShUserSecrets : UObject {
};

