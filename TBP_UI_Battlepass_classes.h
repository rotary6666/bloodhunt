// WidgetBlueprintGeneratedClass TBP_UI_Battlepass.TBP_UI_Battlepass_C
// Size: 0x7b9 (Inherited: 0x3f0)
struct UTBP_UI_Battlepass_C : UTigerBattlepassUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f0(0x08)
	struct UWidgetAnimation* Transistion_Countdown; // 0x3f8(0x08)
	struct UWidgetAnimation* SoftPulse_Countdown; // 0x400(0x08)
	struct UWidgetAnimation* FadeinPreviewImage; // 0x408(0x08)
	struct UWidgetAnimation* FadeoutPreviewImage; // 0x410(0x08)
	struct UWidgetAnimation* FadeIn; // 0x418(0x08)
	struct UCanvasPanel* AvatarAndBannerPrevierContainer; // 0x420(0x08)
	struct UImage* AvatarAndBannerPreviewImage; // 0x428(0x08)
	struct UImage* Background_SeasonIcon; // 0x430(0x08)
	struct UImage* Background_SeasonIcon_VFX; // 0x438(0x08)
	struct UCanvasPanel* Battlepass; // 0x440(0x08)
	struct UCanvasPanel* BattlePassCountdown; // 0x448(0x08)
	struct UTigerStyledRichTextBlock* BattlepassStatus_TextBlock; // 0x450(0x08)
	struct UWidgetSwitcher* BattlepassWidgetSwitcher; // 0x458(0x08)
	struct UTBP_UI_Button_CTA_C* ButtonBattlepassComplete; // 0x460(0x08)
	struct UTBP_UI_Battlepass_Button_Banner_C* BuyBattlepassBanner; // 0x468(0x08)
	struct UTBP_UI_MenuButton_C* CloseConfirmPurchaseButton; // 0x470(0x08)
	struct UTBP_UI_Popup_Base_C* ConfirmPurchasePopup; // 0x478(0x08)
	struct UTBP_UI_Menu_Button_Prompt_Footer_C* Countdown_Footer; // 0x480(0x08)
	struct UHorizontalBox* Countdown_HorizontalBox; // 0x488(0x08)
	struct UTigerStyledRichTextBlock* CountdownText_Days; // 0x490(0x08)
	struct UTigerStyledRichTextBlock* CountdownText_Hours; // 0x498(0x08)
	struct UTigerStyledRichTextBlock* CountdownText_Minutes; // 0x4a0(0x08)
	struct UTigerStyledRichTextBlock* CountdownText_Seconds; // 0x4a8(0x08)
	struct UTigerStyledRichTextBlock* CurrentBattlepassTier_TextBlock; // 0x4b0(0x08)
	struct UTigerStyledRichTextBlock* CurrentXP; // 0x4b8(0x08)
	struct URichTextBlock* ErrorText; // 0x4c0(0x08)
	struct UTigerStyledRichTextBlock* Expiration_TextBlock; // 0x4c8(0x08)
	struct UTigerStyledRichTextBlock* Free_TextBlock; // 0x4d0(0x08)
	struct UImage* GamePadClickCatcher; // 0x4d8(0x08)
	struct UImage* Image_302; // 0x4e0(0x08)
	struct UImage* InputBlocker; // 0x4e8(0x08)
	struct UTBP_UI_InputMenuPrompt_C* InputMenuPrompt_Close; // 0x4f0(0x08)
	struct UTBP_UI_InputPromptCombined_C* InputPrompt_Close; // 0x4f8(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* InputPrompt_GameMenu_Gamepad; // 0x500(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* InputPrompt_Lefta; // 0x508(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* InputPrompt_Righta; // 0x510(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* InputPrompt_Select_Gamepad; // 0x518(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* InputPrompt_Select_Keyboard; // 0x520(0x08)
	struct UImage* ItemLock_Image; // 0x528(0x08)
	struct UTigerStyledRichTextBlock* ItemLocked_TextBlock; // 0x530(0x08)
	struct UHorizontalBox* ItemLockedBy_Container; // 0x538(0x08)
	struct UTigerStyledRichTextBlock* ItemName; // 0x540(0x08)
	struct UCanvasPanel* ItemPreview; // 0x548(0x08)
	struct UTigerStyledRichTextBlock* ItemType; // 0x550(0x08)
	struct UButton* JumpLeftButton; // 0x558(0x08)
	struct UButton* JumpRightButton; // 0x560(0x08)
	struct UOverlay* MaxLevelOverlay; // 0x568(0x08)
	struct UTigerStyledRichTextBlock* Moreinfo_TigerText; // 0x570(0x08)
	struct UTigerStyledRichTextBlock* PopupHeader; // 0x578(0x08)
	struct UTBP_UI_Menu_Button_Prompt_Footer_C* Preview_Footer; // 0x580(0x08)
	struct UImage* PreviewItem_Image; // 0x588(0x08)
	struct URetainerBox* PreviewItemSoftMask_Retainer; // 0x590(0x08)
	struct UScrollBox* RewardsScrollbox; // 0x598(0x08)
	struct UImage* SeasonBrandingBackground_Image; // 0x5a0(0x08)
	struct UImage* SeasonBrandingEffect_EmbersVFX_01; // 0x5a8(0x08)
	struct UImage* SeasonBrandingEffect_EmbersVFX_02; // 0x5b0(0x08)
	struct UImage* SeasonBrandingEffect_FireLight_Image; // 0x5b8(0x08)
	struct UImage* SeasonBrandingEffect_SmokeVFX; // 0x5c0(0x08)
	struct UTigerStyledRichTextBlock* SeasonPlacementBonus_TextBlock; // 0x5c8(0x08)
	struct UImage* SoftBlackCircle_Image; // 0x5d0(0x08)
	struct UTBP_UI_HorizontalFadeSlot_C* TBP_Transistion_HorizontalFadeSlot; // 0x5d8(0x08)
	struct UTBP_UI_Battlepass_BuyMenu_C* TBP_UI_Battlepass_BuyBattlepassMenu; // 0x5e0(0x08)
	struct UTBP_UI_Button_CTA_C* TBP_UI_Button_CTA; // 0x5e8(0x08)
	struct UTBP_UI_Button_CTA_C* TBP_UI_Button_CTA_SkipRanks; // 0x5f0(0x08)
	struct UTBP_UI_HorizontalFadeSlot_C* TBP_UI_HorizontalFadeSlot; // 0x5f8(0x08)
	struct UTBP_UI_HorizontalFadeSlot_C* TBP_UI_HorizontalFadeSlot_112; // 0x600(0x08)
	struct UTBP_UI_InputMenuPrompt_C* TBP_UI_InputMenuPrompt_2; // 0x608(0x08)
	struct UTBP_UI_InputPrompt_C* TBP_UI_InputPrompt; // 0x610(0x08)
	struct UTBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C* TBP_UI_InventoryClanBodyTypeIcons_ItemPreview; // 0x618(0x08)
	struct UTBP_UI_ItemPreview_C* TBP_UI_ItemPreview; // 0x620(0x08)
	struct UTBP_UI_Loading_Throbber_C* TBP_UI_Loading_Throbber; // 0x628(0x08)
	struct UTBP_UI_Menu_Button_Prompt_Footer_C* TBP_UI_Menu_Button_Prompt_Footer; // 0x630(0x08)
	struct USizeBox* ThrobberSizeBox; // 0x638(0x08)
	struct UTigerStyledRichTextBlock* TigerText_Battlepass; // 0x640(0x08)
	struct UTigerStyledRichTextBlock* Tigertext_Season; // 0x648(0x08)
	struct UTigerStyledRichTextBlock* TigerText_StartsIn; // 0x650(0x08)
	struct UTBP_UI_HorizontalDivider_C* Transistion_Image_SoftFlash; // 0x658(0x08)
	struct UImage* Transition_Image; // 0x660(0x08)
	struct UImage* UsedForSize; // 0x668(0x08)
	struct UVerticalBox* VerticalRewardsContainer; // 0x670(0x08)
	int32_t CONFIG_CamarillaPointsPerRank; // 0x678(0x04)
	char pad_67C[0x4]; // 0x67c(0x04)
	struct FTigerItemId PreviousPreviewItemID; // 0x680(0x08)
	struct TSoftObjectPtr<UObject> ErrorStrings; // 0x688(0x28)
	struct FText Free Battlepass; // 0x6b0(0x18)
	struct FText BattlepassActivated; // 0x6c8(0x18)
	struct FText Current Tier; // 0x6e0(0x18)
	struct FText Battlepass XP Name; // 0x6f8(0x18)
	struct FText Rewarded At Text; // 0x710(0x18)
	int32_t CurrentSelectedRank; // 0x728(0x04)
	char pad_72C[0x4]; // 0x72c(0x04)
	struct FText Purchase to Recieve Text; // 0x730(0x18)
	bool Item Hovered is Free; // 0x748(0x01)
	char pad_749[0x7]; // 0x749(0x07)
	struct UTBP_UI_BattlepassReward_C* CurrentFocusedReward; // 0x750(0x08)
	bool bShouldBlockTickUpdate; // 0x758(0x01)
	bool ItemHas3DPreview; // 0x759(0x01)
	bool Is Head Item; // 0x75a(0x01)
	char pad_75B[0x5]; // 0x75b(0x05)
	struct FTigerItemId RankSkipItemId; // 0x760(0x08)
	bool bHasCurrentSeasonBattlepass; // 0x768(0x01)
	char pad_769[0x3]; // 0x769(0x03)
	int32_t CurrentBattlepassLevel; // 0x76c(0x04)
	struct FDateTime LastScrollTimestamp; // 0x770(0x08)
	struct UTexture2D* PreviewImageTexture; // 0x778(0x08)
	int32_t OldTemporalAASampleCount; // 0x780(0x04)
	char pad_784[0x4]; // 0x784(0x04)
	struct FText BattlePass Complete Text; // 0x788(0x18)
	float ScrollCooldown; // 0x7a0(0x04)
	char pad_7A4[0x4]; // 0x7a4(0x04)
	struct ATBP_RewardPreview_Outfit_C* Battlepass Paperdoll; // 0x7a8(0x08)
	struct UTigerInventoryItemBase* Preview_Item; // 0x7b0(0x08)
	bool bIsFirstTimeChangePreview; // 0x7b8(0x01)

	void UpdatePreviewAvatarAndBanner(struct UTigerInventoryItemBase* InPreviewItem); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.UpdatePreviewAvatarAndBanner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void UpdateBattlePassTrack(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.UpdateBattlePassTrack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	struct FEventReply On_GamePadClickCatcher_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.On_GamePadClickCatcher_MouseButtonDown_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void HandleStickScroll(float InDeltaTime); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.HandleStickScroll // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void UpdatedPreviewImage(struct UTexture2D* Texture); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.UpdatedPreviewImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	struct FText GetItemType(struct UTigerInventoryItemBase* PreviewItem, struct UTigerInventoryItemBase* CombinedItem Parent); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetItemType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Set Item Description(struct UTigerInventoryItemBase* CombinedItemParent, struct UTigerInventoryItemBase* PreviewItem, struct URichTextBlock* In Rich Text Block); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Set Item Description // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void GetItemRarity(struct UTigerInventoryItemBase* PreviewItem, struct UTigerInventoryItemBase* CombinedItem Parent, enum class ETigerItemRarity& Rarity); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetItemRarity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Set ItemType(struct UTigerInventoryItemBase* CombinedItemParent, struct UTigerInventoryItemBase* PreviewItem); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Set ItemType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Set Item Name(struct UTigerInventoryItemBase* CombinedItemParent, struct UTigerInventoryItemBase* PreviewItem, struct URichTextBlock* InRichTextBlock); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Set Item Name // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetRewardHoverBlockTimeStamp(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.SetRewardHoverBlockTimeStamp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void GetPurchaseBattlepassRewardsCount(int32_t TargetLevel, bool bIncludeFreeRewards, int32_t& RewardsCount); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetPurchaseBattlepassRewardsCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x18b4070
	int32_t GetRankSkipCount(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetRankSkipCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x18b4070
	void UpdateRankSkipInfo(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.UpdateRankSkipInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetSeasonPlacementBonusText(struct FTigerPersistentPlayerTransactionalData TransactionalData); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.SetSeasonPlacementBonusText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Update Clan Icon(struct UTigerInventoryItemBase* InputPin); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Update Clan Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Update Previewed Item Texts(struct UTigerInventoryItemBase* Preview Item, struct UTigerInventoryItemBase* CombinedItemParent); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Update Previewed Item Texts // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void FocusJumpBackward(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusJumpBackward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void FocusJumpForward(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusJumpForward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void GetTierContainerAtRank(int32_t InRank, struct UTBP_UI_BattlepassTierContainer_C*& OutTierContainer); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetTierContainerAtRank // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void FocusPreviousReward(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusPreviousReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void FocusNextReward(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusNextReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void UnfocusCurrentReward(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.UnfocusCurrentReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetFocusedReward(struct UTBP_UI_BattlepassReward_C* InReward); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.SetFocusedReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void FocusLatestUnlockedRank(int32_t PlayerRank); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusLatestUnlockedRank // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetUpMenuInput(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.SetUpMenuInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnBoughtBattlepass(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnBoughtBattlepass // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnClose(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnClose // (Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void OnBackgroundSceneShown(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnBackgroundSceneShown // (Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void OnPreviewItemUpdated(struct UTigerInventoryItemBase* InPreviewItem, struct ATigerBattlepassRewardPreview* InPreviewActor, struct UTigerInventoryItemBase* InCombinedItemParent); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnPreviewItemUpdated // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Update After Purchase(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Update After Purchase // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnPersistentPlayerStateInitialized(struct UTigerPersistentPlayerState* InPersistentPlayerState); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnPersistentPlayerStateInitialized // (Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void DisplayPopupExitText(struct FText Text); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.DisplayPopupExitText // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void DisplayPopupErrorMessage(struct FText ErrorString); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.DisplayPopupErrorMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ItemClicked(struct FTigerItemId InItemId, int32_t Item Rank); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.ItemClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Focus Item on Hover(struct FTigerItemId ItemId, int32_t Item Rank, bool Item Is Free); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Focus Item on Hover // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void IncrementFocusedRewardIndex(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.IncrementFocusedRewardIndex // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void DecrementFocusedRewardIndex(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.DecrementFocusedRewardIndex // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnFocusJumpForward(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnFocusJumpForward // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnFocusJumpBackward(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnFocusJumpBackward // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__JumpRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__JumpRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__JumpLeftButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__JumpLeftButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__JumpLeftButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__JumpLeftButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__JumpRightButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__JumpRightButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void Back or Close(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Back or Close // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void On Left Trigger Pressed(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.On Left Trigger Pressed // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void On Right Trigger Pressed(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.On Right Trigger Pressed // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_Button_CTA_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Button_CTA_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_Button_CTA_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Button_CTA_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__RewardsScrollbox_K2Node_ComponentBoundEvent_7_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__RewardsScrollbox_K2Node_ComponentBoundEvent_7_OnUserScrolledEvent__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void OnOpen(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnOpen // (Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void PlayerTransactionDataUpdated(struct FTigerPersistentPlayerTransactionalData& TransactionalData); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.PlayerTransactionDataUpdated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_Button_CTA_SkipRanks_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Button_CTA_SkipRanks_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_Button_CTA_SkipRanks_K2Node_ComponentBoundEvent_11_OnHovered__DelegateSignature(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Button_CTA_SkipRanks_K2Node_ComponentBoundEvent_11_OnHovered__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void ChangePreviewImage(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.ChangePreviewImage // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_Battlepass_TBP_UI_InputMenuPrompt_1_K2Node_ComponentBoundEvent_12_OnInputPressed__DelegateSignature(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Battlepass_TBP_UI_InputMenuPrompt_1_K2Node_ComponentBoundEvent_12_OnInputPressed__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_Battlepass_InputPrompt_Close_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Battlepass_InputPrompt_Close_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void GamepadHotkeyBuy(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GamepadHotkeyBuy // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_Battlepass_TBP_UI_InputMenuPrompt_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Battlepass_TBP_UI_InputMenuPrompt_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_Battlepass_InputMenuPrompt_Close_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Battlepass_InputMenuPrompt_Close_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void OnBattlepassLoaded(struct FTigerItemId ItemId, struct UTigerInventoryItemBase* InventoryItem); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnBattlepassLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CustomEvent_1(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Construct(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void FadePreviewImage(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FadePreviewImage // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void PreviewItemHotkey(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.PreviewItemHotkey // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ExecuteUbergraph_TBP_UI_Battlepass(int32_t EntryPoint); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.ExecuteUbergraph_TBP_UI_Battlepass // (Final|UbergraphFunction|HasDefaults) // @ game+0x18b4070
};

