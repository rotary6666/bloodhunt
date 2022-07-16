// WidgetBlueprintGeneratedClass TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C
// Size: 0x3f4 (Inherited: 0x280)
struct UTBP_UI_ArchetypeLevelProgress_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* FadeOutRight; // 0x288(0x08)
	struct UWidgetAnimation* FadeOutLeft; // 0x290(0x08)
	struct UWidgetAnimation* FadeIn; // 0x298(0x08)
	struct UWidgetAnimation* ShowReward_Anim; // 0x2a0(0x08)
	struct UWidgetAnimation* Enter_Anim; // 0x2a8(0x08)
	struct UWidgetAnimation* LevelUp_Anim; // 0x2b0(0x08)
	struct UImage* Archetype_Image; // 0x2b8(0x08)
	struct UTigerStyledRichTextBlock* Archetype_Text; // 0x2c0(0x08)
	struct UTigerStyledRichTextBlock* ArchetypeLevelText; // 0x2c8(0x08)
	struct UImage* BorderInnerDefault_Image; // 0x2d0(0x08)
	struct UImage* BorderOuterDefault_Image; // 0x2d8(0x08)
	struct UTigerStyledRichTextBlock* Clan_Text; // 0x2e0(0x08)
	struct UTigerStyledRichTextBlock* HeadingText; // 0x2e8(0x08)
	struct UImage* LevelBackground_Image; // 0x2f0(0x08)
	struct UImage* LevelBorderInner_Image; // 0x2f8(0x08)
	struct UImage* LevelBorderOuter_Image; // 0x300(0x08)
	struct UTigerStyledRichTextBlock* NewPerk_Text; // 0x308(0x08)
	struct UImage* Ornament_Big_Image; // 0x310(0x08)
	struct UImage* Ornament_Thin_Image; // 0x318(0x08)
	struct UImage* OrnamentBot_Image; // 0x320(0x08)
	struct UImage* OrnamentLeft_Image; // 0x328(0x08)
	struct UImage* OrnamentRight_Image; // 0x330(0x08)
	struct UImage* OrnamentTop_Image; // 0x338(0x08)
	struct UImage* Perk_Image; // 0x340(0x08)
	struct UTigerStyledRichTextBlock* PerkDescription_Text; // 0x348(0x08)
	struct UTigerStyledRichTextBlock* PerkName_Text; // 0x350(0x08)
	struct UImage* ProgressBarImage_2; // 0x358(0x08)
	struct UOverlay* SmokeVFXOverlay; // 0x360(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider; // 0x368(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider_2; // 0x370(0x08)
	struct UTBP_UI_PostMatch_TitleFlare_C* TBP_UI_PostMatch_TitleFlare; // 0x378(0x08)
	struct UTBP_UI_ProgressBarSpark_C* TBP_UI_ProgressBarSpark; // 0x380(0x08)
	struct UTigerStyledRichTextBlock* XP_Text; // 0x388(0x08)
	struct FText LevelUpHeadingText; // 0x390(0x18)
	int32_t ArchetypeLevel; // 0x3a8(0x04)
	char pad_3AC[0x4]; // 0x3ac(0x04)
	struct UMaterialInstanceDynamic* ProgressBarMaterial; // 0x3b0(0x08)
	float ProgressBarPercent; // 0x3b8(0x04)
	struct FColor ProgressBarBackgroundColor; // 0x3bc(0x04)
	bool AnimateProgressBar; // 0x3c0(0x01)
	char pad_3C1[0x3]; // 0x3c1(0x03)
	float ProgressBarAnimationSpeed; // 0x3c4(0x04)
	float ProgressBarTarget; // 0x3c8(0x04)
	bool LevelUp; // 0x3cc(0x01)
	bool HasPlayedHeadingAnimation; // 0x3cd(0x01)
	char pad_3CE[0x2]; // 0x3ce(0x02)
	int32_t ArchetypeExpBeforeSession; // 0x3d0(0x04)
	int32_t ArchetypeExpAccumulated; // 0x3d4(0x04)
	int32_t CurrentLevelExpRequired; // 0x3d8(0x04)
	int32_t NextLevelExpRequired; // 0x3dc(0x04)
	int32_t ArchetypeLevelExp; // 0x3e0(0x04)
	int32_t GainedExp; // 0x3e4(0x04)
	int32_t MaxArchetypeLevelUncapped; // 0x3e8(0x04)
	int32_t MaxArchetypeLevel; // 0x3ec(0x04)
	enum class ETigerPowerKitType ArchetypeType; // 0x3f0(0x01)
	bool bShouldShowReward; // 0x3f1(0x01)
	bool bHasShownReward; // 0x3f2(0x01)
	bool bHasSetArchetypeUI; // 0x3f3(0x01)

	void GetFadeOutAnimation(bool bFadeOutLeft, struct UWidgetAnimation*& FadeOutAnimation); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.GetFadeOutAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void GetFadeInAnimation(struct UWidgetAnimation*& FadeInAnimation); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.GetFadeInAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ShouldBeShown(struct FTigerMatchStats& TigerMatchStats, bool& bShouldShow); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.ShouldBeShown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SequenceEvent__ENTRYPOINTTBP_UI_ArchetypeLevelProgress_6(); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.SequenceEvent__ENTRYPOINTTBP_UI_ArchetypeLevelProgress_6 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SequenceEvent__ENTRYPOINTTBP_UI_ArchetypeLevelProgress_5(); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.SequenceEvent__ENTRYPOINTTBP_UI_ArchetypeLevelProgress_5 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SequenceEvent__ENTRYPOINTTBP_UI_ArchetypeLevelProgress_4(); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.SequenceEvent__ENTRYPOINTTBP_UI_ArchetypeLevelProgress_4 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SequenceEvent__ENTRYPOINTTBP_UI_ArchetypeLevelProgress_3(); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.SequenceEvent__ENTRYPOINTTBP_UI_ArchetypeLevelProgress_3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SequenceEvent__ENTRYPOINTTBP_UI_ArchetypeLevelProgress_2(); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.SequenceEvent__ENTRYPOINTTBP_UI_ArchetypeLevelProgress_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SequenceEvent__ENTRYPOINTTBP_UI_ArchetypeLevelProgress_1(struct UImage* ProgressBarImage); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.SequenceEvent__ENTRYPOINTTBP_UI_ArchetypeLevelProgress_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void PlayLevelUpAnimation(); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.PlayLevelUpAnimation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetNextReward(); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.SetNextReward // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetGainedXP(); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.SetGainedXP // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CalculatePreviousArchetypeExp(int32_t TotalExp, int32_t GainedExp); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.CalculatePreviousArchetypeExp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetMaxArchetypeLevel(); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.SetMaxArchetypeLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CheckCurrentLevelExpIsPassedMaxLevelExp(); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.CheckCurrentLevelExpIsPassedMaxLevelExp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CheckCurrentLevelExpRequiredAfterLevelUp(); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.CheckCurrentLevelExpRequiredAfterLevelUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CalculateArchetypeExpAmount(); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.CalculateArchetypeExpAmount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CalculateNextLevelExpRequired(); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.CalculateNextLevelExpRequired // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CalculateCurrentLevelExpRequired(); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.CalculateCurrentLevelExpRequired // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void TestPrintOut(struct FText Info, struct FText Value); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.TestPrintOut // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CalculateArchetypeLevel(); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.CalculateArchetypeLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetProgressBarStartPoint(); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.SetProgressBarStartPoint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void RunProgressBarNextLevel(); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.RunProgressBarNextLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetArchetype(); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.SetArchetype // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void AnyExpLeft?(bool& ExpLeft); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.AnyExpLeft? // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void DeductExp(); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.DeductExp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CalculateProgressBarTarget(); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.CalculateProgressBarTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void RunProgressBar(); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.RunProgressBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ResetProgressBar(); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.ResetProgressBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void NextLevelReached(); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.NextLevelReached // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void IncrementArchetypeLevel(); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.IncrementArchetypeLevel // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void InitProgressBar(int32_t TotalArchetypeExp, int32_t GainedArchetypeExp); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.InitProgressBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetArchetypeLevel(); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.SetArchetypeLevel // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void LeaveSubscreen(); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.LeaveSubscreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void HeadingText_Event_1(struct UTigerStyledRichTextBlock* HeadingText); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.HeadingText_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void StartProgressBarAnimation(struct UImage* ProgressBarImage); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.StartProgressBarAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void PlayProgressTextAnimationSound(); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.PlayProgressTextAnimationSound // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void Construct(); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void ShowNextLevelAfterReward(); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.ShowNextLevelAfterReward // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void EnterSubscreen(); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.EnterSubscreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void PrepareScreen(struct FTigerMatchStats& MatchStats, struct UTBP_UI_PostMatchScreen_C* PostMatchScreen); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.PrepareScreen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ExecuteUbergraph_TBP_UI_ArchetypeLevelProgress(int32_t EntryPoint); // Function TBP_UI_ArchetypeLevelProgress.TBP_UI_ArchetypeLevelProgress_C.ExecuteUbergraph_TBP_UI_ArchetypeLevelProgress // (Final|UbergraphFunction|HasDefaults) // @ game+0x18b4070
};

