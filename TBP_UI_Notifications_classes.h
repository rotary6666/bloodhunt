// WidgetBlueprintGeneratedClass TBP_UI_Notifications.TBP_UI_Notifications_C
// Size: 0x412 (Inherited: 0x2b8)
struct UTBP_UI_Notifications_C : UTigerNotificationsUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UTBP_NotificationUIStacker_C* ChallengeNotificationStacker; // 0x2c0(0x08)
	struct UTBP_NotificationUIStacker_C* NotificationStacker; // 0x2c8(0x08)
	struct UTigerSafeZoneWidget* TigerSafeZoneWidget_1; // 0x2d0(0x08)
	struct UTigerItemAsset* BloodAsset; // 0x2d8(0x08)
	struct UTigerItemAsset* DisciplineAsset; // 0x2e0(0x08)
	struct UTigerChallenge* CachedMatchChallenge; // 0x2e8(0x08)
	struct TArray<struct UTigerChallenge*> CachedDailyChallenges; // 0x2f0(0x10)
	struct TMap<struct UTigerPingBase*, float> LastPingNotificationTimes; // 0x300(0x50)
	struct TMap<enum class ETigerWeaponAmmoType, struct FName> AmmoTypeToAudioName; // 0x350(0x50)
	struct TMap<enum class ERangedWeaponModType, struct FName> ModTypeToAudioName; // 0x3a0(0x50)
	struct UAkAudioEvent* FriendAddedAudioEvent; // 0x3f0(0x08)
	struct UAkAudioEvent* FriendRemovedAudioEvent; // 0x3f8(0x08)
	struct UAkAudioEvent* FriendInviteReceivedAudioEvent; // 0x400(0x08)
	struct UAkAudioEvent* FriendInviteRejectedAudioEvent; // 0x408(0x08)
	bool bHideKillFeed; // 0x410(0x01)
	bool bIsUsingExtendedGroups; // 0x411(0x01)

	void GetFormattedTextForPlayerStateData(struct FTigerPlayerStateGameData& InPlayerStateData, bool bIsInstigator, struct FText& OutText, struct FLinearColor& OutTeamMemberColor); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.GetFormattedTextForPlayerStateData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Set Kill Notification Visibility(); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.Set Kill Notification Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void Create Challenge Completed Notification(struct UTigerChallenge* InCompletedChallenge, struct UTBP_UI_Challenge_Notification_Item_C*& Challenge UI Notification); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.Create Challenge Completed Notification // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void AddFriendNotification(struct UTexture2D* InIcon, struct FText& InMessage, struct UAkAudioEvent* InAudioEvent); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddFriendNotification // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void FormatPlayerNameColored(struct FText InNotificationText, struct ATigerPlayerState* InPlayerState, struct FText& OutNotificationText); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.FormatPlayerNameColored // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x18b4070
	void AddEnemyBrokeMasqueradeNotification(struct ATigerPlayerState*& EnemyPlayer); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddEnemyBrokeMasqueradeNotification // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void PlayPingVOAudio(struct FTigerPingNotificationNetData InPingData, struct ATigerPlayerState* InPlayerState); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.PlayPingVOAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void PlayCancelPingAudio(struct AActor* Actor, struct UObject* Object); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.PlayCancelPingAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void PlayCorrespondingPingAudio(bool bIsInIntrested, struct UObject* PingBase); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.PlayCorrespondingPingAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void CreatePingNotification(struct FText InNotificationText, struct UTexture2D* InTexture, float InIconScale, enum class ETigerUIColor InUIColor, struct ATigerPlayerState* InPlayerState, bool bIsItem); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.CreatePingNotification // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void GetFormattedPingPingName(struct FText InNotificationText, enum class ETigerUIColor InTigerColor, struct FText& OutNotificationText); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.GetFormattedPingPingName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x18b4070
	void FormatColoredGroupMemberName(struct FText InNotificationText, struct ATigerPlayerState* InPlayerState, struct FText& OutNotificationText); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.FormatColoredGroupMemberName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x18b4070
	void GetItemCountText(int32_t Count, struct FText& Text); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.GetItemCountText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x18b4070
	void AddItemNotification(struct FTigerItemNotification& TigerItemNotification); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddItemNotification // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void AddDeathNotification(bool IsPlayerInSameGroup, struct FTigerPlayerStateGameData InInstigatorData, struct FTigerPlayerStateGameData InDeadPlayerData); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddDeathNotification // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnPlayerDeath(struct FTigerPlayerStateGameData& InKilledPlayerData, struct FTigerPlayerStateGameData& InInstigatorPlayerData, bool bIsPlayerInSameGroup); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnPlayerDeath // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void OnMemberJoinedGroup(struct FTigerPlayerStateGameData& InPlayerData); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnMemberJoinedGroup // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void OnMemberLeftGroup(struct FTigerPlayerStateGameData& InPlayerData); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnMemberLeftGroup // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void HandleOnPersistentPlayerInitialisedEvent(struct ATigerPlayerController* PlayerController); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.HandleOnPersistentPlayerInitialisedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void OnHolyIncenseImminent(float Time); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnHolyIncenseImminent // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnInitialized(); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnGroupPing(struct FTigerPingNotificationNetData& PingData, struct ATigerPlayerState* InSendingPlayerState); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGroupPing // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void OnGroupPingResponse(struct UTigerPingClientData* InPingData, struct ATigerPlayerState* InRespondingPlayer, bool bInIsInterested); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGroupPingResponse // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnGroupPingCanceled(struct UTigerPingClientData* InPingData); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGroupPingCanceled // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnOtherPlayerBrokeMasquerade(struct ATigerPlayerState* InPlayerState); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnOtherPlayerBrokeMasquerade // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnReceivedReward(); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnReceivedReward // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnFriendAdded(struct UTigerFriend* InNewFriend); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendAdded // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnFriendInviteReceived(struct UTigerFriendInvite* InInvite); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendInviteReceived // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnFriendInviteRejected(struct UTigerFriendInvite* InInvite); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendInviteRejected // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnFriendRemoved(struct UTigerFriend* InLostFriend); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendRemoved // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnGrimoireItemUnlocked(struct UTigerGrimoireEntry* InGrimoireEntry); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGrimoireItemUnlocked // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnFriendInviteSent(); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendInviteSent // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnChallengeCompleted(struct UTigerChallenge* InCompletedChallenge); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnChallengeCompleted // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnAcceptGroupInviteFailed(struct FTigerInviteId& InInviteId); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnAcceptGroupInviteFailed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x18b4070
	void OnCollectibleFound(struct UTigerCollectibleData* InCollectible); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnCollectibleFound // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnQuestCompleted(struct UTigerQuest* InCompletedQuest); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnQuestCompleted // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnGroupInviteReceived(struct UTigerPartyInvite* InInvite); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGroupInviteReceived // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnQuestObjectiveCompleted(struct UTigerQuestObjective* InCompleteObjective); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnQuestObjectiveCompleted // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void Destruct(); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnQuestUnlocked(struct UTigerQuest* InNewQuest); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnQuestUnlocked // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnQuestObjectiveUnlocked(struct UTigerQuestObjective* InCompleteObjective); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnQuestObjectiveUnlocked // (Event|Public|BlueprintEvent) // @ game+0x18b4070
	void OnMatchSettingsAvailable(); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnMatchSettingsAvailable // (BlueprintCallable|BlueprintEvent) // @ game+0x18b4070
	void ExecuteUbergraph_TBP_UI_Notifications(int32_t EntryPoint); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.ExecuteUbergraph_TBP_UI_Notifications // (Final|UbergraphFunction|HasDefaults) // @ game+0x18b4070
};

