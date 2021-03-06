// WidgetBlueprintGeneratedClass TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C
// Size: 0x4cd (Inherited: 0x298)
struct UTBP_UI_SystemMenuGraphicsSettings_C : UTigerMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UTBP_UI_Carousel_C* AmbientOcclusionCarousel; // 0x2a0(0x08)
	struct UTBP_UI_Carousel_C* AntiAliasingCarousel; // 0x2a8(0x08)
	struct UTBP_UI_SystemMenuSettingsListItem_C* AntiAliasingItem; // 0x2b0(0x08)
	struct UTBP_UI_Carousel_C* BloomCarousel; // 0x2b8(0x08)
	struct UOverlay* BrightnessSetup; // 0x2c0(0x08)
	struct UButton* Button_261; // 0x2c8(0x08)
	struct UImage* ButtonOutline; // 0x2d0(0x08)
	struct UTBP_UI_CheckBox_C* ChromaticAberrationBox; // 0x2d8(0x08)
	struct UTBP_UI_CheckBox_C* ChromaticAberrationBoxPS5; // 0x2e0(0x08)
	struct UTBP_UI_Carousel_C* DisplayModeCarousel; // 0x2e8(0x08)
	struct UTBP_UI_CheckBox_C* FilmGrainBox; // 0x2f0(0x08)
	struct UTBP_UI_CheckBox_C* FilmGrainBoxPS5; // 0x2f8(0x08)
	struct UTBP_UI_Carousel_C* FoliageCarousel; // 0x300(0x08)
	struct UTBP_UI_Carousel_C* FrameRateLimitCarousel; // 0x308(0x08)
	struct UTBP_UI_CheckBox_C* FrameRateSmoothingBox; // 0x310(0x08)
	struct UTBP_UI_Carousel_C* FsrQualityCarousel; // 0x318(0x08)
	struct UTBP_UI_SliderWBox_C* FsrSharpeningSlider; // 0x320(0x08)
	struct UTBP_UI_SliderWBox_C* GammaSlider; // 0x328(0x08)
	struct UTBP_UI_SliderWBox_C* GammaSliderPS5; // 0x330(0x08)
	struct UTBP_UI_Carousel_C* LensFlareCarousel; // 0x338(0x08)
	struct UTBP_UI_Carousel_C* LightingQualityCarousel; // 0x340(0x08)
	struct UTBP_UI_CheckBox_C* LightShaftsItemBox; // 0x348(0x08)
	struct UTBP_UI_Carousel_C* MaterialCarousel; // 0x350(0x08)
	struct UTBP_UI_CheckBox_C* MotionBlurBoxPS5; // 0x358(0x08)
	struct UTBP_UI_Carousel_C* MotionBlurCarousel; // 0x360(0x08)
	struct UTBP_UI_Carousel_C* QualityPresetCarousel; // 0x368(0x08)
	struct UTBP_UI_Carousel_C* QualityPresetCarouselPS5; // 0x370(0x08)
	struct UTBP_UI_Carousel_C* ResolutionCarousel; // 0x378(0x08)
	struct UTBP_UI_SystemMenuSettingsListItem_C* ResolutionScale; // 0x380(0x08)
	struct UTBP_UI_SliderWBox_C* ResolutionScaleSlider; // 0x388(0x08)
	struct UImage* Screenshot; // 0x390(0x08)
	struct UTBP_UI_Carousel_C* ScreenSpaceReflectionCarousel; // 0x398(0x08)
	struct UTBP_UI_Scrollbox_C* ScrollableAdvancedSettings; // 0x3a0(0x08)
	struct UTBP_UI_Scrollbox_C* ScrollableBasicSettings; // 0x3a8(0x08)
	struct UTBP_UI_Scrollbox_C* ScrollablePs5Settings; // 0x3b0(0x08)
	struct UScrollBox* ScrollBoxBasicSettings; // 0x3b8(0x08)
	struct UScrollBox* ScrollBoxPS5; // 0x3c0(0x08)
	struct UTigerStyledRichTextBlock* Setup_Button_Text; // 0x3c8(0x08)
	struct UTBP_UI_Carousel_C* ShadowCarousel; // 0x3d0(0x08)
	struct UTBP_UI_Carousel_C* SubSurfaceScatteringCarousel; // 0x3d8(0x08)
	struct UWidgetSwitcher* Switcher_Settings; // 0x3e0(0x08)
	struct UTBP_UI_MatchMaker_TabButton_C* TabButton1; // 0x3e8(0x08)
	struct UTBP_UI_MatchMaker_TabButton_C* TabButton2; // 0x3f0(0x08)
	struct UTBP_UI_Submenu_Header_C* TBP_UI_Submenu_Header; // 0x3f8(0x08)
	struct UTBP_UI_SystemBrightness_C* TBP_UI_SystemBrightness; // 0x400(0x08)
	struct UTBP_UI_Carousel_C* TextureCarousel; // 0x408(0x08)
	struct UTBP_UI_Carousel_C* TextureFilteringCarousel; // 0x410(0x08)
	struct UTBP_UI_Carousel_C* ViewDistanceCarousel; // 0x418(0x08)
	struct UTBP_UI_Carousel_C* VisualEffectCarousel; // 0x420(0x08)
	struct UTBP_UI_Carousel_C* VolumetricFogCarousel; // 0x428(0x08)
	struct UTBP_UI_CheckBox_C* VsyncBox; // 0x430(0x08)
	struct UTBP_UI_CheckBox_C* VsyncBoxPS5; // 0x438(0x08)
	struct UTBP_UI_SystemMenuItem_C* CurrentlySelectedSystemMenuItem; // 0x440(0x08)
	struct TArray<struct FIntPoint> AvailableResolutions; // 0x448(0x10)
	struct TArray<struct FText> SubmenuButtonNames; // 0x458(0x10)
	struct TArray<struct FText> QualityLevelLabels; // 0x468(0x10)
	struct TArray<struct FText> AntiAliasingLevelLabels; // 0x478(0x10)
	struct TArray<struct FText> AnisotropyLevelLabels; // 0x488(0x10)
	struct TArray<struct FText> FsrQualityLabels; // 0x498(0x10)
	struct TArray<struct FText> FrameLimitLabels; // 0x4a8(0x10)
	struct TArray<struct FText> StreamingTexturePerFrameLimitLabels; // 0x4b8(0x10)
	float DefaultGamma; // 0x4c8(0x04)
	bool NeedToSave; // 0x4cc(0x01)

	void ApplyChanges(bool& OutShouldShowRevertPrompt, bool& OutNeedsRestart); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.ApplyChanges // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void HasUnappliedChanges(bool& OutHasUnappliedChanges); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.HasUnappliedChanges // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetGammaSettingsValue(float UI Value); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.SetGammaSettingsValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void MapGammaToSettings(float UI Value, float& Settings Value); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.MapGammaToSettings // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void MapGammaToUI(float Settings Value, float& UI Value); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.MapGammaToUI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void InitPS5GraphicsSettings(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.InitPS5GraphicsSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	enum class ESlateVisibility GetAntiAliasingItemVisibility(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.GetAntiAliasingItemVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x18b4070
	enum class ESlateVisibility GetResolutionScaleItemVisibility(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.GetResolutionScaleItemVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x18b4070
	enum class ESlateVisibility GetFsrSettingsItemVisibility(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.GetFsrSettingsItemVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x18b4070
	void InitGraphicsSettings(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.InitGraphicsSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void InitDisplaySettings(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.InitDisplaySettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void InitQualityOptions(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.InitQualityOptions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetQualityOptionLabels(struct UTBP_UI_Carousel_C*& InOptionCarousel, int32_t InOptionCount, bool InUsesCustom, bool InUsesOff, bool InUsesLow); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.SetQualityOptionLabels // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void RefreshQualityOptions(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.RefreshQualityOptions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetSubmenuButtonNames(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.SetSubmenuButtonNames // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void DiscardUnappliedChanges(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.DiscardUnappliedChanges // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void RefreshResolutionOptions(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.RefreshResolutionOptions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void RefreshWindowModeOptions(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.RefreshWindowModeOptions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__ResolutionCarousel_K2Node_ComponentBoundEvent_1_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__ResolutionCarousel_K2Node_ComponentBoundEvent_1_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__DisplayModeCarousel_K2Node_ComponentBoundEvent_2_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__DisplayModeCarousel_K2Node_ComponentBoundEvent_2_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void Destruct(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void Construct(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__Resolution_TabButton_K2Node_ComponentBoundEvent_0_OnButtonPressed__DelegateSignature(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__Resolution_TabButton_K2Node_ComponentBoundEvent_0_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__Brightness_TabButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__Brightness_TabButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__Button_260_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__Button_260_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void OnBrightnessConfirm(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.OnBrightnessConfirm // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__GammaSlider_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__GammaSlider_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_VisualEffectCarousel_K2Node_ComponentBoundEvent_8_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_VisualEffectCarousel_K2Node_ComponentBoundEvent_8_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_ViewDistanceCarousel_K2Node_ComponentBoundEvent_9_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_ViewDistanceCarousel_K2Node_ComponentBoundEvent_9_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_MaterialCarousel_K2Node_ComponentBoundEvent_10_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_MaterialCarousel_K2Node_ComponentBoundEvent_10_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_ShadowCarousel_K2Node_ComponentBoundEvent_11_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_ShadowCarousel_K2Node_ComponentBoundEvent_11_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_QualityPresetCarousel_K2Node_ComponentBoundEvent_12_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_QualityPresetCarousel_K2Node_ComponentBoundEvent_12_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_TextureFilteringCarousel_K2Node_ComponentBoundEvent_13_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_TextureFilteringCarousel_K2Node_ComponentBoundEvent_13_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_AntiAliasingCarousel_K2Node_ComponentBoundEvent_14_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_AntiAliasingCarousel_K2Node_ComponentBoundEvent_14_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_TextureCarousel_K2Node_ComponentBoundEvent_15_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_TextureCarousel_K2Node_ComponentBoundEvent_15_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_FoliageCarousel_K2Node_ComponentBoundEvent_16_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_FoliageCarousel_K2Node_ComponentBoundEvent_16_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_VolumetricFogCarousel_K2Node_ComponentBoundEvent_17_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_VolumetricFogCarousel_K2Node_ComponentBoundEvent_17_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_VsyncBox_K2Node_ComponentBoundEvent_18_OnCheckStateChanged__DelegateSignature(bool bIsChecked); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_VsyncBox_K2Node_ComponentBoundEvent_18_OnCheckStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void OnQualityOptionChanged(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.OnQualityOptionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_FrameLimitCarousel_K2Node_ComponentBoundEvent_20_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_FrameLimitCarousel_K2Node_ComponentBoundEvent_20_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void OpenCategory(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.OpenCategory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CloseCategory(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.CloseCategory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_FsrQualityCarousel_K2Node_ComponentBoundEvent_25_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_FsrQualityCarousel_K2Node_ComponentBoundEvent_25_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_FsrSharpeningSlider_K2Node_ComponentBoundEvent_26_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_FsrSharpeningSlider_K2Node_ComponentBoundEvent_26_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_FrameRateSmoothingBox_K2Node_ComponentBoundEvent_24_OnCheckStateChanged__DelegateSignature(bool bIsChecked); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_FrameRateSmoothingBox_K2Node_ComponentBoundEvent_24_OnCheckStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_LightingQualityCarousel_K2Node_ComponentBoundEvent_28_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_LightingQualityCarousel_K2Node_ComponentBoundEvent_28_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_ChromaticAberrationBox_K2Node_ComponentBoundEvent_29_OnCheckStateChanged__DelegateSignature(bool bIsChecked); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_ChromaticAberrationBox_K2Node_ComponentBoundEvent_29_OnCheckStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_FilmGrainBox_K2Node_ComponentBoundEvent_30_OnCheckStateChanged__DelegateSignature(bool bIsChecked); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_FilmGrainBox_K2Node_ComponentBoundEvent_30_OnCheckStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_LightShaftsItemBox_K2Node_ComponentBoundEvent_31_OnCheckStateChanged__DelegateSignature(bool bIsChecked); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_LightShaftsItemBox_K2Node_ComponentBoundEvent_31_OnCheckStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_AmbientOcclusionCarousel_K2Node_ComponentBoundEvent_36_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_AmbientOcclusionCarousel_K2Node_ComponentBoundEvent_36_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_BloomCarousel_K2Node_ComponentBoundEvent_37_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_BloomCarousel_K2Node_ComponentBoundEvent_37_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_LensFlareCarousel_K2Node_ComponentBoundEvent_38_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_LensFlareCarousel_K2Node_ComponentBoundEvent_38_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_MotionBlurCarousel_K2Node_ComponentBoundEvent_39_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_MotionBlurCarousel_K2Node_ComponentBoundEvent_39_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_ScreenSpaceReflectionCarousel_K2Node_ComponentBoundEvent_40_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_ScreenSpaceReflectionCarousel_K2Node_ComponentBoundEvent_40_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_ResolutionScaleSlider_K2Node_ComponentBoundEvent_27_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_ResolutionScaleSlider_K2Node_ComponentBoundEvent_27_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_SubSurfaceScatteringCarousel_K2Node_ComponentBoundEvent_32_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_SubSurfaceScatteringCarousel_K2Node_ComponentBoundEvent_32_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void RevertChanges(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.RevertChanges // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ConfirmApply(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.ConfirmApply // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void DiscardChanges(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.DiscardChanges // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ResetSettings(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.ResetSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnOpen(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.OnOpen // (Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void OnClose(); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.OnClose // (Event|Protected|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_ChromaticAberrationBoxPS5_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature(bool bIsChecked); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_ChromaticAberrationBoxPS5_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_FilmGrainBoxPS5_K2Node_ComponentBoundEvent_19_OnCheckStateChanged__DelegateSignature(bool bIsChecked); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_FilmGrainBoxPS5_K2Node_ComponentBoundEvent_19_OnCheckStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_MotionBlurBoxPS5_K2Node_ComponentBoundEvent_21_OnCheckStateChanged__DelegateSignature(bool bIsChecked); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_MotionBlurBoxPS5_K2Node_ComponentBoundEvent_21_OnCheckStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_GammaSliderPS5_K2Node_ComponentBoundEvent_22_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_GammaSliderPS5_K2Node_ComponentBoundEvent_22_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_QualityPresetCarouselPS5_K2Node_ComponentBoundEvent_23_SelectedItemIndexChanged__DelegateSignature(int32_t NewIndex); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_QualityPresetCarouselPS5_K2Node_ComponentBoundEvent_23_SelectedItemIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuGraphicsSettings_VsyncBoxPS5_K2Node_ComponentBoundEvent_34_OnCheckStateChanged__DelegateSignature(bool bIsChecked); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_VsyncBoxPS5_K2Node_ComponentBoundEvent_34_OnCheckStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void ExecuteUbergraph_TBP_UI_SystemMenuGraphicsSettings(int32_t EntryPoint); // Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.ExecuteUbergraph_TBP_UI_SystemMenuGraphicsSettings // (Final|UbergraphFunction|HasDefaults) // @ game+0x18b4070
};

