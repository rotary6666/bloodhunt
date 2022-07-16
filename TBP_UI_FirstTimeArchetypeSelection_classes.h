// WidgetBlueprintGeneratedClass TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C
// Size: 0x548 (Inherited: 0x480)
struct UTBP_UI_FirstTimeArchetypeSelection_C : UTigerFirstTimeArchetypeSelectionUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)
	struct UTBP_UI_ArchetypeDescription_C* ArchetypeDescription; // 0x488(0x08)
	struct UTBP_UI_ConfirmMenu_C* ConfirmQuitPopup; // 0x490(0x08)
	struct UTBP_UI_InputMenuPrompt_C* ExitGameInputPrompt; // 0x498(0x08)
	struct UTBP_UI_HorizontalArchetypeSelector_Default_C* HorizontalArchetypeSelector; // 0x4a0(0x08)
	struct UTBP_UI_ConfirmMenu_C* JoinErrorMessage; // 0x4a8(0x08)
	struct UTBP_ArchetypeSelect_PowersWithVideoPreviews_C* TBP_ArchetypeSelect_PowersWithVideoPreviews; // 0x4b0(0x08)
	struct UTBP_ArchetypeSelect_SkillsSummary_C* TBP_ArchetypeSelect_SkillsSummary; // 0x4b8(0x08)
	struct UTBP_UI_Button_CTA_C* TBP_UI_Button_CTA; // 0x4c0(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* TBP_UI_InputPrompt_Gamepad; // 0x4c8(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* TBP_UI_InputPrompt_Keyboard; // 0x4d0(0x08)
	struct UTigerSafeZoneWidget* TigerSafeZoneWidget_1; // 0x4d8(0x08)
	struct FMulticastInlineDelegate EnterElysium; // 0x4e0(0x10)
	struct FMulticastInlineDelegate LoadTutorial; // 0x4f0(0x10)
	struct FText JoinElysiumErrorText; // 0x500(0x18)
	struct FName ShowCinematicActionName; // 0x518(0x08)
	bool bIsPlayingPowerVideo; // 0x520(0x01)
	char pad_521[0x7]; // 0x521(0x07)
	struct UTigerPowerKit* CurrentArchetypeData; // 0x528(0x08)
	struct UMaterialInstanceDynamic* ArchetypeSymbol_DynamicMaterial; // 0x530(0x08)
	struct TArray<struct AActor*> ArchetypeSymbol_BillboardActors; // 0x538(0x10)

	void UpdateInWorldArchetypeSymbol(struct UTigerPowerKit* InCurrentArchetypeData); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.UpdateInWorldArchetypeSymbol // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetMusicStateAndPostEvent(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.SetMusicStateAndPostEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.OnPreviewKeyDown // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	bool HasErrorString(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.HasErrorString // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x18b4070
	void SendCharacterChoiceToServer(struct FTigerPersistentCharacterID InSelectedCharacterId); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.SendCharacterChoiceToServer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void UpdateCharacter(struct UTigerPowerKit* InArchetypeData, struct FTigerCharacterAppearance& InCharacterApperance); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.UpdateCharacter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnGetUserPrivileges(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.OnGetUserPrivileges // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnGetValidGameVersionResult(enum class ETigerVersionIsValidResult Result); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.OnGetValidGameVersionResult // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnLegalDocumentAcceptanceResult(struct TArray<enum class ETigerLegalDocumentType>& InDocumentTypes); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.OnLegalDocumentAcceptanceResult // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void OnLoginFailed(struct FTigerLoginFailedInfo& InLoginFailedInfo); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.OnLoginFailed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void OnLoginSucceeded(struct TArray<struct FTigerPersistentPlayerCharacter>& AvailableCharacters); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.OnLoginSucceeded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void Construct(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void SelectedArchetypeChanged(struct UTigerPowerKit* InArchetypeData, struct FTigerCharacterAppearance InCharacterAppearance); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.SelectedArchetypeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Change Background(struct TSoftObjectPtr<UTigerPlayerClanData> PlayerClanPath, struct FTigerCharacterAppearance& InCharacterApperance); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.Change Background // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnStartGame(struct FTigerPersistentCharacterID InSelectedCharacterId); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.OnStartGame // (Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void OnCharacterSelected(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.OnCharacterSelected // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnCloseErrorMessage(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.OnCloseErrorMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnOutfitLoaded(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.OnOutfitLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__ConfirmQuitPopup_K2Node_ComponentBoundEvent_9_Confirm__DelegateSignature(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.BndEvt__ConfirmQuitPopup_K2Node_ComponentBoundEvent_9_Confirm__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__ConfirmQuitPopup_K2Node_ComponentBoundEvent_10_Decline__DelegateSignature(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.BndEvt__ConfirmQuitPopup_K2Node_ComponentBoundEvent_10_Decline__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void TryStartGame(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.TryStartGame // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__HorizontalArchetypeSelector_K2Node_ComponentBoundEvent_0_OnArchetypeSelected__DelegateSignature(struct UTigerPowerKit* InArchetypeData); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.BndEvt__HorizontalArchetypeSelector_K2Node_ComponentBoundEvent_0_OnArchetypeSelected__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void OnCreateCharacterResult(struct FTigerPersistentCharacterID& CharacterId, bool bWasCharacterCreated); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.OnCreateCharacterResult // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void OnInitialized(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_FirstTimeArchetypeSelection_ExitGameInputPrompt_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.BndEvt__TBP_UI_FirstTimeArchetypeSelection_ExitGameInputPrompt_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_FirstTimeArchetypeSelection_TBP_UI_Button_CTA_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.BndEvt__TBP_UI_FirstTimeArchetypeSelection_TBP_UI_Button_CTA_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void ShowQuitGamePopup(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.ShowQuitGamePopup // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_ElysiumChangeCharacter_TBP_ArchetypeSelect_SkillsSummary_K2Node_ComponentBoundEvent_2_Hovered_ClanPower__DelegateSignature(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.BndEvt__TBP_UI_ElysiumChangeCharacter_TBP_ArchetypeSelect_SkillsSummary_K2Node_ComponentBoundEvent_2_Hovered_ClanPower__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_ElysiumChangeCharacter_TBP_ArchetypeSelect_SkillsSummary_K2Node_ComponentBoundEvent_3_Hovered_PassivePower__DelegateSignature(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.BndEvt__TBP_UI_ElysiumChangeCharacter_TBP_ArchetypeSelect_SkillsSummary_K2Node_ComponentBoundEvent_3_Hovered_PassivePower__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_ElysiumChangeCharacter_TBP_ArchetypeSelect_SkillsSummary_K2Node_ComponentBoundEvent_4_Hovered_ArchetypePower__DelegateSignature(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.BndEvt__TBP_UI_ElysiumChangeCharacter_TBP_ArchetypeSelect_SkillsSummary_K2Node_ComponentBoundEvent_4_Hovered_ArchetypePower__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_ElysiumChangeCharacter_TBP_ArchetypeSelect_SkillsSummary_K2Node_ComponentBoundEvent_5_Hovered_PowerButtonCatcher__DelegateSignature(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.BndEvt__TBP_UI_ElysiumChangeCharacter_TBP_ArchetypeSelect_SkillsSummary_K2Node_ComponentBoundEvent_5_Hovered_PowerButtonCatcher__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_ElysiumChangeCharacter_TBP_ArchetypeSelect_SkillsSummary_K2Node_ComponentBoundEvent_6_UnHovered_PowerButtonCatcher__DelegateSignature(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.BndEvt__TBP_UI_ElysiumChangeCharacter_TBP_ArchetypeSelect_SkillsSummary_K2Node_ComponentBoundEvent_6_UnHovered_PowerButtonCatcher__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void ExecuteUbergraph_TBP_UI_FirstTimeArchetypeSelection(int32_t EntryPoint); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.ExecuteUbergraph_TBP_UI_FirstTimeArchetypeSelection // (Final|UbergraphFunction|HasDefaults) // @ game+0x18b4070
	void LoadTutorial__DelegateSignature(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.LoadTutorial__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void EnterElysium__DelegateSignature(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.EnterElysium__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
};

