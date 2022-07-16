// WidgetBlueprintGeneratedClass TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C
// Size: 0x43f (Inherited: 0x298)
struct UTBP_UI_GameModeSelection_C : UTigerMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UWidgetAnimation* OnLeavePartyShow; // 0x2a0(0x08)
	struct UWidgetAnimation* FadeInBackground; // 0x2a8(0x08)
	struct UImage* BackgroundDimmer; // 0x2b0(0x08)
	struct UScaleBox* BackgroundScaleBox; // 0x2b8(0x08)
	struct UImage* BackgroundVideoWidget; // 0x2c0(0x08)
	struct UImage* Darkener; // 0x2c8(0x08)
	struct UImage* GamePadClickCatcher; // 0x2d0(0x08)
	struct UOverlay* LeavePartyOverlay; // 0x2d8(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* LeavePromptGamepad; // 0x2e0(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* LeavePromptKeyboard; // 0x2e8(0x08)
	struct UTBP_UI_InputMenuPrompt_C* MenuPromptBack; // 0x2f0(0x08)
	struct UOverlay* MoreInfoOverlay; // 0x2f8(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* MorePromptGamepad; // 0x300(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* MorePromptKeyboard; // 0x308(0x08)
	struct UTigerStyledRichTextBlock* NotTeamLeaderLabel; // 0x310(0x08)
	struct UTigerStyledRichTextBlock* QueueLabel; // 0x318(0x08)
	struct UTBP_UI_ElysiumHUD_Party_C* TBP_UI_ElysiumHUD_Party; // 0x320(0x08)
	struct UTBP_UI_GameMode_LeavePartyConfirm_C* TBP_UI_GameMode_LeavePartyConfirm; // 0x328(0x08)
	struct UTBP_UI_GameModeSelection_PartyContainer_C* TBP_UI_GameModeSelection_PartyContainer_C_3; // 0x330(0x08)
	struct UTBP_UI_Menu_Button_Prompt_Footer_C* TBP_UI_Menu_Button_Prompt_Footer; // 0x338(0x08)
	struct UTBP_UI_RankedScreen_C* TBP_UI_RankedScreen; // 0x340(0x08)
	struct UTBP_UI_Scrollbox_C* TBP_UI_Scrollbox; // 0x348(0x08)
	struct UTBP_UI_Scrollbox_Ornament_C* TBP_UI_Scrollbox_Ornament_C_18; // 0x350(0x08)
	struct UTigerSafeZoneWidget* TigerSafeZoneWidget_1; // 0x358(0x08)
	struct UTigerStyledRichTextBlock* TigerStyledRichTextBlock_1; // 0x360(0x08)
	struct UImage* Vein1; // 0x368(0x08)
	struct UImage* Vein2; // 0x370(0x08)
	struct UImage* Vein3; // 0x378(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_219; // 0x380(0x08)
	struct TArray<struct FTigerGameModeDescriptor> GameModes; // 0x388(0x10)
	int32_t CurrentSelectedGameMode; // 0x398(0x04)
	char pad_39C[0x4]; // 0x39c(0x04)
	struct TArray<struct UTBP_UI_GameModeCard_C*> GameModeWidgets; // 0x3a0(0x10)
	struct FMulticastInlineDelegate OnGameModeSelected; // 0x3b0(0x10)
	bool IsTeamLeader; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)
	struct FMulticastInlineDelegate OnGameModeDeselected; // 0x3c8(0x10)
	int32_t QueueTimeSeconds; // 0x3d8(0x04)
	char pad_3DC[0x4]; // 0x3dc(0x04)
	struct FTimerHandle TimerHandle; // 0x3e0(0x08)
	struct FMulticastInlineDelegate OnScreenClosed; // 0x3e8(0x10)
	struct FMulticastInlineDelegate OnMoreGameModeInfoOpen; // 0x3f8(0x10)
	struct FMulticastInlineDelegate OnQueueChanged; // 0x408(0x10)
	enum class ETigerMatchMode Match Mode; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
	struct FMulticastInlineDelegate OnShowRankedInfo; // 0x420(0x10)
	bool ShowingRankedInfoScreen; // 0x430(0x01)
	bool bIsInitialized; // 0x431(0x01)
	bool bHoveringRanked; // 0x432(0x01)
	char pad_433[0x1]; // 0x433(0x01)
	int32_t SelectedGameModeIndex; // 0x434(0x04)
	float ScrollboxPaddingTop; // 0x438(0x04)
	bool bShowLeaveConfirm; // 0x43c(0x01)
	bool bShouldStartQueue; // 0x43d(0x01)
	bool bHasRequestedClose; // 0x43e(0x01)

	void LockInHighlightedCard(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.LockInHighlightedCard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	struct FEventReply On_GamePadClickCatcher_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.On_GamePadClickCatcher_MouseButtonDown_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void GetGameModeCardAtIndex(int32_t InIndex, struct UTBP_UI_GameModeCard_C*& OutGameModeCard); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.GetGameModeCardAtIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void IsGroupLeader(bool& bIsGroupLeader); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.IsGroupLeader // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Get Game Mode for Id(struct FString GAMEMODEID, struct FTigerGameModeDescriptor& GameModeDescriptor); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.Get Game Mode for Id // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Is Sole Member Of Group and Not in Party(bool& bOnlyGroupMemberAndNotInParty); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.Is Sole Member Of Group and Not in Party // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void IsInGroup(bool& bIsInGroup); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.IsInGroup // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Construct(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void GameModeSelected(int32_t SelectedGameMode); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.GameModeSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ClearGameModeSelection(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.ClearGameModeSelection // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void UpdateGameModeWidgetsAndPartyContainer(struct FTigerPartyId& InPartyId, struct FString InDepartingPlayerId); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.UpdateGameModeWidgetsAndPartyContainer // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnPartyUpdate(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnPartyUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void PlayFadeAnimOnVisibility(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.PlayFadeAnimOnVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void UpdateFunctionalityOnLeaderChange(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.UpdateFunctionalityOnLeaderChange // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void StartQueueTimer(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.StartQueueTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void UpdateQueueLabel(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.UpdateQueueLabel // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void StopQueueTimer(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.StopQueueTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnFindingMatchFailed(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnFindingMatchFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void LeaveParty(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.LeaveParty // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OpenSocialMenu(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OpenSocialMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CheckAvailability(struct FTigerGameModeDescriptor GameModeDescriptor, struct UTBP_UI_GameModeCard_C* GameModeCardWidget); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.CheckAvailability // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnRankedShow(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnRankedShow // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnCloseMenu(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnCloseMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void HideRankedMenu(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.HideRankedMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_GameModeSelection_MenuPromptBack_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.BndEvt__TBP_UI_GameModeSelection_MenuPromptBack_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void OnGameModeSelectedChanged(struct FString InSelectedGameModeId); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnGameModeSelectedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnOpen(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnOpen // (Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void OnClose(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnClose // (Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void CreateListens(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.CreateListens // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void StopListens(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.StopListens // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void HighlightNextGameMode(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.HighlightNextGameMode // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void DeHighlightGameMode(int32_t InIndex); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.DeHighlightGameMode // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void HighlightGameMode(int32_t InIndex); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.HighlightGameMode // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void HighlightPreviousGameMode(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.HighlightPreviousGameMode // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Gamepad_LockInGameMode(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.Gamepad_LockInGameMode // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void InitLastPlayedHighlight(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.InitLastPlayedHighlight // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnReadyInputAction(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnReadyInputAction // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnQeueueChanged2(bool bInIsGroupReady); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnQeueueChanged2 // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OpenLeaveConfirm(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OpenLeaveConfirm // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnLeavePartyUserChoice(bool bUserConfirmed); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnLeavePartyUserChoice // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void UpdateScrollOffset(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.UpdateScrollOffset // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Gamepad_ActivateGameMode(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.Gamepad_ActivateGameMode // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnGameModesUpdated(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnGameModesUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void InitializePlayerInformation(struct ATigerPlayerController* PlayerController); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.InitializePlayerInformation // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void InitializeRankScreens(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.InitializeRankScreens // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ExecuteInitializeRankScrens(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.ExecuteInitializeRankScrens // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ReCreateGameModeCards(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.ReCreateGameModeCards // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetupForParty(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.SetupForParty // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnGameModeCardHover(int32_t InIndex); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnGameModeCardHover // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnGameModeCardClicked(int32_t InClickedIndex); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnGameModeCardClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetGameModeCardButtonsEnabled(bool bInEnabled); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.SetGameModeCardButtonsEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ExecuteUbergraph_TBP_UI_GameModeSelection(int32_t EntryPoint); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.ExecuteUbergraph_TBP_UI_GameModeSelection // (Final|UbergraphFunction|HasDefaults) // @ game+0x18b4070
	void OnShowRankedInfo__DelegateSignature(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnShowRankedInfo__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnQueueChanged__DelegateSignature(bool NewReady); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnQueueChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnMoreGameModeInfoOpen__DelegateSignature(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnMoreGameModeInfoOpen__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnScreenClosed__DelegateSignature(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnScreenClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnGameModeDeselected__DelegateSignature(); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnGameModeDeselected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnGameModeSelected__DelegateSignature(struct FString ChosenGameModeId); // Function TBP_UI_GameModeSelection.TBP_UI_GameModeSelection_C.OnGameModeSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
};

