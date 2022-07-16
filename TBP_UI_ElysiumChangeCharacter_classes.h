// WidgetBlueprintGeneratedClass TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C
// Size: 0x4a8 (Inherited: 0x3e0)
struct UTBP_UI_ElysiumChangeCharacter_C : UTigerArchetypeSelectElysiumUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UCanvasPanel* ArchetypeSelect_Menu; // 0x3e8(0x08)
	struct UTBP_UI_CharacterSkin_Elysium_C* CharacterSkin_1; // 0x3f0(0x08)
	struct UTBP_UI_InputPromptCombined_C* Close_Prompt; // 0x3f8(0x08)
	struct UTBP_UI_HorizontalArchetypeSelector_Default_C* HorizontalArchetypeSelector; // 0x400(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* InputPrompt_GameMenu_Gamepad; // 0x408(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* InputPrompt_Select_Gamepad; // 0x410(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* InputPrompt_Select_Keyboard; // 0x418(0x08)
	struct UWidgetSwitcher* MenuSwitcher; // 0x420(0x08)
	struct UImage* PaperdollBackground; // 0x428(0x08)
	struct UTBP_ArchetypeSelect_PowersWithVideoPreviews_C* TBP_ArchetypeSelect_PowersWithVideoPreviews; // 0x430(0x08)
	struct UTBP_ArchetypeSelect_SkillsSummary_C* TBP_ArchetypeSelect_SkillsSummary; // 0x438(0x08)
	struct UTBP_UI_ArchetypeDescription_C* TBP_UI_ArchetypeDescription; // 0x440(0x08)
	struct UTBP_UI_ArchetypePerk_Menu_C* TBP_UI_ArchetypePerk_Menu; // 0x448(0x08)
	struct UTBP_UI_ArchetypePerk_Preview_C* TBP_UI_ArchetypePerk_Preview; // 0x450(0x08)
	struct UTigerPowerKit* CurrentArchetypeData; // 0x458(0x08)
	enum class E_ElysiumChangeCharacterState CurrentUiState; // 0x460(0x01)
	bool bIsPlayingPowerVideo; // 0x461(0x01)
	bool bHasValidCharacterForArchetype; // 0x462(0x01)
	char pad_463[0x5]; // 0x463(0x05)
	struct TArray<int32_t> Archetype Character Indices; // 0x468(0x10)
	struct UTBP_UI_CharacterSkin_Elysium_C* PendingCreateCharacterWidget; // 0x478(0x08)
	struct FVector Original Location; // 0x480(0x0c)
	int32_t OldTemporalAASampleCount; // 0x48c(0x04)
	struct UMaterialInstanceDynamic* ArchetypeSymbol_DynamicMaterial; // 0x490(0x08)
	struct TArray<struct AActor*> ArchetypeSymbol_BillboardActors; // 0x498(0x10)

	void UpdateInWorldArchetypeSymbol(struct UTigerPowerKit* InCurrentArchetypeData); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.UpdateInWorldArchetypeSymbol // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ShowPerkView(enum class ETigerPowerKitType InArchetypeType); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ShowPerkView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void HidePerkView(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.HidePerkView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void AddTaggedActorsToCaptureComponent(bool& bUseCaptureComponent); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.AddTaggedActorsToCaptureComponent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ResetSlotStates(struct TArray<int32_t>& inArray); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ResetSlotStates // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SelectOrCreateCharacter(struct FTigerPersistentPlayerCharacter& InPlayerCharacter); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.SelectOrCreateCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnCharacterSelected(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnCharacterSelected // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnGetUserPrivileges(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnGetUserPrivileges // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnGetValidGameVersionResult(enum class ETigerVersionIsValidResult Result); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnGetValidGameVersionResult // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnLegalDocumentAcceptanceResult(struct TArray<enum class ETigerLegalDocumentType>& InDocumentTypes); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnLegalDocumentAcceptanceResult // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void OnLoginFailed(struct FTigerLoginFailedInfo& InLoginFailedInfo); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnLoginFailed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void OnLoginSucceeded(struct TArray<struct FTigerPersistentPlayerCharacter>& AvailableCharacters); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnLoginSucceeded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_HorizontalArchetypeSelector_Default_K2Node_ComponentBoundEvent_0_OnArchetypeSelected__DelegateSignature(struct UTigerPowerKit* InArchetypeData); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__TBP_UI_HorizontalArchetypeSelector_Default_K2Node_ComponentBoundEvent_0_OnArchetypeSelected__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void OnCreateCharacterResult(struct FTigerPersistentCharacterID& CharacterId, bool bWasCharacterCreated); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnCreateCharacterResult // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void OnArchetypeChanged(struct UTigerPowerKit* InArchetypeData, struct TArray<int32_t>& InPlayerArchetypeCharacterIndices); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnArchetypeChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void OnClose(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnClose // (Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void Create Character On Existing Slot(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Create Character On Existing Slot // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnOpen(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnOpen // (Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void Construct(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnBackgroundSceneShown(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnBackgroundSceneShown // (Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void HidePerkSelectionMenu(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.HidePerkSelectionMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void BlockerListenForInput(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BlockerListenForInput // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_ElysiumChangeCharacter_TBP_UI_InputPromptCombined_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__TBP_UI_ElysiumChangeCharacter_TBP_UI_InputPromptCombined_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_ElysiumChangeCharacter_TBP_UI_ArchetypePerk_Preview_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__TBP_UI_ElysiumChangeCharacter_TBP_UI_ArchetypePerk_Preview_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void OnSelectedPerkChanged(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.OnSelectedPerkChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_ElysiumChangeCharacter_TBP_ArchetypeSelect_SkillsSummary_K2Node_ComponentBoundEvent_2_Hovered_ClanPower__DelegateSignature(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__TBP_UI_ElysiumChangeCharacter_TBP_ArchetypeSelect_SkillsSummary_K2Node_ComponentBoundEvent_2_Hovered_ClanPower__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_ElysiumChangeCharacter_TBP_ArchetypeSelect_SkillsSummary_K2Node_ComponentBoundEvent_3_Hovered_PassivePower__DelegateSignature(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__TBP_UI_ElysiumChangeCharacter_TBP_ArchetypeSelect_SkillsSummary_K2Node_ComponentBoundEvent_3_Hovered_PassivePower__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_ElysiumChangeCharacter_TBP_ArchetypeSelect_SkillsSummary_K2Node_ComponentBoundEvent_4_Hovered_ArchetypePower__DelegateSignature(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__TBP_UI_ElysiumChangeCharacter_TBP_ArchetypeSelect_SkillsSummary_K2Node_ComponentBoundEvent_4_Hovered_ArchetypePower__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_ElysiumChangeCharacter_TBP_ArchetypeSelect_SkillsSummary_K2Node_ComponentBoundEvent_5_Hovered_PowerButtonCatcher__DelegateSignature(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__TBP_UI_ElysiumChangeCharacter_TBP_ArchetypeSelect_SkillsSummary_K2Node_ComponentBoundEvent_5_Hovered_PowerButtonCatcher__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_ElysiumChangeCharacter_TBP_ArchetypeSelect_SkillsSummary_K2Node_ComponentBoundEvent_6_UnHovered_PowerButtonCatcher__DelegateSignature(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.BndEvt__TBP_UI_ElysiumChangeCharacter_TBP_ArchetypeSelect_SkillsSummary_K2Node_ComponentBoundEvent_6_UnHovered_PowerButtonCatcher__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void RetryLoadBillboardActor(); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.RetryLoadBillboardActor // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ExecuteUbergraph_TBP_UI_ElysiumChangeCharacter(int32_t EntryPoint); // Function TBP_UI_ElysiumChangeCharacter.TBP_UI_ElysiumChangeCharacter_C.ExecuteUbergraph_TBP_UI_ElysiumChangeCharacter // (Final|UbergraphFunction|HasDefaults) // @ game+0x18b4070
};

