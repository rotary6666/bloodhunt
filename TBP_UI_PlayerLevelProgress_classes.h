// WidgetBlueprintGeneratedClass TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C
// Size: 0x360 (Inherited: 0x280)
struct UTBP_UI_PlayerLevelProgress_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* FadeOutRight; // 0x288(0x08)
	struct UWidgetAnimation* FadeOutLeft; // 0x290(0x08)
	struct UWidgetAnimation* FadeIn; // 0x298(0x08)
	struct UWidgetAnimation* ProgressText_Switch; // 0x2a0(0x08)
	struct UWidgetAnimation* EnterAnimation; // 0x2a8(0x08)
	struct UWidgetAnimation* ProgressText_In; // 0x2b0(0x08)
	struct UTigerStyledRichTextBlock* HeadingText; // 0x2b8(0x08)
	struct UTigerStyledRichTextBlock* PlayerLevelText; // 0x2c0(0x08)
	struct UImage* ProgressBarImage; // 0x2c8(0x08)
	struct UOverlay* SmokeVFXOverlay; // 0x2d0(0x08)
	struct UTBP_UI_PlayerLevelAvatar_C* TBP_UI_PlayerLevelAvatar; // 0x2d8(0x08)
	struct UTBP_UI_PostMatch_PlayerLevelProgressOrnament_C* TBP_UI_PostMatch_PlayerLevelProgressOrnament; // 0x2e0(0x08)
	struct UTBP_UI_PostMatch_TitleFlare_C* TBP_UI_PostMatch_TitleFlare; // 0x2e8(0x08)
	struct UTBP_UI_ProgressBarSpark_C* TBP_UI_ProgressBarSpark; // 0x2f0(0x08)
	struct UTBP_UI_Tag_PlayerLevel_Big_C* TBP_UI_Tag_PlayerLevel_Big; // 0x2f8(0x08)
	struct FText LevelUpHeadingText; // 0x300(0x18)
	int32_t PlayerLevel; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct UMaterialInstanceDynamic* ProgressBarMaterial; // 0x320(0x08)
	float ProgressBarPercent; // 0x328(0x04)
	struct FColor ProgressBarBackgroundColor; // 0x32c(0x04)
	bool AnimateProgressBar; // 0x330(0x01)
	char pad_331[0x3]; // 0x331(0x03)
	float ProgressBarAnimationSpeed; // 0x334(0x04)
	float ProgressBarTarget; // 0x338(0x04)
	bool LevelUp; // 0x33c(0x01)
	bool HasPlayedHeadingAnimation; // 0x33d(0x01)
	char pad_33E[0x2]; // 0x33e(0x02)
	int32_t PlayerExpBeforeSession; // 0x340(0x04)
	int32_t PlayerExpAccumulated; // 0x344(0x04)
	int32_t CurrentLevelExpRequired; // 0x348(0x04)
	int32_t NextLevelExpRequired; // 0x34c(0x04)
	int32_t PlayerLevelExp; // 0x350(0x04)
	int32_t GainedExp; // 0x354(0x04)
	int32_t MaxPlayerLevelUncapped; // 0x358(0x04)
	int32_t MaxPlayerLevel; // 0x35c(0x04)

	void GetFadeOutAnimation(bool bFadeOutLeft, struct UWidgetAnimation*& FadeOutAnimation); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.GetFadeOutAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void GetFadeInAnimation(struct UWidgetAnimation*& FadeInAnimation); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.GetFadeInAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ShouldBeShown(struct FTigerMatchStats& TigerMatchStats, bool& bShouldShow); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.ShouldBeShown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SequenceEvent__ENTRYPOINTTBP_UI_PlayerLevelProgress_3(struct UTigerStyledRichTextBlock* HeadingText); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.SequenceEvent__ENTRYPOINTTBP_UI_PlayerLevelProgress_3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SequenceEvent__ENTRYPOINTTBP_UI_PlayerLevelProgress_2(struct UImage* ProgressBarImage); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.SequenceEvent__ENTRYPOINTTBP_UI_PlayerLevelProgress_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SequenceEvent__ENTRYPOINTTBP_UI_PlayerLevelProgress_1(); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.SequenceEvent__ENTRYPOINTTBP_UI_PlayerLevelProgress_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CalculatePreviousPlayerExp(int32_t TotalExp, int32_t GainedExp); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.CalculatePreviousPlayerExp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetMaxPlayerLevel(); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.SetMaxPlayerLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CheckCurrentLevelExpIsPassedMaxLevelExp(); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.CheckCurrentLevelExpIsPassedMaxLevelExp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CheckCurrentLevelExpRequiredAfterLevelUp(); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.CheckCurrentLevelExpRequiredAfterLevelUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CalculatePlayerExpAmount(); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.CalculatePlayerExpAmount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CalculateNextLevelExpRequired(); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.CalculateNextLevelExpRequired // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CalculateCurrentLevelExpRequired(); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.CalculateCurrentLevelExpRequired // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void TestPrintOut(struct FText Info, struct FText Value); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.TestPrintOut // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CalculatePlayerLevel(); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.CalculatePlayerLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetProgressBarStartPoint(); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.SetProgressBarStartPoint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void RunProgressBarNextLevel(); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.RunProgressBarNextLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetPlayerAvatar(); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.SetPlayerAvatar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetHeading(); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.SetHeading // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void AnyExpLeft?(bool& ExpLeft); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.AnyExpLeft? // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void DeductExp(); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.DeductExp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CalculateProgressBarTarget(); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.CalculateProgressBarTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void RunProgressBar(); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.RunProgressBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ResetProgressBar(); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.ResetProgressBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void NextLevelReached(); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.NextLevelReached // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void IncrementPlayerLevel(); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.IncrementPlayerLevel // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void InitProgressBar(int32_t TotalPlayerExp, int32_t GainedPlayerExp); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.InitProgressBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetPlayerLevel(); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.SetPlayerLevel // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void LeaveSubscreen(); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.LeaveSubscreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void HeadingText_Event_1(struct UTigerStyledRichTextBlock* HeadingText); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.HeadingText_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void StartProgressBarAnimation(struct UImage* ProgressBarImage); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.StartProgressBarAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void PlayAudio_PlayerCircleAppears(); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.PlayAudio_PlayerCircleAppears // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void Construct(); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void PrepareScreen(struct FTigerMatchStats& MatchStats, struct UTBP_UI_PostMatchScreen_C* PostMatchScreen); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.PrepareScreen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void EnterSubscreen(); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.EnterSubscreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ExecuteUbergraph_TBP_UI_PlayerLevelProgress(int32_t EntryPoint); // Function TBP_UI_PlayerLevelProgress.TBP_UI_PlayerLevelProgress_C.ExecuteUbergraph_TBP_UI_PlayerLevelProgress // (Final|UbergraphFunction|HasDefaults) // @ game+0x18b4070
};

