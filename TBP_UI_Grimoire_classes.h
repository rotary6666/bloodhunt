// WidgetBlueprintGeneratedClass TBP_UI_Grimoire.TBP_UI_Grimoire_C
// Size: 0x588 (Inherited: 0x418)
struct UTBP_UI_Grimoire_C : UTigerGrimoireUi {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x08)
	struct UWidgetAnimation* ShowScrollPrompt; // 0x420(0x08)
	struct UWidgetAnimation* InteractAnim; // 0x428(0x08)
	struct UTBP_UI_Grimoire_Background_C* BackgroundImage; // 0x430(0x08)
	struct UTBP_UI_Grimoire_CategoryBox_C* CategoryBox; // 0x438(0x08)
	struct UTBP_UI_Menu_Button_Prompt_Footer_C* Footer; // 0x440(0x08)
	struct UTBP_UI_Grimoire_ImageBox_C* ImageBox; // 0x448(0x08)
	struct UTBP_UI_Grimoire_InfoBox_C* InfoBox; // 0x450(0x08)
	struct UTBP_UI_InputMenuPrompt_C* InputPrompt_Back; // 0x458(0x08)
	struct UTBP_UI_InputMenuPrompt_C* InputPrompt_Close; // 0x460(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* InputPrompt_GameMenu_Gamepad; // 0x468(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* InputPrompt_Gamepad_Select; // 0x470(0x08)
	struct UTBP_UI_InputMenuPrompt_C* InputPrompt_HideMenu; // 0x478(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* InputPrompt_Interact_GameMenu_Gamepad; // 0x480(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* InputPrompt_Keyboard_Select; // 0x488(0x08)
	struct UOverlay* InputPrompt_Rotate; // 0x490(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* InputPrompt_Rotate_GamePad; // 0x498(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* InputPrompt_Rotate_Keyboard; // 0x4a0(0x08)
	struct UTBP_UI_Menu_Button_Prompt_Footer_C* InteractedFooter; // 0x4a8(0x08)
	struct UTBP_UI_Grimoire_Landing_C* LandingView; // 0x4b0(0x08)
	struct UTBP_UI_Grimoire_RootCategoryMenu_C* RootCategoryMenu; // 0x4b8(0x08)
	struct UTBP_UI_InputMenuPrompt_C* ShowMenuButton; // 0x4c0(0x08)
	struct UTBP_UI_Submenu_Header_C* TBP_UI_Submenu_Header; // 0x4c8(0x08)
	struct UTBP_UI_VideoPlayer_C* VideoBox; // 0x4d0(0x08)
	struct UTigerGrimoireCategory* SelectedCategory; // 0x4d8(0x08)
	float UnlockedRootCategoryPercentage; // 0x4e0(0x04)
	bool bMenusHidden; // 0x4e4(0x01)
	char pad_4E5[0x3]; // 0x4e5(0x03)
	struct UTigerGrimoireTree* GrimoireTree; // 0x4e8(0x08)
	struct UTBP_UI_Grimoire_CategoryButton_C* SelectedButton; // 0x4f0(0x08)
	struct UTigerGrimoireCategory* DefaultOpenedCategory; // 0x4f8(0x08)
	bool Scrollable; // 0x500(0x01)
	bool bIsDisplayItemRotatable; // 0x501(0x01)
	char pad_502[0x2]; // 0x502(0x02)
	float ItemRotationSpeed; // 0x504(0x04)
	struct FName ViewName; // 0x508(0x08)
	struct ATBP_Grimoire_Card_C* GrimCard; // 0x510(0x08)
	struct ATBP_Grimoire_ModelViewerItem_C* GrimModel; // 0x518(0x08)
	bool bGrimCardShown; // 0x520(0x01)
	bool bGrimModelShown; // 0x521(0x01)
	enum class ETigerGrimoireEntryMediaDisplayMode LastEntryMediaShown; // 0x522(0x01)
	bool bFailedToShowEntryMedia; // 0x523(0x01)
	bool bGrimoirePropExamined; // 0x524(0x01)
	char pad_525[0x3]; // 0x525(0x03)
	struct FString JumpEntryId; // 0x528(0x10)
	bool bIsMenuTransitioning; // 0x538(0x01)
	bool bHasTransitionedToShow; // 0x539(0x01)
	bool IsRightMouseDown; // 0x53a(0x01)
	char pad_53B[0x1]; // 0x53b(0x01)
	float CurrentZoomLevel; // 0x53c(0x04)
	struct ACineCameraActor* CloseViewerCameraActor; // 0x540(0x08)
	struct ACineCameraActor* ViewerCameraActor; // 0x548(0x08)
	float UnFocusedScreenSize; // 0x550(0x04)
	float FocusedScreenSize; // 0x554(0x04)
	int32_t OldTemporalAASampleCount; // 0x558(0x04)
	bool bRootMenuChanged; // 0x55c(0x01)
	char pad_55D[0x3]; // 0x55d(0x03)
	float MinMouseMove; // 0x560(0x04)
	float MaxMouseMove; // 0x564(0x04)
	bool bHasBeenOpenedBefore; // 0x568(0x01)
	char pad_569[0x3]; // 0x569(0x03)
	struct FRotator ItemRotationTransform; // 0x56c(0x0c)
	float ItemRotationSmoothing; // 0x578(0x04)
	char pad_57C[0x4]; // 0x57c(0x04)
	struct UTigerGrimoireEntry* CurrentVideoEntry; // 0x580(0x08)

	void SequenceEvent__ENTRYPOINTTBP_UI_Grimoire_2(struct UTBP_UI_Menu_Button_Prompt_Footer_C* InteractedFooter); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SequenceEvent__ENTRYPOINTTBP_UI_Grimoire_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SequenceEvent__ENTRYPOINTTBP_UI_Grimoire_1(struct UTBP_UI_Menu_Button_Prompt_Footer_C* InteractedFooter); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SequenceEvent__ENTRYPOINTTBP_UI_Grimoire_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnVideoLoaded(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnVideoLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ShowVideo(struct UTigerGrimoireEntry* Selected Entry); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ShowVideo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void RefreshVideoMedia(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.RefreshVideoMedia // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void NormaliseMouseAxis(float InAxis, float& OutAxis); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.NormaliseMouseAxis // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void NormaliseMouseDelta(struct FVector2D InDelta, struct FVector2D& OutDelta); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.NormaliseMouseDelta // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void RefreshScrollPrompt(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.RefreshScrollPrompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ApplyMeshScaling(bool IsFocused); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ApplyMeshScaling // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ResetGrimoireDisplayItems(float InDeltaTime); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ResetGrimoireDisplayItems // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ForwardInputToCategoryMenu(int32_t InDirection); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ForwardInputToCategoryMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void GrimoirePropJumpToEntry(struct FString InEntryId); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.GrimoirePropJumpToEntry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void HideGrimoireDisplayItems(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.HideGrimoireDisplayItems // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void RotateGrimoireDisplayItem(float InDeltaTime); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.RotateGrimoireDisplayItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetInteractionButtonVisiblity(bool bVisible); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SetInteractionButtonVisiblity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ClearContent(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ClearContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SelectMenuOnClickCategoryButton(struct UTBP_UI_Grimoire_CategoryButton_C* CategoryButton); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SelectMenuOnClickCategoryButton // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SelectMenuOnClickEntryButton(struct UTBP_UI_Grimoire_CategoryButton_C* EntryButton); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SelectMenuOnClickEntryButton // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void MenuAnimHide(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.MenuAnimHide // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void MenuAnimShow(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.MenuAnimShow // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ToggleMenusHidden(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ToggleMenusHidden // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnClose(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnClose // (Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void OnInitialized(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void JumpToCategory(struct UTigerGrimoireCategory* InCategory); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.JumpToCategory // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void JumpToSubCategory(struct UTigerGrimoireCategory* InSubCategory); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.JumpToSubCategory // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void JumpToEntry(struct FString InEntryId); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.JumpToEntry // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SelectMenuOnClick(struct UTigerGrimoireCategory* SelectedCategory); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SelectMenuOnClick // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnOpen(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnOpen // (Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnInputPressed__DelegateSignature(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnInputPressed__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__Interact_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.BndEvt__Interact_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__ShowMenuButton_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.BndEvt__ShowMenuButton_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnBackgroundSceneShown(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnBackgroundSceneShown // (Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void MenuUpPressed(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.MenuUpPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void MenuDownPressed(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.MenuDownPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnRotateButtonPressed(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnRotateButtonPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnRotateButtonUp(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnRotateButtonUp // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void On Language Settings Changed(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.On Language Settings Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void InteractedFooterAnimationStart(struct UTBP_UI_Menu_Button_Prompt_Footer_C* InteractedFooter); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.InteractedFooterAnimationStart // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void InteractedFooterAnimationEnd(struct UTBP_UI_Menu_Button_Prompt_Footer_C* InteractedFooter); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.InteractedFooterAnimationEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void RegisterSharedInputs(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.RegisterSharedInputs // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void UnregisterSharedInputs(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.UnregisterSharedInputs // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_Grimoire_ShowMenuButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.BndEvt__TBP_UI_Grimoire_ShowMenuButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_Grimoire_InputPrompt_HideMenu_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.BndEvt__TBP_UI_Grimoire_InputPrompt_HideMenu_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_Grimoire_InputPrompt_Close_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.BndEvt__TBP_UI_Grimoire_InputPrompt_Close_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_Grimoire_InputPrompt_Close_1_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.BndEvt__TBP_UI_Grimoire_InputPrompt_Close_1_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void ExecuteUbergraph_TBP_UI_Grimoire(int32_t EntryPoint); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ExecuteUbergraph_TBP_UI_Grimoire // (Final|UbergraphFunction|HasDefaults) // @ game+0x18b4070
};

