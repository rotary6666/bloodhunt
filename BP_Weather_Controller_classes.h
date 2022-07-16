// BlueprintGeneratedClass BP_Weather_Controller.BP_Weather_Controller_C
// Size: 0x460 (Inherited: 0x278)
struct ABP_Weather_Controller_C : ATigerWeatherController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UExponentialHeightFogComponent* YellowSky; // 0x280(0x08)
	struct UExponentialHeightFogComponent* RedSky; // 0x288(0x08)
	struct UStaticMeshComponent* sky; // 0x290(0x08)
	struct UExponentialHeightFogComponent* HeavyRain; // 0x298(0x08)
	struct UExponentialHeightFogComponent* Default; // 0x2a0(0x08)
	struct UExponentialHeightFogComponent* Thick; // 0x2a8(0x08)
	struct USceneCaptureComponent2D* TopDownRenderCamera; // 0x2b0(0x08)
	struct UBillboardComponent* Billboard; // 0x2b8(0x08)
	struct UChildActorComponent* Wind Directional Source; // 0x2c0(0x08)
	float Wind Strength; // 0x2c8(0x04)
	float Rain Rate; // 0x2cc(0x04)
	float Puddles Amount; // 0x2d0(0x04)
	int32_t Player Index; // 0x2d4(0x04)
	int32_t RandomWeatherInteger; // 0x2d8(0x04)
	bool bHasSyncedWeather; // 0x2dc(0x01)
	char pad_2DD[0x3]; // 0x2dd(0x03)
	struct UNiagaraComponent* RainSystem; // 0x2e0(0x08)
	bool UseNiagaraRain; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct FSoftObjectPath NiagaraRainPath; // 0x2f0(0x18)
	struct UNiagaraSystem* CachedRainEffect; // 0x308(0x08)
	float No Rain; // 0x310(0x04)
	float Heavy Rain Chance; // 0x314(0x04)
	float Light Rain Chance; // 0x318(0x04)
	float Lightning Chance; // 0x31c(0x04)
	float Foggy Chance; // 0x320(0x04)
	float Puddles Rings Intensity; // 0x324(0x04)
	float AI Sight Modifier; // 0x328(0x04)
	float Puddles Wind Tiling; // 0x32c(0x04)
	bool UseCustomSettings; // 0x330(0x01)
	char pad_331[0x3]; // 0x331(0x03)
	float Wind Speed; // 0x334(0x04)
	float Snowfall Rate; // 0x338(0x04)
	float Wetness Amount; // 0x33c(0x04)
	struct UNiagaraComponent* SnowSystem; // 0x340(0x08)
	struct FSoftObjectPath NiagaraSnowPath; // 0x348(0x18)
	struct UNiagaraSystem* CachedSnowEffect; // 0x360(0x08)
	struct TSoftObjectPtr<APostProcessVolume> GlobalPPV Reference; // 0x368(0x28)
	float CurrentTime; // 0x390(0x04)
	struct FRandomStream LightningSeed; // 0x394(0x08)
	char pad_39C[0x4]; // 0x39c(0x04)
	struct FTimerHandle LightningTimerHandle; // 0x3a0(0x08)
	bool EnableLightning; // 0x3a8(0x01)
	char pad_3A9[0x3]; // 0x3a9(0x03)
	float LightningIntensity; // 0x3ac(0x04)
	struct TSoftObjectPtr<ASkyLight> SkyLightReference; // 0x3b0(0x28)
	float DefaultSkyLightIntensity; // 0x3d8(0x04)
	struct FLinearColor DefaultSkyLightColor; // 0x3dc(0x10)
	int32_t NrStrikes; // 0x3ec(0x04)
	float LifeTime; // 0x3f0(0x04)
	char pad_3F4[0x4]; // 0x3f4(0x04)
	struct TArray<struct TSoftObjectPtr<UTextureCube>> SkyTextures; // 0x3f8(0x10)
	struct FPostProcessOverrides PostProcessSettings; // 0x408(0x58)

	void SetFogVariation(struct UDA_WeatherScenario_C* InWeatherScenario); // Function BP_Weather_Controller.BP_Weather_Controller_C.SetFogVariation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetPostProcessSettings(struct UDA_WeatherScenario_C* InWeatherScenario); // Function BP_Weather_Controller.BP_Weather_Controller_C.SetPostProcessSettings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void GetCameraLocation(struct FVector& OutVector); // Function BP_Weather_Controller.BP_Weather_Controller_C.GetCameraLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x18b4070
	void UpdateOverrideSky(struct TArray<struct UObject*>& InLoadedObjects); // Function BP_Weather_Controller.BP_Weather_Controller_C.UpdateOverrideSky // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetWeatherAudioRTPCs(); // Function BP_Weather_Controller.BP_Weather_Controller_C.SetWeatherAudioRTPCs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void LightningWave(float InTime, float InLightningLifetime, float InNrLightningStrikes, float& OutWave); // Function BP_Weather_Controller.BP_Weather_Controller_C.LightningWave // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Update Prague Sky(struct TArray<struct UObject*>& InLoadedObjects); // Function BP_Weather_Controller.BP_Weather_Controller_C.Update Prague Sky // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void UpdateGlobalPPV(); // Function BP_Weather_Controller.BP_Weather_Controller_C.UpdateGlobalPPV // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void UpdateNiagaraSystem(struct UNiagaraComponent* InSystem); // Function BP_Weather_Controller.BP_Weather_Controller_C.UpdateNiagaraSystem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void UpdateAllActors(); // Function BP_Weather_Controller.BP_Weather_Controller_C.UpdateAllActors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetWeatherScenarioParameters(struct UDA_WeatherScenario_C* WeatherScenario); // Function BP_Weather_Controller.BP_Weather_Controller_C.SetWeatherScenarioParameters // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetWeatherScenario(struct UTigerWeatherScenarioData* WeatherScenario); // Function BP_Weather_Controller.BP_Weather_Controller_C.SetWeatherScenario // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetServerWeather(int32_t WeatherOverride); // Function BP_Weather_Controller.BP_Weather_Controller_C.SetServerWeather // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void UpdateNiagaraWeatherParameters(float Delta); // Function BP_Weather_Controller.BP_Weather_Controller_C.UpdateNiagaraWeatherParameters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void UpdateNiagaraCameraAndNiagaraParticles(float Delta); // Function BP_Weather_Controller.BP_Weather_Controller_C.UpdateNiagaraCameraAndNiagaraParticles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetNPCSightModifier(float Modifier); // Function BP_Weather_Controller.BP_Weather_Controller_C.SetNPCSightModifier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetWeatherParameters(struct UDA_WeatherScenario_C* WeatherScenario); // Function BP_Weather_Controller.BP_Weather_Controller_C.SetWeatherParameters // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void UserConstructionScript(); // Function BP_Weather_Controller.BP_Weather_Controller_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnLoaded_DC0B365449CA096251058EB8A8F31B9F(struct UObject* Loaded); // Function BP_Weather_Controller.BP_Weather_Controller_C.OnLoaded_DC0B365449CA096251058EB8A8F31B9F // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnLoaded_4BFA290045938F3D795460979602E7CF(struct UObject* Loaded); // Function BP_Weather_Controller.BP_Weather_Controller_C.OnLoaded_4BFA290045938F3D795460979602E7CF // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnLoaded_20562D87404E74DCF4D9B889FFC5C3D6(struct UObject* Loaded); // Function BP_Weather_Controller.BP_Weather_Controller_C.OnLoaded_20562D87404E74DCF4D9B889FFC5C3D6 // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnLoaded_7559EC034D4951730F8F999663014852(struct UObject* Loaded); // Function BP_Weather_Controller.BP_Weather_Controller_C.OnLoaded_7559EC034D4951730F8F999663014852 // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ReceiveBeginPlay(); // Function BP_Weather_Controller.BP_Weather_Controller_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void ReceiveTick(float DeltaSeconds); // Function BP_Weather_Controller.BP_Weather_Controller_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void HandleOnWeatherSenarioChangedEvent(struct UTigerWeatherScenarioData* WeatherScenarioData); // Function BP_Weather_Controller.BP_Weather_Controller_C.HandleOnWeatherSenarioChangedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void TigerSetFogDensity(float FogDensity); // Function BP_Weather_Controller.BP_Weather_Controller_C.TigerSetFogDensity // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Lightning(); // Function BP_Weather_Controller.BP_Weather_Controller_C.Lightning // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ExecuteUbergraph_BP_Weather_Controller(int32_t EntryPoint); // Function BP_Weather_Controller.BP_Weather_Controller_C.ExecuteUbergraph_BP_Weather_Controller // (Final|UbergraphFunction|HasDefaults) // @ game+0x18b4070
};

