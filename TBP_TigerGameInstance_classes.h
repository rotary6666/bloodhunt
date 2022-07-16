// BlueprintGeneratedClass TBP_TigerGameInstance.TBP_TigerGameInstance_C
// Size: 0xc20 (Inherited: 0xa00)
struct UTBP_TigerGameInstance_C : UTigerGameInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa00(0x08)
	struct UTBP_UI_JoinElysiumScreen_C* JoinElysiumScreenWB; // 0xa08(0x08)
	struct UTBP_UI_LobbyMenu_C* LobbyMenuWB; // 0xa10(0x08)
	struct UTBP_UI_HostMenu_C* HostMenuWB; // 0xa18(0x08)
	struct UTBP_UI_FindGameFailedMenu_C* FindGameFailedMenuWB; // 0xa20(0x08)
	int32_t MaxPlayers; // 0xa28(0x04)
	char pad_A2C[0x4]; // 0xa2c(0x04)
	struct FText ServerName; // 0xa30(0x18)
	struct UTBP_UI_MatchMenu_C* MatchMenuWB; // 0xa48(0x08)
	struct FString PlayerSettingsSave; // 0xa50(0x10)
	bool bMainMenuIsOpen; // 0xa60(0x01)
	char pad_A61[0x7]; // 0xa61(0x07)
	struct UTBP_UI_JoinGameMenu_C* JoinGameMenuWB; // 0xa68(0x08)
	struct UTBP_UI_GroupInvitationList_C* InvitationListWB; // 0xa70(0x08)
	struct UTBP_UI_ServerSelection_C* ServerSelectionMenuWB; // 0xa78(0x08)
	struct FMulticastInlineDelegate OnJoinGameCountdownBegin; // 0xa80(0x10)
	struct UTBP_UI_TutorialMenu_C* TutorialMenuWB; // 0xa90(0x08)
	struct UTBP_UI_JoinPartyElysiumScreen_C* JoinPartyElysiumScreenWB; // 0xa98(0x08)
	struct TSoftObjectPtr<UObject> ErrorStringTable; // 0xaa0(0x28)
	struct FString TraveledFrom; // 0xac8(0x10)
	struct FTigerBpFindSessionSelectedSession SelectedSession; // 0xad8(0x110)
	struct UAkAudioEvent* MenuMusicEvent; // 0xbe8(0x08)
	struct UTBP_UI_Tutorial_IntroText_C* TutorialIntroWB; // 0xbf0(0x08)
	struct FMulticastInlineDelegate OnTitleScreenFadeOutStarted; // 0xbf8(0x10)
	struct UTBP_UI_VoiceChatPopup_C* VoiceChatPopup; // 0xc08(0x08)
	struct FMulticastInlineDelegate OnForceCloseMainMenu; // 0xc10(0x10)

	void CheckMainMenuConditionsAndForceClose(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CheckMainMenuConditionsAndForceClose // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void GetIngameMenuUI(struct UTigerIngameMenuWidget*& IngameMenuUI); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.GetIngameMenuUI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x18b4070
	struct FLinearColor GetUIColor(enum class ETigerUIColor UIColor, enum class ETigerColourSpace ColorSpace); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.GetUIColor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	bool IsAllowedToOpenMainMenu(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.IsAllowedToOpenMainMenu // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void GetJoinErrorText(struct FText& OutErrorText, bool& bHadError); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.GetJoinErrorText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void GetErrorStringTableId(struct FName& TableId); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.GetErrorStringTableId // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x18b4070
	void IsInMatch(bool& InMatch); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.IsInMatch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x18b4070
	void IsElysiumGameMenuOpen(bool& bIsOpen); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.IsElysiumGameMenuOpen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x18b4070
	void CreateJoinGameMenu(struct UTBP_UI_JoinGameMenu_C*& Output_Get); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CreateJoinGameMenu // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CloseMenuWidget(struct UTigerMenuWidget* Widget); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseMenuWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OpenMenuWidget(struct UTigerMenuWidget* Widget, int32_t ZOrder); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenMenuWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void TravelErrorToString(enum class ETravelFailure FailureType, struct FString& OutString); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TravelErrorToString // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x18b4070
	void NetErrorToString(enum class ENetworkFailure FailureType, struct FString& OutString); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.NetErrorToString // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x18b4070
	void OnPreLoadingDone_CA1249C244C7069F7709069D760517F5(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnPreLoadingDone_CA1249C244C7069F7709069D760517F5 // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnEnterElysium_CA1249C244C7069F7709069D760517F5(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnEnterElysium_CA1249C244C7069F7709069D760517F5 // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnEnterElysiumFirstTime_CA1249C244C7069F7709069D760517F5(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnEnterElysiumFirstTime_CA1249C244C7069F7709069D760517F5 // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnLaunchTutorial_CA1249C244C7069F7709069D760517F5(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLaunchTutorial_CA1249C244C7069F7709069D760517F5 // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void SettingSynced_F84C62744FD1A855B9C1AD9954A00F97(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.SettingSynced_F84C62744FD1A855B9C1AD9954A00F97 // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnFailed_1E6BE8B346DD94D56C97728AB4E9C7C5(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnFailed_1E6BE8B346DD94D56C97728AB4E9C7C5 // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnSuccess_1E6BE8B346DD94D56C97728AB4E9C7C5(struct FTigerBpFindSessionResultList& Result); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnSuccess_1E6BE8B346DD94D56C97728AB4E9C7C5 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ShowHostMenu(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ShowHostMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OpenLobbyMenu(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenLobbyMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnLoginSucceeded(struct TArray<struct FTigerPersistentPlayerCharacter>& AvailableCharacters); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLoginSucceeded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void LaunchElysiumServer(int32_t NumberOfPlayers, bool EnableLan?, struct FText ServerName); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.LaunchElysiumServer // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnLoginFailed(struct FTigerLoginFailedInfo& InLoginFailedInfo); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLoginFailed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void OnLegalDocumentAcceptanceResult(struct TArray<enum class ETigerLegalDocumentType>& InDocumentTypes); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLegalDocumentAcceptanceResult // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void HandleNetworkError(enum class ENetworkFailure FailureType, bool bIsServer); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.HandleNetworkError // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void HandleTravelError(enum class ETravelFailure FailureType); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.HandleTravelError // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void EnterBootFlow(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.EnterBootFlow // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ToggleLobbyMeny(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ToggleLobbyMeny // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CloseLobbyMenu(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseLobbyMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnGetUserPrivileges(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnGetUserPrivileges // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void CloseFindGameFailedMenu(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseFindGameFailedMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnCreateCharacterResult(struct FTigerPersistentCharacterID& CharacterId, bool bWasCharacterCreated); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnCreateCharacterResult // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void OnCharacterSelected(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnCharacterSelected // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OpenFindElysiumMenu(bool bStartSearch, bool bStartHidden, bool bFirstTime); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenFindElysiumMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CloseFindElysiumMenu(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseFindElysiumMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OpenMatchMenu(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenMatchMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OpenLoadingScreen(struct TSoftClassPtr<UObject> TigerGameMode); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenLoadingScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CloseLoadingScreen(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseLoadingScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ReturnToCharacterSelection(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReturnToCharacterSelection // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OpenJoinGameMenu(struct FTigerBpFindSessionSelectedSession SessionToJoin); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenJoinGameMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CloseJoinGameMenu(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseJoinGameMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ReceiveInvitation(struct FTigerGroupInvitation& Invitation, struct ATigerPlayerState* Inviter); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReceiveInvitation // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void RemoveInvitationList(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.RemoveInvitationList // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OpenServerSelectionMenu(struct FTigerBpFindSessionResultList Sessions); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenServerSelectionMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CloseServerSelectionMenu(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseServerSelectionMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OpenFindGameFailedMenu(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenFindGameFailedMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnSelected(struct FTigerBpFindSessionSelectedSession Session); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void FadeInLoadingScreen(struct TSoftClassPtr<UObject> TigerGameMode); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.FadeInLoadingScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void FadeOutLoadingScreen(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.FadeOutLoadingScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnInitialLevelStreamingCompleted(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnInitialLevelStreamingCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnClosedJoinElysium(struct FString ErrorString); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnClosedJoinElysium // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnSuccessfulJoin(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnSuccessfulJoin // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ReturnToBootStartMapTransfer(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReturnToBootStartMapTransfer // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void PostLoadMapWithWorld(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.PostLoadMapWithWorld // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnGetValidGameVersionResult(enum class ETigerVersionIsValidResult Result); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnGetValidGameVersionResult // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnIgnored_Dispatch_Event_1(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnIgnored_Dispatch_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void FindMatch(struct FString InGameModeId, int32_t InGameModeIndex); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.FindMatch // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void RetryPostLoadMap(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.RetryPostLoadMap // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CancelJoinGame(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CancelJoinGame // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ReceiveInit(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReceiveInit // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OpenTutorialMenu(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenTutorialMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CloseTutorialMenu(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseTutorialMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnTransferLoadingScreenOpaque(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnTransferLoadingScreenOpaque // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void TransferFromMatch(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TransferFromMatch // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnJoinPartyElysiumFailed(struct FString ErrorString); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnJoinPartyElysiumFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CloseJoinPartyElysiumMenu(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseJoinPartyElysiumMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnJoinPartyElysiumSuccess(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnJoinPartyElysiumSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnTransferToPartyElysiumFadeComplete(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnTransferToPartyElysiumFadeComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OpenJoinPartyElysiumScreen(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenJoinPartyElysiumScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void KickToLoginScreen(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.KickToLoginScreen // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnLoadingScreenFullyOpaque_Event(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLoadingScreenFullyOpaque_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnCreateGameSessionFailed(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnCreateGameSessionFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void JoinSessionThroughUrl(struct FString SessionURL); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.JoinSessionThroughUrl // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void ShowTitleScreen(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ShowTitleScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void DispatchTitleScreenClosed(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.DispatchTitleScreenClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ShowMoviesAndTitleScreen(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ShowMoviesAndTitleScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Cheat_QuitTutorial(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.Cheat_QuitTutorial // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void Transfer from Match(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.Transfer from Match // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CloseMatchMenu(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseMatchMenu // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void TitleScreenFadeOutStarted(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TitleScreenFadeOutStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ToggleTutorialMenu(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ToggleTutorialMenu // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ReturnToElysium(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReturnToElysium // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ShowPostMatchScreen(bool bInShouldLeaveParty); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ShowPostMatchScreen // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ToggleMatchMeny(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ToggleMatchMeny // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ReturnToBootWithError(struct FString InError); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReturnToBootWithError // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void TransferToPartyElysium(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TransferToPartyElysium // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void LoadingToTuorialFullyOpaque(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.LoadingToTuorialFullyOpaque // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void RetryTutorial(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.RetryTutorial // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void GameStateSet(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.GameStateSet // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void EnableVoipPopups(bool InEnable); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.EnableVoipPopups // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void TransferToElysium(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TransferToElysium // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void WaitForJoinParty(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.WaitForJoinParty // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnJoinedParty(struct FTigerParty& InParty); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnJoinedParty // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnJoinPartyFailed(enum class ETigerJoinedPartyFailedReason InJoinedPartyFailedReason); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnJoinPartyFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ReturnToCharacterSelectionDispatcher(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReturnToCharacterSelectionDispatcher // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnSessionsFound(struct FTigerBpFindSessionResultList ResultsList); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnSessionsFound // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void TravelToTutorial(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TravelToTutorial // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnWinScreenShown(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnWinScreenShown // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void ExecuteUbergraph_TBP_TigerGameInstance(int32_t EntryPoint); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ExecuteUbergraph_TBP_TigerGameInstance // (Final|UbergraphFunction|HasDefaults) // @ game+0x18b4070
	void OnForceCloseMainMenu__DelegateSignature(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnForceCloseMainMenu__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnTitleScreenFadeOutStarted__DelegateSignature(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnTitleScreenFadeOutStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnJoinGameCountdownBegin__DelegateSignature(); // Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnJoinGameCountdownBegin__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
};

