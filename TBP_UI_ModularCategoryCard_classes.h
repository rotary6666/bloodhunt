// WidgetBlueprintGeneratedClass TBP_UI_ModularCategoryCard.TBP_UI_ModularCategoryCard_C
// Size: 0x42b (Inherited: 0x280)
struct UTBP_UI_ModularCategoryCard_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* Hover_Titles_NoDesc; // 0x288(0x08)
	struct UWidgetAnimation* Hover_Titles_Main; // 0x290(0x08)
	struct UWidgetAnimation* OnSelect; // 0x298(0x08)
	struct UWidgetAnimation* Hover_Main; // 0x2a0(0x08)
	struct UButton* ButtonBorder; // 0x2a8(0x08)
	struct UImage* CardImage; // 0x2b0(0x08)
	struct UScaleBox* CardScaleBox; // 0x2b8(0x08)
	struct UTBP_UI_ModularCircleProgressBar_C* CircleProgressBar; // 0x2c0(0x08)
	struct UTigerStyledRichTextBlock* Countdown; // 0x2c8(0x08)
	struct UImage* DescriptionDiamond; // 0x2d0(0x08)
	struct UTigerStyledRichTextBlock* DescriptionLabel; // 0x2d8(0x08)
	struct UScaleBox* DescriptionScaleBox; // 0x2e0(0x08)
	struct USizeBox* DescriptionSizeBox; // 0x2e8(0x08)
	struct UTigerStyledRichTextBlock* HeadingLabel; // 0x2f0(0x08)
	struct UScaleBox* HeadingScaleBox; // 0x2f8(0x08)
	struct UImage* InnerGlow; // 0x300(0x08)
	struct UImage* LockIcon; // 0x308(0x08)
	struct UTBP_UI_Tag_C* NewTag; // 0x310(0x08)
	struct UTigerStyledRichTextBlock* SubHeadingLabel; // 0x318(0x08)
	struct UScaleBox* SubHeadingScaleBox; // 0x320(0x08)
	struct UTigerStyledRichTextBlock* UnlockRequirement; // 0x328(0x08)
	struct UTigerStyledRichTextBlock* WarningLabel; // 0x330(0x08)
	bool bIsSelected; // 0x338(0x01)
	bool bIsHovering; // 0x339(0x01)
	bool bIsDisabled; // 0x33a(0x01)
	char pad_33B[0x5]; // 0x33b(0x05)
	struct FMulticastInlineDelegate OnCategorySelected; // 0x340(0x10)
	struct FMulticastInlineDelegate OnCategoryDeselected; // 0x350(0x10)
	bool bStartDisabled; // 0x360(0x01)
	bool bStartLocked; // 0x361(0x01)
	bool bStartShowingProgressBar; // 0x362(0x01)
	bool bStartShowingNewTag; // 0x363(0x01)
	bool bUseProgressBar; // 0x364(0x01)
	bool bShowNewTag; // 0x365(0x01)
	bool bStartWithCountdown; // 0x366(0x01)
	char pad_367[0x1]; // 0x367(0x01)
	int32_t Index; // 0x368(0x04)
	char pad_36C[0x4]; // 0x36c(0x04)
	struct FText DefaultHeading; // 0x370(0x18)
	struct FText DefaultSubHeading; // 0x388(0x18)
	struct FText DefaultDescription; // 0x3a0(0x18)
	struct FText DefaultWarningText; // 0x3b8(0x18)
	struct FText DefaultUnlockRequirementText; // 0x3d0(0x18)
	struct UTexture2D* DefaultImage; // 0x3e8(0x08)
	bool bIsLocked; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)
	struct FMulticastInlineDelegate OnCategoryHovered; // 0x3f8(0x10)
	struct FMulticastInlineDelegate OnCategoryUnhovered; // 0x408(0x10)
	struct FMulticastInlineDelegate OnCategoryClicked; // 0x418(0x10)
	bool bUseCountdown; // 0x428(0x01)
	bool bShouldUseUnhover; // 0x429(0x01)
	bool bShouldSelectDeselectOnClick; // 0x42a(0x01)

	void PlayHoverAnimation(enum class EUMGSequencePlayMode InPlayMode, float InPlayBackSpeed); // Function TBP_UI_ModularCategoryCard.TBP_UI_ModularCategoryCard_C.PlayHoverAnimation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void UpdateProgressBar(float InPercentage); // Function TBP_UI_ModularCategoryCard.TBP_UI_ModularCategoryCard_C.UpdateProgressBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void UpdateCountdownText(struct FText InCountdownText); // Function TBP_UI_ModularCategoryCard.TBP_UI_ModularCategoryCard_C.UpdateCountdownText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Deselect(); // Function TBP_UI_ModularCategoryCard.TBP_UI_ModularCategoryCard_C.Deselect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Select(); // Function TBP_UI_ModularCategoryCard.TBP_UI_ModularCategoryCard_C.Select // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetWarning(struct FText InWarningText); // Function TBP_UI_ModularCategoryCard.TBP_UI_ModularCategoryCard_C.SetWarning // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetUseProgressBar(bool InUseProgressBar); // Function TBP_UI_ModularCategoryCard.TBP_UI_ModularCategoryCard_C.SetUseProgressBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetShowNewTag(bool InShow); // Function TBP_UI_ModularCategoryCard.TBP_UI_ModularCategoryCard_C.SetShowNewTag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetLocked(bool InIsLocked, struct FText InUnlockRequirementText); // Function TBP_UI_ModularCategoryCard.TBP_UI_ModularCategoryCard_C.SetLocked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Set Labels(struct FText InHeading, struct FText InSubHeading, struct FText InDescription); // Function TBP_UI_ModularCategoryCard.TBP_UI_ModularCategoryCard_C.Set Labels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetDisabled(bool InIsDisabled); // Function TBP_UI_ModularCategoryCard.TBP_UI_ModularCategoryCard_C.SetDisabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetUseCountdown(bool bInUseCountdown, struct FText InCountdownText); // Function TBP_UI_ModularCategoryCard.TBP_UI_ModularCategoryCard_C.SetUseCountdown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void IsSelected(bool& OutIsSelected); // Function TBP_UI_ModularCategoryCard.TBP_UI_ModularCategoryCard_C.IsSelected // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x18b4070
	void IsHovering(bool& OutIsHovering); // Function TBP_UI_ModularCategoryCard.TBP_UI_ModularCategoryCard_C.IsHovering // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x18b4070
	void IsDisabled(bool& OutIsDisabled); // Function TBP_UI_ModularCategoryCard.TBP_UI_ModularCategoryCard_C.IsDisabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x18b4070
	void Enable(); // Function TBP_UI_ModularCategoryCard.TBP_UI_ModularCategoryCard_C.Enable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetImageFromDynamicTexture(struct UTexture2DDynamic* Texture); // Function TBP_UI_ModularCategoryCard.TBP_UI_ModularCategoryCard_C.SetImageFromDynamicTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetImageFromTexture(struct UTexture2D* Texture); // Function TBP_UI_ModularCategoryCard.TBP_UI_ModularCategoryCard_C.SetImageFromTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ClearWarning(); // Function TBP_UI_ModularCategoryCard.TBP_UI_ModularCategoryCard_C.ClearWarning // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_GameModeCard_ButtonBorder_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_ModularCategoryCard.TBP_UI_ModularCategoryCard_C.BndEvt__TBP_UI_GameModeCard_ButtonBorder_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_GameModeCard_ButtonBorder_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_ModularCategoryCard.TBP_UI_ModularCategoryCard_C.BndEvt__TBP_UI_GameModeCard_ButtonBorder_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_GameModeCard_ButtonBorder_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_ModularCategoryCard.TBP_UI_ModularCategoryCard_C.BndEvt__TBP_UI_GameModeCard_ButtonBorder_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void Construct(); // Function TBP_UI_ModularCategoryCard.TBP_UI_ModularCategoryCard_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void SetPreviewOnly(); // Function TBP_UI_ModularCategoryCard.TBP_UI_ModularCategoryCard_C.SetPreviewOnly // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_ModularCategoryCard.TBP_UI_ModularCategoryCard_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void ExternalHighlight(); // Function TBP_UI_ModularCategoryCard.TBP_UI_ModularCategoryCard_C.ExternalHighlight // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ExternalUnHighlight(); // Function TBP_UI_ModularCategoryCard.TBP_UI_ModularCategoryCard_C.ExternalUnHighlight // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ExecuteUbergraph_TBP_UI_ModularCategoryCard(int32_t EntryPoint); // Function TBP_UI_ModularCategoryCard.TBP_UI_ModularCategoryCard_C.ExecuteUbergraph_TBP_UI_ModularCategoryCard // (Final|UbergraphFunction) // @ game+0x18b4070
	void OnCategoryClicked__DelegateSignature(int32_t OutIndex); // Function TBP_UI_ModularCategoryCard.TBP_UI_ModularCategoryCard_C.OnCategoryClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnCategoryUnhovered__DelegateSignature(int32_t OutIndex); // Function TBP_UI_ModularCategoryCard.TBP_UI_ModularCategoryCard_C.OnCategoryUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnCategoryHovered__DelegateSignature(int32_t OutIndex); // Function TBP_UI_ModularCategoryCard.TBP_UI_ModularCategoryCard_C.OnCategoryHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnCategoryDeselected__DelegateSignature(int32_t OutIndex); // Function TBP_UI_ModularCategoryCard.TBP_UI_ModularCategoryCard_C.OnCategoryDeselected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnCategorySelected__DelegateSignature(int32_t InIndex); // Function TBP_UI_ModularCategoryCard.TBP_UI_ModularCategoryCard_C.OnCategorySelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
};

