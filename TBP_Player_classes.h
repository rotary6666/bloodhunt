// BlueprintGeneratedClass TBP_Player.TBP_Player_C
// Size: 0x14ec (Inherited: 0x1000)
struct ATBP_Player_C : ATigerPlayer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1000(0x08)
	struct USpringArmComponent* ListenerSpringArm; // 0x1008(0x08)
	struct USceneComponent* ListenerParent; // 0x1010(0x08)
	struct UAkComponent* TakeDamageAkComp; // 0x1018(0x08)
	struct UTBP_PlayerVFXComponent_C* TBP_PlayerVFXComponent; // 0x1020(0x08)
	struct UPostProcessComponent* RainOnCameraPostProcess; // 0x1028(0x08)
	struct USceneComponent* ListenerComponent; // 0x1030(0x08)
	struct UPostProcessComponent* DeathPostProcess; // 0x1038(0x08)
	struct UParticleSystemComponent* PS_VFX_GasDebuff; // 0x1040(0x08)
	struct UStaticMeshComponent* OutlineBillboard; // 0x1048(0x08)
	struct UTBP_PlayerTraversalStateMachine_C* PlayerTraversalStateMachine; // 0x1050(0x08)
	struct UTBP_BuffPostProcessHandler_C* BuffPostProcessHandler; // 0x1058(0x08)
	struct UPostProcessComponent* ScopePostProcess; // 0x1060(0x08)
	struct UPostProcessComponent* TraversalZoomBlurPostProcess; // 0x1068(0x08)
	struct UParticleSystemComponent* TraversalSmokeTrailFeet; // 0x1070(0x08)
	struct UParticleSystemComponent* TraversalSmokeTrail; // 0x1078(0x08)
	struct USphereComponent* AudioTrigger; // 0x1080(0x08)
	struct USkeletalMeshComponent* SecondaryWeapon; // 0x1088(0x08)
	struct UPointLightComponent* SecondaryMuzzleLight; // 0x1090(0x08)
	struct UArrowComponent* SecondaryProjectileSpawnLocator; // 0x1098(0x08)
	struct UArrowComponent* SecondaryMuzzleLocator; // 0x10a0(0x08)
	struct UPostProcessComponent* RedGasPostProcess; // 0x10a8(0x08)
	struct UPointLightComponent* HairLight; // 0x10b0(0x08)
	struct UTigerHSensesTargetComponent* TigerHSensesTarget; // 0x10b8(0x08)
	struct UPostProcessComponent* FeedingPostProcess; // 0x10c0(0x08)
	struct UTBP_FeedingComponent_C* TBP_FeedingComponent; // 0x10c8(0x08)
	struct USpotLightComponent* FeedingLight; // 0x10d0(0x08)
	struct UTBP_CharacterCustomizationComp_C* CharacterCustomization; // 0x10d8(0x08)
	struct USpotLightComponent* Fill Light; // 0x10e0(0x08)
	struct USpotLightComponent* Rim Light; // 0x10e8(0x08)
	struct USpotLightComponent* Key Light; // 0x10f0(0x08)
	struct UVectorFieldComponent* VectorField; // 0x10f8(0x08)
	struct UPointLightComponent* MuzzleLight; // 0x1100(0x08)
	struct UPostProcessComponent* DownedPostProcess; // 0x1108(0x08)
	struct UArrowComponent* ProjectileSpawnRoot; // 0x1110(0x08)
	struct UWidgetComponent* HealthBarWidget; // 0x1118(0x08)
	struct UArrowComponent* ProjectileSpawnLocator; // 0x1120(0x08)
	struct UBoxComponent* InteractionVolume; // 0x1128(0x08)
	struct UPostProcessComponent* LowHealthPostProcess; // 0x1130(0x08)
	struct UPostProcessComponent* HeightenedSensesPostProcess; // 0x1138(0x08)
	struct UBoxComponent* FullscreenEffectsVolume; // 0x1140(0x08)
	struct UPawnNoiseEmitterComponent* PawnNoiseEmitter; // 0x1148(0x08)
	struct UArrowComponent* MuzzleLocator; // 0x1150(0x08)
	struct UBoxComponent* TriggerVolume; // 0x1158(0x08)
	struct USkeletalMeshComponent* Weapon; // 0x1160(0x08)
	float GasDebuffBurnTimeline_NewTrack_0_84279FD2437A84CAF9924F81F64E1CED; // 0x1168(0x04)
	enum class ETimelineDirection GasDebuffBurnTimeline__Direction_84279FD2437A84CAF9924F81F64E1CED; // 0x116c(0x01)
	char pad_116D[0x3]; // 0x116d(0x03)
	struct UTimelineComponent* GasDebuffBurnTimeline; // 0x1170(0x08)
	float GasDebuffTimeline_NewTrack_0_1887B31C4D0B0FDB42B539B4308CF7BD; // 0x1178(0x04)
	enum class ETimelineDirection GasDebuffTimeline__Direction_1887B31C4D0B0FDB42B539B4308CF7BD; // 0x117c(0x01)
	char pad_117D[0x3]; // 0x117d(0x03)
	struct UTimelineComponent* GasDebuffTimeline; // 0x1180(0x08)
	float OutlineTimeline_Visibility_EAAB304D4327221D27448EAC650058F1; // 0x1188(0x04)
	enum class ETimelineDirection OutlineTimeline__Direction_EAAB304D4327221D27448EAC650058F1; // 0x118c(0x01)
	char pad_118D[0x3]; // 0x118d(0x03)
	struct UTimelineComponent* OutlineTimeline; // 0x1190(0x08)
	float MuzzleFlashLight2Timeline_Intensity_CEEB9A454434A38325252583A6A3B6F4; // 0x1198(0x04)
	enum class ETimelineDirection MuzzleFlashLight2Timeline__Direction_CEEB9A454434A38325252583A6A3B6F4; // 0x119c(0x01)
	char pad_119D[0x3]; // 0x119d(0x03)
	struct UTimelineComponent* MuzzleFlashLight2Timeline; // 0x11a0(0x08)
	struct FVector ScopeTimeline_FocusPosition_9CD21C2B43ADAB5B313DF2BE583E31DA; // 0x11a8(0x0c)
	float ScopeTimeline_IsScoped_9CD21C2B43ADAB5B313DF2BE583E31DA; // 0x11b4(0x04)
	enum class ETimelineDirection ScopeTimeline__Direction_9CD21C2B43ADAB5B313DF2BE583E31DA; // 0x11b8(0x01)
	char pad_11B9[0x7]; // 0x11b9(0x07)
	struct UTimelineComponent* ScopeTimeline; // 0x11c0(0x08)
	float MuzzleFlashLightTimeline_Intensity_051DB23B4BC6020389CC78B6EF022930; // 0x11c8(0x04)
	enum class ETimelineDirection MuzzleFlashLightTimeline__Direction_051DB23B4BC6020389CC78B6EF022930; // 0x11cc(0x01)
	char pad_11CD[0x3]; // 0x11cd(0x03)
	struct UTimelineComponent* MuzzleFlashLightTimeline; // 0x11d0(0x08)
	enum class ETimelineDirection Check_Dodge__Direction_2340BDC0451DB765FEDE2CB7146A5511; // 0x11d8(0x01)
	char pad_11D9[0x7]; // 0x11d9(0x07)
	struct UTimelineComponent* Check Dodge; // 0x11e0(0x08)
	float Timeline_Diablerize_Short_NewTrack_0_6970392F467F11B38587869BF53D9986; // 0x11e8(0x04)
	float Timeline_Diablerize_Short_Transition_6970392F467F11B38587869BF53D9986; // 0x11ec(0x04)
	enum class ETimelineDirection Timeline_Diablerize_Short__Direction_6970392F467F11B38587869BF53D9986; // 0x11f0(0x01)
	char pad_11F1[0x7]; // 0x11f1(0x07)
	struct UTimelineComponent* Timeline_Diablerize_Short; // 0x11f8(0x08)
	enum class ETimelineDirection Timeline_13__Direction_8F0808F345D8234F85595F9450BAE209; // 0x1200(0x01)
	char pad_1201[0x7]; // 0x1201(0x07)
	struct UTimelineComponent* Timeline_14; // 0x1208(0x08)
	float Timeline_8_Opacity_7E2D82864AB41D91CE8753A3A2E4951C; // 0x1210(0x04)
	enum class ETimelineDirection Timeline_8__Direction_7E2D82864AB41D91CE8753A3A2E4951C; // 0x1214(0x01)
	char pad_1215[0x3]; // 0x1215(0x03)
	struct UTimelineComponent* Timeline_9; // 0x1218(0x08)
	float Timeline_7_Zoom_30D72BD24E1509A1AF3FB099FA1C9EB6; // 0x1220(0x04)
	enum class ETimelineDirection Timeline_7__Direction_30D72BD24E1509A1AF3FB099FA1C9EB6; // 0x1224(0x01)
	char pad_1225[0x3]; // 0x1225(0x03)
	struct UTimelineComponent* Timeline_8; // 0x1228(0x08)
	float Timeline_2_RainMultiplier_CECBE516414697453F25FAB3B5FB331C; // 0x1230(0x04)
	enum class ETimelineDirection Timeline_2__Direction_CECBE516414697453F25FAB3B5FB331C; // 0x1234(0x01)
	char pad_1235[0x3]; // 0x1235(0x03)
	struct UTimelineComponent* Timeline_3; // 0x1238(0x08)
	float Timeline_1_Sprint_Strength_2AEA3DD140966E986A8A2A830078C114; // 0x1240(0x04)
	enum class ETimelineDirection Timeline_1__Direction_2AEA3DD140966E986A8A2A830078C114; // 0x1244(0x01)
	char pad_1245[0x3]; // 0x1245(0x03)
	struct UTimelineComponent* Timeline_2; // 0x1248(0x08)
	float Timeline_0_FOV_Animation_CF5E7F2B4EE15F828E27CEACA36BC0AB; // 0x1250(0x04)
	float Timeline_0_Sprint_Strength_CF5E7F2B4EE15F828E27CEACA36BC0AB; // 0x1254(0x04)
	enum class ETimelineDirection Timeline_0__Direction_CF5E7F2B4EE15F828E27CEACA36BC0AB; // 0x1258(0x01)
	char pad_1259[0x7]; // 0x1259(0x07)
	struct UTimelineComponent* Timeline_1; // 0x1260(0x08)
	float Timeline_4_Zoom_1CA12BEA4ECFEA2FB018C7BE4DE80E72; // 0x1268(0x04)
	enum class ETimelineDirection Timeline_4__Direction_1CA12BEA4ECFEA2FB018C7BE4DE80E72; // 0x126c(0x01)
	char pad_126D[0x3]; // 0x126d(0x03)
	struct UTimelineComponent* Timeline_5; // 0x1270(0x08)
	float Timeline_3_Opacity_B82857664678EB85DC4CA0A80BD4542E; // 0x1278(0x04)
	enum class ETimelineDirection Timeline_3__Direction_B82857664678EB85DC4CA0A80BD4542E; // 0x127c(0x01)
	char pad_127D[0x3]; // 0x127d(0x03)
	struct UTimelineComponent* Timeline_4; // 0x1280(0x08)
	float Inside; // 0x1288(0x04)
	int32_t FeedingAudioAkEventID; // 0x128c(0x04)
	float DownedBlendWeight; // 0x1290(0x04)
	float InAssaultedZoneBlendWeight; // 0x1294(0x04)
	float NearAssaultedZoneBlendWeight; // 0x1298(0x04)
	char pad_129C[0x4]; // 0x129c(0x04)
	struct UAudioComponent* HeightenedSensesSoundLoop; // 0x12a0(0x08)
	float OriginalRainRate; // 0x12a8(0x04)
	char pad_12AC[0x4]; // 0x12ac(0x04)
	struct FTimerHandle HSensesDelayHandle; // 0x12b0(0x08)
	struct TArray<struct USkeletalMeshComponent*> SkeletalMeshDuplicates; // 0x12b8(0x10)
	int32_t CurrentTrailLoop; // 0x12c8(0x04)
	float AnimFloat1; // 0x12cc(0x04)
	float AnimFloat2; // 0x12d0(0x04)
	char pad_12D4[0x4]; // 0x12d4(0x04)
	struct USkeletalMeshComponent* HeartMesh_Smoke; // 0x12d8(0x08)
	struct ATBP_AshPile_C* AshFxActor; // 0x12e0(0x08)
	bool DiablerizeFinished; // 0x12e8(0x01)
	bool IsBeingDiablerized; // 0x12e9(0x01)
	enum class ETigerPlayerLifeStatus LifeStatus; // 0x12ea(0x01)
	char pad_12EB[0x1]; // 0x12eb(0x01)
	struct FVector PreviousCameraLocation; // 0x12ec(0x0c)
	struct FVector Previous; // 0x12f8(0x0c)
	char pad_1304[0x4]; // 0x1304(0x04)
	struct UParticleSystemComponent* ScoutedParticles; // 0x1308(0x08)
	float BloodVisibility; // 0x1310(0x04)
	char pad_1314[0x4]; // 0x1314(0x04)
	struct ATigerNPC* CurrentNPCBeingFedOn; // 0x1318(0x08)
	bool bWasAimGliding; // 0x1320(0x01)
	char pad_1321[0x3]; // 0x1321(0x03)
	int32_t FeedingBloodIndex; // 0x1324(0x04)
	struct TArray<float> FeedingBloodVisibility; // 0x1328(0x10)
	float CurrentFeedingVisibility; // 0x1338(0x04)
	char pad_133C[0x4]; // 0x133c(0x04)
	struct FMulticastInlineDelegate SpeedFullscreenEffectEventDispatch; // 0x1340(0x10)
	struct UAkAudioEvent* ProjectileCloseFlyby; // 0x1350(0x08)
	bool Was Previously Inside Holy Incense; // 0x1358(0x01)
	char pad_1359[0x7]; // 0x1359(0x07)
	struct FTimerHandle TraversalMostRecentTimer; // 0x1360(0x08)
	int32_t WallGrindAkEventID; // 0x1368(0x04)
	int32_t DiablerizeVictimAkEventID; // 0x136c(0x04)
	int32_t DiablerizeAkEventID; // 0x1370(0x04)
	int32_t ReviveAkEventID; // 0x1374(0x04)
	int32_t SlideAkEventID; // 0x1378(0x04)
	struct FVector PositionLastFrame; // 0x137c(0x0c)
	int32_t ShieldShaderCount; // 0x1388(0x04)
	char pad_138C[0x4]; // 0x138c(0x04)
	struct TMap<enum class EPhysicalSurface, struct FName> SurfaceToAudioName; // 0x1390(0x50)
	float FeedingProgress; // 0x13e0(0x04)
	char pad_13E4[0x4]; // 0x13e4(0x04)
	struct UNiagaraSystem* CashedDownedParticle; // 0x13e8(0x08)
	struct FSoftObjectPath NiagaraDownedPath; // 0x13f0(0x18)
	struct UNiagaraComponent* DownedNiagara; // 0x1408(0x08)
	struct UNiagaraComponent* DownedNiagara2; // 0x1410(0x08)
	int32_t FeedingLoopAkEventID; // 0x1418(0x04)
	bool ExposePlayerInHeightenedSenses; // 0x141c(0x01)
	bool IsInsideHolySmoke; // 0x141d(0x01)
	char pad_141E[0x2]; // 0x141e(0x02)
	float DistanceToHolyIncenseVolume; // 0x1420(0x04)
	bool ShouldUpdateListenerPosition; // 0x1424(0x01)
	char pad_1425[0x3]; // 0x1425(0x03)
	struct FVector2D InterpolatedDirectionToRedGasEdge; // 0x1428(0x08)
	bool bEnableHealthBars; // 0x1430(0x01)
	char pad_1431[0x3]; // 0x1431(0x03)
	struct FVector TakeDamageLocation; // 0x1434(0x0c)
	float FeedingFadeOutTime; // 0x1440(0x04)
	struct FVector ListenerOffset; // 0x1444(0x0c)
	struct FVector Intersection; // 0x1450(0x0c)
	float RedGasPostProcessMaxFadeDistance; // 0x145c(0x04)
	bool bWasScopedIn; // 0x1460(0x01)
	char pad_1461[0x7]; // 0x1461(0x07)
	struct UParticleSystem* FleshOfMarbleOverrideHitEffect; // 0x1468(0x08)
	struct TMap<enum class ENUM_RangedWeaponCategories, struct FName> WeaponTypeToAudioName; // 0x1470(0x50)
	bool MotionBlurEnabled; // 0x14c0(0x01)
	char pad_14C1[0x7]; // 0x14c1(0x07)
	struct TArray<struct UPostProcessComponent*> PostProcessesEnabledByDefault; // 0x14c8(0x10)
	bool bPostProcessesEnabled; // 0x14d8(0x01)
	bool bIsWallGrinding; // 0x14d9(0x01)
	char pad_14DA[0x2]; // 0x14da(0x02)
	struct FName CurrentPhysMaterial; // 0x14dc(0x08)
	struct FName PhysMaterialSet; // 0x14e4(0x08)

	void GetWeapon(struct USkeletalMeshComponent*& OutWeapon, struct USkeletalMeshComponent*& OutSecondWeapon); // Function TBP_Player.TBP_Player_C.GetWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x18b4070
	void UpdateMaterialSwitchForAudio(); // Function TBP_Player.TBP_Player_C.UpdateMaterialSwitchForAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CheckForSpectator(); // Function TBP_Player.TBP_Player_C.CheckForSpectator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void EnablePostProcesses(); // Function TBP_Player.TBP_Player_C.EnablePostProcesses // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Collect Post Processes Enabled by Default(); // Function TBP_Player.TBP_Player_C.Collect Post Processes Enabled by Default // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void QualityOptionChanged(struct FTigerGraphicsSettings& GraphicsSettings, struct FTigerGraphicsSettingsPS5& GraphicsSettingsPS5); // Function TBP_Player.TBP_Player_C.QualityOptionChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void HandleFeedingStopForAudio(); // Function TBP_Player.TBP_Player_C.HandleFeedingStopForAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Handle Feeding Start for Audio(); // Function TBP_Player.TBP_Player_C.Handle Feeding Start for Audio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetShieldShaderParameters(); // Function TBP_Player.TBP_Player_C.SetShieldShaderParameters // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void HandleRedGasProximityAudio(); // Function TBP_Player.TBP_Player_C.HandleRedGasProximityAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetupBodyPartPrimitiveData(); // Function TBP_Player.TBP_Player_C.SetupBodyPartPrimitiveData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void PostFlybyAudio(enum class ENUM_RangedWeaponCategories& Key, struct FVector Location, struct UAkAudioEvent* AkEvent); // Function TBP_Player.TBP_Player_C.PostFlybyAudio // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SendArchetypeToMaterial(); // Function TBP_Player.TBP_Player_C.SendArchetypeToMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetCullCustomDepth(bool InValue); // Function TBP_Player.TBP_Player_C.SetCullCustomDepth // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetUpMasqueradeAudio(); // Function TBP_Player.TBP_Player_C.SetUpMasqueradeAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnRedGasPostProcessMaterialLoaded(struct TArray<struct UObject*>& InLoadedObjects); // Function TBP_Player.TBP_Player_C.OnRedGasPostProcessMaterialLoaded // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetupQualityOptions(); // Function TBP_Player.TBP_Player_C.SetupQualityOptions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void InitHealthBars(); // Function TBP_Player.TBP_Player_C.InitHealthBars // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void UpdateSPCPlayerMaterialCollection(); // Function TBP_Player.TBP_Player_C.UpdateSPCPlayerMaterialCollection // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Update Red Gas MPC(); // Function TBP_Player.TBP_Player_C.Update Red Gas MPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void StartRedGasAudio(); // Function TBP_Player.TBP_Player_C.StartRedGasAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void StopRedGasAudio(); // Function TBP_Player.TBP_Player_C.StopRedGasAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	bool CheckShouldUpdateListenerPosition(struct APlayerController* Player Controller); // Function TBP_Player.TBP_Player_C.CheckShouldUpdateListenerPosition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x18b4070
	void EnableCharacterlighting(); // Function TBP_Player.TBP_Player_C.EnableCharacterlighting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetLodOnLocalPlayer(); // Function TBP_Player.TBP_Player_C.SetLodOnLocalPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetAudioListenerOverride(); // Function TBP_Player.TBP_Player_C.SetAudioListenerOverride // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetDamageTakenAudioSwitch(float Value, struct AActor* InInstigator); // Function TBP_Player.TBP_Player_C.SetDamageTakenAudioSwitch // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void StartSlidingAudio(); // Function TBP_Player.TBP_Player_C.StartSlidingAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void DetermineOwnerOfProjectile(struct UObject* Object, struct ATigerProjectile*& AsTiger Projectile); // Function TBP_Player.TBP_Player_C.DetermineOwnerOfProjectile // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetRTPC:AltitudePlayer(); // Function TBP_Player.TBP_Player_C.SetRTPC:AltitudePlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetReverbStateOnExit(struct UObject* Object); // Function TBP_Player.TBP_Player_C.SetReverbStateOnExit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetReverbStateOnEnter(struct UObject* Object); // Function TBP_Player.TBP_Player_C.SetReverbStateOnEnter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void DisableScreenCullSize(); // Function TBP_Player.TBP_Player_C.DisableScreenCullSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void PostLandingAudio(); // Function TBP_Player.TBP_Player_C.PostLandingAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void PlayBeingDiablerizedAudio(); // Function TBP_Player.TBP_Player_C.PlayBeingDiablerizedAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void PlayDiablerizeAudio(); // Function TBP_Player.TBP_Player_C.PlayDiablerizeAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void PlayReviveAudio(); // Function TBP_Player.TBP_Player_C.PlayReviveAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void DisableAllPostProcess(); // Function TBP_Player.TBP_Player_C.DisableAllPostProcess // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void StopCloseToRedGasAudio(); // Function TBP_Player.TBP_Player_C.StopCloseToRedGasAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void StartCloseToRedGasAudio(); // Function TBP_Player.TBP_Player_C.StartCloseToRedGasAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnTraversalPostProcessEnded(); // Function TBP_Player.TBP_Player_C.OnTraversalPostProcessEnded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void UpdateTraversalPostProcess(float Duration, float Strength, struct FVector2D FocusPosition); // Function TBP_Player.TBP_Player_C.UpdateTraversalPostProcess // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	float GetDiablerizeEffectStartTime(); // Function TBP_Player.TBP_Player_C.GetDiablerizeEffectStartTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x18b4070
	void DeactivateHeavyChargeFX(); // Function TBP_Player.TBP_Player_C.DeactivateHeavyChargeFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void UpdateAimGlideCosmetic(); // Function TBP_Player.TBP_Player_C.UpdateAimGlideCosmetic // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void DisableSkeletonSmokeEffects(); // Function TBP_Player.TBP_Player_C.DisableSkeletonSmokeEffects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetupCharacterDuplicates(struct USkeletalMeshComponent* SkeletalMeshOriginal); // Function TBP_Player.TBP_Player_C.SetupCharacterDuplicates // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SwiftStrikeFX(); // Function TBP_Player.TBP_Player_C.SwiftStrikeFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnGroupMemberLifeStatusChanged(enum class ETigerPlayerLifeStatus NewLifeStatus); // Function TBP_Player.TBP_Player_C.OnGroupMemberLifeStatusChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void UpdateInRedGasEffect(float Delta Time); // Function TBP_Player.TBP_Player_C.UpdateInRedGasEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void UpdateDownedFX(float DeltaTime); // Function TBP_Player.TBP_Player_C.UpdateDownedFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void IsLocalClient(bool& Client); // Function TBP_Player.TBP_Player_C.IsLocalClient // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void UpdateFeedingFX(float Delta); // Function TBP_Player.TBP_Player_C.UpdateFeedingFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Set Rain Amount(); // Function TBP_Player.TBP_Player_C.Set Rain Amount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void StunVisualEffect(struct AActor* self2); // Function TBP_Player.TBP_Player_C.StunVisualEffect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void UserConstructionScript(); // Function TBP_Player.TBP_Player_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Timeline_3__FinishedFunc(); // Function TBP_Player.TBP_Player_C.Timeline_3__FinishedFunc // (BlueprintEvent) // @ game+0x18b4070
	void Timeline_3__UpdateFunc(); // Function TBP_Player.TBP_Player_C.Timeline_3__UpdateFunc // (BlueprintEvent) // @ game+0x18b4070
	void Timeline_4__FinishedFunc(); // Function TBP_Player.TBP_Player_C.Timeline_4__FinishedFunc // (BlueprintEvent) // @ game+0x18b4070
	void Timeline_4__UpdateFunc(); // Function TBP_Player.TBP_Player_C.Timeline_4__UpdateFunc // (BlueprintEvent) // @ game+0x18b4070
	void Timeline_0__FinishedFunc(); // Function TBP_Player.TBP_Player_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x18b4070
	void Timeline_0__UpdateFunc(); // Function TBP_Player.TBP_Player_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x18b4070
	void Timeline_1__FinishedFunc(); // Function TBP_Player.TBP_Player_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x18b4070
	void Timeline_1__UpdateFunc(); // Function TBP_Player.TBP_Player_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x18b4070
	void Timeline_2__FinishedFunc(); // Function TBP_Player.TBP_Player_C.Timeline_2__FinishedFunc // (BlueprintEvent) // @ game+0x18b4070
	void Timeline_2__UpdateFunc(); // Function TBP_Player.TBP_Player_C.Timeline_2__UpdateFunc // (BlueprintEvent) // @ game+0x18b4070
	void Timeline_7__FinishedFunc(); // Function TBP_Player.TBP_Player_C.Timeline_7__FinishedFunc // (BlueprintEvent) // @ game+0x18b4070
	void Timeline_7__UpdateFunc(); // Function TBP_Player.TBP_Player_C.Timeline_7__UpdateFunc // (BlueprintEvent) // @ game+0x18b4070
	void Timeline_8__FinishedFunc(); // Function TBP_Player.TBP_Player_C.Timeline_8__FinishedFunc // (BlueprintEvent) // @ game+0x18b4070
	void Timeline_8__UpdateFunc(); // Function TBP_Player.TBP_Player_C.Timeline_8__UpdateFunc // (BlueprintEvent) // @ game+0x18b4070
	void ScopeTimeline__FinishedFunc(); // Function TBP_Player.TBP_Player_C.ScopeTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x18b4070
	void ScopeTimeline__UpdateFunc(); // Function TBP_Player.TBP_Player_C.ScopeTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x18b4070
	void Timeline_13__FinishedFunc(); // Function TBP_Player.TBP_Player_C.Timeline_13__FinishedFunc // (BlueprintEvent) // @ game+0x18b4070
	void Timeline_13__UpdateFunc(); // Function TBP_Player.TBP_Player_C.Timeline_13__UpdateFunc // (BlueprintEvent) // @ game+0x18b4070
	void Timeline_13__InvulnerabilityTrigger__EventFunc(); // Function TBP_Player.TBP_Player_C.Timeline_13__InvulnerabilityTrigger__EventFunc // (BlueprintEvent) // @ game+0x18b4070
	void Timeline_13__ToggleCharacterVisibility__EventFunc(); // Function TBP_Player.TBP_Player_C.Timeline_13__ToggleCharacterVisibility__EventFunc // (BlueprintEvent) // @ game+0x18b4070
	void Timeline_Diablerize_Short__FinishedFunc(); // Function TBP_Player.TBP_Player_C.Timeline_Diablerize_Short__FinishedFunc // (BlueprintEvent) // @ game+0x18b4070
	void Timeline_Diablerize_Short__UpdateFunc(); // Function TBP_Player.TBP_Player_C.Timeline_Diablerize_Short__UpdateFunc // (BlueprintEvent) // @ game+0x18b4070
	void Check Dodge__FinishedFunc(); // Function TBP_Player.TBP_Player_C.Check Dodge__FinishedFunc // (BlueprintEvent) // @ game+0x18b4070
	void Check Dodge__UpdateFunc(); // Function TBP_Player.TBP_Player_C.Check Dodge__UpdateFunc // (BlueprintEvent) // @ game+0x18b4070
	void MuzzleFlashLightTimeline__FinishedFunc(); // Function TBP_Player.TBP_Player_C.MuzzleFlashLightTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x18b4070
	void MuzzleFlashLightTimeline__UpdateFunc(); // Function TBP_Player.TBP_Player_C.MuzzleFlashLightTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x18b4070
	void MuzzleFlashLight2Timeline__FinishedFunc(); // Function TBP_Player.TBP_Player_C.MuzzleFlashLight2Timeline__FinishedFunc // (BlueprintEvent) // @ game+0x18b4070
	void MuzzleFlashLight2Timeline__UpdateFunc(); // Function TBP_Player.TBP_Player_C.MuzzleFlashLight2Timeline__UpdateFunc // (BlueprintEvent) // @ game+0x18b4070
	void OutlineTimeline__FinishedFunc(); // Function TBP_Player.TBP_Player_C.OutlineTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x18b4070
	void OutlineTimeline__UpdateFunc(); // Function TBP_Player.TBP_Player_C.OutlineTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x18b4070
	void GasDebuffTimeline__FinishedFunc(); // Function TBP_Player.TBP_Player_C.GasDebuffTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x18b4070
	void GasDebuffTimeline__UpdateFunc(); // Function TBP_Player.TBP_Player_C.GasDebuffTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x18b4070
	void GasDebuffBurnTimeline__FinishedFunc(); // Function TBP_Player.TBP_Player_C.GasDebuffBurnTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x18b4070
	void GasDebuffBurnTimeline__UpdateFunc(); // Function TBP_Player.TBP_Player_C.GasDebuffBurnTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x18b4070
	void InpActEvt_Left_K2Node_InputKeyEvent_4(struct FKey Key); // Function TBP_Player.TBP_Player_C.InpActEvt_Left_K2Node_InputKeyEvent_4 // (BlueprintEvent) // @ game+0x18b4070
	void InpActEvt_Right_K2Node_InputKeyEvent_3(struct FKey Key); // Function TBP_Player.TBP_Player_C.InpActEvt_Right_K2Node_InputKeyEvent_3 // (BlueprintEvent) // @ game+0x18b4070
	void InpActEvt_PageUp_K2Node_InputKeyEvent_2(struct FKey Key); // Function TBP_Player.TBP_Player_C.InpActEvt_PageUp_K2Node_InputKeyEvent_2 // (BlueprintEvent) // @ game+0x18b4070
	void InpActEvt_PageDown_K2Node_InputKeyEvent_1(struct FKey Key); // Function TBP_Player.TBP_Player_C.InpActEvt_PageDown_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x18b4070
	void OnLocalDisciplineUse(struct FDisciplineUse& DisciplineUse, float ExpectedDuration); // Function TBP_Player.TBP_Player_C.OnLocalDisciplineUse // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void DisciplineJumpFinished(); // Function TBP_Player.TBP_Player_C.DisciplineJumpFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnLocalDisciplineUseFailed(struct FDisciplineUse& DisciplineUse); // Function TBP_Player.TBP_Player_C.OnLocalDisciplineUseFailed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void LocalPlayer BeginPlay(); // Function TBP_Player.TBP_Player_C.LocalPlayer BeginPlay // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnLocalSprintStarted(); // Function TBP_Player.TBP_Player_C.OnLocalSprintStarted // (Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void OnLocalSprintEnded(); // Function TBP_Player.TBP_Player_C.OnLocalSprintEnded // (Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void OnLocalEnteredIndoor(); // Function TBP_Player.TBP_Player_C.OnLocalEnteredIndoor // (Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void OnLocalExitedIndoor(); // Function TBP_Player.TBP_Player_C.OnLocalExitedIndoor // (Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void OnStartedFeedingApproach(float TravelTime); // Function TBP_Player.TBP_Player_C.OnStartedFeedingApproach // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnFeedingDoneEvent(bool bTargetIsDrained, struct ATigerCharacter* InTargetFedOn); // Function TBP_Player.TBP_Player_C.OnFeedingDoneEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnTigerMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class ETigerMovementMode PrevCustomMode, enum class EMovementMode NewMovementMode, enum class ETigerMovementMode NewCustomMode); // Function TBP_Player.TBP_Player_C.OnTigerMovementModeChanged // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnExtraHealthDepleted(); // Function TBP_Player.TBP_Player_C.OnExtraHealthDepleted // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnStartedAimingCameraTransition(); // Function TBP_Player.TBP_Player_C.OnStartedAimingCameraTransition // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnStoppedAimingCameraTransition(); // Function TBP_Player.TBP_Player_C.OnStoppedAimingCameraTransition // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnMasqueradeStateChanged_Event_1(bool InIsMasqueradeBreached, enum class ETigerAIPlayerAction InPlayerAction); // Function TBP_Player.TBP_Player_C.OnMasqueradeStateChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function TBP_Player.TBP_Player_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void ReceiveActorEndOverlap(struct AActor* OtherActor); // Function TBP_Player.TBP_Player_C.ReceiveActorEndOverlap // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnShieldDepleted(struct ATigerPlayer* InInstigator); // Function TBP_Player.TBP_Player_C.OnShieldDepleted // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnModEquipped(); // Function TBP_Player.TBP_Player_C.OnModEquipped // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void Client On Mod Equipped(); // Function TBP_Player.TBP_Player_C.Client On Mod Equipped // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void K2_OnEndViewTarget(struct APlayerController* PC); // Function TBP_Player.TBP_Player_C.K2_OnEndViewTarget // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void LocalPlayerTick(float InDeltaSeconds); // Function TBP_Player.TBP_Player_C.LocalPlayerTick // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_Player_AudioTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function TBP_Player.TBP_Player_C.BndEvt__TBP_Player_AudioTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void OnBuffAdded(struct UTigerBuff* Buff, int32_t ID, float Duration); // Function TBP_Player.TBP_Player_C.OnBuffAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ReceiveBeginPlay(); // Function TBP_Player.TBP_Player_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void OnDisciplineUseSucceeded(struct FDisciplineUse& DisciplineUse); // Function TBP_Player.TBP_Player_C.OnDisciplineUseSucceeded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void OnLanded(struct FHitResult& Hit); // Function TBP_Player.TBP_Player_C.OnLanded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void ReceivePossessed(struct AController* NewController); // Function TBP_Player.TBP_Player_C.ReceivePossessed // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnShowDamageAmount(struct FVector& InHitLocation, struct FLinearColor& InDamageColor, int32_t InTotalDamageAmount, int32_t InHealthDamageAmount, bool bInHasExtraHealth, bool bInHasShield, float InRangedDamageFalloffPercent); // Function TBP_Player.TBP_Player_C.OnShowDamageAmount // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void OnWeaponFired(bool bSecondaryWeaponFired); // Function TBP_Player.TBP_Player_C.OnWeaponFired // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnRep_PlayerClan(); // Function TBP_Player.TBP_Player_C.OnRep_PlayerClan // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void LifeStatusChanged(enum class ETigerPlayerLifeStatus NewLifeStatus); // Function TBP_Player.TBP_Player_C.LifeStatusChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnGotPlayerState(); // Function TBP_Player.TBP_Player_C.OnGotPlayerState // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnRep_PowerKit(); // Function TBP_Player.TBP_Player_C.OnRep_PowerKit // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnDodged(bool IsControllingPlayer, bool bLaunchedInAir, struct FVector LaunchDirection, char DodgeStage); // Function TBP_Player.TBP_Player_C.OnDodged // (Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function TBP_Player.TBP_Player_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void OnGotScouted(); // Function TBP_Player.TBP_Player_C.OnGotScouted // (Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void OnNoLongerScouted(); // Function TBP_Player.TBP_Player_C.OnNoLongerScouted // (Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void OnAboutToBeHitByDisplacement(); // Function TBP_Player.TBP_Player_C.OnAboutToBeHitByDisplacement // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnDamageTaken(float DamageTaken, struct AActor* DamageInstigator); // Function TBP_Player.TBP_Player_C.OnDamageTaken // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void OnDoubleJump(struct FVector& Direction); // Function TBP_Player.TBP_Player_C.OnDoubleJump // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void OnPlayMeleeHitEffects(struct UTigerMeleeWeapon* WeaponHitBy, struct FVector& ImpactLocation, struct FVector& HitDirection); // Function TBP_Player.TBP_Player_C.OnPlayMeleeHitEffects // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void OnStartedPhysicalInteraction(struct UTigerPhysicalInteraction* PhysInteractionClass, bool bIsTargetPlayer); // Function TBP_Player.TBP_Player_C.OnStartedPhysicalInteraction // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnInterruptedPhysicalInteraction(struct UTigerPhysicalInteraction* PhysInteractionClass, bool bIsTargetPlayer); // Function TBP_Player.TBP_Player_C.OnInterruptedPhysicalInteraction // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnFinishedPhysicalInteraction(struct UTigerPhysicalInteraction* PhysInteractionClass, bool bIsTargetPlayer); // Function TBP_Player.TBP_Player_C.OnFinishedPhysicalInteraction // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnWeaponVisualChangedEvent(); // Function TBP_Player.TBP_Player_C.OnWeaponVisualChangedEvent // (Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void OnWallJump(struct FVector& InVelocity); // Function TBP_Player.TBP_Player_C.OnWallJump // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void OnClimbStarted(struct FVector& InVelocity); // Function TBP_Player.TBP_Player_C.OnClimbStarted // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void OnClimbEnded(struct FVector& InVelocity); // Function TBP_Player.TBP_Player_C.OnClimbEnded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void OnWallGrindStarted(struct FVector& InVelocity); // Function TBP_Player.TBP_Player_C.OnWallGrindStarted // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void OnWallGrindEnded(struct FVector& InVelocity); // Function TBP_Player.TBP_Player_C.OnWallGrindEnded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void OnHardLanding(struct FVector& InVelocity); // Function TBP_Player.TBP_Player_C.OnHardLanding // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void OnSlideJump(struct FVector& InVelocity); // Function TBP_Player.TBP_Player_C.OnSlideJump // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void OnSlidingStarted(struct FVector& InVelocity); // Function TBP_Player.TBP_Player_C.OnSlidingStarted // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void OnSlidingEnded(struct FVector& InVelocity); // Function TBP_Player.TBP_Player_C.OnSlidingEnded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void OnBecameSpectator(); // Function TBP_Player.TBP_Player_C.OnBecameSpectator // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnBecameGroupMember(); // Function TBP_Player.TBP_Player_C.OnBecameGroupMember // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnStoppedBeingGroupMember(); // Function TBP_Player.TBP_Player_C.OnStoppedBeingGroupMember // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__OutlineComponent_K2Node_ComponentBoundEvent_2_OnOutlineModeRefreshed__DelegateSignature(enum class ETigerOutlineMode HighestPrioOutline); // Function TBP_Player.TBP_Player_C.BndEvt__OutlineComponent_K2Node_ComponentBoundEvent_2_OnOutlineModeRefreshed__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void UpdateHolyIncenseEffect(float InDeltaTime); // Function TBP_Player.TBP_Player_C.UpdateHolyIncenseEffect // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void IncrementShieldShaderCounter(); // Function TBP_Player.TBP_Player_C.IncrementShieldShaderCounter // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void DecrementShieldShaderCounter(); // Function TBP_Player.TBP_Player_C.DecrementShieldShaderCounter // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void IncrementFeedingBloodIndex(); // Function TBP_Player.TBP_Player_C.IncrementFeedingBloodIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnGoneBelowHalfHealth(); // Function TBP_Player.TBP_Player_C.OnGoneBelowHalfHealth // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void StopDeathTransition(); // Function TBP_Player.TBP_Player_C.StopDeathTransition // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnGotHitForAudio(struct FName& InSurfaceForAudio); // Function TBP_Player.TBP_Player_C.OnGotHitForAudio // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnStartedFeedingForAudio(float TravelTime); // Function TBP_Player.TBP_Player_C.OnStartedFeedingForAudio // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnFeedingDoneForAudio(bool bTargetIsDrained, struct ATigerCharacter* InTargetFedOn); // Function TBP_Player.TBP_Player_C.OnFeedingDoneForAudio // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void UpdateHolyIncenseAudio(); // Function TBP_Player.TBP_Player_C.UpdateHolyIncenseAudio // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnRestart(); // Function TBP_Player.TBP_Player_C.OnRestart // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void ExecuteUbergraph_TBP_Player(int32_t EntryPoint); // Function TBP_Player.TBP_Player_C.ExecuteUbergraph_TBP_Player // (Final|UbergraphFunction|HasDefaults) // @ game+0x18b4070
	void SpeedFullscreenEffectEventDispatch__DelegateSignature(float TravelTime, bool bIsFeedingApproach); // Function TBP_Player.TBP_Player_C.SpeedFullscreenEffectEventDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
};

