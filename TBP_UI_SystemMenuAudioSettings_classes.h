// WidgetBlueprintGeneratedClass TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C
// Size: 0x408 (Inherited: 0x298)
struct UTBP_UI_SystemMenuAudioSettings_C : UTigerMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UTBP_UI_CheckBox_C* AllowBackgroundAudio; // 0x2a0(0x08)
	struct UTBP_UI_SystemMenuSettingsListItem_C* AllowBackgroundAudioItem; // 0x2a8(0x08)
	struct UTBP_UI_SystemMenuSettingsListItem_C* AudioMixPreset; // 0x2b0(0x08)
	struct UTBP_UI_StyledComboBox_C* AudioMixPresetComboBox; // 0x2b8(0x08)
	struct UTBP_UI_SystemMenuSettingsListItem_C* AudioOutputDevice; // 0x2c0(0x08)
	struct UTBP_UI_StyledComboBox_C* AudioOutputDeviceComboBox_2; // 0x2c8(0x08)
	struct UTBP_UI_SystemMenuSettingsListItem_C* ControllerVolumeItem; // 0x2d0(0x08)
	struct UTBP_UI_SliderWBox_C* ControllerVolumeSlider; // 0x2d8(0x08)
	struct UTBP_UI_SliderWBox_C* DialogueVolumeSlider; // 0x2e0(0x08)
	struct UTBP_UI_CheckBox_C* EnableDolbyAtmos; // 0x2e8(0x08)
	struct UTBP_UI_SystemMenuSettingsListItem_C* EnableDolbyAtmosItem; // 0x2f0(0x08)
	struct UTBP_UI_CheckBox_C* EnableVoiceChat; // 0x2f8(0x08)
	struct UTBP_UI_SystemMenuSettingsListItem_C* InputDevice; // 0x300(0x08)
	struct UTBP_UI_StyledComboBox_C* InputDeviceComboBox; // 0x308(0x08)
	struct UTBP_UI_SliderWBox_C* MasterVolumeSlider; // 0x310(0x08)
	struct UTBP_UI_SliderWBox_C* MicVolumeSlider; // 0x318(0x08)
	struct UTBP_UI_SliderWBox_C* MusicVolumeSlider; // 0x320(0x08)
	struct UTBP_UI_SystemMenuSettingsListItem_C* OutputDevice; // 0x328(0x08)
	struct UTBP_UI_StyledComboBox_C* OutputDeviceComboBox; // 0x330(0x08)
	struct UTBP_UI_SystemMenuSettingsListItem_C* PushToTalk; // 0x338(0x08)
	struct UTBP_UI_SliderWBox_C* SfxVolumeSlider; // 0x340(0x08)
	struct UVerticalBox* SystemMenuSubItemBox; // 0x348(0x08)
	struct UTBP_UI_Scrollbox_C* TBP_UI_Scrollbox; // 0x350(0x08)
	struct UTigerStyledRichTextBlock* TigerStyledRichTextBlock_166; // 0x358(0x08)
	struct UTigerStyledRichTextBlock* TigerStyledRichTextBlock_383; // 0x360(0x08)
	struct UTBP_UI_CheckBox_C* UsePushToTalk; // 0x368(0x08)
	struct UTBP_UI_SliderWBox_C* VideoVolumeSlider; // 0x370(0x08)
	struct UTBP_UI_SliderWBox_C* VoiceChatVolumeSlider; // 0x378(0x08)
	struct UTBP_UI_SystemMenuItem_C* CurrentlySelectedSystemMenuItem; // 0x380(0x08)
	bool bIsAllowedToUseVoip; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct TMap<struct FString, struct FText> AudioMixPresetsToText; // 0x390(0x50)
	struct TArray<struct FText> AvailableAudioMixPresets; // 0x3e0(0x10)
	int32_t FoundAudioMixPresetIndex; // 0x3f0(0x04)
	char pad_3F4[0x4]; // 0x3f4(0x04)
	struct TArray<struct FAkDeviceInfo> AudioOutputDevices; // 0x3f8(0x10)

	void HasUnappliedChanges(bool& OutHasUnappliedChanges); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.HasUnappliedChanges // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ApplyChanges(bool& OutShouldShowRevertPrompt, bool& OutNeedsRestart); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.ApplyChanges // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void InitAudioOutputDevice(); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.InitAudioOutputDevice // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void InitAuidoMixPresets(); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.InitAuidoMixPresets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Handle Voip Response(bool InCanPerformAction); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.Handle Voip Response // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void UpdateOutputDevices(); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.UpdateOutputDevices // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SetComboBoxSelection(struct UTBP_UI_StyledComboBox_C* InComboBox); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.SetComboBoxSelection // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void UpdateInputDevices(); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.UpdateInputDevices // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void UpdateVolumeSettings(); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.UpdateVolumeSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Update Voip Settings(); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.Update Voip Settings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void DiscardChanges(); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.DiscardChanges // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void RevertChanges(); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.RevertChanges // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__AutoSprintToggle_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature(bool bIsChecked); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__AutoSprintToggle_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__SfxVolumeSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__SfxVolumeSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__DialogueVolumeSlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__DialogueVolumeSlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__VideoVolumeSlider_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__VideoVolumeSlider_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuAudioSettings_UsePushToTalk_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature(bool bIsChecked); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_UsePushToTalk_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuAudioSettings_MicVolumeSlider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_MicVolumeSlider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuAudioSettings_MuteWhenMinimized_K2Node_ComponentBoundEvent_9_OnCheckStateChanged__DelegateSignature(bool bIsChecked); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_MuteWhenMinimized_K2Node_ComponentBoundEvent_9_OnCheckStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuAudioSettings_EnableDolbyAtmos_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature(bool bIsChecked); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_EnableDolbyAtmos_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void ResetSettings(); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.ResetSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuAudioSettings_RecordingDeviceComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChanged__DelegateSignature(struct FText SelectedItem, int32_t SelectedIndex); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_RecordingDeviceComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuAudioSettings_OutputDeviceComboBox_K2Node_ComponentBoundEvent_12_OnSelectionChanged__DelegateSignature(struct FText SelectedItem, int32_t SelectedIndex); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_OutputDeviceComboBox_K2Node_ComponentBoundEvent_12_OnSelectionChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void ConfirmApply(); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.ConfirmApply // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OpenCategory(); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.OpenCategory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Construct(); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuAudioSettings_ControllerVolumeSlider_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_ControllerVolumeSlider_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void CloseCategory(); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.CloseCategory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CheckRestrictedActions(); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.CheckRestrictedActions // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuAudioSettings_AudioMixPresetComboBox_K2Node_ComponentBoundEvent_16_OnSelectionChanged__DelegateSignature(struct FText SelectedItem, int32_t SelectedIndex); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_AudioMixPresetComboBox_K2Node_ComponentBoundEvent_16_OnSelectionChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void BndEvt__TBP_UI_SystemMenuAudioSettings_AudioOutputDeviceComboBox_1_K2Node_ComponentBoundEvent_14_OnSelectionChanged__DelegateSignature(struct FText SelectedItem, int32_t SelectedIndex); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_AudioOutputDeviceComboBox_1_K2Node_ComponentBoundEvent_14_OnSelectionChanged__DelegateSignature // (BlueprintEvent) // @ game+0x18b4070
	void OnMouseCaptureEnd(VolumeSliders)(); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.OnMouseCaptureEnd(VolumeSliders) // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnUnhoveredSliderArrow(); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.OnUnhoveredSliderArrow // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ExecuteUbergraph_TBP_UI_SystemMenuAudioSettings(int32_t EntryPoint); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.ExecuteUbergraph_TBP_UI_SystemMenuAudioSettings // (Final|UbergraphFunction|HasDefaults) // @ game+0x18b4070
};

