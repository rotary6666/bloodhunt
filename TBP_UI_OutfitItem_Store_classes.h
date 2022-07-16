// WidgetBlueprintGeneratedClass TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C
// Size: 0x439 (Inherited: 0x280)
struct UTBP_UI_OutfitItem_Store_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* OnUnhover; // 0x288(0x08)
	struct UWidgetAnimation* OnHover; // 0x290(0x08)
	struct UImage* BotGlow; // 0x298(0x08)
	struct UBorder* CardBorder; // 0x2a0(0x08)
	struct UTBP_UI_CurrencyText_C* CostWidget; // 0x2a8(0x08)
	struct UBorder* EquippedBorder; // 0x2b0(0x08)
	struct UButton* ImageButton; // 0x2b8(0x08)
	struct UWidgetSwitcher* ItemCostSwitcher; // 0x2c0(0x08)
	struct UTigerStyledRichTextBlock* ItemName_Store; // 0x2c8(0x08)
	struct UTigerStyledRichTextBlock* ItemType_Store; // 0x2d0(0x08)
	struct UTBP_UI_Tag_C* NewTag; // 0x2d8(0x08)
	struct UTigerStyledRichTextBlock* NewTagText; // 0x2e0(0x08)
	struct USizeBox* OutfitItem_SizeBox; // 0x2e8(0x08)
	struct UTBP_UI_Tag_C* OwnedTag; // 0x2f0(0x08)
	struct UTigerStyledRichTextBlock* OwnedTagText; // 0x2f8(0x08)
	struct UVerticalBox* StoreLayout; // 0x300(0x08)
	struct UTBP_UI_CommonItemCardBase_C* TBP_UI_CommonItemCard; // 0x308(0x08)
	struct UTBP_UI_InventoryClanBodyTypeIcons_C* TBP_UI_InventoryClanBodyTypeIcons_Store; // 0x310(0x08)
	struct UTBP_UI_MaskedCardBorder_C* TBP_UI_MaskedCardBorder_C_1; // 0x318(0x08)
	struct UTigerStyledRichTextBlock* Texbox_Free; // 0x320(0x08)
	struct UTigerStyledRichTextBlock* TimeLeftText; // 0x328(0x08)
	struct UOverlay* TimeLeftWidget; // 0x330(0x08)
	struct UImage* TopGlow; // 0x338(0x08)
	struct FTigerVendorStoreCategoryItem Item; // 0x340(0x98)
	struct TScriptInterface<ITBP_UI_OutfitItem_Store_Listener_C> ItemListener; // 0x3d8(0x10)
	bool bIsEquipped; // 0x3e8(0x01)
	bool bShowDurationLeft; // 0x3e9(0x01)
	bool Is_Owned; // 0x3ea(0x01)
	char pad_3EB[0x5]; // 0x3eb(0x05)
	struct FText Hair Color; // 0x3f0(0x18)
	struct FMulticastInlineDelegate On Hover; // 0x408(0x10)
	struct FMulticastInlineDelegate On Unhover; // 0x418(0x10)
	struct FMulticastInlineDelegate On Clicked; // 0x428(0x10)
	bool IsInWardrobe; // 0x438(0x01)

	void SelectImageVisible(); // Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.SelectImageVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ScaleItemSetup(); // Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.ScaleItemSetup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Get Time Left Text(struct FText& Text); // Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.Get Time Left Text // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x18b4070
	void UpdateOwnedWidget(); // Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.UpdateOwnedWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetItemAsOwned(bool bIsOwned); // Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.SetItemAsOwned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void DesaturateItem(); // Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.DesaturateItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetItemData(struct TSoftClassPtr<UObject>& ItemClassPath, struct UTigerInventoryItemBase* InBaseItem, int32_t Cost, int32_t InventoryCount, struct FTigerItemId InSoftCurrencyId); // Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.SetItemData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Is A Combined Item(struct UTigerInventoryItemBase* Target, bool& bSuccess); // Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.Is A Combined Item // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x18b4070
	void ChooseItem(struct UTigerInventoryItemBase* InItem, struct UTigerInventoryItemBase*& OutItem); // Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.ChooseItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ChooseItemTintToShow(struct UTigerInventoryItemBase* InItem, struct FLinearColor& TintColor); // Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.ChooseItemTintToShow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x18b4070
	void ChooseItemIconToShow(struct UTigerInventoryItemBase* InItem, struct TSoftObjectPtr<UTexture2D>& UITexture); // Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.ChooseItemIconToShow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	bool IsItemEquipped(struct TSoftClassPtr<UObject>& ItemClassPath); // Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.IsItemEquipped // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x18b4070
	void UpdateInventoryCount(int32_t InInventoryCount, bool bInIsEquipped, bool& bIsOwnedByPlayer); // Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.UpdateInventoryCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ChangeButtonTexture(struct UTexture2D* InTexture); // Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.ChangeButtonTexture // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetItem(struct UTexture2D* UITexture, struct FText UiName, int32_t Cost, int32_t InventoryCount, bool bInIsEquipped, struct FTigerItemId InSoftCurrencyId); // Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.SetItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnLoaded_D094DB7F4D02E37D41DF4B991A731F54(struct UObject* Loaded); // Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.OnLoaded_D094DB7F4D02E37D41DF4B991A731F54 // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void LoadItemTexture(); // Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.LoadItemTexture // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Update Item(); // Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.Update Item // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void PreviewItem(); // Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.PreviewItem // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Construct(); // Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void UpdateRarityAndClanIcon(struct UTigerInventoryItemBase* InItem); // Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.UpdateRarityAndClanIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Tick Entry Duration(); // Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.Tick Entry Duration // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Update Item Visuals(); // Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.Update Item Visuals // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ExecuteUbergraph_TBP_UI_OutfitItem_Store(int32_t EntryPoint); // Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.ExecuteUbergraph_TBP_UI_OutfitItem_Store // (Final|UbergraphFunction|HasDefaults) // @ game+0x18b4070
	void On Clicked__DelegateSignature(); // Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.On Clicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void On Unhover__DelegateSignature(); // Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.On Unhover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void On Hover__DelegateSignature(); // Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.On Hover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
};

