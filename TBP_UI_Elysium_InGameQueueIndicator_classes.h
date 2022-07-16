// WidgetBlueprintGeneratedClass TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C
// Size: 0x4d0 (Inherited: 0x280)
struct UTBP_UI_Elysium_InGameQueueIndicator_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* DisplayNotReady; // 0x288(0x08)
	struct UWidgetAnimation* JoiningMatch; // 0x290(0x08)
	struct UWidgetAnimation* SwitchModeAnim; // 0x298(0x08)
	struct UImage* Arch_Bottom_Left; // 0x2a0(0x08)
	struct UImage* Arch_Bottom_Right; // 0x2a8(0x08)
	struct UImage* Arch_Top_Left; // 0x2b0(0x08)
	struct UImage* Arch_Top_Right; // 0x2b8(0x08)
	struct UImage* Arrow_Left; // 0x2c0(0x08)
	struct UImage* Arrow_Right; // 0x2c8(0x08)
	struct UImage* Arrow_Top; // 0x2d0(0x08)
	struct UImage* Diamond_Bottom_Left; // 0x2d8(0x08)
	struct UImage* Diamond_Bottom_Right; // 0x2e0(0x08)
	struct UImage* Diamond_Top_Left; // 0x2e8(0x08)
	struct UImage* Diamond_Top_Right; // 0x2f0(0x08)
	struct UTigerStyledRichTextBlock* GameModeName; // 0x2f8(0x08)
	struct UTigerStyledRichTextBlock* GameModeTextWidget; // 0x300(0x08)
	struct UImage* GroupImage; // 0x308(0x08)
	struct UImage* HorizLine_Left; // 0x310(0x08)
	struct UImage* HorizLine_Right; // 0x318(0x08)
	struct UImage* Horn_InnerLeft; // 0x320(0x08)
	struct UImage* Horn_InnerRight; // 0x328(0x08)
	struct UImage* Horn_OuterLeft; // 0x330(0x08)
	struct UImage* Horn_OuterRight; // 0x338(0x08)
	struct UImage* Horn_Top; // 0x340(0x08)
	struct UImage* Image_2; // 0x348(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* InputPrompt_Gamepad_GameMode; // 0x350(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* InputPrompt_Gamepad_Ready; // 0x358(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* InputPrompt_Keyboard_GameMode; // 0x360(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* InputPrompt_Keyboard_Ready; // 0x368(0x08)
	struct UHorizontalBox* MatchMakingContainer; // 0x370(0x08)
	struct UTigerStyledRichTextBlock* MatchMakingTextWidget; // 0x378(0x08)
	struct UImage* ModeIcon; // 0x380(0x08)
	struct UHorizontalBox* ReadyButtonContainer; // 0x388(0x08)
	struct UImage* SoloImage; // 0x390(0x08)
	struct UTBP_UI_TransitionMenuButton_C* StartGameUIButton; // 0x398(0x08)
	struct UWidgetSwitcher* StatusWidgetSwitcher; // 0x3a0(0x08)
	struct UOverlay* SwitchGameModeContainer; // 0x3a8(0x08)
	struct UTBP_UI_Elysium_QueueComponent_C* TBP_UI_Elysium_QueueComponent_C_4; // 0x3b0(0x08)
	struct UTBP_UI_Gradient_C* TBP_UI_Gradient; // 0x3b8(0x08)
	struct UTBP_UI_GroupNotReadyNotification_C* TBP_UI_GroupNotReadyNotification; // 0x3c0(0x08)
	struct UTBP_UI_MaskedCardBorder_C* TBP_UI_MaskedCardBorder_C_3; // 0x3c8(0x08)
	struct UTBP_UI_QueueIndicator_C* TBP_UI_QueueIndicator; // 0x3d0(0x08)
	struct UTigerSafeZoneWidget* TigerSafeZoneWidget_1; // 0x3d8(0x08)
	struct UTigerSafeZoneWidget* TigerSafeZoneWidget_2; // 0x3e0(0x08)
	struct UImage* VertLine_Left; // 0x3e8(0x08)
	struct UImage* VertLine_Middle; // 0x3f0(0x08)
	struct UImage* VertLine_Right; // 0x3f8(0x08)
	struct UImage* VertLine_Top; // 0x400(0x08)
	struct FText Config_ReadyText; // 0x408(0x18)
	struct FText Config_CancelText; // 0x420(0x18)
	struct FText Config_SoloMode; // 0x438(0x18)
	struct FText Config_GroupFillMode; // 0x450(0x18)
	bool bIsGroupMode; // 0x468(0x01)
	bool bIsMatchmaking; // 0x469(0x01)
	char pad_46A[0x6]; // 0x46a(0x06)
	struct ATigerElysiumPlayerState* ElysiumPlayerState; // 0x470(0x08)
	struct UTBP_TigerGameInstance_C* TigerGameInstance; // 0x478(0x08)
	struct UTBP_UI_MoviePlayer_C* MovieWidget; // 0x480(0x08)
	bool isGameModeSelectionOpen; // 0x488(0x01)
	char pad_489[0x7]; // 0x489(0x07)
	struct FString SelectedGameModeId; // 0x490(0x10)
	int32_t SelectedGameModeIndex; // 0x4a0(0x04)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct FText Config Leave Party Text; // 0x4a8(0x18)
	bool bCountdownStarted; // 0x4c0(0x01)
	bool bUsingNewQueueComponent; // 0x4c1(0x01)
	bool bWasGroupReady; // 0x4c2(0x01)
	char pad_4C3[0x5]; // 0x4c3(0x05)
	struct UTigerGrimoireEntry* Video Entry; // 0x4c8(0x08)

	void CloseAllMenus(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.CloseAllMenus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnTrainingVideoLoaded(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnTrainingVideoLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Is Group Leader(bool& bIsLeader); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.Is Group Leader // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Get Game Mode for Id(struct FString GAMEMODEID, struct FTigerGameModeDescriptor& GameModeDescriptor, int32_t& GameModeIndex, bool& bSuccess); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.Get Game Mode for Id // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Force Game Mode(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.Force Game Mode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void HandleSoloOrGroupGameActivityRequestedWhileStayingInElysium(enum class ETigerGameActivityType InGameActivityType); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.HandleSoloOrGroupGameActivityRequestedWhileStayingInElysium // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void UpdateMaxGroupSize(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.UpdateMaxGroupSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ShowTrainingVideo(struct UTigerGrimoireEntry* InGrimoireEntry); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.ShowTrainingVideo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void InitializeIsGroupMode(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.InitializeIsGroupMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetLastSelectedGroupingMode(bool IsGroup); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.SetLastSelectedGroupingMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Is Sole Member Of Group and Not in Party(bool& bOnlyGroupMemberAndNotInParty); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.Is Sole Member Of Group and Not in Party // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x18b4070
	void UpdateGroupLayout(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.UpdateGroupLayout // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void IsInGroup(bool& bIsInGroup); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.IsInGroup // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x18b4070
	bool IsFindingGameServer(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.IsFindingGameServer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x18b4070
	void Construct(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnReadyInput(bool bInForceReady); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnReadyInput // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetReadyButtonState(bool bInIsReady, bool bIsQuickAnimation); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.SetReadyButtonState // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnSwitchGameMode(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnSwitchGameMode // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnShowPlayerList(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnShowPlayerList // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnGroupChangedDelegate(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnGroupChangedDelegate // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnFindMatchFailed(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnFindMatchFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnValidTigerPlayerState(struct ATigerPlayerState* TigerPlayerState); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnValidTigerPlayerState // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnGroupReadyStateChanged(bool bInIsGroupReady); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnGroupReadyStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CancelMatchmaking(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.CancelMatchmaking // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnInitialized(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void DisableStartGameButton(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.DisableStartGameButton // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnTrainingVideoCompleted(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnTrainingVideoCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void HandleCountdownBegun(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.HandleCountdownBegun // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Destruct(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnMaxPartySizeUpdated(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnMaxPartySizeUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OpenGameModeSelection(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OpenGameModeSelection // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CloseGameModeSelection(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.CloseGameModeSelection // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnGameModeSelected(struct FString ChosenGameModeId); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnGameModeSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnSelectedGameModeChanged(struct FString InSelectedGameModeId); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnSelectedGameModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void UpdateGameModeData(struct FString GAMEMODEID); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.UpdateGameModeData // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnCountdownBegin(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnCountdownBegin // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ChooseQueueComponentToShow(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.ChooseQueueComponentToShow // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnPromptLeaveParty(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnPromptLeaveParty // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnJoinPrague(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnJoinPrague // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnGameModesUpdated(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnGameModesUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void PickAppropriateGameMode(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.PickAppropriateGameMode // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnDisplayNotReady(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnDisplayNotReady // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CheckGameActivity(); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.CheckGameActivity // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ExecuteUbergraph_TBP_UI_Elysium_InGameQueueIndicator(int32_t EntryPoint); // Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.ExecuteUbergraph_TBP_UI_Elysium_InGameQueueIndicator // (Final|UbergraphFunction|HasDefaults) // @ game+0x18b4070
};

