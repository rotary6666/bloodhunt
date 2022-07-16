// BlueprintGeneratedClass TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C
// Size: 0x358 (Inherited: 0x2b8)
struct ATBP_ScoutingFamiliar_C : ATigerFamiliarScout {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UParticleSystemComponent* BatProjectileUpgrade; // 0x2c0(0x08)
	struct UParticleSystemComponent* BatProjectile; // 0x2c8(0x08)
	struct TArray<struct ATigerCharacter*> RevealedCharacters; // 0x2d0(0x10)
	struct UAkAudioEvent* AKEvent_StartScanning; // 0x2e0(0x08)
	struct UParticleSystemComponent* ScoutEchoLocationSphereEffect; // 0x2e8(0x08)
	struct FVector ForwardVector; // 0x2f0(0x0c)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct UAkAudioEvent* AKEvent_StopScanning; // 0x300(0x08)
	struct UParticleSystemComponent* ScoutBatEffect; // 0x308(0x08)
	struct UParticleSystemComponent* Projectile Smoke Trail; // 0x310(0x08)
	int32_t ScanEffectAkEventID; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct FSoftObjectPath NiagaraParticlePath; // 0x320(0x18)
	struct UNiagaraSystem* CachedEffect; // 0x338(0x08)
	struct UNiagaraComponent* NiagaraBats; // 0x340(0x08)
	struct UTBP_UI_Discipline_Scout_WorldMarker_C* WorldMarkerWidget; // 0x348(0x08)
	struct ATigerPlayer* CachedPlayer; // 0x350(0x08)

	void CreateInWorldWidget(struct APawn* OwningPawn); // Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.CreateInWorldWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Ravaging Bats Trait(struct AActor* DamagedActor, struct AActor* DamageCauser, struct ATigerPlayer* Player); // Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Ravaging Bats Trait // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void StartScanAudio(); // Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.StartScanAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ColorCodeEffect(struct UParticleSystemComponent* ParticleComponentToColor, bool bShouldOverrideDefaultColor, struct FLinearColor StandardColorOverride, struct FLinearColor EnemyColorOverride, bool bShouldOverrideEnemyCoor); // Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ColorCodeEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SpawnEmitterColorCoded(struct UParticleSystem* InParticleAssetToSpawn, struct FTransform InRelativeTransform, struct FName InAttachPointName, struct USceneComponent* InComponentAttachedTo, bool bInShouldSpawnForEnemy, bool bInShouldSpawnForAlly, struct UParticleSystemComponent*& SpawnedParticle); // Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.SpawnEmitterColorCoded // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Deactivate Projectile Effects(); // Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Deactivate Projectile Effects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Activate Projectile Effects(); // Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Activate Projectile Effects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Spawn Projectile Trail(); // Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Spawn Projectile Trail // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Despawn Projectile Trail(); // Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Despawn Projectile Trail // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Try Hide World Marker Detection(); // Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Try Hide World Marker Detection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Try Show World Marker Detection(); // Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Try Show World Marker Detection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void GetWorldMarkerWidget(bool& bIsWorldMarkerClass, struct UTBP_UI_Discipline_Scout_WorldMarker_C*& WorldMarker); // Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.GetWorldMarkerWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Toggle WorldMarker Detection State(); // Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Toggle WorldMarker Detection State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void IsCharacterFriendlyWithDisciplineCaster(struct ATigerCharacter* Potentially Friendly Character, bool& Is Friendly); // Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.IsCharacterFriendlyWithDisciplineCaster // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x18b4070
	void IsLocallyControlled(bool& Is Locally Controlled); // Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.IsLocallyControlled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x18b4070
	void GetScoutingDistanceToOwnerLimit(float& MaxScoutingDistance); // Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.GetScoutingDistanceToOwnerLimit // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x18b4070
	void AddRevealedChar(struct ATigerCharacter* Character, float Time); // Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.AddRevealedChar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void PlaySound(struct UAkAudioEvent* Audio); // Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.PlaySound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void IsServerOrOwner(bool& Is Owner Or Server); // Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.IsServerOrOwner // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x18b4070
	void ActivateScouting(); // Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ActivateScouting // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void ActivateFeedback(); // Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ActivateFeedback // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ReceiveBeginPlay(); // Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void ReceiveDestroyed(); // Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void TickRevealedCharacters(); // Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.TickRevealedCharacters // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnTargetLocationChanged(); // Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.OnTargetLocationChanged // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnScoutStartedReturnToOwner(); // Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.OnScoutStartedReturnToOwner // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnArrivedAtOwner(); // Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.OnArrivedAtOwner // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void BatDestroy(); // Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.BatDestroy // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_ScoutingFamiliar_ScanSphereComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.BndEvt__TBP_ScoutingFamiliar_ScanSphereComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_ScoutingFamiliar_ScanSphereComponent_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.BndEvt__TBP_ScoutingFamiliar_ScanSphereComponent_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void Progress Scouting Achievement(struct ATigerPlayer* InScoutedTigerPlayer); // Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Progress Scouting Achievement // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ExecuteUbergraph_TBP_ScoutingFamiliar(int32_t EntryPoint); // Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ExecuteUbergraph_TBP_ScoutingFamiliar // (Final|UbergraphFunction|HasDefaults) // @ game+0x18b4070
};

