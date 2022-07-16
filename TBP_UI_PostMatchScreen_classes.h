// WidgetBlueprintGeneratedClass TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C
// Size: 0x718 (Inherited: 0x2e0)
struct UTBP_UI_PostMatchScreen_C : UTigerPostMatchScreenUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UWidgetAnimation* FadeOutArchetypeLevel; // 0x2e8(0x08)
	struct UWidgetAnimation* FadeInArchetypeLevel; // 0x2f0(0x08)
	struct UWidgetAnimation* FadeOutRankScreen; // 0x2f8(0x08)
	struct UWidgetAnimation* FadeInRankScreen; // 0x300(0x08)
	struct UWidgetAnimation* FadeOutPlayerLevel; // 0x308(0x08)
	struct UWidgetAnimation* FadeInPlayerLevel; // 0x310(0x08)
	struct UWidgetAnimation* CountdownAnimation; // 0x318(0x08)
	struct UWidgetAnimation* FadeInLoading; // 0x320(0x08)
	struct UWidgetAnimation* FadeOutExitMenu; // 0x328(0x08)
	struct UWidgetAnimation* FadeInBattlepassRewards; // 0x330(0x08)
	struct UWidgetAnimation* FadeInBattlepassNoReward; // 0x338(0x08)
	struct UWidgetAnimation* FadeOutStatsSummary; // 0x340(0x08)
	struct UWidgetAnimation* FadeOutChallenges; // 0x348(0x08)
	struct UWidgetAnimation* FadeInChallenges; // 0x350(0x08)
	struct UWidgetAnimation* MoveText; // 0x358(0x08)
	struct UWidgetAnimation* FadeInAnimation; // 0x360(0x08)
	struct UImage* AchievementDot; // 0x368(0x08)
	struct UTigerStyledRichTextBlock* AchievementsText; // 0x370(0x08)
	struct UCanvasPanel* ArchetypeLevelCanvas; // 0x378(0x08)
	struct UImage* ArchetypeLevelDot; // 0x380(0x08)
	struct UTigerStyledRichTextBlock* ArchetypeLevelText; // 0x388(0x08)
	struct UScaleBox* BackgroundScaleBox; // 0x390(0x08)
	struct UImage* BackgroundVideoWidget; // 0x398(0x08)
	struct UCanvasPanel* BattlePassGainedRewardsCanvas; // 0x3a0(0x08)
	struct UImage* BlackBackground; // 0x3a8(0x08)
	struct UImage* ChallengeDot; // 0x3b0(0x08)
	struct UTigerStyledRichTextBlock* ChallengesText; // 0x3b8(0x08)
	struct UTBP_UI_InputMenuPrompt_C* Give_Accolade_ButtonPrompt; // 0x3c0(0x08)
	struct UOverlay* Give_Accolade_Container; // 0x3c8(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* InputPrompt_Gamepad_Next_2; // 0x3d0(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* InputPrompt_Gamepad_Ready; // 0x3d8(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* InputPrompt_Keyboard_Next_2; // 0x3e0(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* InputPrompt_Keyboard_Ready; // 0x3e8(0x08)
	struct UCanvasPanel* LoadingScreenCanvas; // 0x3f0(0x08)
	struct UImage* MatchCountdownOverlay; // 0x3f8(0x08)
	struct UTigerStyledRichTextBlock* MatchCountdownText; // 0x400(0x08)
	struct UTBP_UI_Loading_Throbber_C* MatchMakingThrobber; // 0x408(0x08)
	struct UImage* MouseClickCaptureImage; // 0x410(0x08)
	struct UTextBlock* MovingTextAnim; // 0x418(0x08)
	struct UTextBlock* MovingTextTick; // 0x420(0x08)
	struct UOverlay* NextButtonPromptContainer; // 0x428(0x08)
	struct UCanvasPanel* PlayerLevelCanvas; // 0x430(0x08)
	struct UImage* PlayerLevelDot; // 0x438(0x08)
	struct UTigerStyledRichTextBlock* PlayerLevelText; // 0x440(0x08)
	struct UCanvasPanel* PostMatchCanvas; // 0x448(0x08)
	struct UTigerStyledRichTextBlock* PreTimerText; // 0x450(0x08)
	struct UCanvasPanel* ProgressedChallengesCanvas; // 0x458(0x08)
	struct UImage* RankDot; // 0x460(0x08)
	struct UCanvasPanel* RankScreen; // 0x468(0x08)
	struct UVerticalBox* RankScreenHeader; // 0x470(0x08)
	struct UTigerStyledRichTextBlock* RankText; // 0x478(0x08)
	struct UButton* RequeueButton; // 0x480(0x08)
	struct UImage* RewardsDot; // 0x488(0x08)
	struct UTigerStyledRichTextBlock* RewardsText; // 0x490(0x08)
	struct UCanvasPanel* StatsCanvasRoot; // 0x498(0x08)
	struct UCanvasPanel* StatsSummaryCanvas; // 0x4a0(0x08)
	struct UHorizontalBox* SubmenuTracker; // 0x4a8(0x08)
	struct UTBP_UI_ArchetypeLevelProgress_C* TBP_UI_ArchetypeLevelProgress; // 0x4b0(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider; // 0x4b8(0x08)
	struct UTBP_UI_Loading_Throbber_C* TBP_UI_Loading_Throbber; // 0x4c0(0x08)
	struct UTBP_UI_PlayerLevelProgress_C* TBP_UI_PlayerLevelProgress; // 0x4c8(0x08)
	struct UTBP_UI_PlayerRankProgress_C* TBP_UI_PlayerRankProgress; // 0x4d0(0x08)
	struct UTBP_UI_PostMatch_Rewards_C* TBP_UI_PostMatch_Rewards; // 0x4d8(0x08)
	struct UTBP_UI_PostMatch_SeasonExpBar_C* TBP_UI_PostMatch_SeasonExpBar; // 0x4e0(0x08)
	struct UTBP_UI_PostMatchScreen_Challenges_C* TBP_UI_PostMatchScreen_Challenges; // 0x4e8(0x08)
	struct UTBP_UI_PostMatchScreen_Stats_C* TBP_UI_PostMatchScreen_Stats; // 0x4f0(0x08)
	struct UTBP_UI_QueueIndicator_C* TBP_UI_QueueIndicator; // 0x4f8(0x08)
	struct UTigerSafeZoneWidget* TigerSafeZoneWidget-LoadingScreen; // 0x500(0x08)
	struct UTigerSafeZoneWidget* TigerSafeZoneWidget-Stats; // 0x508(0x08)
	struct UImage* TimerGlow; // 0x510(0x08)
	struct UTigerStyledRichTextBlock* TimerText; // 0x518(0x08)
	struct UImage* Vein1Bright_2; // 0x520(0x08)
	struct UImage* Vein2Dark; // 0x528(0x08)
	struct UImage* Vein3Dark; // 0x530(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_158; // 0x538(0x08)
	bool Delay on Intro; // 0x540(0x01)
	bool UpdateProgressBar; // 0x541(0x01)
	char pad_542[0x6]; // 0x542(0x06)
	struct FTigerMatchStats Tiger_Match_Stats; // 0x548(0xb8)
	float Delta Time; // 0x600(0x04)
	int32_t CurrentlyShownIndex; // 0x604(0x04)
	int32_t CurrentScreenIndex; // 0x608(0x04)
	bool bHasMoreScreensToShow; // 0x60c(0x01)
	bool bIsCanvasAnimationActive; // 0x60d(0x01)
	char pad_60E[0x2]; // 0x60e(0x02)
	struct FText ButtonPromptText Next; // 0x610(0x18)
	struct FText ButtonPromptText ReturnToElysium; // 0x628(0x18)
	int32_t GlobalCountdownTimer; // 0x640(0x04)
	float UpdateGlobalTimer; // 0x644(0x04)
	int32_t CountdownLeavingTime; // 0x648(0x04)
	int32_t MusicPlayAKEventID; // 0x64c(0x04)
	bool bHasSkippedElysium; // 0x650(0x01)
	char pad_651[0x7]; // 0x651(0x07)
	struct FMulticastInlineDelegate SearchMatch; // 0x658(0x10)
	struct FMulticastInlineDelegate SearchElysium; // 0x668(0x10)
	struct FMulticastInlineDelegate FoundMatch; // 0x678(0x10)
	bool bFoundMatch; // 0x688(0x01)
	char pad_689[0x3]; // 0x689(0x03)
	int32_t MatchCountdownTimer; // 0x68c(0x04)
	bool bJoiningElysium; // 0x690(0x01)
	char pad_691[0x3]; // 0x691(0x03)
	float RequeueCancelTimestamp; // 0x694(0x04)
	float RequeueSearchDelay; // 0x698(0x04)
	char pad_69C[0x4]; // 0x69c(0x04)
	struct FTimerHandle RequeueSearchDelayTimerHandle; // 0x6a0(0x08)
	struct FMulticastInlineDelegate CancelSearch; // 0x6a8(0x10)
	struct UTigerWidget* PlacementWidget; // 0x6b8(0x08)
	struct TSoftClassPtr<UObject> PlacementPreviewWidget; // 0x6c0(0x28)
	struct TArray<struct UTigerWidget*> Subscreens; // 0x6e8(0x10)
	struct TArray<struct UTigerStyledRichTextBlock*> SubscreenHeaderText; // 0x6f8(0x10)
	struct TArray<struct UImage*> SubscreenHeaderIcon; // 0x708(0x10)

	void SequenceEvent__ENTRYPOINTTBP_UI_PostMatchScreen_2(); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.SequenceEvent__ENTRYPOINTTBP_UI_PostMatchScreen_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SequenceEvent__ENTRYPOINTTBP_UI_PostMatchScreen_1(); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.SequenceEvent__ENTRYPOINTTBP_UI_PostMatchScreen_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Set Up Sub Screens(); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.Set Up Sub Screens // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	struct FEventReply OnMouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.OnMouseButtonDown_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Requeue(); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.Requeue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Join Match Countdown(); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.Join Match Countdown // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void FoundSession(); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.FoundSession // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Handle Instant Requeue(); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.Handle Instant Requeue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Set Active Screen on Tracker(); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.Set Active Screen on Tracker // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void TurnOffActiveAudio(bool bIsReturningToElysium); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.TurnOffActiveAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void IsLastScreen(bool& bIsLastScreen); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.IsLastScreen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x18b4070
	void ModifyButtonToReturnToElysium(); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.ModifyButtonToReturnToElysium // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void IsBattlepassCompleted(bool& IsCompleted, bool& WasCompletedThisSession); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.IsBattlepassCompleted // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x18b4070
	void OnCanvasWidgetChanged(); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.OnCanvasWidgetChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void UpdateLoadingDebug(); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.UpdateLoadingDebug // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Finished_26981DDB45AC353689A810BA214C219E(); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.Finished_26981DDB45AC353689A810BA214C219E // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnPlacementReveal(); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.OnPlacementReveal // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnFadeInLoadingScreenDone(); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.OnFadeInLoadingScreenDone // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void StatsReceived(struct FTigerMatchStats& InStats); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.StatsReceived // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Construct(); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void ShowNextSection(); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.ShowNextSection // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnInteractionPressed(); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.OnInteractionPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void WidgetAnimationEvt_FadeOutExitMenu_K2Node_WidgetAnimationEvent_1(); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.WidgetAnimationEvt_FadeOutExitMenu_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x18b4070
	void FadeInCanvas(); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.FadeInCanvas // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void WidgetAnimationEvt_FadeOutExitMenu_K2Node_WidgetAnimationEvent_2(); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.WidgetAnimationEvt_FadeOutExitMenu_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0x18b4070
	void StartFadeIn(); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.StartFadeIn // (Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void UpdateTime(); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.UpdateTime // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void StartFadeOutAnimation(); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.StartFadeOutAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnPlayerReviewClicked(); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.OnPlayerReviewClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnClickRequeue(); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.OnClickRequeue // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_PostMatchScreen_RequeueButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.BndEvt__TBP_UI_PostMatchScreen_RequeueButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_PostMatchScreen_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.BndEvt__TBP_UI_PostMatchScreen_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void OnCreatePlacementWidget(struct UTigerWidget* InWidgetClass); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.OnCreatePlacementWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnplayerDataUpdatedForRequeue_Event_1(); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.OnplayerDataUpdatedForRequeue_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ExecuteUbergraph_TBP_UI_PostMatchScreen(int32_t EntryPoint); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.ExecuteUbergraph_TBP_UI_PostMatchScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x18b4070
	void CancelSearch__DelegateSignature(); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.CancelSearch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void FoundMatch__DelegateSignature(); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.FoundMatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SearchElysium__DelegateSignature(); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.SearchElysium__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SearchMatch__DelegateSignature(); // Function TBP_UI_PostMatchScreen.TBP_UI_PostMatchScreen_C.SearchMatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
};

