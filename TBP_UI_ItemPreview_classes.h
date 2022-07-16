// WidgetBlueprintGeneratedClass TBP_UI_ItemPreview.TBP_UI_ItemPreview_C
// Size: 0x694 (Inherited: 0x3c0)
struct UTBP_UI_ItemPreview_C : UTigerSceneBackgroundUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c0(0x08)
	struct UWidgetAnimation* BlackFadeIn; // 0x3c8(0x08)
	struct UImage* 2DAssetPreview; // 0x3d0(0x08)
	struct UTigerStyledRichTextBlock* AlreadyOwnedText; // 0x3d8(0x08)
	struct UImage* BlackBG; // 0x3e0(0x08)
	struct UTBP_UI_MenuButton_C* BuyButton; // 0x3e8(0x08)
	struct UTBP_UI_CurrencyText_C* CostWidget; // 0x3f0(0x08)
	struct UTigerStyledRichTextBlock* Description; // 0x3f8(0x08)
	struct UTigerStyledRichTextBlock* ExpiresInDuration; // 0x400(0x08)
	struct UTigerStyledRichTextBlock* FreeText; // 0x408(0x08)
	struct UVerticalBox* ItemAvailability; // 0x410(0x08)
	struct UTigerStyledRichTextBlock* ItemName; // 0x418(0x08)
	struct UTigerStyledRichTextBlock* ItemType; // 0x420(0x08)
	struct UImage* OverrideInputCatcher; // 0x428(0x08)
	struct UImage* RarityGlow; // 0x430(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider; // 0x438(0x08)
	struct UTBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C* TBP_UI_InventoryClanBodyTypeIcons_ItemPreview; // 0x440(0x08)
	struct UHorizontalBox* TimeRemainingVerticalBox; // 0x448(0x08)
	struct UTBP_UI_BuyItemsOverlay_C* OverlayUI; // 0x450(0x08)
	struct FTigerVendorStoreCategoryItem ItemToPreview; // 0x458(0x98)
	struct FMulticastInlineDelegate OnConfirmBuy; // 0x4f0(0x10)
	struct FMulticastInlineDelegate OnCancelBuy; // 0x500(0x10)
	struct ACineCameraActor* Close Camera; // 0x510(0x08)
	struct FVector Close Camera Location; // 0x518(0x0c)
	char pad_524[0x4]; // 0x524(0x04)
	struct FCameraFocusSettings Close Camera Focus Settings; // 0x528(0x58)
	struct ACineCameraActor* Camera Item Preview; // 0x580(0x08)
	struct FVector Camera ItemPreview Location; // 0x588(0x0c)
	char pad_594[0x4]; // 0x594(0x04)
	struct FCameraFocusSettings Default Focus Settings; // 0x598(0x58)
	struct ACineCameraActor* Camera Default; // 0x5f0(0x08)
	struct FVector Camera Default Original Location; // 0x5f8(0x0c)
	float MouseZoomLevel; // 0x604(0x04)
	float ZoomLevel; // 0x608(0x04)
	bool Pan Button is Down; // 0x60c(0x01)
	char pad_60D[0x3]; // 0x60d(0x03)
	float Pan Distance to move; // 0x610(0x04)
	float Cursor Y Position on Click; // 0x614(0x04)
	float Target Pan Camera Position; // 0x618(0x04)
	float Cursor Y Delta; // 0x61c(0x04)
	float Saved Camera Pan Position; // 0x620(0x04)
	bool IntroCameraActive; // 0x624(0x01)
	char pad_625[0x3]; // 0x625(0x03)
	struct ATBP_PaperDoll_C* StorePaperdoll; // 0x628(0x08)
	float Paperdoll Target Rotation; // 0x630(0x04)
	float Cursor X Position on Click; // 0x634(0x04)
	struct FRotator Original Paperdoll Rotation; // 0x638(0x0c)
	float Rotation Distance To Move; // 0x644(0x04)
	float Saved Rotation Distance; // 0x648(0x04)
	struct FVector2D Max Pan Ranges; // 0x64c(0x08)
	bool Is Previewing Store; // 0x654(0x01)
	char pad_655[0x3]; // 0x655(0x03)
	struct ATBP_RewardPreview_Outfit_C* Battlepass Paperdoll; // 0x658(0x08)
	float Camera Target X on Zoom; // 0x660(0x04)
	bool bIsItemOwned; // 0x664(0x01)
	bool IsPlayerCardAsset; // 0x665(0x01)
	char pad_666[0x2]; // 0x666(0x02)
	struct UTigerInventoryItemBase* InItem; // 0x668(0x08)
	enum class ETigerPersistentStoreCategory CurrentDisplayedItem; // 0x670(0x01)
	char pad_671[0x3]; // 0x671(0x03)
	struct FName BattlePassSLName; // 0x674(0x08)
	enum class ETigerPersistentStoreCategory LastFrameDisplayedType; // 0x67c(0x01)
	bool IsUsingGamepad; // 0x67d(0x01)
	char pad_67E[0x2]; // 0x67e(0x02)
	float RS Axis Y; // 0x680(0x04)
	float RS Axis X; // 0x684(0x04)
	bool SetupCompleted; // 0x688(0x01)
	char pad_689[0x3]; // 0x689(0x03)
	float GamepadTriggerTotal; // 0x68c(0x04)
	float Triggers Axis; // 0x690(0x04)

	void SetIsFree(bool bIsFree); // Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.SetIsFree // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void IsPopupOpen(bool& bIsOpen); // Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.IsPopupOpen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x18b4070
	void Set Store Timer if Available(); // Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Set Store Timer if Available // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetStoreTimeLeft(); // Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.SetStoreTimeLeft // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Update BuyButton Visibility(); // Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Update BuyButton Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OpenCurrencyPopUpMenu(); // Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OpenCurrencyPopUpMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetUp Buy Button(); // Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.SetUp Buy Button // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	bool CanAffordItem(); // Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.CanAffordItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x18b4070
	void Reset Camera Offsets(); // Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Reset Camera Offsets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnMouseMove // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnMouseWheel // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetItemDescription(struct UTigerInventoryItemBase* In Item); // Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.SetItemDescription // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ProcessBuyItemResponse(struct FText InErrorMessage, bool bSuccessfulBuy, bool& WasPurchaseSuccessful); // Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.ProcessBuyItemResponse // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Setup Item Preview Page(struct FTigerVendorStoreCategoryItem Selected Item, bool bIsOwned); // Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Setup Item Preview Page // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnBuyConfirm(struct FTigerMetaStoreEntry StoreEntryToBuy, bool bEquipItem); // Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnBuyConfirm // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnBuyCancel(); // Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnBuyCancel // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void On ItemPreview Opened(); // Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.On ItemPreview Opened // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Right Mouse Down Override(); // Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Right Mouse Down Override // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void On Close Preview(); // Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.On Close Preview // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnPopupClosed(); // Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnPopupClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void TickStoreEntry(); // Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.TickStoreEntry // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Construct(); // Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void Set is Using Gamepad(bool bNewIsProbablyUsingGamepad); // Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Set is Using Gamepad // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void bLock(); // Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.bLock // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void On Mouse Button Up(struct FPointerEvent Mouse Data); // Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.On Mouse Button Up // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Track Pan Start Position(struct FPointerEvent Mouse Data); // Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Track Pan Start Position // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void ExecuteUbergraph_TBP_UI_ItemPreview(int32_t EntryPoint); // Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.ExecuteUbergraph_TBP_UI_ItemPreview // (Final|UbergraphFunction|HasDefaults) // @ game+0x18b4070
	void OnCancelBuy__DelegateSignature(); // Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnCancelBuy__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnConfirmBuy__DelegateSignature(struct FTigerMetaStoreEntry StoreEntry, bool bEquipItem); // Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnConfirmBuy__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
};

