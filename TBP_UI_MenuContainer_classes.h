// WidgetBlueprintGeneratedClass TBP_UI_MenuContainer.TBP_UI_MenuContainer_C
// Size: 0x392 (Inherited: 0x2d0)
struct UTBP_UI_MenuContainer_C : UTigerIngameMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UWidgetAnimation* ModalView_Anim; // 0x2d8(0x08)
	struct UBackgroundBlur* BackgroundBlur_268; // 0x2e0(0x08)
	struct UCanvasPanel* ContentCanvas; // 0x2e8(0x08)
	struct UButton* CurrencyButton; // 0x2f0(0x08)
	struct UTigerStyledRichTextBlock* GroupNumberText; // 0x2f8(0x08)
	struct UCanvasPanel* HeaderCanvas; // 0x300(0x08)
	struct UImage* IsReadyLines; // 0x308(0x08)
	struct UOverlay* IsReadyOverlay; // 0x310(0x08)
	struct UCanvasPanel* LeftDivider; // 0x318(0x08)
	struct UHorizontalBox* MenuItems; // 0x320(0x08)
	struct UTBP_UI_CurrentHardCurrencyText_C* PlayerCurrencyWidget; // 0x328(0x08)
	struct UCanvasPanel* PopUpCanvas; // 0x330(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider; // 0x338(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* TBP_UI_InputPrompt_Gamepad; // 0x340(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* TBP_UI_InputPrompt_Gamepad_216; // 0x348(0x08)
	struct UTBP_UI_MaskedCardBorder_C* TBP_UI_MaskedCardBorder_C_1; // 0x350(0x08)
	struct UTBP_UI_MenuTransition_C* TBP_UI_MenuTransition; // 0x358(0x08)
	struct UTBP_UI_PremiumCurrencyPopUp_C* TBP_UI_PremiumCurrencyPopUp; // 0x360(0x08)
	struct UImage* TemporaryBackground; // 0x368(0x08)
	struct UTigerSafeZoneWidget* TigerSafeZoneWidget_1; // 0x370(0x08)
	bool bHasLocalPlayerSpawned; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct TArray<struct UTBP_UI_IngameMenuButton_C*> MenuButtons; // 0x380(0x10)
	bool bOverrideAllowMouseButtons; // 0x390(0x01)
	bool bIsHeaderShowing; // 0x391(0x01)

	void HideTempBackground(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.HideTempBackground // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ShowHeader(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.ShowHeader // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void HideHeader(bool Blur); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.HideHeader // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ShowTemporaryBackground(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.ShowTemporaryBackground // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnPartyUpdate(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnPartyUpdate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnCurrencyButtonReleased(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnCurrencyButtonReleased // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ClosePremiumCurrencyPopUpMenu(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.ClosePremiumCurrencyPopUpMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OpenPremiumCurrencyPopUpMenu(struct FText InItemName, int32_t InCost, struct UTBP_UI_PremiumCurrencyPopUp_C*& OpenedPopUpMenu); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OpenPremiumCurrencyPopUpMenu // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void HasValidString(struct FText InText, bool& HasValidString); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.HasValidString // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OpenSubMenuForActiveIndex(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OpenSubMenuForActiveIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetupButtons(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.SetupButtons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void IncrementActiveMenuIndex(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.IncrementActiveMenuIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void DecrementActiveMenuIndex(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.DecrementActiveMenuIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OpenSystem(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OpenSystem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CreateMenu(struct UTigerIngameSubmenuWidget* SubMenuClass); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.CreateMenu // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent& InMouseEvent); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnMouseButtonDoubleClick // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void InitializeMenus(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.InitializeMenus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SelectMenuToTheRight(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.SelectMenuToTheRight // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SelectMenuToTheLeft(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.SelectMenuToTheLeft // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnOpen(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnOpen // (Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void OnClose(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnClose // (Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void LocalPlayerSpawned(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.LocalPlayerSpawned // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void ConstructSubMenusIfNotConstructed(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.ConstructSubMenusIfNotConstructed // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnInitialized(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void SelectMenuOnClick(struct UTigerIngameSubmenuWidget* SubmenuWidget); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.SelectMenuOnClick // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Construct(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void ToggleUIVisibility(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.ToggleUIVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnMenuSelected(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnMenuSelected // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void PartyUpdate(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.PartyUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void PartyUpdate2(struct FTigerPartyId& InPartyId, struct FString InJoiningPlayerId); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.PartyUpdate2 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_MenuContainer_CurrencyButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.BndEvt__TBP_UI_MenuContainer_CurrencyButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void OnPerformClickTransition(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnPerformClickTransition // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnPerformTabTransition(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnPerformTabTransition // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void HideFadeBackground(); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.HideFadeBackground // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void ExecuteUbergraph_TBP_UI_MenuContainer(int32_t EntryPoint); // Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.ExecuteUbergraph_TBP_UI_MenuContainer // (Final|UbergraphFunction|HasDefaults) // @ game+0x18b4070
};

