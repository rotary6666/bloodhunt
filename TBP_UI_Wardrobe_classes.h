// WidgetBlueprintGeneratedClass TBP_UI_Wardrobe.TBP_UI_Wardrobe_C
// Size: 0xa48 (Inherited: 0x4e8)
struct UTBP_UI_Wardrobe_C : UTigerWardrobeUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e8(0x08)
	struct UWidgetAnimation* ShowItemContainer; // 0x4f0(0x08)
	struct UWidgetAnimation* HideFilterBox; // 0x4f8(0x08)
	struct UWidgetAnimation* ShowFilterBox; // 0x500(0x08)
	struct UTBP_UI_CategoryButton_C* AccessoryCategoryButton; // 0x508(0x08)
	struct UTBP_UI_CategoryButton_C* BodyCategoryButton; // 0x510(0x08)
	struct UTBP_UI_CategoryButton_C* BodyTypeCategoryButton; // 0x518(0x08)
	struct UTBP_UI_CategoryButton_C* CardBackgroundCategoryButton; // 0x520(0x08)
	struct UTBP_UI_MatchMaker_TabButton_C* CardTabWidget; // 0x528(0x08)
	struct UTBP_UI_Box_C* CategoryBox; // 0x530(0x08)
	struct UTBP_UI_MatchMaker_TabButton_C* CharacterTabWidget; // 0x538(0x08)
	struct UWidgetSwitcher* ContainerSwitcher; // 0x540(0x08)
	struct UTBP_UI_Line_C* CurrencyTopLine; // 0x548(0x08)
	struct UTBP_UI_CategoryButton_C* EmoteCategoryButton; // 0x550(0x08)
	struct UTBP_UI_EquipWheel_C* EquipWheel; // 0x558(0x08)
	struct UTBP_UI_CategoryButton_C* EyebrowCategoryButton; // 0x560(0x08)
	struct UTBP_UI_CategoryButton_C* EyebrowColorCategoryButton; // 0x568(0x08)
	struct UTBP_UI_CategoryButton_C* EyebrowTypeCategoryButton; // 0x570(0x08)
	struct UTBP_UI_CategoryButton_C* EyeColorCategoryButton; // 0x578(0x08)
	struct UTBP_UI_CategoryButton_C* FacialHairCategoryButton; // 0x580(0x08)
	struct UTBP_UI_CategoryButton_C* FacialHairColorCategoryButton; // 0x588(0x08)
	struct UTBP_UI_CategoryButton_C* FacialHairTypeCategoryButton; // 0x590(0x08)
	struct UTBP_UI_CategoryButton_C* GlassesCategoryButton; // 0x598(0x08)
	struct UTBP_UI_CategoryButton_C* HairCategoryButton; // 0x5a0(0x08)
	struct UTBP_UI_CategoryButton_C* HairColorCategoryButton; // 0x5a8(0x08)
	struct UTBP_UI_CategoryButton_C* HairTypeCategoryButton; // 0x5b0(0x08)
	struct UTBP_UI_CategoryButton_C* HatCategoryButton; // 0x5b8(0x08)
	struct UTBP_UI_CategoryButton_C* HeadCategoryButton; // 0x5c0(0x08)
	struct UTBP_UI_CategoryButton_C* IconCategoryButton; // 0x5c8(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* InputPrompt_GameMenu_Gamepad; // 0x5d0(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* InputPrompt_Select_Gamepad; // 0x5d8(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* InputPrompt_Select_Keyboard; // 0x5e0(0x08)
	struct UTBP_UI_OutfitItemContainer_C* ItemContainer; // 0x5e8(0x08)
	struct UTBP_UI_OutfitVendorTooltip_C* ItemTooltip; // 0x5f0(0x08)
	struct UTBP_UI_InputMenuPrompt_C* LandingPage_CloseButton; // 0x5f8(0x08)
	struct UTBP_UI_CategoryButton_C* MakeupCategoryButton; // 0x600(0x08)
	struct UTBP_UI_CategoryButton_C* MaskCategoryButton; // 0x608(0x08)
	struct UTBP_UI_MatchMaker_TabButton_C* MiscTabWidget; // 0x610(0x08)
	struct UTBP_UI_CategoryButton_C* OutfitCategoryButton; // 0x618(0x08)
	struct UTBP_UI_CategoryButton_C* PiercingCategoryButton; // 0x620(0x08)
	struct UTBP_UI_CurrentHardCurrencyText_C* PlayerHardCurrencyText; // 0x628(0x08)
	struct UTBP_UI_CurrencyText_C* PlayerSoftCurrencyText; // 0x630(0x08)
	struct UCanvasPanel* ShopCanvas; // 0x638(0x08)
	struct UTBP_UI_CategoryButton_C* SkinColorCategoryButton; // 0x640(0x08)
	struct UHorizontalBox* TabBox; // 0x648(0x08)
	struct UTBP_UI_CategoryButton_C* TattooCategoryButton; // 0x650(0x08)
	struct UTBP_UI_CharacterCard_Info_C* TBP_UI_CharacterCard_Info; // 0x658(0x08)
	struct UTBP_UI_CheckBox_C* TBP_UI_CheckBox; // 0x660(0x08)
	struct UTBP_UI_Divider_Vertical_C* TBP_UI_Divider_Vertical; // 0x668(0x08)
	struct UTBP_UI_Menu_Button_Prompt_Footer_C* TBP_UI_Menu_Button_Prompt_Footer; // 0x670(0x08)
	struct UTBP_UI_PlayerCard_C* TBP_UI_PlayerCard; // 0x678(0x08)
	struct UTBP_UI_Submenu_Header_C* TBP_UI_Submenu_Header; // 0x680(0x08)
	struct UOverlay* Turn; // 0x688(0x08)
	struct UTBP_UI_MatchMaker_TabButton_C* WardrobeTabWidget; // 0x690(0x08)
	struct UTBP_UI_MatchMaker_TabButton_C* WeaponTabWidget; // 0x698(0x08)
	bool bIsBuyingItem; // 0x6a0(0x01)
	char pad_6A1[0x7]; // 0x6a1(0x07)
	struct UTBP_UI_BuyItemsOverlay_C* OverlayUI; // 0x6a8(0x08)
	struct FTigerVendorStoreCategoryItem CurrentItemToBuy; // 0x6b0(0x98)
	struct FTigerPersistentOutfitSetup CurrentOutfitSetup; // 0x748(0x38)
	bool bEquipBoughtItem; // 0x780(0x01)
	char pad_781[0x7]; // 0x781(0x07)
	struct UTBP_PartOfHead_NullItem_C* FakePartOfHeadClass; // 0x788(0x08)
	struct TSoftClassPtr<UObject> DefaultOverrideItem; // 0x790(0x28)
	struct FTigerVendorStoreCategoryItem SelectedItem; // 0x7b8(0x98)
	int32_t SelectedSlot; // 0x850(0x04)
	char pad_854[0x4]; // 0x854(0x04)
	struct ATBP_RewardPreview_Outfit_C* Item_Preview; // 0x858(0x08)
	struct ACineCameraActor* User Camera; // 0x860(0x08)
	struct ACineCameraActor* Close Camera; // 0x868(0x08)
	struct ACineCameraActor* Target Default Camera; // 0x870(0x08)
	struct FVector User Camera Original Position; // 0x878(0x0c)
	struct FVector User Camera New Position; // 0x884(0x0c)
	struct FVector DefaultCamera Target Position; // 0x890(0x0c)
	struct FVector CloseCamera_Position; // 0x89c(0x0c)
	struct FVector Target Camera Position; // 0x8a8(0x0c)
	char pad_8B4[0x4]; // 0x8b4(0x04)
	struct TSoftClassPtr<UObject> NullSoftPath; // 0x8b8(0x28)
	struct FCameraFocusSettings FocusSettingsDefault; // 0x8e0(0x58)
	struct FCameraFocusSettings FocusSettingsClose; // 0x938(0x58)
	bool UseCameraIsValid; // 0x990(0x01)
	bool TeleportCamera; // 0x991(0x01)
	bool CategoryIsPartOfHeadCustomization; // 0x992(0x01)
	bool OnClick_PanButtonIsDown; // 0x993(0x01)
	bool ItemPreviewIsValid; // 0x994(0x01)
	char pad_995[0x3]; // 0x995(0x03)
	float CameraEmotePreviewZPoint; // 0x998(0x04)
	float CameraZTreshhold; // 0x99c(0x04)
	int32_t OldTemporalAASampleCount; // 0x9a0(0x04)
	float OnClick_YPos; // 0x9a4(0x04)
	float OnClick_XPos; // 0x9a8(0x04)
	float Saved Rotation Distance; // 0x9ac(0x04)
	float Rotation Distance To Move; // 0x9b0(0x04)
	float PaperdollTargetRotation; // 0x9b4(0x04)
	float Mouse Wheel Delta; // 0x9b8(0x04)
	float Zoom Level Target; // 0x9bc(0x04)
	float Zoom Level; // 0x9c0(0x04)
	bool IsUsingGamepad; // 0x9c4(0x01)
	char pad_9C5[0x3]; // 0x9c5(0x03)
	float RS Axis X; // 0x9c8(0x04)
	float RS Axis Y; // 0x9cc(0x04)
	float PanDistanceToMove; // 0x9d0(0x04)
	float TargetCameraPanPosition; // 0x9d4(0x04)
	float SavedPanPosition; // 0x9d8(0x04)
	float MaxPanUp; // 0x9dc(0x04)
	float MaxPanDown; // 0x9e0(0x04)
	float DPad Pan UpDown; // 0x9e4(0x04)
	enum class ETigerPersistentStoreCategory CurrentWardrobeCategory; // 0x9e8(0x01)
	char pad_9E9[0x7]; // 0x9e9(0x07)
	struct FCameraFocusSettings UserCameraOriginalFocusSettings; // 0x9f0(0x58)

	void ShowTurnInputBasedOnWardrobeCategory(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ShowTurnInputBasedOnWardrobeCategory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ServerEquipItem(struct FTigerVendorStoreCategoryItem InItemToEquip, struct ATigerElysiumPlayerState* InElysiumPlayer, int32_t InSlot); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ServerEquipItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SelectTabBasedOnIndex(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SelectTabBasedOnIndex // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Reset Camera(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.Reset Camera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnMouseMove // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetEmotePreviewZPoint(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SetEmotePreviewZPoint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void UpdatePlayerCardVisibility(enum class ETigerPersistentStoreCategory InCategory); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.UpdatePlayerCardVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ShouldShowFacialHairCategory(bool& OutShow); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ShouldShowFacialHairCategory // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void HideEyebrowsForNosferatu(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.HideEyebrowsForNosferatu // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetDefaultOverrideItem(struct TArray<struct FTigerVendorStoreCategoryItem>& InItems); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SetDefaultOverrideItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnMouseWheel // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ShowItemTooltip(struct FTigerVendorStoreCategoryItem& InItem); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ShowItemTooltip // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void HideFilters(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.HideFilters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void PreviewOutfitMaterial(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.PreviewOutfitMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void GetPlayerOutfitSetup(struct FTigerPersistentOutfitSetup& OutfitSetup); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.GetPlayerOutfitSetup // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x18b4070
	void On Item Selected(struct FTigerVendorStoreCategoryItem& StoreItem); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.On Item Selected // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnCloseVendorWidget(bool& bShouldRemoveWidget); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnCloseVendorWidget // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnCategorySelected(struct UTigerVendorStoreCategory* SelectedCategory); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnCategorySelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ResetPlayerApperance(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ResetPlayerApperance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnOverlayClosed(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnOverlayClosed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SaveCharacterApperance(struct FTigerPersistentOutfitSetup& PersistentOutfitSetup); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SaveCharacterApperance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__FacialHairColorCategoryButton_K2Node_ComponentBoundEvent_22_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__FacialHairColorCategoryButton_K2Node_ComponentBoundEvent_22_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__FacialHairTypeCategoryButton_K2Node_ComponentBoundEvent_23_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__FacialHairTypeCategoryButton_K2Node_ComponentBoundEvent_23_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__BodyTypeCategoryButton_K2Node_ComponentBoundEvent_25_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__BodyTypeCategoryButton_K2Node_ComponentBoundEvent_25_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__HeadCategoryButton_K2Node_ComponentBoundEvent_26_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__HeadCategoryButton_K2Node_ComponentBoundEvent_26_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__FacialHairCategoryButton_K2Node_ComponentBoundEvent_31_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__FacialHairCategoryButton_K2Node_ComponentBoundEvent_31_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__HairCategoryButton_K2Node_ComponentBoundEvent_32_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__HairCategoryButton_K2Node_ComponentBoundEvent_32_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TattooCategoryButton_K2Node_ComponentBoundEvent_33_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__TattooCategoryButton_K2Node_ComponentBoundEvent_33_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__BodyCategoryButton_K2Node_ComponentBoundEvent_34_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__BodyCategoryButton_K2Node_ComponentBoundEvent_34_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__BarberTabWidget_K2Node_ComponentBoundEvent_19_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__BarberTabWidget_K2Node_ComponentBoundEvent_19_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__EyebrowTypeCategoryButton_K2Node_ComponentBoundEvent_30_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EyebrowTypeCategoryButton_K2Node_ComponentBoundEvent_30_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__EyebrowColorCategoryButton_K2Node_ComponentBoundEvent_35_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EyebrowColorCategoryButton_K2Node_ComponentBoundEvent_35_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__EyeColorCategoryButton_K2Node_ComponentBoundEvent_36_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EyeColorCategoryButton_K2Node_ComponentBoundEvent_36_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__MakeupCategoryButton_K2Node_ComponentBoundEvent_40_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__MakeupCategoryButton_K2Node_ComponentBoundEvent_40_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__OutfitCategoryButton_K2Node_ComponentBoundEvent_24_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__OutfitCategoryButton_K2Node_ComponentBoundEvent_24_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__AccessoryCategoryButton_K2Node_ComponentBoundEvent_16_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__AccessoryCategoryButton_K2Node_ComponentBoundEvent_16_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__EyebrowCategoryButton_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EyebrowCategoryButton_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__EmoteCategoryButton_K2Node_ComponentBoundEvent_2_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EmoteCategoryButton_K2Node_ComponentBoundEvent_2_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void OnSelectedSlot(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnSelectedSlot // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__MaskCategoryButton_K2Node_ComponentBoundEvent_17_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__MaskCategoryButton_K2Node_ComponentBoundEvent_17_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void OnSlotSelectionCanceled(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnSlotSelectionCanceled // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__PiercingCategoryButton_K2Node_ComponentBoundEvent_15_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__PiercingCategoryButton_K2Node_ComponentBoundEvent_15_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__LandingPage_CloseButton_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__LandingPage_CloseButton_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void OnItemPreview(struct FTigerVendorStoreCategoryItem InItem); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnItemPreview // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Construct(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__SkinColorCategoryButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__SkinColorCategoryButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void SetNewCardLocally(struct FTigerPersistentPlayerCardData& InCard); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SetNewCardLocally // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__IconCategoryButton_K2Node_ComponentBoundEvent_6_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__IconCategoryButton_K2Node_ComponentBoundEvent_6_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__CardBackgroundCategoryButton_K2Node_ComponentBoundEvent_7_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__CardBackgroundCategoryButton_K2Node_ComponentBoundEvent_7_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void Set is Using Gamepad(bool bNewIsProbablyUsingGamepad); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.Set is Using Gamepad // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnBodyTypeChanged(enum class ETigerGender InBodyType); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnBodyTypeChanged // (Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void Toggle Zoom(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.Toggle Zoom // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_Wardrobe_LandingPage_CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__TBP_UI_Wardrobe_LandingPage_CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void OnPlayerInventoryUpdated(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnPlayerInventoryUpdated // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_CheckBox_K2Node_ComponentBoundEvent_10_OnCheckStateChanged__DelegateSignature(bool bIsChecked); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__TBP_UI_CheckBox_K2Node_ComponentBoundEvent_10_OnCheckStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void OnBackgroundSceneShown(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnBackgroundSceneShown // (Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void OnClose(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnClose // (Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void OnOpen(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnOpen // (Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void OnGotStoreCategories(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnGotStoreCategories // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetNewAppearanceLocally(struct FTigerPreviewerData& InPreviewerAppearance); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SetNewAppearanceLocally // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void UpdateCloseButton(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.UpdateCloseButton // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__HairColorCategoryButton_K2Node_ComponentBoundEvent_21_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__HairColorCategoryButton_K2Node_ComponentBoundEvent_21_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void OnItemHovered(struct FTigerVendorStoreCategoryItem Item); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnItemHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__HairTypeCategoryButton_K2Node_ComponentBoundEvent_20_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__HairTypeCategoryButton_K2Node_ComponentBoundEvent_20_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__GlassesCategoryButton_K2Node_ComponentBoundEvent_18_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__GlassesCategoryButton_K2Node_ComponentBoundEvent_18_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void ShowCategoryItems(enum class ETigerPersistentStoreCategory Category); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ShowCategoryItems // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnCategoryItemsReceived(enum class ETigerPersistentStoreCategory CategoryType, struct TArray<struct FTigerVendorStoreCategoryItem>& CategoryItems); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnCategoryItemsReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void OnInventoryActivated(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnInventoryActivated // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void On Mouse Button Up(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.On Mouse Button Up // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Track Start Pos on Click(struct FPointerEvent& MouseData); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.Track Start Pos on Click // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__CharacterTabWidget_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__CharacterTabWidget_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void OnItemUnhovered(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnItemUnhovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnItemSelected(struct FTigerVendorStoreCategoryItem Item, struct UTBP_UI_OutfitItem_C* OutfitItem); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnItemSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ExecuteUbergraph_TBP_UI_Wardrobe(int32_t EntryPoint); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ExecuteUbergraph_TBP_UI_Wardrobe // (Final|UbergraphFunction|HasDefaults) // @ game+0x18b4070
};

