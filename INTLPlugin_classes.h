// Class INTLPlugin.INTLBaseUserWidget
// Size: 0x268 (Inherited: 0x260)
struct UINTLBaseUserWidget : UUserWidget {
	char pad_260[0x8]; // 0x260(0x08)
};

// Class INTLPlugin.INTLOutputUtility
// Size: 0x28 (Inherited: 0x28)
struct UINTLOutputUtility : UBlueprintFunctionLibrary {

	void FormatNoticeRet(struct FINTLNoticeResult Ret, bool& IsSuccess, struct FText& ErrorMsg); // Function INTLPlugin.INTLOutputUtility.FormatNoticeRet // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbf4fd0
	void FormatBaseRet(struct FINTLBaseResult Ret, bool& IsSuccess, struct FText& ErrorMsg); // Function INTLPlugin.INTLOutputUtility.FormatBaseRet // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbf4d30
	void FormatAuthRet(struct FINTLAuthResult Ret, bool& IsSuccess, struct FText& ErrorMsg); // Function INTLPlugin.INTLOutputUtility.FormatAuthRet // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbf4b90
};

// Class INTLPlugin.INTLPluginObserver
// Size: 0x28 (Inherited: 0x28)
struct UINTLPluginObserver : UInterface {

	void OnWebViewResult(struct FINTLWebViewResult Ret); // Function INTLPlugin.INTLPluginObserver.OnWebViewResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xc01a00
	void OnUpdateStartRepoNewVersionInfoResult(struct FINTLUpdateStartRepoNewVersionInfo Ret); // Function INTLPlugin.INTLPluginObserver.OnUpdateStartRepoNewVersionInfoResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xc01870
	void OnUpdateResult(struct FINTLUpdateResult Ret); // Function INTLPlugin.INTLPluginObserver.OnUpdateResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xc01680
	void OnUpdateProgressResult(struct FINTLUpdateProgress Ret); // Function INTLPlugin.INTLPluginObserver.OnUpdateProgressResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xc01510
	void OnUpdateOptionalRepoInitResult(struct FINTLUpdateOptionalRepoInitResult Ret); // Function INTLPlugin.INTLPluginObserver.OnUpdateOptionalRepoInitResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xc01320
	void OnPushResult(struct FINTLPushResult Ret); // Function INTLPlugin.INTLPluginObserver.OnPushResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xc010b0
	void OnPushBaseResult(struct FINTLBaseResult Ret); // Function INTLPlugin.INTLPluginObserver.OnPushBaseResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xc00ee0
	void OnNoticeRequestData(struct FINTLNoticeResult Ret); // Function INTLPlugin.INTLPluginObserver.OnNoticeRequestData // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xc00c10
	void OnIPInfoResult(struct FINTLLBSIPInfoResult Ret); // Function INTLPlugin.INTLPluginObserver.OnIPInfoResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xc00970
	void OnIDTokenResult(struct FINTLIDTokenResult Ret); // Function INTLPlugin.INTLPluginObserver.OnIDTokenResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xc00740
	void OnFriendResult(struct FINTLFriendResult Ret); // Function INTLPlugin.INTLPluginObserver.OnFriendResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xc00470
	void OnFriendBaseResult(struct FINTLBaseResult Ret); // Function INTLPlugin.INTLPluginObserver.OnFriendBaseResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xc002a0
	void OnExtendResult(struct FINTLExtendResult Ret); // Function INTLPlugin.INTLPluginObserver.OnExtendResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xc00070
	void OnDNSResult(struct FINTLDNSResult Ret); // Function INTLPlugin.INTLPluginObserver.OnDNSResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbff860
	void OnDismissLoginUI(bool Canceled); // Function INTLPlugin.INTLPluginObserver.OnDismissLoginUI // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbfffe0
	void OnDirTreeResult(struct FINTLDirTreeResult Ret); // Function INTLPlugin.INTLPluginObserver.OnDirTreeResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbffd30
	void OnDeviceLevelResult(struct FINTLDeviceLevelResult Ret); // Function INTLPlugin.INTLPluginObserver.OnDeviceLevelResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbffb50
	void OnCutoutResult(struct FCutoutInfoResult Ret); // Function INTLPlugin.INTLPluginObserver.OnCutoutResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbff5e0
	void OnCustomerResult(struct FINTLCustomerResult Ret); // Function INTLPlugin.INTLPluginObserver.OnCustomerResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbff400
	void OnComplianceResult(struct FINTLComplianceResult Ret); // Function INTLPlugin.INTLPluginObserver.OnComplianceResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbfefe0
	void OnAuthResult(struct FINTLAuthResult Ret); // Function INTLPlugin.INTLPluginObserver.OnAuthResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbfef30
	void OnAuthBaseResult(struct FINTLBaseResult Ret); // Function INTLPlugin.INTLPluginObserver.OnAuthBaseResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbfed60
	void OnAccountResult(struct FINTLAccountResult Ret); // Function INTLPlugin.INTLPluginObserver.OnAccountResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbfecb0
};

// Class INTLPlugin.INTLSDKAPI
// Size: 0x28 (Inherited: 0x28)
struct UINTLSDKAPI : UBlueprintFunctionLibrary {

	bool UpdateStop(int32_t RepoID, int32_t TaskID); // Function INTLPlugin.INTLSDKAPI.UpdateStop // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc06d00
	bool UpdateStart(struct FINTLUpdateInitInfo Info); // Function INTLPlugin.INTLSDKAPI.UpdateStart // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc06b90
	bool UpdateContinue(int32_t RepoID); // Function INTLPlugin.INTLSDKAPI.UpdateContinue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc06b00
	bool UpdateConfig(struct TMap<struct FString, struct FString> Cfg, struct FString Project); // Function INTLPlugin.INTLSDKAPI.UpdateConfig // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc06900
	void UnregisterPush(struct FString Channel); // Function INTLPlugin.INTLSDKAPI.UnregisterPush // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc06810
	bool Unbind(enum class EINTLLoginChannel Channel, struct FString UID, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.Unbind // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc06650
	void ShutDown(); // Function INTLPlugin.INTLSDKAPI.ShutDown // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc06630
	bool ShowAccountPicker(); // Function INTLPlugin.INTLSDKAPI.ShowAccountPicker // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc06600
	bool Share(struct FINTLFriendReqInfo Info, struct FString Channel); // Function INTLPlugin.INTLSDKAPI.Share // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc05870
	void SetTag(struct FString Channel, struct FString Tag); // Function INTLPlugin.INTLSDKAPI.SetTag // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc06480
	void SetSessionExtraParam(struct FString extra_json); // Function INTLPlugin.INTLSDKAPI.SetSessionExtraParam // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc06390
	void SetDeviceLevel(int32_t Level); // Function INTLPlugin.INTLSDKAPI.SetDeviceLevel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc06310
	void SetCrashUserValue(struct FString Key, struct FString Value); // Function INTLPlugin.INTLSDKAPI.SetCrashUserValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc06190
	void SetCrashUserId(struct FString userId); // Function INTLPlugin.INTLSDKAPI.SetCrashUserId // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc060a0
	void SetCrashCallback(); // Function INTLPlugin.INTLSDKAPI.SetCrashCallback // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc06080
	void SetBuglyAppVersion(struct FString appVersion); // Function INTLPlugin.INTLSDKAPI.SetBuglyAppVersion // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc05fe0
	void SetAccountInfo(enum class EINTLLoginChannel Channel, int32_t ChannelID, struct FString LangType, int32_t AccountPlatType); // Function INTLPlugin.INTLSDKAPI.SetAccountInfo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc05e40
	void SetAccount(struct FString Channel, struct FString Account); // Function INTLPlugin.INTLSDKAPI.SetAccount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc05cc0
	bool SendMessage(struct FINTLFriendReqInfo Info, struct FString Channel); // Function INTLPlugin.INTLSDKAPI.SendMessage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc05870
	bool ResetPasswordWithVerifyCode(struct FString Account, struct FString VerifyCode, struct FString PhoneAreaCode, struct FString NewPassword, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.ResetPasswordWithVerifyCode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc054f0
	bool ResetPasswordWithOldPassword(struct FString Account, struct FString OldPassword, struct FString PhoneAreaCode, struct FString NewPassword, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.ResetPasswordWithOldPassword // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc05170
	bool ResetGuest(); // Function INTLPlugin.INTLSDKAPI.ResetGuest // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc05140
	bool RequestVerifyCode(struct FString Account, enum class EVerifyCodeType CodeType, struct FString PhoneAreaCode, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.RequestVerifyCode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc04ed0
	void RequestTrackingAuthorization(); // Function INTLPlugin.INTLSDKAPI.RequestTrackingAuthorization // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc04eb0
	void RequestIPInfo(); // Function INTLPlugin.INTLSDKAPI.RequestIPInfo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc04e90
	void ReportPayStep(int32_t Step, struct FString StepName, bool Result, int32_t ErrorCode, struct TMap<struct FString, struct FString> ParamsMap); // Function INTLPlugin.INTLSDKAPI.ReportPayStep // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc04bb0
	void ReportLoginStep(int32_t Step, struct FString StepName, bool Result, int32_t ErrorCode, struct TMap<struct FString, struct FString> ParamsMap); // Function INTLPlugin.INTLSDKAPI.ReportLoginStep // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc048d0
	void ReportException(int32_t Type, struct FString ExceptionName, struct FString ExceptionMsg, struct FString ExceptionStack, struct TMap<struct FString, struct FString> ExtInfo); // Function INTLPlugin.INTLSDKAPI.ReportException // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc04530
	void ReportEvent(struct FString EventName, struct TMap<struct FString, struct FString> ParamsMap, struct FString SpecificChannel, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.ReportEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc041d0
	void ReportCustomEventStep(struct FString EventName, int32_t Step, struct FString StepName, bool Result, int32_t ErrorCode, struct TMap<struct FString, struct FString> ParamsMap); // Function INTLPlugin.INTLSDKAPI.ReportCustomEventStep // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc03e40
	void ReportBinary(struct FString EventName, struct FString Data, int32_t Length, struct FString SpecificChannel); // Function INTLPlugin.INTLSDKAPI.ReportBinary // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc03bd0
	void RemoveObserver(struct TScriptInterface<IINTLPluginObserver> Observer); // Function INTLPlugin.INTLSDKAPI.RemoveObserver // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc03b40
	void RegisterPush(struct FString Channel, struct FString Account); // Function INTLPlugin.INTLSDKAPI.RegisterPush // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc039c0
	bool Register(struct FString Account, struct FString Password, struct FString VerifyCode, struct FString PhoneAreaCode, struct FINTLAccountProfile userProfile); // Function INTLPlugin.INTLSDKAPI.Register // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc03110
	bool QueryVerifyCodeStatus(struct FString Account, struct FString VerifyCode, enum class EVerifyCodeType CodeType, struct FString PhoneAreaCode, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.QueryVerifyCodeStatus // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc02df0
	void QueryUserNameStatus(struct FString UserName); // Function INTLPlugin.INTLSDKAPI.QueryUserNameStatus // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc02d50
	bool QueryUserInfo(); // Function INTLPlugin.INTLSDKAPI.QueryUserInfo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc02d20
	bool QueryRegisterStatus(struct FString Account, struct FString PhoneAreaCode, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.QueryRegisterStatus // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc02af0
	bool QueryLegalDocumentsAcceptedVersion(); // Function INTLPlugin.INTLSDKAPI.QueryLegalDocumentsAcceptedVersion // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc02ac0
	bool QueryIsReceiveEmail(struct FString Account, struct FString PhoneAreaCode, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.QueryIsReceiveEmail // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc02890
	void QueryIsEEA(struct FString Region); // Function INTLPlugin.INTLSDKAPI.QueryIsEEA // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc027a0
	void QueryIpByHost(struct FString Host); // Function INTLPlugin.INTLSDKAPI.QueryIpByHost // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc026b0
	void QueryIDToken(); // Function INTLPlugin.INTLSDKAPI.QueryIDToken // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc02690
	bool QueryFriends(enum class EINTLLoginChannel Channel, int32_t Page, int32_t Count, bool IsInGame, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.QueryFriends // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc02490
	void QueryDirTree(int32_t TreeId); // Function INTLPlugin.INTLSDKAPI.QueryDirTree // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc02410
	void QueryDirNode(int32_t TreeId, int32_t NodeId); // Function INTLPlugin.INTLSDKAPI.QueryDirNode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc02350
	void QueryDeviceLevel(); // Function INTLPlugin.INTLSDKAPI.QueryDeviceLevel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc02330
	void QueryDataProtectionAcceptance(); // Function INTLPlugin.INTLSDKAPI.QueryDataProtectionAcceptance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc02310
	bool QueryCanBind(int32_t ChannelID, int32_t AccountPlatType, struct FString Account, struct FString PhoneAreaCode, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.QueryCanBind // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc02060
	bool QueryActiveUser(); // Function INTLPlugin.INTLSDKAPI.QueryActiveUser // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc02030
	bool QueryAccountProfile(); // Function INTLPlugin.INTLSDKAPI.QueryAccountProfile // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc02000
	void PostNetworkLatencyInSession(int32_t LatencyMs); // Function INTLPlugin.INTLSDKAPI.PostNetworkLatencyInSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc01f80
	void PostFrameTimeInSession(float DeltaSeconds); // Function INTLPlugin.INTLSDKAPI.PostFrameTimeInSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc01f00
	void OpenUrl(struct FString URL, enum class EINTLWebViewOrientation ScreenOrientation, bool FullScreenEnable, bool EncryptEnable, bool SystemBrowserEnable, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.OpenUrl // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc01c40
	bool OnTickEvent(); // Function INTLPlugin.INTLSDKAPI.OnTickEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc012f0
	struct FString NoticeRequestData(struct FString Region, struct FString LangType, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.NoticeRequestData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfea40
	bool ModifyProfile(struct FINTLAccountProfile userProfile); // Function INTLPlugin.INTLSDKAPI.ModifyProfile // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfe490
	bool ModifyLegalDocumentsAcceptedVersion(struct FString acceptedVersionsJson); // Function INTLPlugin.INTLSDKAPI.ModifyLegalDocumentsAcceptedVersion // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfe3e0
	bool ModifyDownloadPriority(int32_t RepoID, int32_t TaskID, int32_t DownloadPriority); // Function INTLPlugin.INTLSDKAPI.ModifyDownloadPriority // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfe2e0
	void ModifyDataProtectionAcceptance(struct FString PPVersion, struct FString TOSVersion); // Function INTLPlugin.INTLSDKAPI.ModifyDataProtectionAcceptance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfe1e0
	bool ModifyAccountWithVerifyCode(struct FString OldAccount, struct FString OldAccountVerifyCode, struct FString OldPhoneAreaCode, struct FString NewAccount, struct FString NewAccountVerifyCode, struct FString NewPhoneAreaCode, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.ModifyAccountWithVerifyCode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfdce0
	bool ModifyAccountWithPassword(struct FString OldAccount, struct FString OldPhoneAreaCode, struct FString Password, struct FString NewAccount, struct FString NewAccountVerifyCode, struct FString NewPhoneAreaCode, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.ModifyAccountWithPassword // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfd7e0
	bool ModifyAccountWithLoginState(struct FString OldPhoneAreaCode, struct FString NewAccount, struct FString NewAccountVerifyCode, struct FString NewPhoneAreaCode, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.ModifyAccountWithLoginState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfd460
	void MarkSessionLoad(struct FString SessionName, struct FString extra_json); // Function INTLPlugin.INTLSDKAPI.MarkSessionLoad // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfd2e0
	void MarkSessionClosed(); // Function INTLPlugin.INTLSDKAPI.MarkSessionClosed // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfd2c0
	bool Logout(enum class EINTLLoginChannel Channel); // Function INTLPlugin.INTLSDKAPI.Logout // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfd240
	bool LoginWithVerifyCode(enum class EINTLLoginChannel Channel, struct FString Account, struct FString Password, struct FString VerifyCode, struct FString PhoneAreaCode, struct FString PermissionList); // Function INTLPlugin.INTLSDKAPI.LoginWithVerifyCode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfce70
	bool LoginWithPassword(enum class EINTLLoginChannel Channel, struct FString Account, struct FString Password, struct FString PhoneAreaCode, struct FString PermissionList); // Function INTLPlugin.INTLSDKAPI.LoginWithPassword // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfcb50
	bool LoginWithMappedChannel(enum class EINTLLoginChannel Channel, struct FString LoginMode, struct FString Permissions); // Function INTLPlugin.INTLSDKAPI.LoginWithMappedChannel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfc990
	bool LoginWithChannel(enum class EINTLLoginChannel Channel, struct FString LoginMode); // Function INTLPlugin.INTLSDKAPI.LoginWithChannel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfc860
	bool LoginWithBoundChannel(enum class EINTLLoginChannel Channel, struct FString LoginMode); // Function INTLPlugin.INTLSDKAPI.LoginWithBoundChannel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfc730
	bool Login(enum class EINTLLoginChannel Channel, struct FString Permissions, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.Login // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfc570
	void LogCrashInfo(enum class EINTLCrashLevel Level, struct FString Tag, struct FString Log); // Function INTLPlugin.INTLSDKAPI.LogCrashInfo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfc3b0
	void LoadCutoutData(); // Function INTLPlugin.INTLSDKAPI.LoadCutoutData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfc390
	void LaunchLoginUI(); // Function INTLPlugin.INTLSDKAPI.LaunchLoginUI // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfc370
	bool LaunchCustomerUI(struct FINTLCustomerUserProfile userProfile); // Function INTLPlugin.INTLSDKAPI.LaunchCustomerUI // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfc140
	bool LaunchAccountUI(int32_t Type, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.LaunchAccountUI // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfc010
	bool IsAppInstalled(struct FString Channel, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.IsAppInstalled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfbe80
	void InitAnalytics(); // Function INTLPlugin.INTLSDKAPI.InitAnalytics // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfbe60
	void Init(); // Function INTLPlugin.INTLSDKAPI.Init // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfbe40
	struct FString GetSDKVersion(); // Function INTLPlugin.INTLSDKAPI.GetSDKVersion // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfbdc0
	struct FString GetIpByHost(struct FString Host); // Function INTLPlugin.INTLSDKAPI.GetIpByHost // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfbc80
	struct FString GetInstanceIDAsync(struct FString Channel); // Function INTLPlugin.INTLSDKAPI.GetInstanceIDAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfbb40
	struct FString GetInstanceID(struct FString Channel); // Function INTLPlugin.INTLSDKAPI.GetInstanceID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfba00
	bool GetIDTokenResult(struct FINTLIDTokenResult& jwtRet); // Function INTLPlugin.INTLSDKAPI.GetIDTokenResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbfb8f0
	struct FString GetEncryptUrl(struct FString URL); // Function INTLPlugin.INTLSDKAPI.GetEncryptUrl // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfb7b0
	int32_t GetDeviceLevel(); // Function INTLPlugin.INTLSDKAPI.GetDeviceLevel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfb780
	struct FString GetCurrentResourceVersion(); // Function INTLPlugin.INTLSDKAPI.GetCurrentResourceVersion // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfb700
	struct FString GetCurrentAppVersion(); // Function INTLPlugin.INTLSDKAPI.GetCurrentAppVersion // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfb680
	struct FString GetConfig(struct FString Key, struct FString DefaultVal, struct FString Project); // Function INTLPlugin.INTLSDKAPI.GetConfig // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfb410
	bool GetAuthResult(struct FINTLAuthResult& LoginRet); // Function INTLPlugin.INTLSDKAPI.GetAuthResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbfb360
	struct FString ExtendInvoke(enum class EINTLLoginChannel Channel, struct FString ExtendMethodName, struct FString ParamsJson); // Function INTLPlugin.INTLSDKAPI.ExtendInvoke // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfb160
	int32_t DownloadOptionalRepoFiles(int32_t RepoID, int32_t DownloadPriority, struct TArray<struct FString>& FilesPath); // Function INTLPlugin.INTLSDKAPI.DownloadOptionalRepoFiles // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbfb010
	void DismissLoginUI(bool Canceled); // Function INTLPlugin.INTLSDKAPI.DismissLoginUI // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfaf90
	void DeleteTag(struct FString Channel, struct FString Tag); // Function INTLPlugin.INTLSDKAPI.DeleteTag // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfae10
	void DeleteLocalNotifications(struct FString Key); // Function INTLPlugin.INTLSDKAPI.DeleteLocalNotifications // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfad20
	void DeleteAccount(struct FString Channel, struct FString Account); // Function INTLPlugin.INTLSDKAPI.DeleteAccount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfaba0
	bool ComplianceSetUserProfile(struct FString GameID, struct FString OpenId, struct FString Token, int32_t ChannelID, struct FString Region); // Function INTLPlugin.INTLSDKAPI.ComplianceSetUserProfile // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfa880
	void ComplianceSetParentCertificateStatus(enum class EComplianceParentCertificateStatus Status); // Function INTLPlugin.INTLSDKAPI.ComplianceSetParentCertificateStatus // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfa810
	void ComplianceSetEUAgreeStatus(enum class EComplianceAgreeStatus Status); // Function INTLPlugin.INTLSDKAPI.ComplianceSetEUAgreeStatus // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfa7a0
	void ComplianceSetAdulthood(enum class EComplianceAgeStatus Status); // Function INTLPlugin.INTLSDKAPI.ComplianceSetAdulthood // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfa730
	void ComplianceSendEmail(struct FString Email, struct FString UserName); // Function INTLPlugin.INTLSDKAPI.ComplianceSendEmail // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfa5b0
	void ComplianceQueryUserStatus(); // Function INTLPlugin.INTLSDKAPI.ComplianceQueryUserStatus // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfa590
	void ComplianceCommitBirthday(int32_t BirthdayYear, int32_t BirthdayMonth, int32_t BirthdayDay); // Function INTLPlugin.INTLSDKAPI.ComplianceCommitBirthday // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfa490
	void CollectionStop(); // Function INTLPlugin.INTLSDKAPI.CollectionStop // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfa470
	void CollectionResume(); // Function INTLPlugin.INTLSDKAPI.CollectionResume // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfa450
	void ClearLocalNotifications(struct FString Channel); // Function INTLPlugin.INTLSDKAPI.ClearLocalNotifications // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfa360
	struct TArray<struct FINTLUpdateOptionalRepoFilesStatus> CheckOptionalRepoFiles(int32_t RepoID, struct TArray<struct FString>& FilesPath); // Function INTLPlugin.INTLSDKAPI.CheckOptionalRepoFiles // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbfa1b0
	bool CheckActiveUser(); // Function INTLPlugin.INTLSDKAPI.CheckActiveUser // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfa180
	void CallJS(struct FString JsonJsParam); // Function INTLPlugin.INTLSDKAPI.CallJS // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfa090
	bool BuildMapWithLoggedinChannel(); // Function INTLPlugin.INTLSDKAPI.BuildMapWithLoggedinChannel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfa060
	bool BindWithLoggedinChannel(); // Function INTLPlugin.INTLSDKAPI.BindWithLoggedinChannel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbfa030
	bool Bind(enum class EINTLLoginChannel Channel, struct FString Permissions, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.Bind // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbf9e70
	bool AutoLogin(); // Function INTLPlugin.INTLSDKAPI.AutoLogin // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbf9e40
	void AddObserver(struct TScriptInterface<IINTLPluginObserver> Observer); // Function INTLPlugin.INTLSDKAPI.AddObserver // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbf9db0
	void AddLocalNotificationIOS(struct FString Channel, struct FINTLLocalNotificationIOS LocalNotification); // Function INTLPlugin.INTLSDKAPI.AddLocalNotificationIOS // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbf9ad0
	void AddLocalNotification(struct FString Channel, struct FINTLLocalNotification LocalNotification); // Function INTLPlugin.INTLSDKAPI.AddLocalNotification // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbf9730
};

// Class INTLPlugin.INTLUtility
// Size: 0x28 (Inherited: 0x28)
struct UINTLUtility : UBlueprintFunctionLibrary {

	bool Regular(struct FString Str, struct FString Reg); // Function INTLPlugin.INTLUtility.Regular // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc070a0
	int32_t RefreshCurToastCnt(int32_t ChangeCnt); // Function INTLPlugin.INTLUtility.RefreshCurToastCnt // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc07010
	int32_t GetNewToastOrder(); // Function INTLPlugin.INTLUtility.GetNewToastOrder // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc06fe0
	void ForceCrash(); // Function INTLPlugin.INTLUtility.ForceCrash // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xc06fc0
};

