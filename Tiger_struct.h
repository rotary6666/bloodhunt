// Enum Tiger.ETigerDisciplineCooldownReductionType
enum class ETigerDisciplineCooldownReductionType : uint8 {
	Seconds = 0,
	MultiplierOfTotal = 1,
	MultiplierOfRemaining = 2,
	ETigerDisciplineCooldownReductionType_MAX = 3
};

// Enum Tiger.ETigerDisciplinesEnum
enum class ETigerDisciplinesEnum : uint8 {
	TE_DisciplineNone = 0,
	TE_DisciplineTeleport = 1,
	TE_DisciplineStun = 2,
	TE_DisciplineFOTT = 3,
	TE_DisciplineJump = 4,
	TE_DisciplineSwiftStrike = 5,
	TE_DisciplineFlowerOfDeath = 6,
	TE_DisciplineDisplacement = 7,
	TE_DisciplineEarthshock = 8,
	TE_DisciplineFrenzy = 9,
	TE_DisciplineVanish = 10,
	TE_DisciplineScouts = 11,
	TE_DisciplineLaceratingThrow = 12,
	TE_DisciplineReposition = 13,
	TE_DisciplineIncitePain = 14,
	TE_DisciplineMajesty = 15,
	TE_DisciplineGuardBreak = 16,
	TE_DisciplinePassion = 17,
	TE_DisciplineCharm = 18,
	TE_DisciplineProjectionDash = 19,
	TE_DisciplineBlindingBeauty = 20,
	TE_DisciplineRejuvenatingVoice = 21,
	TE_DisciplineShackles = 22,
	TE_DisciplineTraps = 23,
	TE_DisciplineShockwavePunch = 24,
	TE_WeaponAbilityAxeThrow = 25,
	TE_WeaponAbilityDash = 26,
	TE_WeaponAbilityHook = 27,
	TE_WeaponAbilityReflect = 28,
	TE_WeaponAbilitySpikedBat = 29,
	TE_WeaponAbilityGreatsword = 30,
	TE_WeaponAbilityThrowingKnifes = 31,
	TE_DisciplineFleshOfMarble = 32,
	TE_DisciplineTankyCharge = 33,
	TE_DisciplineVentrueTwo = 34,
	TE_DisciplineCount = 35,
	TE_MAX = 36
};

// Enum Tiger.ETigerDisciplineSlot
enum class ETigerDisciplineSlot : uint8 {
	TE_DisciplineSlotLeft = 0,
	TE_DisciplineSlotSuper = 1,
	TE_DisciplineSlotRight = 2,
	TE_DisciplineSlotCount = 3,
	TE_MAX = 4
};

// Enum Tiger.ETigerCharacterActions
enum class ETigerCharacterActions : uint8 {
	Reloading = 0,
	Shooting = 1,
	Aiming = 2,
	Blocking = 3,
	MeleeAttack = 4,
	Climbing = 5,
	LedgeGrab = 6,
	LowVault = 7,
	Interacting = 8,
	UseDiscipline = 9,
	SwitchWeapon = 10,
	Jump = 11,
	Sprinting = 12,
	AlternateAction = 13,
	UseConsumable = 14,
	None = 15,
	ETigerCharacterActions_MAX = 16
};

// Enum Tiger.ETigerDisciplineEvent
enum class ETigerDisciplineEvent : uint8 {
	ScoutSpawned = 0,
	ScoutDespawned = 1,
	AnimationCallback = 2,
	ProjectionDied = 3,
	TeleportToProjection = 4,
	EnablePlayerMovement = 5,
	WeaponAbility_ThrowHook = 6,
	ProjectionDiedDueToOutOfRange = 7,
	ETigerDisciplineEvent_MAX = 8
};

// Enum Tiger.ETigerInputActionResult
enum class ETigerInputActionResult : uint8 {
	Failed = 0,
	Buffer = 1,
	Success = 2,
	ETigerInputActionResult_MAX = 3
};

// Enum Tiger.ETigerTraversalAction
enum class ETigerTraversalAction : uint8 {
	Jump = 0,
	WallJump = 1,
	SlideBegin = 2,
	SlideEnd = 3,
	SlideJump = 4,
	AirDash = 5,
	WallGrindStarted = 6,
	WallGrindEnded = 7,
	ClimbStarted = 8,
	ClimbEnded = 9,
	HardLanding = 10,
	ETigerTraversalAction_MAX = 11
};

// Enum Tiger.ETigerTelemetryItemSourceID
enum class ETigerTelemetryItemSourceID : uint8 {
	Cheat = 0,
	BotCheat = 1,
	Spawn = 2,
	Floor = 3,
	Van = 4,
	Store = 5,
	EntityCorpse = 6,
	JudgeCorpse = 7,
	PlayerCorpse = 8,
	PlayerDrop = 9,
	LootCrate = 10,
	Collectible = 11,
	Perk = 12,
	ServerCorrection = 13,
	ETigerTelemetryItemSourceID_MAX = 14
};

// Enum Tiger.ETigerWeaponSlot
enum class ETigerWeaponSlot : uint8 {
	First = 0,
	Ranged_Primary = 0,
	Ranged_Secondary = 1,
	Melee = 2,
	Unarmed = 3,
	Last = 3,
	Count = 4,
	ETigerWeaponSlot_MAX = 5
};

// Enum Tiger.ETigerWeaponAmmoType
enum class ETigerWeaponAmmoType : uint8 {
	Bullet = 0,
	Buckshot = 1,
	Pistol = 2,
	SMG = 3,
	Bolt = 4,
	Precision = 5,
	Unique = 6,
	Count = 7,
	ETigerWeaponAmmoType_MAX = 8
};

// Enum Tiger.ETigerInventoryItemType
enum class ETigerInventoryItemType : uint8 {
	TigerInventoryItem_Firearm = 0,
	TigerInventoryItem_Melee = 1,
	TigerInventoryItem_Unarmed = 2,
	TigerInventoryItem_Outfit = 3,
	TigerInventoryItem_Amulet = 4,
	TigerInventoryItem_Artifact = 5,
	TigerInventoryItem_BodyArmor = 6,
	TigerInventoryItem_Relic = 7,
	TigerInventoryItem_Ammo = 8,
	TigerInventoryItem_CombinedAmmo = 9,
	TigerInventoryItem_Consumable = 10,
	TigerInventoryItem_Mod = 11,
	TigerInventoryItem_Collectible = 12,
	TigerInventoryItem_Key = 13,
	TigerInventoryItem_Size = 14,
	TigerInventoryItem_MAX = 15
};

// Enum Tiger.ETigerItemPickupInfo
enum class ETigerItemPickupInfo : uint8 {
	CanBePickedUp = 0,
	AlreadyPickedUp = 1,
	CategoryFull = 2,
	ItemIsNull = 3,
	CanPickUpAmmo = 4,
	AmmoFull = 5,
	Swap = 6,
	ETigerItemPickupInfo_MAX = 7
};

// Enum Tiger.ERangedWeaponModType
enum class ERangedWeaponModType : uint8 {
	Scope = 0,
	ExtendedMag = 1,
	Stock = 2,
	Special = 3,
	Barrel = 4,
	ERangedWeaponModType_MAX = 5
};

// Enum Tiger.ETigerCharacterAkAlignmentType
enum class ETigerCharacterAkAlignmentType : uint8 {
	Me = 0,
	Ally = 1,
	Enemy = 2,
	Count = 3,
	ETigerCharacterAkAlignmentType_MAX = 4
};

// Enum Tiger.ETigerHostilityStatus
enum class ETigerHostilityStatus : uint8 {
	Hostile = 0,
	Friends = 1,
	FriendsByGroup = 2,
	FriendsByExtendedGroup = 3,
	ETigerHostilityStatus_MAX = 4
};

// Enum Tiger.ETigerCharacterAction
enum class ETigerCharacterAction : uint8 {
	Dodged = 0,
	MeleeAttack = 1,
	RangedAttack = 2,
	Aimed = 3,
	DisciplineActivated = 4,
	SuperDisciplineActivated = 5,
	PickedUpItem = 6,
	BeginBlock = 7,
	RangedDamageTaken = 8,
	MeleeDamageTaken = 9,
	DisciplineDamageTaken = 10,
	OtherDamageTaken = 11,
	DodgeAborted = 12,
	DisciplineReleased = 13,
	Downed = 14,
	DamageDealt = 15,
	ETigerCharacterAction_MAX = 16
};

// Enum Tiger.ETigerClan
enum class ETigerClan : uint8 {
	Brujah = 0,
	Nosferatu = 1,
	Toreador = 2,
	Ventrue = 3,
	Count = 4,
	ETigerClan_MAX = 5
};

// Enum Tiger.ETigerCharacterType
enum class ETigerCharacterType : uint8 {
	Player = 0,
	Npc = 1,
	TutorialTrainer = 2,
	PlayerBot = 3,
	Count = 4,
	ETigerCharacterType_MAX = 5
};

// Enum Tiger.ETigerGender
enum class ETigerGender : uint8 {
	Female = 0,
	Male = 1,
	Count = 2,
	ETigerGender_MAX = 3
};

// Enum Tiger.ETigerServerScalabilityTarget
enum class ETigerServerScalabilityTarget : uint8 {
	Target_10Hz = 0,
	Target_20Hz = 1,
	Target_30Hz = 2,
	Target_MAX = 3
};

// Enum Tiger.ETigerMatchMode
enum class ETigerMatchMode : uint8 {
	Default = 0,
	Ranked = 1,
	Tutorial = 2,
	Count = 3,
	ETigerMatchMode_MAX = 4
};

// Enum Tiger.ETigerMatchSettingState
enum class ETigerMatchSettingState : uint8 {
	Default = 0,
	Active = 1,
	ActiveAsVariation = 2,
	ETigerMatchSettingState_MAX = 3
};

// Enum Tiger.ETigerEnterDownedStateSetting
enum class ETigerEnterDownedStateSetting : uint8 {
	Always = 0,
	Never = 1,
	OnLastToken = 2,
	Count = 3,
	ETigerEnterDownedStateSetting_MAX = 4
};

// Enum Tiger.ETigerSpawnMechanic
enum class ETigerSpawnMechanic : uint8 {
	PlayerPick = 0,
	Random = 1,
	RandomExtendedGroup = 2,
	ETigerSpawnMechanic_MAX = 3
};

// Enum Tiger.ETigerItemRarity
enum class ETigerItemRarity : uint8 {
	TigerItemRarity_Common = 0,
	TigerItemRarity_Uncommon = 1,
	TigerItemRarity_Rare = 2,
	TigerItemRarity_Epic = 3,
	TigerItemRarity_Legendary = 4,
	TigerItemRarity_Size = 5,
	TigerItemRarity_MAX = 6
};

// Enum Tiger.ETigerMatchState
enum class ETigerMatchState : uint8 {
	MatchNotStarted = 0,
	MatchStarted = 1,
	WinConditionMet = 2,
	MatchEnded = 3,
	ETigerMatchState_MAX = 4
};

// Enum Tiger.ETigerPreMatchState
enum class ETigerPreMatchState : uint8 {
	Unknown = 0,
	WaitingForGroups = 1,
	WaitingForPlayerConnections = 2,
	RebalancingGroups = 3,
	PreSpawnSelect = 4,
	SpawnSelect = 5,
	PostSpawnSelect = 6,
	ArchetypeSelect = 7,
	SpawnPawns = 8,
	TeamView = 9,
	WaitingForLoadingPlayers = 10,
	FreeLookPreparationCountdown = 11,
	PreMatchEnded = 12,
	ETigerPreMatchState_MAX = 13
};

// Enum Tiger.EMatchBalanceMode
enum class EMatchBalanceMode : uint8 {
	Solo = 0,
	Group = 1,
	Count = 2,
	EMatchBalanceMode_MAX = 3
};

// Enum Tiger.ETigerMatchType
enum class ETigerMatchType : uint8 {
	RegularMatch = 0,
	IntroMatch = 1,
	ETigerMatchType_MAX = 2
};

// Enum Tiger.ETigerMetaStoreEventType
enum class ETigerMetaStoreEventType : uint8 {
	ConfigAdded = 0,
	ConfigChanged = 1,
	ConfigGetFailed = 2,
	ETigerMetaStoreEventType_MAX = 3
};

// Enum Tiger.ETigerMetaStoreCategoryType
enum class ETigerMetaStoreCategoryType : uint8 {
	All = 0,
	FlashStore = 1,
	Battlepass = 2,
	SeasonRankSkip = 3,
	ETigerMetaStoreCategoryType_MAX = 4
};

// Enum Tiger.ETigerBuyStoreEntryResponseCode
enum class ETigerBuyStoreEntryResponseCode : uint8 {
	Success = 0,
	Error_InsufficentFunds = 1,
	Error_NoVendor = 2,
	Error_InvalidEntry = 3,
	Error_NoPlayerDataService = 4,
	Error_BackendError = 5,
	Error_NoResponse = 6,
	Error_ParsePlayerTransactionalData = 7,
	Error_BuyResult_InsufficentFunds = 8,
	Error_BuyResult_InsufficientItems = 9,
	Error_BuyResult_ExpiredItem = 10,
	Error_BuyResult_Unknown = 11,
	Error_TimedOut = 12,
	Error_AlreadyOwned = 13,
	Error_NoDatabase = 14,
	Error_BattlepassNotActive = 15,
	ETigerBuyStoreEntryResponseCode_MAX = 16
};

// Enum Tiger.ETigerPowerKitType
enum class ETigerPowerKitType : uint8 {
	None = 0,
	Veteran = 1,
	Outlaw = 2,
	Siren = 3,
	Nightingale = 4,
	Animalist = 5,
	Technocrat = 6,
	Ventrue01 = 7,
	Ventrue02 = 8,
	Count = 9,
	ETigerPowerKitType_MAX = 10
};

// Enum Tiger.ETigerThrallId
enum class ETigerThrallId : uint8 {
	None = 0,
	Brutallist = 1,
	Rebel = 2,
	Hacker = 3,
	Monster = 4,
	Lover = 5,
	Model = 6,
	Max = 7
};

// Enum Tiger.ETigerChallengeCategory
enum class ETigerChallengeCategory : uint8 {
	None = 0,
	Daily = 1,
	Weekly = 2,
	Mastery = 3,
	Event = 4,
	Test = 5,
	Count = 6,
	ETigerChallengeCategory_MAX = 7
};

// Enum Tiger.ETigerEventSystemActivationState
enum class ETigerEventSystemActivationState : uint8 {
	Pending = 0,
	Active = 1,
	Expired = 2,
	ETigerEventSystemActivationState_MAX = 3
};

// Enum Tiger.ETigerPlayerEvent
enum class ETigerPlayerEvent : uint8 {
	None = 0,
	OnFeedingCompleted = 1,
	OnRatFeedingCompleted = 2,
	OnFedOnHighPotenceBlood = 3,
	OnDownedPlayer = 4,
	OnDownedBloodHuntedPlayer = 5,
	OnDownedPlayerWithHeadshot = 6,
	OnDownedPlayerWithMelee = 7,
	OnDownedEntity = 8,
	OnDiablerizedPlayer = 9,
	OnDiablerizedBloodHuntedPlayer = 10,
	OnSurvivedHolyIncenseWave = 11,
	OnKilledEntityGrunt = 12,
	OnKilledOtherPlayer = 13,
	OnKilledBloodHuntedPlayer = 14,
	OnPickedUpRelic = 15,
	OnFedOnSuperHighPotenceBlood = 16,
	OnFedOnEntity = 17,
	OnPickedUpArtifact = 18,
	OnNewTrackingTrailSpawned = 19,
	OnAssistDowned = 20,
	OnAssistKill = 21,
	OnRevivedPlayer = 22,
	OnSurviveBloodHunted = 23,
	OnSurviveDownedState = 24,
	OnOpenedCrate = 25,
	OnFirstStoreBurglary = 26,
	OnWipedOtherGroup = 27,
	OnPickedUpCollectible = 28,
	OnPlayerSharkDeath = 29,
	OnAssistShark = 30,
	OnDowned = 31,
	Size = 32,
	ETigerPlayerEvent_MAX = 33
};

// Enum Tiger.ETigerSeasonExperienceSource
enum class ETigerSeasonExperienceSource : uint8 {
	Placement = 0,
	PlacementBonus = 1,
	SurvivalTime = 2,
	DownedEnemies = 3,
	Eliminations = 4,
	Diableries = 5,
	Assists = 6,
	DamageDealt = 7,
	EntityKilled = 8,
	IngameAchievements = 9,
	ChallengeRewards = 10,
	Collectible = 11,
	QuestRewards = 12,
	Count = 13,
	ETigerSeasonExperienceSource_MAX = 14
};

// Enum Tiger.ETigerGrimoireEntryState
enum class ETigerGrimoireEntryState : uint8 {
	Locked = 0,
	Unlocked = 1,
	Read = 2,
	ETigerGrimoireEntryState_MAX = 3
};

// Enum Tiger.ETigerLoginStatus
enum class ETigerLoginStatus : uint8 {
	NotLoggedIn = 0,
	LoggingIn = 1,
	LoggedIn = 2,
	ETigerLoginStatus_MAX = 3
};

// Enum Tiger.ETigerOnlinePrivilegeCheckStatus
enum class ETigerOnlinePrivilegeCheckStatus : uint8 {
	NotChecked = 0,
	Checking = 1,
	Checked = 2,
	ETigerOnlinePrivilegeCheckStatus_MAX = 3
};

// Enum Tiger.ETigerVersionCheckStatus
enum class ETigerVersionCheckStatus : uint8 {
	NotChecked = 0,
	Checking = 1,
	Validated = 2,
	ETigerVersionCheckStatus_MAX = 3
};

// Enum Tiger.ETigerLegalDocumentType
enum class ETigerLegalDocumentType : uint8 {
	Eula = 0,
	ExportGate = 1,
	ExportGateDenied = 2,
	PrivacyPolicy = 3,
	Newsletter = 4,
	NewsletterKorea = 5,
	KoreaSpecial1 = 6,
	KoreaSpecial2 = 7,
	KoreaSpecial3 = 8,
	KoreaSpecial4 = 9,
	KoreaSpecial5 = 10,
	MaxLegalDocumentType = 11,
	ETigerLegalDocumentType_MAX = 12
};

// Enum Tiger.ETigerTraversalTransitionAction
enum class ETigerTraversalTransitionAction : uint8 {
	Jump = 0,
	Crouch = 1,
	OnMovementUpdated = 2,
	OnMovementModeChanged = 3,
	DeltaCorrection = 4,
	InitialReplication = 5,
	Climb = 6,
	Downed = 7,
	FromSavedMove = 8,
	StartedForcedMove = 9,
	Reset = 10,
	FromCorrection = 11,
	ETigerTraversalTransitionAction_MAX = 12
};

// Enum Tiger.ETigerTraversalState
enum class ETigerTraversalState : uint8 {
	Walking = 0,
	Falling = 1,
	Jumping = 2,
	WallGrinding = 3,
	WallJumping = 4,
	AirDashing = 5,
	Climbing = 6,
	LedgeGrabbing = 7,
	Sliding = 8,
	Crouching = 9,
	SlideJump = 10,
	Downed = 11,
	LowVault = 12,
	ForcedMove = 13,
	WallHang = 14,
	Count = 15,
	ETigerTraversalState_MAX = 16
};

// Enum Tiger.ETigerPlayerLifeStatus
enum class ETigerPlayerLifeStatus : uint8 {
	Alive = 0,
	Downed = 1,
	Dead = 2,
	ETigerPlayerLifeStatus_MAX = 3
};

// Enum Tiger.ETigerBloodType
enum class ETigerBloodType : uint8 {
	Choleric = 0,
	Melancholic = 1,
	Phlegmatic = 2,
	Sanguine = 3,
	None = 4,
	Count = 5,
	CountBloodTypes = 4,
	ETigerBloodType_MAX = 6
};

// Enum Tiger.ETigerBloodPotency
enum class ETigerBloodPotency : uint8 {
	Drained = 0,
	Normal = 1,
	Potent = 2,
	HighPotent = 3,
	Count = 4,
	ETigerBloodPotency_MAX = 5
};

// Enum Tiger.ETigerNPCType
enum class ETigerNPCType : uint8 {
	Civilian = 0,
	Guard = 1,
	Entity = 2,
	Judge = 3,
	Count = 4,
	ETigerNPCType_MAX = 5
};

// Enum Tiger.ETigerDetachMethod
enum class ETigerDetachMethod : uint8 {
	Destroy = 0,
	Drop = 1,
	ETigerDetachMethod_MAX = 2
};

// Enum Tiger.ETigerAIAnimationMode
enum class ETigerAIAnimationMode : uint8 {
	Neutral = 0,
	Suspicious = 1,
	Threatened = 2,
	BloodDrained = 3,
	Lured = 4,
	Downed = 5,
	Sprinting = 6,
	Strafing = 7,
	ETigerAIAnimationMode_MAX = 8
};

// Enum Tiger.ETigerAIMasqueradeState
enum class ETigerAIMasqueradeState : uint8 {
	None = 0,
	Downed = 1,
	Suspicious = 2,
	Threatened = 3,
	Count = 4,
	ETigerAIMasqueradeState_MAX = 5
};

// Enum Tiger.ETigerCivilianEmotionalState
enum class ETigerCivilianEmotionalState : uint8 {
	Neutral = 0,
	Cocky = 1,
	Disbelief = 2,
	Drunk = 3,
	Fearful = 4,
	Flirty = 5,
	Count = 6,
	ETigerCivilianEmotionalState_MAX = 7
};

// Enum Tiger.ETigerGameType
enum class ETigerGameType : uint8 {
	Elysium = 0,
	BattleRoyale = 1,
	Tutorial = 2,
	PvpArena = 3,
	Benchmark = 4,
	Invalid = 5,
	ETigerGameType_MAX = 6
};

// Enum Tiger.ESessionType
enum class ESessionType : uint8 {
	Elysium = 0,
	Match = 1,
	TransferFromMatch = 2,
	Tutorial = 3,
	Boot = 4,
	Unknown = 5,
	ESessionType_MAX = 6
};

// Enum Tiger.ETigerSessionSearchStatus
enum class ETigerSessionSearchStatus : uint8 {
	ReadyToSearch = 0,
	Searching = 1,
	SessionFound = 2,
	JoiningSession = 3,
	CouldNotFindSession = 16,
	CouldNotJoinSession = 32,
	ETigerSessionSearchStatus_MAX = 33
};

// Enum Tiger.ETigerSeasonMatchStatType
enum class ETigerSeasonMatchStatType : uint8 {
	Placement = 0,
	LevelReached = 1,
	Kills = 2,
	KillAssists = 3,
	Diableries = 4,
	DamageDone = 5,
	Count = 6,
	ETigerSeasonMatchStatType_MAX = 7
};

// Enum Tiger.ETigerKillerType
enum class ETigerKillerType : uint8 {
	Unknown = 0,
	Player = 1,
	Entity = 2,
	RedGas = 3,
	Shark = 4,
	Fire = 5,
	ETigerKillerType_MAX = 6
};

// Enum Tiger.ETigerReportReason
enum class ETigerReportReason : uint8 {
	INVALID = 0,
	CHEATING = 1,
	EXPLOITING = 2,
	OFFENSIVE_PROFILE = 3,
	VERBAL_ABUSE = 4,
	SCAMMING = 5,
	SPAMMING = 6,
	OTHER = 7,
	COUNT = 8,
	ETigerReportReason_MAX = 9
};

// Enum Tiger.ETigerGroupingMode
enum class ETigerGroupingMode : uint8 {
	Solo = 0,
	Group = 1,
	Count = 2,
	ETigerGroupingMode_MAX = 3
};

// Enum Tiger.ETigerGraphicsQualityPS5
enum class ETigerGraphicsQualityPS5 : uint8 {
	Quality = 0,
	Performance = 1,
	ETigerGraphicsQualityPS5_MAX = 2
};

// Enum Tiger.ETigerGameActivityType
enum class ETigerGameActivityType : uint8 {
	SoloCasual = 0,
	GroupCasual = 1,
	SoloHardcore = 2,
	Tutorial = 3,
	Count = 4,
	ETigerGameActivityType_MAX = 5
};

// Enum Tiger.ETigerBattlepassActiveState
enum class ETigerBattlepassActiveState : uint8 {
	NotStarted = 0,
	Active = 1,
	Ended = 2,
	ETigerBattlepassActiveState_MAX = 3
};

// Enum Tiger.ETigerColourSpace
enum class ETigerColourSpace : uint8 {
	LinearSpace = 0,
	SrgbSpace = 1,
	ETigerColourSpace_MAX = 2
};

// Enum Tiger.ETigerUIColor
enum class ETigerUIColor : uint8 {
	Masquerade_None = 0,
	Masquerade_Suspicious = 1,
	Masquerade_Threatened = 2,
	Masquerade_BloodHunted = 3,
	Ally = 4,
	GroupMember = 5,
	Crosshair_ActionText = 6,
	Crosshair_ItemPickupDenied = 7,
	Crosshair_ItemPickupDeniedInputKey = 8,
	Text_Header_Orange = 9,
	Text_Header_Red = 10,
	Text_Header_DarkRed = 11,
	Text_HardCurrency = 12,
	Text_NeutralPlayerName = 13,
	Text_PlayerTitle = 14,
	Brand_MedallionYellow = 15,
	Brand_SpurseBlue = 16,
	Brand_JadeGreen = 17,
	Brand_CarmineRed = 18,
	Hitmarker_NoExtraHealth = 19,
	Group_Player1 = 20,
	Group_Player2 = 21,
	Group_Player3 = 22,
	Group_Player4 = 23,
	Rarity_Common = 24,
	Rarity_Uncommon = 25,
	Rarity_Rare = 26,
	Rarity_Epic = 27,
	Rarity_Legendary = 28,
	Heal = 29,
	ItemType_Weapon = 30,
	ItemType_Ammo = 31,
	ItemType_Mod = 32,
	ItemType_Healing = 33,
	ItemType_Consumable = 34,
	ItemType_Artifact = 35,
	ExtendedGroup_Member = 36,
	ExtendedGroup_Enemy = 37,
	Count = 38,
	ETigerUIColor_MAX = 39
};

// Enum Tiger.ETigerTelemetryMapIds
enum class ETigerTelemetryMapIds : uint8 {
	Prague = 0,
	Elysium = 1,
	Null = 2,
	Tutorial = 3,
	Boot = 4,
	TransferFromMatch = 5,
	Prague2 = 6,
	ETigerTelemetryMapIds_MAX = 7
};

// Enum Tiger.ETargetInteraction
enum class ETargetInteraction : uint8 {
	None = 0,
	PickupItem = 1,
	Lure = 2,
	Feed = 3,
	TalkTo = 4,
	UsingConsumable = 5,
	InteractWithObject = 6,
	DiablerizeTrainer = 7,
	ReviveTrainer = 8,
	JudgeFeed = 9,
	Diablerize = 10,
	Revive = 11,
	ETargetInteraction_MAX = 12
};

// Enum Tiger.ETigerWeaponMeleeAttackType
enum class ETigerWeaponMeleeAttackType : uint8 {
	Invalid = 0,
	Normal = 1,
	Sprinting = 2,
	Aerial = 3,
	QuickAttack = 4,
	UNUSED_3 = 5,
	StrafeAttack = 6,
	Heavy = 7,
	Count = 8,
	ETigerWeaponMeleeAttackType_MAX = 9
};

// Enum Tiger.ETigerTelemetryMatchmackingCancelReason
enum class ETigerTelemetryMatchmackingCancelReason : uint8 {
	Input = 0,
	Timeout = 1,
	ExitGame = 2,
	ETigerTelemetryMatchmackingCancelReason_MAX = 3
};

// Enum Tiger.ETigerOnlineErrorCategory
enum class ETigerOnlineErrorCategory : uint8 {
	ACC = 0,
	SYS = 1,
	SRV = 2,
	NET = 3,
	PLA = 4,
	ETigerOnlineErrorCategory_MAX = 5
};

// Enum Tiger.ETigerAIPlayerAction
enum class ETigerAIPlayerAction : uint8 {
	None = 0,
	BulletImpactEnvironment = 1,
	CollideWithCivilian = 2,
	CollideWithGuard = 3,
	DamageDealing = 4,
	Dodge = 5,
	AirDodgeRecovery = 6,
	FeedingStart = 7,
	FeedingTick = 8,
	FeedingEnd = 9,
	FeedingStoppedOnSpecificNPC = 10,
	GenericDisciplineActivation = 11,
	HardLanding = 12,
	InsideSuspiciousVolume = 13,
	InsideThreatVolume = 14,
	MeleeAttack = 15,
	Mobility = 16,
	Sprinting = 17,
	Climbing = 18,
	AirTime = 19,
	ReportSuspectPlayer = 20,
	ReportThreateningPlayer = 21,
	ShowingMeleeWeapon = 22,
	ShowingRangedWeapon = 23,
	AimingRangedWeapon = 24,
	WeaponFired = 25,
	SeenByEntity = 26,
	SeenByEntityWhenBloodHunted = 27,
	NotifyMasqueradeBreachSpecificNPC = 28,
	SeenByGuardWhenBloodHunted = 29,
	SeenBySuspectingGuard = 30,
	FeedingStartGuard = 31,
	FeedingTickGuard = 32,
	FeedingEndGuard = 33,
	DiablerizeStart = 34,
	DiablerizeTick = 35,
	DiablerizeEnd = 36,
	HideousPassiveTick = 37,
	AttackedByGuard = 38,
	AttackedByEntity = 39,
	UtilityRoarPower = 40,
	UtilityRoarPowerCloseRange = 41,
	ActivateCarAlarm = 42,
	ActivateInvisibility = 43,
	DeactivateInvisibility = 44,
	TeleportToProjectionDash = 45,
	KilledNPC = 46,
	ActivateStoreAlarm = 47,
	SeenByCivilianWhenBloodHunted = 48,
	DisciplineBegin = 49,
	DisciplineActivationFOTT = 49,
	DisciplineActivationMightyLeap = 50,
	DisciplineActivationSwiftStrike = 51,
	DisciplineActivationDisplacement = 52,
	DisciplineActivationGroundSlam = 53,
	DisciplineActivationFrenzy = 54,
	DisciplineActivationVanish = 55,
	DisciplineActivationScouts = 56,
	DisciplineActivationGuardBreak = 57,
	DisciplineActivationPassion = 58,
	DisciplineActivationCharm = 59,
	DisciplineActivationProjectionDash = 60,
	DisciplineActivationShackles = 61,
	DisciplineActivationRejuvanatingVoice = 62,
	DisciplineActivationAxe = 63,
	DisciplineActivationKatana = 64,
	DisciplineActivationDualBlades = 65,
	DisciplineActivationLaceratingThrow = 66,
	DisciplineEnd = 66,
	Count = 67,
	ETigerAIPlayerAction_MAX = 68
};

// Enum Tiger.EBodyPart
enum class EBodyPart : uint8 {
	None = 0,
	Head = 1,
	Chest = 2,
	Body = 3,
	Arms = 4,
	Legs = 5,
	MAX = 6
};

// Enum Tiger.ETigerMusicAudioState
enum class ETigerMusicAudioState : uint8 {
	None = 0,
	Unknown = 1,
	Silent = 2,
	TitleScreen = 3,
	Ambient = 4,
	Feeding = 5,
	Elysium = 6,
	RedGas = 7,
	Combat = 8,
	Deployment = 9,
	PreLoading = 10,
	PostMatch = 11,
	EntityNearby = 12,
	LastStage = 13,
	MasqueradeBreak = 14,
	MainMenu = 15,
	Spectating = 16,
	Count = 17,
	ETigerMusicAudioState_MAX = 18
};

// Enum Tiger.ETigerGameModeAudioState
enum class ETigerGameModeAudioState : uint8 {
	None = 0,
	NormalMatch = 1,
	TeamDeathMatch = 2,
	Count = 3,
	ETigerGameModeAudioState_MAX = 4
};

// Enum Tiger.ETigerAimGlideAudioState
enum class ETigerAimGlideAudioState : uint8 {
	None = 0,
	AimGlide_On = 1,
	AimGlide_Off = 2,
	Count = 3,
	ETigerAimGlideAudioState_MAX = 4
};

// Enum Tiger.ETigerFeedingAudioState
enum class ETigerFeedingAudioState : uint8 {
	None = 0,
	IsFeeding = 1,
	Count = 2,
	ETigerFeedingAudioState_MAX = 3
};

// Enum Tiger.ETigerCombatAudioState
enum class ETigerCombatAudioState : uint8 {
	None = 0,
	Kindred = 1,
	Entity = 2,
	Count = 3,
	ETigerCombatAudioState_MAX = 4
};

// Enum Tiger.ETigerAmbienceAudioState
enum class ETigerAmbienceAudioState : uint8 {
	None = 0,
	AmbienceOn = 1,
	AmbienceOff = 2,
	Count = 3,
	ETigerAmbienceAudioState_MAX = 4
};

// Enum Tiger.ETigerMainMenuAudioState
enum class ETigerMainMenuAudioState : uint8 {
	None = 0,
	InMainMenu = 1,
	OutMainMenu = 2,
	Count = 3,
	ETigerMainMenuAudioState_MAX = 4
};

// Enum Tiger.ETigerIndoorAudioState
enum class ETigerIndoorAudioState : uint8 {
	None = 0,
	Indoor = 1,
	Count = 2,
	ETigerIndoorAudioState_MAX = 3
};

// Enum Tiger.ETigerBlindedAudioState
enum class ETigerBlindedAudioState : uint8 {
	None = 0,
	Blind = 1,
	Count = 2,
	ETigerBlindedAudioState_MAX = 3
};

// Enum Tiger.FTigerPerformanceState
enum class FTigerPerformanceState : uint8 {
	NotAvailable = 0,
	OK = 1,
	Warning = 2,
	Severe = 3,
	NUM = 4,
	FTigerPerformanceState_MAX = 5
};

// Enum Tiger.ETigerLodSplitMeshQuality
enum class ETigerLodSplitMeshQuality : uint8 {
	FullMesh = 0,
	OnlyLod0 = 1,
	NoLod0 = 2,
	ETigerLodSplitMeshQuality_MAX = 3
};

// Enum Tiger.ETigerCharacterMeshPart
enum class ETigerCharacterMeshPart : uint8 {
	Body = 0,
	Head = 1,
	Hair = 2,
	Hoodie = 3,
	Headgear = 4,
	Eyewear = 5,
	Weapon = 6,
	SecondaryWeapon = 7,
	HolsteredWeapon = 8,
	SecondaryHolsteredWeapon = 9,
	BodyAdditional = 10,
	Count = 11,
	ETigerCharacterMeshPart_MAX = 12
};

// Enum Tiger.ETigerCharacterDynamicMeshType
enum class ETigerCharacterDynamicMeshType : uint8 {
	Generic = 0,
	Piercing = 1,
	Beard = 2,
	Hair = 3,
	Count = 4,
	ETigerCharacterDynamicMeshType_MAX = 5
};

// Enum Tiger.ETigerOutlineMode
enum class ETigerOutlineMode : uint8 {
	HeightenedSenses = 0,
	Lure = 1,
	EnemyPlayer = 2,
	ScoutingFamiliarsGroupMember = 3,
	ScoutingFamiliars = 4,
	BloodHuntedHSReveal = 5,
	BloodHunted = 6,
	CapturingHaven = 7,
	CharmingUs = 8,
	GroupMember = 9,
	ExtendedGroupMember = 10,
	LocalPlayer = 11,
	Count = 12,
	None = 255,
	ETigerOutlineMode_MAX = 256
};

// Enum Tiger.ETigerPersistentStoreCategory
enum class ETigerPersistentStoreCategory : uint8 {
	Featured = 0,
	Apparel = 1,
	Character = 2,
	SkinColor = 3,
	EyeBrows = 4,
	EyebrowColors = 5,
	EyebrowCategory = 6,
	Beards = 7,
	Hair = 8,
	EyeColors = 9,
	Accessories = 10,
	Ink = 11,
	Ethnicity = 12,
	HairStyle = 13,
	HairColor = 14,
	FacialHair = 15,
	FacialHairColor = 16,
	FacePaint = 17,
	Tattoo = 18,
	Mask = 19,
	Glasses = 20,
	Body = 21,
	BodyCategory = 22,
	Emote = 23,
	PlayerIcon = 24,
	PlayerCardBackground = 25,
	PlayerCardShape = 26,
	Count = 27,
	ETigerPersistentStoreCategory_MAX = 28
};

// Enum Tiger.ETigerPlayerApperanceChangeReason
enum class ETigerPlayerApperanceChangeReason : uint8 {
	Generic = 0,
	CharacterSwitch = 1,
	ETigerPlayerApperanceChangeReason_MAX = 2
};

// Enum Tiger.ETigerRespawnPointScoringType
enum class ETigerRespawnPointScoringType : uint8 {
	Enemy = 0,
	GroupMember = 1,
	ExtendedGroupMember = 2,
	Count = 3,
	ETigerRespawnPointScoringType_MAX = 4
};

// Enum Tiger.ETigerMatchmakingPlatform
enum class ETigerMatchmakingPlatform : uint8 {
	All = 0,
	PlatformOnly = 1,
	Count = 2,
	ETigerMatchmakingPlatform_MAX = 3
};

// Enum Tiger.ETigerGrimoireUnlockType
enum class ETigerGrimoireUnlockType : uint8 {
	SingleEntry = 0,
	NextSubEntry = 1,
	RandomSubEntry = 2,
	ETigerGrimoireUnlockType_MAX = 3
};

// Enum Tiger.ETigerFriendLoadStatus
enum class ETigerFriendLoadStatus : uint8 {
	Unloaded = 0,
	Loading = 1,
	Loaded = 2,
	LoadFailed = 3,
	ETigerFriendLoadStatus_MAX = 4
};

// Enum Tiger.ETigerOnlineServiceStatus
enum class ETigerOnlineServiceStatus : uint8 {
	Available = 0,
	Unavailable = 1,
	ETigerOnlineServiceStatus_MAX = 2
};

// Enum Tiger.ETigerJoinedPartyFailedReason
enum class ETigerJoinedPartyFailedReason : uint8 {
	PartyFull = 0,
	PartyInMatchSession = 1,
	Unknown = 2,
	ETigerJoinedPartyFailedReason_MAX = 3
};

// Enum Tiger.ETigerWorldCompositionGridLayout
enum class ETigerWorldCompositionGridLayout : uint8 {
	QuadTree = 0,
	HexGrid = 1,
	ETigerWorldCompositionGridLayout_MAX = 2
};

// Enum Tiger.ETigerMasqueradeConsequenceDeactivationReason
enum class ETigerMasqueradeConsequenceDeactivationReason : uint8 {
	Command = 0,
	Expired = 1,
	PlayerDied = 2,
	EndPlay = 3,
	ETigerMasqueradeConsequenceDeactivationReason_MAX = 4
};

// Enum Tiger.ETigerDamageCauser
enum class ETigerDamageCauser : uint8 {
	Unknown = 0,
	HolyIncense = 1,
	Water = 2,
	Helicopter = 3,
	NPC = 4,
	Player = 5,
	Trigger = 6,
	ETigerDamageCauser_MAX = 7
};

// Enum Tiger.ETigerClosestActorType
enum class ETigerClosestActorType : uint8 {
	ResurrectAltar = 0,
	Count = 1,
	ETigerClosestActorType_MAX = 2
};

// Enum Tiger.ETigerBloodResonanceBlockType
enum class ETigerBloodResonanceBlockType : uint8 {
	BloodType = 0,
	ResonanceCap = 1,
	Count = 2,
	ETigerBloodResonanceBlockType_MAX = 3
};

// Enum Tiger.ETigerSelectNewSpectatorDirection
enum class ETigerSelectNewSpectatorDirection : uint8 {
	Next = 0,
	Previous = 1,
	ETigerSelectNewSpectatorDirection_MAX = 2
};

// Enum Tiger.ETigerMissionSuccessRating
enum class ETigerMissionSuccessRating : uint8 {
	Abject_Failure = 0,
	Failure = 1,
	Slight_Failure = 2,
	Success = 3,
	Good = 4,
	Very_Good = 5,
	Perfect = 6,
	Minted = 7,
	Double_Minted = 8,
	ETigerMissionSuccessRating_MAX = 9
};

// Enum Tiger.ETigerCustomizePart
enum class ETigerCustomizePart : uint8 {
	Outfit = 0,
	BodyType = 1,
	Head = 2,
	SkinColor = 3,
	HairType = 4,
	HairColor = 5,
	Eyes = 6,
	Tattoo = 7,
	Makeup = 8,
	BeardType = 9,
	BeardColor = 10,
	Count = 11,
	ETigerCustomizePart_MAX = 12
};

// Enum Tiger.ETigerNewNotificationMenuOptions
enum class ETigerNewNotificationMenuOptions : uint8 {
	Rootmenu = 0,
	LandingPage = 1,
	Battlepass = 2,
	Challenges = 3,
	Challenges_Daily = 4,
	Challenges_Weekly = 5,
	Grimoire = 6,
	Grimoire_Archetypes = 7,
	Grimoire_Talents = 8,
	Grimoire_Items = 9,
	Grimoire_Locations = 10,
	Grimoire_Lore = 11,
	Grimoire_Characters = 12,
	Grimoire_Collectibles = 13,
	Grimoire_Tutorial = 14,
	Bloodtrack = 15,
	Inventory = 16,
	Inventory_Character = 17,
	Inventory_Body = 18,
	Inventory_BodyType = 19,
	Inventory_Head = 20,
	Inventory_Hair = 21,
	Inventory_Haircut = 22,
	Inventory_HairColor = 23,
	Inventory_Eyes = 24,
	Inventory_Eyebrows = 25,
	Inventory_EyebrowType = 26,
	Inventory_EyebrowColor = 27,
	Inventory_Makeup = 28,
	Inventory_Tattoos = 29,
	Inventory_FacialHair = 30,
	Inventory_FacialHairType = 31,
	Inventory_FacialHairColor = 32,
	Inventory_Wardrobe = 33,
	Inventory_Outfit = 34,
	Inventory_Accessories = 35,
	Inventory_Piercing = 36,
	Inventory_Mask = 37,
	Inventory_Glasses = 38,
	Inventory_Hats = 39,
	Inventory_Emotes = 40,
	StoreMenu = 41,
	Store_Flash = 42,
	Store_Currency = 43,
	ArchetypeSelect = 44,
	Social = 45,
	Social_Friends = 46,
	Social_Elysium = 47,
	Social_Invites = 48,
	Social_GroupInvites = 49,
	Social_FriendInvites = 50,
	Thralls = 51,
	Grimoire_Conversations = 52,
	Inventory_Icon = 53,
	Inventory_CardBackground = 54,
	Inbox = 55,
	Challenges_Mastery = 56,
	Quests = 57,
	ArchetypeSelect_Perks = 58,
	ArchetypeSelect_Perks_Veteran = 59,
	ArchetypeSelect_Perks_Outlaw = 60,
	ArchetypeSelect_Perks_Siren = 61,
	ArchetypeSelect_Perks_Nightingale = 62,
	ArchetypeSelect_Perks_Animalist = 63,
	ArchetypeSelect_Perks_Technocrat = 64,
	ArchetypeSelect_Perks_Ventrue01 = 65,
	ArchetypeSelect_Perks_Ventrue02 = 66,
	Count = 67,
	None = 99,
	ETigerNewNotificationMenuOptions_MAX = 100
};

// Enum Tiger.ETigerGrimoireSortType
enum class ETigerGrimoireSortType : uint8 {
	Default = 0,
	Alphabetical = 1,
	Unread = 2,
	ETigerGrimoireSortType_MAX = 3
};

// Enum Tiger.ETigerResourceBarType
enum class ETigerResourceBarType : uint8 {
	Custom = 0,
	Shield = 1,
	Health = 2,
	ETigerResourceBarType_MAX = 3
};

// Enum Tiger.ETigerEquippedWeaponType
enum class ETigerEquippedWeaponType : uint8 {
	TigerEquippedWeaponType_NoWeapon = 0,
	TigerEquippedWeaponType_Ranged = 1,
	TigerEquippedWeaponType_Melee = 2,
	TigerEquippedWeaponType_MAX = 3
};

// Enum Tiger.ETigerChatMessageCategory
enum class ETigerChatMessageCategory : uint8 {
	Unknown = 0,
	General = 1,
	Group = 2,
	Server = 4,
	Game = 8,
	ChatBanned = 16,
	ETigerChatMessageCategory_MAX = 17
};

// Enum Tiger.ETigerIsDedicatedServer
enum class ETigerIsDedicatedServer : uint8 {
	DedicatedServer = 0,
	Other = 1,
	ETigerIsDedicatedServer_MAX = 2
};

// Enum Tiger.ETigerSignificanceBudgetType
enum class ETigerSignificanceBudgetType : uint8 {
	Elysium = 0,
	Match = 1,
	ArenaMatch = 2,
	Count = 3,
	ETigerSignificanceBudgetType_MAX = 4
};

// Enum Tiger.ETigerWeaponAmmoWarning
enum class ETigerWeaponAmmoWarning : uint8 {
	OutOfAmmo = 0,
	LowOnAmmo = 1,
	None = 2,
	ETigerWeaponAmmoWarning_MAX = 3
};

// Enum Tiger.ETigerWeaponFireMode
enum class ETigerWeaponFireMode : uint8 {
	Single = 0,
	Burst = 1,
	Automatic = 2,
	Count = 3,
	ETigerWeaponFireMode_MAX = 4
};

// Enum Tiger.ETigerSpreadIncreaseMode
enum class ETigerSpreadIncreaseMode : uint8 {
	Add = 0,
	Multiply = 1,
	ETigerSpreadIncreaseMode_MAX = 2
};

// Enum Tiger.ETigerFireAudioState
enum class ETigerFireAudioState : uint8 {
	Idle = 0,
	Firing = 1,
	FiringLoopAudio = 2,
	ETigerFireAudioState_MAX = 3
};

// Enum Tiger.ETigerAsyncMoveResult
enum class ETigerAsyncMoveResult : uint8 {
	SuccessfullyStartedAsyncRequest = 0,
	Failed = 1,
	ETigerAsyncMoveResult_MAX = 2
};

// Enum Tiger.ETigerBotWeaponPowerState
enum class ETigerBotWeaponPowerState : uint8 {
	PowerAvailable = 0,
	PowerInUse = 1,
	PowerOnCooldown = 2,
	ETigerBotWeaponPowerState_MAX = 3
};

// Enum Tiger.ETigerEntityEvent
enum class ETigerEntityEvent : uint8 {
	NewThreatEnterCombat = 0,
	NewThreatInCombat = 1,
	Count = 2,
	ETigerEntityEvent_MAX = 3
};

// Enum Tiger.ETigerNpcSquadOrder
enum class ETigerNpcSquadOrder : uint8 {
	FollowCaptain = 0,
	HoldPosition = 1,
	OpenFire = 2,
	ETigerNpcSquadOrder_MAX = 3
};

// Enum Tiger.ETigerNpcMovementRestrictionBoundsArea
enum class ETigerNpcMovementRestrictionBoundsArea : uint8 {
	InnerRestriction = 0,
	OuterRestriction = 1,
	OutOfBounds = 2,
	ETigerNpcMovementRestrictionBoundsArea_MAX = 3
};

// Enum Tiger.ETigerJudgeRotationMode
enum class ETigerJudgeRotationMode : uint8 {
	RotateTowardsPrimaryTarget = 0,
	RotateTowardsLocation = 1,
	RotateTowardsMovement = 2,
	NoForcedRotation = 3,
	Count = 4,
	ETigerJudgeRotationMode_MAX = 5
};

// Enum Tiger.ETigerPatrollingHelicopterEventType
enum class ETigerPatrollingHelicopterEventType : uint8 {
	BloodHunt = 0,
	RooftopGunFight = 1,
	ETigerPatrollingHelicopterEventType_MAX = 2
};

// Enum Tiger.ETigerAiMovementReason
enum class ETigerAiMovementReason : uint8 {
	GenericMovement = 0,
	ThreatMovement = 1,
	CapMovement = 2,
	Count = 3,
	ETigerAiMovementReason_MAX = 4
};

// Enum Tiger.ETigerNpcReactionEventSeverity
enum class ETigerNpcReactionEventSeverity : uint8 {
	Mild = 0,
	Average = 1,
	Severe = 2,
	ETigerNpcReactionEventSeverity_MAX = 3
};

// Enum Tiger.ETigerAiConditionCheckTiming
enum class ETigerAiConditionCheckTiming : uint8 {
	OnConditionCommandStart = 0,
	OnConditionCommandEnd = 1,
	ETigerAiConditionCheckTiming_MAX = 2
};

// Enum Tiger.ETigerAiFailedCAPConditionAction
enum class ETigerAiFailedCAPConditionAction : uint8 {
	ExitCAP = 0,
	RedoLastCommand = 1,
	RestartCommandList = 2,
	Wait = 3,
	ETigerAiFailedCAPConditionAction_MAX = 4
};

// Enum Tiger.ETigerAimAssistMode
enum class ETigerAimAssistMode : uint8 {
	Regular = 0,
	RegularOn = 1,
	AimDownSights = 2,
	AimDownSightsOn = 3,
	Count = 4,
	ETigerAimAssistMode_MAX = 5
};

// Enum Tiger.ETigerJumpDistribution
enum class ETigerJumpDistribution : uint8 {
	Random = 0,
	Early = 1,
	Late = 2,
	Middle = 3,
	ETigerJumpDistribution_MAX = 4
};

// Enum Tiger.ETigerAnimBlendState
enum class ETigerAnimBlendState : uint8 {
	BlendingIn = 0,
	BlendingOut = 1,
	FullyBlended = 2,
	ETigerAnimBlendState_MAX = 3
};

// Enum Tiger.ETigerIKDirection
enum class ETigerIKDirection : uint8 {
	Forward = 0,
	Downward = 1,
	ETigerIKDirection_MAX = 2
};

// Enum Tiger.ETigerPlayOnClients
enum class ETigerPlayOnClients : uint8 {
	PlayOnSelf = 0,
	PlayOnOthers = 1,
	PlayOnAll = 2,
	ETigerPlayOnClients_MAX = 3
};

// Enum Tiger.ETigerTriggerUpdateWpnAppearance
enum class ETigerTriggerUpdateWpnAppearance : uint8 {
	None = 0,
	Begin = 1,
	End = 2,
	ETigerTriggerUpdateWpnAppearance_MAX = 3
};

// Enum Tiger.ETigerArchetypeSelectUiState
enum class ETigerArchetypeSelectUiState : uint8 {
	PreSelection = 0,
	Player0 = 1,
	Player1 = 2,
	Player2 = 3,
	PostSelection = 4,
	ETigerArchetypeSelectUiState_MAX = 5
};

// Enum Tiger.ETigerBootState
enum class ETigerBootState : uint8 {
	Boot = 0,
	FirstTimeArchetypeSelect = 1,
	ETigerBootState_MAX = 2
};

// Enum Tiger.ETigerBuffProgressType
enum class ETigerBuffProgressType : uint8 {
	Increase = 0,
	Decrease = 1,
	ETigerBuffProgressType_MAX = 2
};

// Enum Tiger.ETigerBuffStatusType
enum class ETigerBuffStatusType : uint8 {
	Neutral = 0,
	Positive = 1,
	Negative = 2,
	ETigerBuffStatusType_MAX = 3
};

// Enum Tiger.UTigerBuildingSide
enum class UTigerBuildingSide : uint8 {
	Front = 0,
	Left = 1,
	Back = 2,
	Right = 3,
	UTigerBuildingSide_MAX = 4
};

// Enum Tiger.ETigerCameraPresetModeAdditive
enum class ETigerCameraPresetModeAdditive : uint8 {
	Crouching = 0,
	Running = 1,
	Combat = 2,
	Sliding = 3,
	Count = 4,
	ETigerCameraPresetModeAdditive_MAX = 5
};

// Enum Tiger.ETigerCapturePointStatus
enum class ETigerCapturePointStatus : uint8 {
	YouCapturing = 0,
	EnemyCapturing = 1,
	ContestedWithCapturee = 2,
	ContestedWithoutCapturee = 3,
	None = 4,
	ETigerCapturePointStatus_MAX = 5
};

// Enum Tiger.ETigerChallengeSubCategory
enum class ETigerChallengeSubCategory : uint8 {
	Mastery = 0,
	Onboarding = 1,
	Career = 2,
	Clans = 3,
	Count = 4,
	ETigerChallengeSubCategory_MAX = 5
};

// Enum Tiger.ETigerEnemyType
enum class ETigerEnemyType : uint8 {
	Players = 0,
	Entity = 1,
	ETigerEnemyType_MAX = 2
};

// Enum Tiger.ETigerPlayerLevelType
enum class ETigerPlayerLevelType : uint8 {
	Season = 0,
	Player = 1,
	Archetype = 2,
	ETigerPlayerLevelType_MAX = 3
};

// Enum Tiger.ETigerChallengeWidgetInformationType
enum class ETigerChallengeWidgetInformationType : uint8 {
	CoreChallengeType = 0,
	RewardCatalogueType = 1,
	ETigerChallengeWidgetInformationType_MAX = 2
};

// Enum Tiger.ETigerAkCharacterGender
enum class ETigerAkCharacterGender : uint8 {
	Male = 0,
	Female = 1,
	Count = 2,
	ETigerAkCharacterGender_MAX = 3
};

// Enum Tiger.ETigerClanCustomizationValidationErrorType
enum class ETigerClanCustomizationValidationErrorType : uint8 {
	IdOutOfBounds = 0,
	IdCollision = 1,
	IdNotSet = 2,
	ETigerClanCustomizationValidationErrorType_MAX = 3
};

// Enum Tiger.ETigerCustomizationType
enum class ETigerCustomizationType : int32 {
	None = 0,
	Outfits = 1,
	Heads = 2,
	Hairs = 4,
	HairColors = 8,
	EyeColors = 16,
	Tattoos = 32,
	FacePaints = 64,
	PiercingSets = 128,
	Headgears = 256,
	Eyewears = 512,
	Eyebrows = 1024,
	EyebrowColors = 2048,
	Beards = 4096,
	BeardColors = 8192,
	CharacterCardShapes = 16384,
	CharacterCardTextures = 32768,
	CharacterIcons = 65536,
	Emotes = 131072,
	BodyTypeModifiers = 262144,
	All = 524287,
	ETigerCustomizationType_MAX = 524288
};

// Enum Tiger.ETigerForcedMoveResult
enum class ETigerForcedMoveResult : uint8 {
	Finished = 0,
	Overridden = 1,
	Canceled = 2,
	ETigerForcedMoveResult_MAX = 3
};

// Enum Tiger.ETigerMovementMode
enum class ETigerMovementMode : uint8 {
	None = 0,
	Sliding = 1,
	ETigerMovementMode_MAX = 2
};

// Enum Tiger.ETigerCinematicQuality
enum class ETigerCinematicQuality : uint8 {
	None = 0,
	Low = 1,
	Cinematic = 2,
	ETigerCinematicQuality_MAX = 3
};

// Enum Tiger.ETigerCompassMarkerType
enum class ETigerCompassMarkerType : uint8 {
	CompassMarker = 0,
	Bloodhunted = 1,
	GroupMember = 2,
	Ping = 3,
	Count = 4,
	ETigerCompassMarkerType_MAX = 5
};

// Enum Tiger.ETigerQuickUseConsumable
enum class ETigerQuickUseConsumable : uint8 {
	Syringe = 0,
	Bloodbag = 1,
	Armor = 2,
	Stimpack = 3,
	UnholyStimulant = 4,
	Flare = 5,
	Count = 6,
	ETigerQuickUseConsumable_MAX = 7
};

// Enum Tiger.ETigerContextualHelpShouldShowInGameModeBit
enum class ETigerContextualHelpShouldShowInGameModeBit : uint8 {
	Tutorial = 0,
	Match = 1,
	Elysium = 2,
	ETigerContextualHelpShouldShowInGameModeBit_MAX = 3
};

// Enum Tiger.ETigerContextualHelpShouldShowInGameMode
enum class ETigerContextualHelpShouldShowInGameMode : uint8 {
	TutorialOnly = 0,
	MatchOnly = 1,
	All = 2,
	Unused = 3,
	ETigerContextualHelpShouldShowInGameMode_MAX = 4
};

// Enum Tiger.ETigerContextualHelpType
enum class ETigerContextualHelpType : uint8 {
	Reminder = 0,
	Interaction = 1,
	Count = 2,
	ETigerContextualHelpType_MAX = 3
};

// Enum Tiger.ETigerDesiredPawnType
enum class ETigerDesiredPawnType : uint8 {
	DefaultPawn = 0,
	BloodVeinPawn = 1,
	ETigerDesiredPawnType_MAX = 2
};

// Enum Tiger.ETigerDisciplineCharmState
enum class ETigerDisciplineCharmState : uint8 {
	Ready = 0,
	Bonding = 1,
	ETigerDisciplineCharmState_MAX = 2
};

// Enum Tiger.ETigerDisciplineCanUseResult
enum class ETigerDisciplineCanUseResult : uint8 {
	UseAllowed = 0,
	FailedDisciplineOutOfBounds = 1,
	FailedBlockingDiscipline = 2,
	FailedDoesNotExist = 3,
	FailedLocked = 4,
	FailedIsPassive = 5,
	FailedDisciplineRequirements = 6,
	FailedOnCooldown = 7,
	FailedOnCharges = 8,
	FailedInteract = 9,
	FailedChargingAttack = 10,
	FailedMeleeSwing = 11,
	FailedBuffBlocking = 12,
	ETigerDisciplineCanUseResult_MAX = 13
};

// Enum Tiger.ETigerActionAllowed
enum class ETigerActionAllowed : uint8 {
	Allowed = 0,
	Blocked = 1,
	Cancel = 2,
	CancelAndBlocked = 3,
	None = 4,
	ETigerActionAllowed_MAX = 5
};

// Enum Tiger.ETigerFOTTStage
enum class ETigerFOTTStage : uint8 {
	ChargeUp = 0,
	Charged = 1,
	Attacking = 2,
	Recover = 3,
	Count = 4,
	ETigerFOTTStage_MAX = 5
};

// Enum Tiger.ETigerDisciplineParticleStrategyColorModes
enum class ETigerDisciplineParticleStrategyColorModes : uint8 {
	Default = 0,
	OverrideFriendlyOnly = 1,
	OverrideEnemyOnly = 2,
	OverrideBothSingleColor = 3,
	OverrideBothSplitColor = 4,
	ETigerDisciplineParticleStrategyColorModes_MAX = 5
};

// Enum Tiger.ETigerPassionStage
enum class ETigerPassionStage : uint8 {
	ChooseEffect = 0,
	ChargeEffect = 1,
	Count = 2,
	ETigerPassionStage_MAX = 3
};

// Enum Tiger.ETigerPassionEffect
enum class ETigerPassionEffect : uint8 {
	None = 0,
	Panic = 1,
	Apathy = 2,
	Wrath = 3,
	Count = 4,
	ETigerPassionEffect_MAX = 5
};

// Enum Tiger.ETigerProjectionDashCooldownStart
enum class ETigerProjectionDashCooldownStart : uint8 {
	AfterProjectionSpawned = 0,
	AfterDash = 1,
	ETigerProjectionDashCooldownStart_MAX = 2
};

// Enum Tiger.ETigerProjectionDashEndReason
enum class ETigerProjectionDashEndReason : uint8 {
	TimedOut = 0,
	MaxDistanceReached = 1,
	ETigerProjectionDashEndReason_MAX = 2
};

// Enum Tiger.ETigerJudgeHelicopterSpotlightState
enum class ETigerJudgeHelicopterSpotlightState : uint8 {
	InCombat = 0,
	Idling = 1,
	ETigerJudgeHelicopterSpotlightState_MAX = 2
};

// Enum Tiger.ETigerPatrollingHelicopterSpotlightState
enum class ETigerPatrollingHelicopterSpotlightState : uint8 {
	TargetInSight = 0,
	Searching = 1,
	Idling = 2,
	ETigerPatrollingHelicopterSpotlightState_MAX = 3
};

// Enum Tiger.ETigerPatrollingHelicopterState
enum class ETigerPatrollingHelicopterState : uint8 {
	Patrolling = 0,
	TrackingPlayer = 1,
	LostPlayer = 2,
	ETigerPatrollingHelicopterState_MAX = 3
};

// Enum Tiger.ETigerEventConfig_RepeatingPeriod
enum class ETigerEventConfig_RepeatingPeriod : uint8 {
	OneOff = 0,
	Yearly = 1,
	Monthly = 2,
	Ended = 3,
	ETigerEventConfig_MAX = 4
};

// Enum Tiger.ETigerEventConfig_TimeFrame
enum class ETigerEventConfig_TimeFrame : uint8 {
	Undefined = 0,
	StartingSoon = 1,
	Ongoing = 2,
	RecentlyEnded = 3,
	OutsideLifetime = 4,
	ETigerEventConfig_MAX = 5
};

// Enum Tiger.ETigerEventConfig_EventType
enum class ETigerEventConfig_EventType : uint8 {
	Challenge = 0,
	ETigerEventConfig_MAX = 1
};

// Enum Tiger.ETigerFeedingState
enum class ETigerFeedingState : uint8 {
	Inactive = 0,
	StartFeeding = 1,
	Approach = 2,
	Feeding = 3,
	Decouple = 4,
	FedOnApproach = 5,
	FedOn = 6,
	FedOnDecouple = 7,
	ETigerFeedingState_MAX = 8
};

// Enum Tiger.ETigerGraphicsSettingPreset
enum class ETigerGraphicsSettingPreset : uint8 {
	Low = 0,
	Mid = 1,
	High = 2,
	Ultra = 3,
	ETigerGraphicsSettingPreset_MAX = 4
};

// Enum Tiger.ETigerCurrentGameFlowState
enum class ETigerCurrentGameFlowState : uint8 {
	CharacterSelect = 0,
	LoadingElysium = 1,
	Elysium = 2,
	LoadingPrague = 3,
	StreamingPrague = 4,
	LoadingCharacter = 5,
	Waiting_Or_PreSpawn = 6,
	SpawningMechanic = 7,
	Spawned = 8,
	EndGame = 9,
	LoadingPragueToElysiumLimbo = 10,
	PragueToElysiumLimbo = 11,
	ETigerCurrentGameFlowState_MAX = 12
};

// Enum Tiger.ETigerGameModeAvailability
enum class ETigerGameModeAvailability : uint8 {
	Ok = 0,
	GroupTooLarge = 1,
	PlayerLevelTooLow = 2,
	PlayerLevelTooHigh = 3,
	FailedToFetchAvailability = 4,
	ETigerGameModeAvailability_MAX = 5
};

// Enum Tiger.ETigerSessionType
enum class ETigerSessionType : uint8 {
	Party = 0,
	Match = 1,
	Count = 2,
	ETigerSessionType_MAX = 3
};

// Enum Tiger.ETigerStreamerModeLevel
enum class ETigerStreamerModeLevel : uint8 {
	Off = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	Custom = 4,
	Count = 5,
	ETigerStreamerModeLevel_MAX = 6
};

// Enum Tiger.ETigerGraphDisplayType
enum class ETigerGraphDisplayType : uint8 {
	RealtimeMetricsAndGraph = 0,
	RealtimeAndGraph = 1,
	RealtimeOnly = 2,
	GraphOnly = 3,
	ETigerGraphDisplayType_MAX = 4
};

// Enum Tiger.ETigerGrimoireArticleType
enum class ETigerGrimoireArticleType : uint8 {
	Featured = 0,
	Suggested = 1,
	New = 2,
	ETigerGrimoireArticleType_MAX = 3
};

// Enum Tiger.ETigerGrimoireSearchEntryType
enum class ETigerGrimoireSearchEntryType : uint8 {
	Category = 0,
	Entry = 1,
	ETigerGrimoireSearchEntryType_MAX = 2
};

// Enum Tiger.ETigerGrimoireContinuationMethod
enum class ETigerGrimoireContinuationMethod : uint8 {
	NewParagraph = 0,
	ExtendParagraph = 1,
	Conversation = 2,
	ETigerGrimoireContinuationMethod_MAX = 3
};

// Enum Tiger.ETigerGrimoireEntryTextMode
enum class ETigerGrimoireEntryTextMode : uint8 {
	Small = 0,
	Large = 1,
	ETigerGrimoireEntryTextMode_MAX = 2
};

// Enum Tiger.ETigerGrimoireEntryMediaDisplayMode
enum class ETigerGrimoireEntryMediaDisplayMode : uint8 {
	Image = 0,
	Background = 1,
	Video = 2,
	Info = 3,
	Card = 4,
	Model = 5,
	ETigerGrimoireEntryMediaDisplayMode_MAX = 6
};

// Enum Tiger.ETigerGroupMemberType
enum class ETigerGroupMemberType : uint8 {
	NonGroupMember = 0,
	MemberOfPlayerGroup = 1,
	MemberOfExtendedGroup = 2,
	ETigerGroupMemberType_MAX = 3
};

// Enum Tiger.ETigerHeatmap
enum class ETigerHeatmap : uint8 {
	PlayerDeaths = 0,
	Feeding = 1,
	PlayerMovement = 2,
	RangedAttack = 3,
	MeleeAttack = 4,
	DisciplineUsed = 5,
	Camping = 6,
	PickedUpItem = 7,
	NPCMovement = 8,
	NPCDamagedPlayer = 9,
	PVECombat = 10,
	PVPCombat = 11,
	Count = 12,
	ETigerHeatmap_MAX = 13
};

// Enum Tiger.ETigerHookState
enum class ETigerHookState : uint8 {
	Spawned = 0,
	Throwing = 1,
	Rotating = 2,
	Reeling = 3,
	Missed = 4,
	Done = 5,
	ETigerHookState_MAX = 6
};

// Enum Tiger.ETigerDamageNumberAmount
enum class ETigerDamageNumberAmount : uint8 {
	NoNumbers = 0,
	Accumulate = 1,
	EveryHit = 2,
	ETigerDamageNumberAmount_MAX = 3
};

// Enum Tiger.ETigerInboxMessageStatus
enum class ETigerInboxMessageStatus : uint8 {
	Unread = 0,
	Read = 1,
	Count = 2,
	ETigerInboxMessageStatus_MAX = 3
};

// Enum Tiger.ETigerInboxMessageCategory
enum class ETigerInboxMessageCategory : uint8 {
	TwitchDrop = 0,
	PrimeLoot = 1,
	RedeemItem = 2,
	RankedMode = 3,
	Count = 4,
	ETigerInboxMessageCategory_MAX = 5
};

// Enum Tiger.ETigerInboxMessageSectionType
enum class ETigerInboxMessageSectionType : uint8 {
	Paragraph = 0,
	Image = 1,
	Rewards = 2,
	Count = 3,
	ETigerInboxMessageSectionType_MAX = 4
};

// Enum Tiger.EInteractiveObjectState
enum class EInteractiveObjectState : uint8 {
	NotInteractive = 0,
	Inactive = 1,
	Activated_Volume = 2,
	Activated_Interaction = 3,
	Activated_Shooting = 4,
	Done = 5,
	EInteractiveObjectState_MAX = 6
};

// Enum Tiger.ETigerWeaponCycleDirection
enum class ETigerWeaponCycleDirection : uint8 {
	Previous = 0,
	Next = 1,
	ETigerWeaponCycleDirection_MAX = 2
};

// Enum Tiger.ETigerArtifactAbility
enum class ETigerArtifactAbility : uint8 {
	DoubleJump = 0,
	Count = 1,
	ETigerArtifactAbility_MAX = 2
};

// Enum Tiger.ETigerTooltipStatChangeAmount
enum class ETigerTooltipStatChangeAmount : uint8 {
	Minor = 0,
	Moderate = 1,
	Significant = 2,
	Major = 3,
	Hidden = 4,
	ETigerTooltipStatChangeAmount_MAX = 5
};

// Enum Tiger.ETigerTimedAnimationType
enum class ETigerTimedAnimationType : uint8 {
	Montage = 0,
	Section = 1,
	ETigerTimedAnimationType_MAX = 2
};

// Enum Tiger.ETigerAIPlayerMainState
enum class ETigerAIPlayerMainState : uint8 {
	Idle = 0,
	InBloodVein = 1,
	Wandering = 2,
	Combat = 3,
	Fleeing = 4,
	GoingForItem = 5,
	GoingForFeeding = 6,
	Healing = 7,
	PreMatch = 8,
	ETigerAIPlayerMainState_MAX = 9
};

// Enum Tiger.ETigerAIPlayerTargetType
enum class ETigerAIPlayerTargetType : uint8 {
	Move = 0,
	Feed = 1,
	Interactive = 2,
	Loot = 3,
	ETigerAIPlayerTargetType_MAX = 4
};

// Enum Tiger.ETigerLootCategory
enum class ETigerLootCategory : uint8 {
	Weapons = 0,
	Ammo = 1,
	RangedMods = 2,
	Consumables = 3,
	Backpacks = 4,
	Collectible = 5,
	ETigerLootCategory_MAX = 6
};

// Enum Tiger.EMapMarkerType
enum class EMapMarkerType : uint8 {
	Other = 0,
	AntiqueStore = 1,
	TailorStore = 2,
	PharmacyStore = 3,
	EntityCheckpoint = 4,
	EMapMarkerType_MAX = 5
};

// Enum Tiger.ETigerRelativeExtendedGroup
enum class ETigerRelativeExtendedGroup : uint8 {
	LocalPlayer = 0,
	Enemy = 1,
	ETigerRelativeExtendedGroup_MAX = 2
};

// Enum Tiger.ETigerBlockState
enum class ETigerBlockState : uint8 {
	NotParrying = 0,
	StartParrying = 1,
	DeflectIncomingAttacks = 2,
	NumStates = 3,
	ETigerBlockState_MAX = 4
};

// Enum Tiger.ETigerMeleeState
enum class ETigerMeleeState : uint8 {
	ETigerMeleeState_Inactive = 0,
	ETigerMeleeState_SwingDamage = 1,
	ETigerMeleeState_SwingFinish = 2,
	ETigerMeleeState_MAX = 3
};

// Enum Tiger.ETigerMeleeWeaponIdentifier
enum class ETigerMeleeWeaponIdentifier : uint8 {
	None = 0,
	Axe = 1,
	Katana = 2,
	ScourgeBlades = 3,
	Unarmed = 4,
	Bat = 5,
	Crowbar = 6,
	ThrowingKnife = 7,
	EntityAxe = 8,
	GreatSword = 9,
	Knife = 10,
	Count = 11,
	ETigerMeleeWeaponIdentifier_MAX = 12
};

// Enum Tiger.ETigerDialogueQuestRequirementSpecifier
enum class ETigerDialogueQuestRequirementSpecifier : uint8 {
	InProgress = 0,
	Completed = 1,
	ETigerDialogueQuestRequirementSpecifier_MAX = 2
};

// Enum Tiger.ETigerDialogueEqualitySpecifier
enum class ETigerDialogueEqualitySpecifier : uint8 {
	LessThan = 0,
	LessThanOrEqualTo = 1,
	EqualTo = 2,
	GreaterThanOrEqualTo = 3,
	GreaterThan = 4,
	ETigerDialogueEqualitySpecifier_MAX = 5
};

// Enum Tiger.ETigerDialogueOutfitRequirementSpecifier
enum class ETigerDialogueOutfitRequirementSpecifier : uint8 {
	ClanOutfit = 0,
	GenderedOutfit = 1,
	ClanGenderedOutfit = 2,
	SpecificAssetName = 3,
	ETigerDialogueOutfitRequirementSpecifier_MAX = 4
};

// Enum Tiger.ETigerDialogueClanRequirementSpecifier
enum class ETigerDialogueClanRequirementSpecifier : uint8 {
	BothAreSame = 0,
	BothAreDifferent = 1,
	PlayerIsSpecific = 2,
	ETigerDialogueClanRequirementSpecifier_MAX = 3
};

// Enum Tiger.ETigerDialogueCategory
enum class ETigerDialogueCategory : uint8 {
	Uncategorised = 0,
	Congratulations = 1,
	Grimoire = 2,
	Character = 3,
	Collectible = 4,
	Item = 5,
	Location = 6,
	Lore = 7,
	Narrative = 8,
	Quest = 9,
	Reaction = 10,
	Miscellaneous1 = 11,
	Miscellaneous2 = 12,
	Miscellaneous3 = 13,
	Miscellaneous4 = 14,
	Miscellaneous5 = 15,
	Max = 16
};

// Enum Tiger.ETigerDialogueRepeatability
enum class ETigerDialogueRepeatability : uint8 {
	Repeatable = 0,
	OncePerElysium = 1,
	OnceEver = 2,
	ETigerDialogueRepeatability_MAX = 3
};

// Enum Tiger.ETigerDialogueIdleAnimation
enum class ETigerDialogueIdleAnimation : uint8 {
	Default = 0,
	Happy = 1,
	Sad = 2,
	Angry = 3,
	Fearful = 4,
	Amazed = 5,
	ETigerDialogueIdleAnimation_MAX = 6
};

// Enum Tiger.ETigerDialoguePriority
enum class ETigerDialoguePriority : uint8 {
	Urgent = 0,
	Important = 1,
	Situational = 2,
	Flavour = 3,
	Max = 4
};

// Enum Tiger.ETigerOutfitGender
enum class ETigerOutfitGender : uint8 {
	Female = 0,
	Male = 1,
	Both = 2,
	Count = 3,
	ETigerOutfitGender_MAX = 4
};

// Enum Tiger.ETigerPartyPlatforms
enum class ETigerPartyPlatforms : uint8 {
	Steam = 0,
	PS5 = 1,
	NumPlatforms = 2,
	ETigerPartyPlatforms_MAX = 3
};

// Enum Tiger.ETigerEnqueueFlags
enum class ETigerEnqueueFlags : uint8 {
	ShowNotification = 0,
	ReInitChallenges = 1,
	ETigerEnqueueFlags_MAX = 2
};

// Enum Tiger.ETigerLoginResult
enum class ETigerLoginResult : uint8 {
	LoginSucceeded = 0,
	InternalError = 1,
	GetCharactersFailed = 2,
	NoValidAuthentication = 3,
	SteamNotEnabled = 4,
	PlayerBanned = 5,
	Count = 6,
	ETigerLoginResult_MAX = 7
};

// Enum Tiger.ETigerPersistentConfigKey
enum class ETigerPersistentConfigKey : uint8 {
	LastRewardedStatusRank = 0,
	LastBattlePassSeasonId = 1,
	LastRewardedRankedModeRankId = 2,
	LastRankedSeasonId = 3,
	ETigerPersistentConfigKey_MAX = 4
};

// Enum Tiger.ETigerPlayerNPCVisibility
enum class ETigerPlayerNPCVisibility : uint8 {
	NotSeenByNPC = 0,
	SeenByCivilian = 1,
	SeenByPolice = 2,
	ETigerPlayerNPCVisibility_MAX = 3
};

// Enum Tiger.ETigerClimbingCameraInterpState
enum class ETigerClimbingCameraInterpState : uint8 {
	None = 0,
	In = 1,
	Out = 2,
	ETigerClimbingCameraInterpState_MAX = 3
};

// Enum Tiger.ETigerPhysicalInteraction
enum class ETigerPhysicalInteraction : uint8 {
	Neither = 0,
	Revive = 1,
	Diablerie = 2,
	ETigerPhysicalInteraction_MAX = 3
};

// Enum Tiger.ETigerBufferedActionType
enum class ETigerBufferedActionType : uint8 {
	Jump = 0,
	Dodge = 1,
	MeleeAttack = 2,
	RangedAttack = 3,
	DisciplineArchetype = 4,
	DisciplineArchetypeReleased = 5,
	DisciplineClan = 6,
	DisciplineClanReleased = 7,
	WeaponAbility = 8,
	WeaponAbilityReleased = 9,
	Sprint = 10,
	Block = 11,
	Crouch = 12,
	Reload = 13,
	SwitchWeapon = 14,
	QuickAttack = 15,
	ToggleHeightenedSenses = 16,
	Count = 17,
	ETigerBufferedActionType_MAX = 18
};

// Enum Tiger.ETigerWallJumpAnimationState
enum class ETigerWallJumpAnimationState : uint8 {
	None = 0,
	Sliding = 1,
	Jumping = 2,
	ETigerWallJumpAnimationState_MAX = 3
};

// Enum Tiger.ETigerWallSlideWallSide
enum class ETigerWallSlideWallSide : uint8 {
	Front = 0,
	Left = 1,
	Right = 2,
	Count = 3,
	ETigerWallSlideWallSide_MAX = 4
};

// Enum Tiger.ETigerGroundedStates
enum class ETigerGroundedStates : uint8 {
	Grounded = 0,
	Falling = 1,
	ETigerGroundedStates_MAX = 2
};

// Enum Tiger.ETigerVersionIsValidResult
enum class ETigerVersionIsValidResult : uint8 {
	Valid = 0,
	Invalid = 1,
	ConnectionError = 2,
	ParseError = 3,
	ETigerVersionIsValidResult_MAX = 4
};

// Enum Tiger.ETigerGetTicketResult
enum class ETigerGetTicketResult : uint8 {
	Success = 0,
	ConnectionError = 1,
	ParseError = 2,
	InvalidResponse = 3,
	BackendOperationFailed = 4,
	ETigerGetTicketResult_MAX = 5
};

// Enum Tiger.ETigerPlayerExperienceSource
enum class ETigerPlayerExperienceSource : uint8 {
	Eliminations = 0,
	Diableries = 1,
	Assists = 2,
	DamageDealt = 3,
	Count = 4,
	ETigerPlayerExperienceSource_MAX = 5
};

// Enum Tiger.ETigerInterrupt
enum class ETigerInterrupt : uint8 {
	Climbing = 0,
	Placeholder = 1,
	Size = 2,
	ETigerInterrupt_MAX = 3
};

// Enum Tiger.ETigerScoreSource
enum class ETigerScoreSource : uint8 {
	CapturePoint = 0,
	Elimination = 1,
	ETigerScoreSource_MAX = 2
};

// Enum Tiger.ETigerArchetypePerkState
enum class ETigerArchetypePerkState : uint8 {
	Available = 0,
	Selected = 1,
	Locked = 2,
	Count = 3,
	ETigerArchetypePerkState_MAX = 4
};

// Enum Tiger.ETigerPremiumCurrencyPackDiscount
enum class ETigerPremiumCurrencyPackDiscount : uint8 {
	None = 0,
	Regular = 1,
	PsPlus = 2,
	Upsell = 3,
	RegularAndUpsell = 4,
	ETigerPremiumCurrencyPackDiscount_MAX = 5
};

// Enum Tiger.EHitAudio
enum class EHitAudio : uint8 {
	None = 0,
	Flesh = 1,
	Stone = 2,
	Concrete = 3,
	Fabric = 4,
	MetalThick = 5,
	Gravel = 6,
	Ground = 7,
	CeramicRoofTile = 8,
	Grass = 9,
	Puddle = 10,
	Wood = 11,
	MetalThin = 12,
	Glass = 13,
	MAX = 14
};

// Enum Tiger.ETigerMapType
enum class ETigerMapType : uint8 {
	Match = 0,
	Elysium = 99,
	Count = 100,
	ETigerMapType_MAX = 101
};

// Enum Tiger.ETigerQuestCategory
enum class ETigerQuestCategory : uint8 {
	Uncategorised = 0,
	SideQuest = 1,
	Seasonal = 2,
	Count = 3,
	ETigerQuestCategory_MAX = 4
};

// Enum Tiger.ETigerWeaponReloadMode
enum class ETigerWeaponReloadMode : uint8 {
	NotReloading = 0,
	WantsToReload = 1,
	Reloading = 2,
	ETigerWeaponReloadMode_MAX = 3
};

// Enum Tiger.ETigerRecapSyncTypes
enum class ETigerRecapSyncTypes : uint8 {
	NONE = 0,
	SPECTATORS = 1,
	ELIMINATIONS = 2,
	KILLS = 3,
	DEATHS = 4,
	RESPAWNS = 5,
	REVIVES = 6,
	DOWNED = 7,
	HEALING = 8,
	DAMAGE = 9,
	ASSISTS = 10,
	COUNT = 11,
	ETigerRecapSyncTypes_MAX = 12
};

// Enum Tiger.ETigerReflectBehaviour
enum class ETigerReflectBehaviour : uint8 {
	Reflect = 0,
	Block = 1,
	None = 2,
	ETigerReflectBehaviour_MAX = 3
};

// Enum Tiger.ETigerReflectAttackType
enum class ETigerReflectAttackType : uint8 {
	Bullet = 0,
	Melee = 1,
	ThrownAxe = 2,
	ThrownTrap = 3,
	ThrownChain = 4,
	Count = 5,
	ETigerReflectAttackType_MAX = 6
};

// Enum Tiger.ETigerReplaySettingToChangeViaActions
enum class ETigerReplaySettingToChangeViaActions : uint8 {
	FocalDistance = 0,
	FieldOfView = 1,
	FStop = 2,
	Rotation = 3,
	ETigerReplaySettingToChangeViaActions_MAX = 4
};

// Enum Tiger.ETigerReplayMoveMode
enum class ETigerReplayMoveMode : uint8 {
	Flying = 0,
	Walking = 1,
	ETigerReplayMoveMode_MAX = 2
};

// Enum Tiger.ETigerReplayCameraTransitionType
enum class ETigerReplayCameraTransitionType : uint8 {
	None = 0,
	Bilinear = 1,
	ETigerReplayCameraTransitionType_MAX = 2
};

// Enum Tiger.ETigerReplayCameraRelativeMoveType
enum class ETigerReplayCameraRelativeMoveType : uint8 {
	Linear = 0,
	Polar = 1,
	ETigerReplayCameraRelativeMoveType_MAX = 2
};

// Enum Tiger.ETigerReplayCameraMoveType
enum class ETigerReplayCameraMoveType : uint8 {
	Linear = 0,
	SCurve = 1,
	ETigerReplayCameraMoveType_MAX = 2
};

// Enum Tiger.ETigerReplayCameraRotateMode
enum class ETigerReplayCameraRotateMode : uint8 {
	None = 0,
	LockRotation = 1,
	LookAt = 2,
	ETigerReplayCameraRotateMode_MAX = 3
};

// Enum Tiger.ETigerReplayCameraMode
enum class ETigerReplayCameraMode : uint8 {
	Free = 0,
	Chase = 1,
	Rail = 2,
	ETigerReplayCameraMode_MAX = 3
};

// Enum Tiger.ETigerClassRepNodeMapping
enum class ETigerClassRepNodeMapping : uint8 {
	NotRouted = 0,
	RelevantAllConnections = 1,
	OwnerRelevantConnection = 2,
	ExtendedTeamRelevantConnection = 3,
	Spatialize_Static = 4,
	Spatialize_Dynamic = 5,
	Spatialize_Dynamic_PlayerSpawned = 6,
	Spatialize_Static_PlayerSpawned = 7,
	Spatialize_Dormancy = 8,
	ETigerClassRepNodeMapping_MAX = 9
};

// Enum Tiger.ETigerRespawnStreamingStatus
enum class ETigerRespawnStreamingStatus : uint8 {
	WaitingForStreaming = 0,
	DoneOrTimedOut = 1,
	ETigerRespawnStreamingStatus_MAX = 2
};

// Enum Tiger.ETigerResurrectHolyIncenseInteractionType
enum class ETigerResurrectHolyIncenseInteractionType : uint8 {
	None = 0,
	OnOverlap = 1,
	OnWaveReveal = 2,
	ETigerResurrectHolyIncenseInteractionType_MAX = 3
};

// Enum Tiger.ETigerRewardCategory
enum class ETigerRewardCategory : uint8 {
	RankedMode = 0,
	BattlePass = 1,
	Challenge = 2,
	ArchetypeProgression = 3,
	PlayerProgression = 4,
	Count = 5,
	ETigerRewardCategory_MAX = 6
};

// Enum Tiger.ETigerRewardEntryType
enum class ETigerRewardEntryType : uint8 {
	Item = 0,
	Perk = 1,
	Count = 2,
	ETigerRewardEntryType_MAX = 3
};

// Enum Tiger.EScreenTransitionState
enum class EScreenTransitionState : uint8 {
	NotStarted = 0,
	TransitionIn = 1,
	TransitionOut = 2,
	Finished = 3,
	EScreenTransitionState_MAX = 4
};

// Enum Tiger.EShockwaveWallDestroyReason
enum class EShockwaveWallDestroyReason : uint8 {
	CollidedWithTerrain = 0,
	ReachedMaxDistance = 1,
	OtherShockwaveWall = 2,
	EShockwaveWallDestroyReason_MAX = 3
};

// Enum Tiger.ETigerSignificanceElysiumNpcMeshType
enum class ETigerSignificanceElysiumNpcMeshType : uint8 {
	Body = 0,
	Head = 1,
	Hair = 2,
	Hoodie = 3,
	Props = 4,
	ETigerSignificanceElysiumNpcMeshType_MAX = 5
};

// Enum Tiger.ETigerSignificancePlayerMeshType
enum class ETigerSignificancePlayerMeshType : uint8 {
	Body = 0,
	Head = 1,
	Hair = 2,
	Hoodie = 3,
	Headgear = 4,
	Eyewear = 5,
	Weapon = 6,
	SecondaryWeapon = 7,
	HolsteredWeapon = 8,
	SecondaryHolsteredWeapon = 9,
	BodyAdditional = 10,
	Generic = 11,
	Piercing = 12,
	Beard = 13,
	ETigerSignificancePlayerMeshType_MAX = 14
};

// Enum Tiger.ESplatmapTextureChannel
enum class ESplatmapTextureChannel : uint8 {
	R = 0,
	G = 1,
	B = 2,
	A = 3,
	ChannelCount = 4,
	ESplatmapTextureChannel_MAX = 5
};

// Enum Tiger.ETigerStaticMeshType
enum class ETigerStaticMeshType : uint8 {
	Default = 0,
	Stairs = 1,
	Slope = 2,
	ETigerStaticMeshType_MAX = 3
};

// Enum Tiger.ETigerPersistentStatsCategory
enum class ETigerPersistentStatsCategory : uint8 {
	OnlineTime = 0,
	PlayTime = 1,
	PingMin = 2,
	PingMax = 3,
	LoadingTime = 4,
	TimeUntilPlay = 5,
	MatchesPlayed = 6,
	Count = 7,
	ETigerPersistentStatsCategory_MAX = 8
};

// Enum Tiger.ETigerStatsGroupType
enum class ETigerStatsGroupType : uint8 {
	GeneralStats = 0,
	RangedWeaponStats = 1,
	MeleeWeaponStats = 2,
	Count = 3,
	ETigerStatsGroupType_MAX = 4
};

// Enum Tiger.ETigerStatsCategory
enum class ETigerStatsCategory : uint8 {
	TimeInRedGas = 0,
	TimeInRedGasWithStimulant = 1,
	TimeInElysium = 2,
	TimeTalkingToNPC = 3,
	TimeSpentInCurrentElysiumSubMenu = 4,
	TotalMoveDistance = 5,
	WalkingDistance = 6,
	DisciplineTravelDistance = 7,
	CrouchingTime = 8,
	ClimbingTime = 9,
	TimeInside = 10,
	WallHangTime = 11,
	WallGrindTime = 12,
	SlideTime = 13,
	AirTime = 14,
	NotMovingTime = 15,
	TotalJumps = 16,
	TotalWallJumps = 17,
	TotalSlideJumps = 18,
	TotalLedgeGrabs = 19,
	TotalLowVaults = 20,
	NumberOfAlliedRevives = 21,
	TotalAmountOfHealing = 22,
	TotalNumberOfHealingEvents = 23,
	TotalFeedingAbortsByDamage = 24,
	TotalFeedingAbortsByPlayer = 25,
	TotalTimeBloodHunted = 26,
	TotalBloodHuntsByFeeding = 27,
	TotalBloodHuntsByKilling = 28,
	TotalNumberAreaMarkerConsequences = 29,
	TotalNumberMapMarkerConsequences = 30,
	TotalDamageDone = 31,
	SurvivalTime = 32,
	KindredsKilled = 33,
	Placement = 34,
	Diableries = 35,
	DownedPlayers = 36,
	LevelReached = 37,
	Assists = 38,
	TotalExpGained = 39,
	Deaths = 40,
	TimesDowned = 41,
	NumberOfRangedHits = 42,
	NumberOfRangedShots = 43,
	DamageDealtWithWeapon = 44,
	EnemiesDownedWithWeapon = 45,
	NumberOfTimesOutOfAmmoWithWeapon = 46,
	NumberHeadshotsWithWeapon = 47,
	DurationMeleeWeaponHeldFor = 48,
	NumberOfTimesMeleeWeaponDrawn = 49,
	NumberOfAttacksWithMeleeWeapon = 50,
	NumberOfHitsWithMeleeWeapon = 51,
	TotalDamageDoneWithMeleeWeapon = 52,
	TotalNumberOfDownsWithMeleeWeapon = 53,
	TotalNumberOfKillsWithMeleeWeapon = 54,
	Count = 55,
	ETigerStatsCategory_MAX = 56
};

// Enum Tiger.ETigerInWorldStore
enum class ETigerInWorldStore : uint8 {
	None = 0,
	Pharmacy = 1,
	Tailor = 2,
	Antique = 3,
	Count = 4,
	ETigerInWorldStore_MAX = 5
};

// Enum Tiger.ETigerTelemetryDamageCauser
enum class ETigerTelemetryDamageCauser : uint8 {
	Undefined = 0,
	Self = 1,
	OtherPlayer = 2,
	Entity = 3,
	Judge = 4,
	Civilian = 5,
	None = 6,
	RedGas = 7,
	Environmental = 8,
	ETigerTelemetryDamageCauser_MAX = 9
};

// Enum Tiger.ETigerTelemetryDamageType
enum class ETigerTelemetryDamageType : uint8 {
	Undefined = 0,
	Ranged = 1,
	Melee = 2,
	Discipline = 3,
	Environmental = 4,
	RedGas = 5,
	Diablerie = 6,
	ETigerTelemetryDamageType_MAX = 7
};

// Enum Tiger.ETigerTelemetryAccountRegistrationMethod
enum class ETigerTelemetryAccountRegistrationMethod : uint8 {
	Email = 0,
	ETigerTelemetryAccountRegistrationMethod_MAX = 1
};

// Enum Tiger.ETigerTelemetryAceDeathType
enum class ETigerTelemetryAceDeathType : uint8 {
	Unknown = 0,
	Damage = 1,
	Diablerize = 2,
	ETigerTelemetryAceDeathType_MAX = 3
};

// Enum Tiger.ETigerTelemetryMetaItemSourceType
enum class ETigerTelemetryMetaItemSourceType : uint8 {
	FlashStore = 0,
	Battlepass = 1,
	Reward = 2,
	Other = 3,
	ETigerTelemetryMetaItemSourceType_MAX = 4
};

// Enum Tiger.ETigerTelemetryRespawnMethod
enum class ETigerTelemetryRespawnMethod : uint8 {
	Altar = 0,
	RespawnFeature = 1,
	ETigerTelemetryRespawnMethod_MAX = 2
};

// Enum Tiger.ETigerTelemetryAceRebirthType
enum class ETigerTelemetryAceRebirthType : uint8 {
	Unknown = 0,
	Revive = 1,
	Respawn = 2,
	ETigerTelemetryAceRebirthType_MAX = 3
};

// Enum Tiger.ETigerTelemetryNetworkIpType
enum class ETigerTelemetryNetworkIpType : uint8 {
	Unspec = 0,
	Ipv4 = 1,
	Ipv6 = 2,
	ETigerTelemetryNetworkIpType_MAX = 3
};

// Enum Tiger.ETigerTelemetryNetworkType
enum class ETigerTelemetryNetworkType : uint8 {
	Unknown = 0,
	Ethernet = 1,
	Wifi = 2,
	ETigerTelemetryNetworkType_MAX = 3
};

// Enum Tiger.ETigerTelemetryChallengeType
enum class ETigerTelemetryChallengeType : uint8 {
	Daily = 0,
	Weekly = 1,
	Other = 2,
	Mastery = 3,
	ETigerTelemetryChallengeType_MAX = 4
};

// Enum Tiger.ETigerTelemetryHardCurrencyRecieveMethod
enum class ETigerTelemetryHardCurrencyRecieveMethod : uint8 {
	TopUp = 1,
	BattlepassReward = 2,
	Gifted = 3,
	Other = 4,
	Challenges = 5,
	ETigerTelemetryHardCurrencyRecieveMethod_MAX = 6
};

// Enum Tiger.ETigerTelemetryBattlepassType
enum class ETigerTelemetryBattlepassType : uint8 {
	Regular = 0,
	Bundle = 1,
	RankSkipOnly = 2,
	ETigerTelemetryBattlepassType_MAX = 3
};

// Enum Tiger.ETigerTelemetryGameplayMode
enum class ETigerTelemetryGameplayMode : uint8 {
	BattleRoyale = 0,
	ETigerTelemetryGameplayMode_MAX = 1
};

// Enum Tiger.ETigerTelemetryRankedMode
enum class ETigerTelemetryRankedMode : uint8 {
	Casual = 0,
	Ranked = 1,
	ETigerTelemetryRankedMode_MAX = 2
};

// Enum Tiger.ETigerTelemetryPlatformType
enum class ETigerTelemetryPlatformType : uint8 {
	Steam = 0,
	Unknown = 1,
	Ps5 = 2,
	ETigerTelemetryPlatformType_MAX = 3
};

// Enum Tiger.ETigerTelemetryDeviceType
enum class ETigerTelemetryDeviceType : uint8 {
	Windows = 0,
	ETigerTelemetryDeviceType_MAX = 1
};

// Enum Tiger.ETigerTelemetryCauseOfPingRemoval
enum class ETigerTelemetryCauseOfPingRemoval : uint8 {
	Timeout = 0,
	Cancel = 1,
	CollectedLoot = 2,
	GroupMemberRemoved = 3,
	ETigerTelemetryCauseOfPingRemoval_MAX = 4
};

// Enum Tiger.ETigerTelemetryExpSource
enum class ETigerTelemetryExpSource : uint8 {
	Civillian = 0,
	PotentCivillian = 1,
	HighPotentCivillian = 2,
	Diablerie = 3,
	Rat = 4,
	Team = 5,
	Entity = 6,
	Invalid = 7,
	ETigerTelemetryExpSource_MAX = 8
};

// Enum Tiger.ETigerThrallMenu
enum class ETigerThrallMenu : uint8 {
	Thralls = 0,
	Upgrades = 1,
	Other = 2,
	ETigerThrallMenu_MAX = 3
};

// Enum Tiger.ETigerMissionObjectiveType
enum class ETigerMissionObjectiveType : uint8 {
	Action_Brawl = 0,
	Action_Firearms = 1,
	Action_Chase = 2,
	Stealth_FindEntrance = 3,
	Stealth_TakePhoto = 4,
	Stealth_Hack = 5,
	Intel_StealIntenl = 6,
	Intel_PlantBug = 7,
	Intel_ThreatenWitness = 8,
	ETigerMissionObjectiveType_MAX = 9
};

// Enum Tiger.ETigerMissionType
enum class ETigerMissionType : uint8 {
	Action = 0,
	Stealth = 1,
	Intel = 2,
	ETigerMissionType_MAX = 3
};

// Enum Tiger.ETigerThrallSystemLoadedTable
enum class ETigerThrallSystemLoadedTable : uint8 {
	Abilities = 0,
	BaseThralls = 1,
	StatsModifier = 2,
	ThrallMission = 3,
	ETigerThrallSystemLoadedTable_MAX = 4
};

// Enum Tiger.ETigerThrallStatId
enum class ETigerThrallStatId : uint8 {
	Perception = 0,
	Commitment = 1,
	Dominance = 2,
	Sociability = 3,
	Proficiency = 4,
	Stealth = 5,
	Stamina = 6,
	Combat = 7,
	Count = 8,
	ETigerThrallStatId_MAX = 9
};

// Enum Tiger.ETigerThrallAbilityId
enum class ETigerThrallAbilityId : uint8 {
	None = 0,
	Diplomat = 1,
	Slippery = 2,
	NaturalEnemy = 4,
	IWorkAlone = 8,
	ETigerThrallAbilityId_MAX = 9
};

// Enum Tiger.ETigerTraversalNetValue
enum class ETigerTraversalNetValue : uint8 {
	Sprint = 16,
	RootMotionDisabled = 32,
	Climb = 48,
	ForcedMove = 64,
	Stagger = 80,
	LedgeGrab = 96,
	LowVault = 112,
	Downed = 128,
	WallGrind = 144,
	Sliding = 160,
	RESERVE_2 = 176,
	RESERVE_3 = 192,
	RESERVE_4 = 208,
	RESERVE_5 = 224,
	RESERVE_6 = 240,
	ETigerTraversalNetValue_MAX = 241
};

// Enum Tiger.ETigerTraversalTransitionResult
enum class ETigerTraversalTransitionResult : uint8 {
	Success = 0,
	SuccessWithConsumption = 1,
	Fail = 2,
	ETigerTraversalTransitionResult_MAX = 3
};

// Enum Tiger.ETigerWallJumpInputOption
enum class ETigerWallJumpInputOption : uint8 {
	None = 0,
	OppositeToNormal = 1,
	ParallelToNormal = 2,
	ETigerWallJumpInputOption_MAX = 3
};

// Enum Tiger.ETigerMedalTier
enum class ETigerMedalTier : uint8 {
	None = 0,
	Bronze = 1,
	Silver = 2,
	Gold = 3,
	Ruby = 4,
	ETigerMedalTier_MAX = 5
};

// Enum Tiger.ETigerMetadataPathType
enum class ETigerMetadataPathType : uint8 {
	MetadataRoot = 0,
	MetadataJson = 1,
	WeaponIcons = 2,
	RankIcons = 3,
	ETigerMetadataPathType_MAX = 4
};

// Enum Tiger.ETigerUIBorderShape
enum class ETigerUIBorderShape : uint8 {
	ETigerBorderShape_Rectangle = 0,
	ETigerBorderShape_Circle = 1,
	ETigerBorderShape_MAX = 2
};

// Enum Tiger.ETigerForceOption
enum class ETigerForceOption : uint8 {
	NotForced = 0,
	ForceYes = 1,
	ForceNo = 2,
	ETigerForceOption_MAX = 3
};

// Enum Tiger.ETigerMinMax
enum class ETigerMinMax : uint8 {
	Min = 0,
	Max = 1,
	Count = 2
};

// Enum Tiger.ETigerUIElementLockStatus
enum class ETigerUIElementLockStatus : uint8 {
	Locked = 0,
	InProgress = 1,
	Complete = 2,
	ETigerUIElementLockStatus_MAX = 3
};

// Enum Tiger.ETigerExtendedWeaponLevels
enum class ETigerExtendedWeaponLevels : uint8 {
	Default = 0,
	ExtendedSmall = 1,
	ExtendedMedium = 2,
	ExtendedLarge = 3,
	LevelCount = 4,
	ETigerExtendedWeaponLevels_MAX = 5
};

// Enum Tiger.ETigerSpreadModifier
enum class ETigerSpreadModifier : uint8 {
	Aiming = 0,
	Crouching = 1,
	Moving = 2,
	IsInAir = 3,
	Sprinting = 4,
	Sliding = 5,
	WallHang = 6,
	Count = 7,
	ETigerSpreadModifier_MAX = 8
};

// Enum Tiger.ETigerWeaponType
enum class ETigerWeaponType : uint8 {
	AssaultRifle = 0,
	Revolver = 1,
	Rifle = 2,
	SMG = 3,
	Pistol = 4,
	Axe = 5,
	Bat = 6,
	Knife = 7,
	Shotgun = 8,
	Sword = 9,
	Bow = 10,
	Crossbow = 11,
	Count = 12,
	ETigerWeaponType_MAX = 13
};

// Enum Tiger.EFogVariations
enum class EFogVariations : uint8 {
	Default = 0,
	Thick = 1,
	HeavyRain = 2,
	RedSky = 3,
	YellowSky = 4,
	EFogVariations_MAX = 5
};

// Enum Tiger.ETigerWorldCompositionProxyMode
enum class ETigerWorldCompositionProxyMode : uint8 {
	Legacy = 0,
	SingleStageMerge = 1,
	ETigerWorldCompositionProxyMode_MAX = 2
};

// ScriptStruct Tiger.TigerGrimoireSearchEntry
// Size: 0x38 (Inherited: 0x00)
struct FTigerGrimoireSearchEntry {
	struct FString Name; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
	struct UTigerGrimoireCategory* Category; // 0x18(0x08)
	struct FString EntryIdAsString; // 0x20(0x10)
	char pad_30[0x8]; // 0x30(0x08)
};

// ScriptStruct Tiger.DisciplineUse
// Size: 0x50 (Inherited: 0x00)
struct FDisciplineUse {
	enum class ETigerDisciplinesEnum DisciplineUsed; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector Location; // 0x04(0x0c)
	struct FVector Direction; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct ATigerCharacter*> Targets; // 0x20(0x10)
	struct FVector DisciplineSpecificVector1; // 0x30(0x0c)
	struct FVector DisciplineSpecificVector2; // 0x3c(0x0c)
	bool bDisciplineSpecificBool1; // 0x48(0x01)
	bool bDisciplineSpecificBool2; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct Tiger.TigerScouterCharacterData
// Size: 0x30 (Inherited: 0x00)
struct FTigerScouterCharacterData {
	struct TArray<struct FTigerScoutedCharacter> ScoutedCharacters; // 0x00(0x10)
	struct TArray<struct FTigerScoutedCharacter> GroupScoutedCharacters; // 0x10(0x10)
	struct UUserWidget* ScoutedPlayerMapMarkerClass; // 0x20(0x08)
	struct UUserWidget* ScoutedNpcMapMarkerClass; // 0x28(0x08)
};

// ScriptStruct Tiger.TigerScoutedCharacter
// Size: 0x18 (Inherited: 0x00)
struct FTigerScoutedCharacter {
	struct ATigerCharacter* ScoutedCharacter; // 0x00(0x08)
	struct UTigerMapMarkerProxy* MarkerProxy; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerModSlotInfo
// Size: 0x10 (Inherited: 0x00)
struct FTigerModSlotInfo {
	struct UTigerRangedModItemAsset* Mod; // 0x00(0x08)
	bool IsUnlocked; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Tiger.TigerInventorySlotContent
// Size: 0x18 (Inherited: 0x00)
struct FTigerInventorySlotContent {
	enum class ETigerInventoryItemType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UTigerItemAsset* ItemAsset; // 0x08(0x08)
	int32_t StackCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerInventoryWeapon
// Size: 0x08 (Inherited: 0x00)
struct FTigerInventoryWeapon {
	struct UTigerItemAsset* ItemAsset; // 0x00(0x08)
};

// ScriptStruct Tiger.TigerItemData
// Size: 0x10 (Inherited: 0x00)
struct FTigerItemData {
	struct UTigerItemAsset* ItemAsset; // 0x00(0x08)
	int32_t Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerCharacterStatModification
// Size: 0xa8 (Inherited: 0x00)
struct FTigerCharacterStatModification {
	float ClanSkillCooldownMultiplier; // 0x00(0x04)
	float ArchetypeSkillCooldownMultiplier; // 0x04(0x04)
	float CooldownMultiplier; // 0x08(0x04)
	float CooldownSpeedMultiplier; // 0x0c(0x04)
	float RechargeMultiplier; // 0x10(0x04)
	float RechargeSpeedMultiplier; // 0x14(0x04)
	struct FTigerCharacterSingleStatModification MovementSpeed; // 0x18(0x08)
	float ClimbSpeedMultiplier; // 0x20(0x04)
	float MasqueradePointMultiplier; // 0x24(0x04)
	float MasqueradeConsequenceDurationMultiplier; // 0x28(0x04)
	float BloodhuntDurationMultiplier; // 0x2c(0x04)
	struct FTigerCharacterSingleStatModification MovementAcceleration; // 0x30(0x08)
	struct FTigerCharacterSingleStatModification Health; // 0x38(0x08)
	float JumpForceMultiplier; // 0x40(0x04)
	float WallJumpForceMultiplier; // 0x44(0x04)
	float AttackSpeedMultiplier; // 0x48(0x04)
	float ReloadSpeedMultiplier; // 0x4c(0x04)
	float StaminaCostMultiplier; // 0x50(0x04)
	float AmmoFindMultiplier; // 0x54(0x04)
	float AmmoCapacityMultiplier; // 0x58(0x04)
	float FeedSpeedMultiplier; // 0x5c(0x04)
	float MeleeDamageDealtMultiplier; // 0x60(0x04)
	float DamageDealtMultiplier; // 0x64(0x04)
	float DamageDealtToCiviliansMultiplier; // 0x68(0x04)
	float AbilityDamageDealtMultiplier; // 0x6c(0x04)
	float ShotgunDamageDealtMultiplier; // 0x70(0x04)
	float ShootingDamageDealtMultiplier; // 0x74(0x04)
	float DamageTakenMultiplier; // 0x78(0x04)
	float MeleeDamageTakenMultiplier; // 0x7c(0x04)
	struct FTigerCharacterSingleStatModification MeleeLifestealMultiplier; // 0x80(0x08)
	float AbilityDamageTakenMultiplier; // 0x88(0x04)
	float ShootingDamageTakenMultiplier; // 0x8c(0x04)
	float MosquitoDamageTakenMultiplier; // 0x90(0x04)
	float HealingReceivedMultiplier; // 0x94(0x04)
	float LoudnessMultiplier; // 0x98(0x04)
	float ReviveSpeedMultiplier; // 0x9c(0x04)
	float ExperienceGainMultiplier; // 0xa0(0x04)
	float AimSensitivityMultiplier; // 0xa4(0x04)
};

// ScriptStruct Tiger.TigerCharacterSingleStatModification
// Size: 0x08 (Inherited: 0x00)
struct FTigerCharacterSingleStatModification {
	float AdditiveChange; // 0x00(0x04)
	float MultiplicativeChange; // 0x04(0x04)
};

// ScriptStruct Tiger.TigerNonReplicatedCharacterStats
// Size: 0x90 (Inherited: 0x00)
struct FTigerNonReplicatedCharacterStats {
	struct FTigerCharacterSingleStatModification MovementAcceleration; // 0x00(0x08)
	float JumpForceMultiplier; // 0x08(0x04)
	float WallJumpForceMultiplier; // 0x0c(0x04)
	float MeleeDamageDealtMultiplier; // 0x10(0x04)
	float AbilityDamageDealtMultiplier; // 0x14(0x04)
	float DamageTakenMultiplier; // 0x18(0x04)
	float MeleeDamageTakenMultiplier; // 0x1c(0x04)
	struct FTigerCharacterSingleStatModification MeleeLifestealMultiplier; // 0x20(0x08)
	float AbilityDamageTakenMultiplier; // 0x28(0x04)
	float ShootingDamageTakenMultiplier; // 0x2c(0x04)
	float HealingReceivedMultiplier; // 0x30(0x04)
	float CooldownMultiplier; // 0x34(0x04)
	float CooldownSpeedMultiplier; // 0x38(0x04)
	float RechargeMultiplier; // 0x3c(0x04)
	float RechargeSpeedMultiplier; // 0x40(0x04)
	float MasqueradePointMultiplier; // 0x44(0x04)
	float MasqueradeConsequenceDurationMultiplier; // 0x48(0x04)
	float BloodhuntDurationMultiplier; // 0x4c(0x04)
	float ClanSkillCooldownMultiplier; // 0x50(0x04)
	float ArchetypeSkillCooldownMultiplier; // 0x54(0x04)
	float AttackSpeedMultiplier; // 0x58(0x04)
	float ReloadSpeedMultiplier; // 0x5c(0x04)
	float ShootingDamageDealtMultiplier; // 0x60(0x04)
	float ShotgunDamageDealtMultiplier; // 0x64(0x04)
	float StaminaCostMultiplier; // 0x68(0x04)
	float AmmoFindMultiplier; // 0x6c(0x04)
	float AmmoCapacityMultiplier; // 0x70(0x04)
	float FeedSpeedMultiplier; // 0x74(0x04)
	float MosquitoDamageTakenMultiplier; // 0x78(0x04)
	float LoudnessMultiplier; // 0x7c(0x04)
	float ExperienceGainMultiplier; // 0x80(0x04)
	float AimSensitivityMultiplier; // 0x84(0x04)
	float DamageDealtMultiplier; // 0x88(0x04)
	float DamageDealtToCiviliansMultiplier; // 0x8c(0x04)
};

// ScriptStruct Tiger.TigerReplicatedCharacterStats
// Size: 0x18 (Inherited: 0x00)
struct FTigerReplicatedCharacterStats {
	struct FTigerCharacterSingleStatModification Health; // 0x00(0x08)
	struct FTigerCharacterSingleStatModification MovementSpeed; // 0x08(0x08)
	float ClimbSpeedMultiplier; // 0x10(0x04)
	float ReviveSpeedMultiplier; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerPlayerStateGameData
// Size: 0xd0 (Inherited: 0x00)
struct FTigerPlayerStateGameData {
	struct TWeakObjectPtr<struct ATigerPlayerState> WeakPlayerState; // 0x00(0x08)
	int32_t PlayerId; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString PlayerName; // 0x10(0x10)
	struct FTigerCharacterCardData CardData; // 0x20(0x78)
	int32_t RankedPoints; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	int64_t PlayerLevel; // 0xa0(0x08)
	enum class ESharkPlatformType PlatformType; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct FString FakePlayerName; // 0xb0(0x10)
	struct FTigerPersistentPlayerID PersistentPlayerID; // 0xc0(0x10)
};

// ScriptStruct Tiger.TigerCharacterCardData
// Size: 0x78 (Inherited: 0x00)
struct FTigerCharacterCardData {
	struct TSoftClassPtr<UObject> CharacterIcon; // 0x00(0x28)
	struct TSoftClassPtr<UObject> CharacterCardShape; // 0x28(0x28)
	struct TSoftClassPtr<UObject> CharacterCardBackground; // 0x50(0x28)
};

// ScriptStruct Tiger.TigerMatchSettings
// Size: 0x1e0 (Inherited: 0x00)
struct FTigerMatchSettings {
	float GasSpeedFactor; // 0x00(0x04)
	enum class ETigerMatchSettingState GasSpeedFactorSettingState; // 0x04(0x01)
	bool bDisableEntity; // 0x05(0x01)
	enum class ETigerMatchSettingState DisableEntitySettingState; // 0x06(0x01)
	bool bDisabledCivilians; // 0x07(0x01)
	enum class ETigerMatchSettingState DisableCiviliansSettingState; // 0x08(0x01)
	bool bDisabledInteractables; // 0x09(0x01)
	enum class ETigerMatchSettingState DisableInteractablesSettingState; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	int32_t StartingResonance; // 0x0c(0x04)
	enum class ETigerMatchSettingState StartingResonanceSettingState; // 0x10(0x01)
	bool bAllHighTierLootActive; // 0x11(0x01)
	enum class ETigerMatchSettingState AllHighTierLootActiveSettingState; // 0x12(0x01)
	bool bBrokenMasqueradeAtStart; // 0x13(0x01)
	enum class ETigerMatchSettingState BrokenMasqueradeAtStartSettingState; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32_t HealthMax; // 0x18(0x04)
	enum class ETigerMatchSettingState HealthMaxSettingState; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	int32_t HealthStart; // 0x20(0x04)
	enum class ETigerMatchSettingState HealthStartSettingState; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	int32_t ShieldHpValue; // 0x28(0x04)
	enum class ETigerMatchSettingState ShieldHpSettingState; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	int32_t ShieldStackCount; // 0x30(0x04)
	enum class ETigerMatchSettingState ShieldStackCountSettingState; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	int32_t ShieldStartCount; // 0x38(0x04)
	enum class ETigerMatchSettingState ShieldStartCountSettingState; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float RegenerationTimeSolo; // 0x40(0x04)
	enum class ETigerMatchSettingState RegenerationTimeSoloSettingState; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float RegenerationTimeGroup; // 0x48(0x04)
	enum class ETigerMatchSettingState RegenerationTimeGroupSettingState; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct TMap<struct FString, float> LootItemWeightScale; // 0x50(0x50)
	enum class ETigerMatchSettingState LootItemWeightScaleSettingState; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct TMap<enum class ETigerItemRarity, float> LootItemRarityScale; // 0xa8(0x50)
	enum class ETigerMatchSettingState LootItemRarityScaleSettingState; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	struct FTigerMedalThresholds MatchStatMedalRequirements; // 0xfc(0x40)
	enum class ETigerMatchSettingState MatchStatMedalRequirementsSettingState; // 0x13c(0x01)
	char pad_13D[0x3]; // 0x13d(0x03)
	float PlayerEventXpScale; // 0x140(0x04)
	enum class ETigerMatchSettingState PlayerEventXpScaleSettingState; // 0x144(0x01)
	char pad_145[0x3]; // 0x145(0x03)
	float SurvivalTimeXpScale; // 0x148(0x04)
	enum class ETigerMatchSettingState SurvivalTimeXpScaleSettingState; // 0x14c(0x01)
	char pad_14D[0x3]; // 0x14d(0x03)
	float DamageDealtXpScale; // 0x150(0x04)
	enum class ETigerMatchSettingState DamageDealtXpScaleSettingState; // 0x154(0x01)
	char pad_155[0x3]; // 0x155(0x03)
	float PlacementXpScale; // 0x158(0x04)
	enum class ETigerMatchSettingState PlacementXpScaleSettingState; // 0x15c(0x01)
	bool RemoveResurrectAltars; // 0x15d(0x01)
	enum class ETigerMatchSettingState RemoveResurrectAltarsSettingState; // 0x15e(0x01)
	char pad_15F[0x1]; // 0x15f(0x01)
	int32_t RespawnMechanicLives; // 0x160(0x04)
	enum class ETigerMatchSettingState RespawnMechanicLivesSettingState; // 0x164(0x01)
	char pad_165[0x3]; // 0x165(0x03)
	struct FTigerWinConditionSettings WinConditions; // 0x168(0x18)
	struct FTigerScoreSettings ScoreSettings; // 0x180(0x08)
	struct FString PlacementStrategyName; // 0x188(0x10)
	int32_t ExtendedGroupCount; // 0x198(0x04)
	enum class ETigerMatchSettingState ExtendedGroupCountSettingState; // 0x19c(0x01)
	enum class ETigerSpawnMechanic SpawnMechanic; // 0x19d(0x01)
	enum class ETigerMatchSettingState SpawnMechanicSettingState; // 0x19e(0x01)
	enum class ETigerEnterDownedStateSetting EnterDownedState; // 0x19f(0x01)
	enum class ETigerMatchSettingState EnterDownedStateSettingState; // 0x1a0(0x01)
	bool bRespawnRetainItems; // 0x1a1(0x01)
	enum class ETigerMatchSettingState RespawnRetainItemsSettingState; // 0x1a2(0x01)
	char pad_1A3[0x5]; // 0x1a3(0x05)
	struct FString RespawnSettingsPreset; // 0x1a8(0x10)
	struct TArray<struct FString> Arenas; // 0x1b8(0x10)
	enum class ETigerMatchSettingState ArenasSettingState; // 0x1c8(0x01)
	char pad_1C9[0x3]; // 0x1c9(0x03)
	float ItemRespawnTime; // 0x1cc(0x04)
	enum class ETigerMatchSettingState ItemRespawnTimeSettingState; // 0x1d0(0x01)
	char pad_1D1[0x3]; // 0x1d1(0x03)
	float ItemDespawnTime; // 0x1d4(0x04)
	enum class ETigerMatchSettingState ItemDespawnTimeSettingState; // 0x1d8(0x01)
	bool InfiniteAmmo; // 0x1d9(0x01)
	enum class ETigerMatchSettingState InfiniteAmmoSettingState; // 0x1da(0x01)
	bool bDisableMasteryChallenges; // 0x1db(0x01)
	bool bDisableQuestProgression; // 0x1dc(0x01)
	bool bDisablePlacedCollectibles; // 0x1dd(0x01)
	char pad_1DE[0x2]; // 0x1de(0x02)
};

// ScriptStruct Tiger.TigerScoreSettings
// Size: 0x08 (Inherited: 0x00)
struct FTigerScoreSettings {
	int32_t ScorePerElimination; // 0x00(0x04)
	int32_t ScorePerCapturedPoint; // 0x04(0x04)
};

// ScriptStruct Tiger.TigerWinConditionSettings
// Size: 0x18 (Inherited: 0x00)
struct FTigerWinConditionSettings {
	struct TArray<struct FPrimaryAssetId> ActiveWinConditions; // 0x00(0x10)
	float TimeLimit; // 0x10(0x04)
	int32_t ScoreTarget; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerMedalThresholds
// Size: 0x40 (Inherited: 0x00)
struct FTigerMedalThresholds {
	struct FTigerPlayerMedalTiers Eliminations; // 0x00(0x10)
	struct FTigerPlayerMedalTiers Assists; // 0x10(0x10)
	struct FTigerPlayerMedalTiers Diableries; // 0x20(0x10)
	struct FTigerPlayerMedalTiers DamageDealt; // 0x30(0x10)
};

// ScriptStruct Tiger.TigerPlayerMedalTiers
// Size: 0x10 (Inherited: 0x00)
struct FTigerPlayerMedalTiers {
	int32_t bronze; // 0x00(0x04)
	int32_t silver; // 0x04(0x04)
	int32_t gold; // 0x08(0x04)
	int32_t Ruby; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerPreMatchStateInfo
// Size: 0x08 (Inherited: 0x00)
struct FTigerPreMatchStateInfo {
	int32_t StateData; // 0x00(0x04)
	enum class ETigerPreMatchState State; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Tiger.TigerQuestIdentifier
// Size: 0x40 (Inherited: 0x00)
struct FTigerQuestIdentifier {
	struct FString QuestLineId; // 0x00(0x10)
	struct FString QuestId; // 0x10(0x10)
	struct FGuid ObjectiveId; // 0x20(0x10)
	char pad_30[0x10]; // 0x30(0x10)
};

// ScriptStruct Tiger.TigerMetaStoreEntriesConfig
// Size: 0x28 (Inherited: 0x00)
struct FTigerMetaStoreEntriesConfig {
	enum class ETigerMetaStoreCategoryType ConfigCategory; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FTigerMetaStoreEntry> StoreEntries; // 0x08(0x10)
	int64_t Checksum; // 0x18(0x08)
	bool bIsValid; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Tiger.TigerMetaStoreEntry
// Size: 0x50 (Inherited: 0x00)
struct FTigerMetaStoreEntry {
	uint64_t StoreEntryID; // 0x00(0x08)
	uint32_t PremiumPrice; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString ImagePath; // 0x10(0x10)
	uint32_t Discount; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FDateTime StartDate; // 0x28(0x08)
	struct FDateTime EndDate; // 0x30(0x08)
	int32_t FlashStoreSlot; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FTigerMetaStoreEntryItem> Items; // 0x40(0x10)
};

// ScriptStruct Tiger.TigerMetaStoreEntryItem
// Size: 0x10 (Inherited: 0x00)
struct FTigerMetaStoreEntryItem {
	struct FTigerItemId ItemId; // 0x00(0x08)
	uint32_t Quantity; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerItemId
// Size: 0x08 (Inherited: 0x00)
struct FTigerItemId {
	uint64_t Value; // 0x00(0x08)
};

// ScriptStruct Tiger.TigerBuyStoreEntryResponsePayload
// Size: 0x28 (Inherited: 0x00)
struct FTigerBuyStoreEntryResponsePayload {
	struct TArray<struct FTigerItemId> BoughtItems; // 0x00(0x10)
	struct TArray<uint32_t> BoughtItemQuantities; // 0x10(0x10)
	enum class ETigerBuyStoreEntryResponseCode ResponseCode; // 0x20(0x01)
	bool bSuccess; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct Tiger.TigerMetaStoreBuyPayloadElement
// Size: 0x10 (Inherited: 0x00)
struct FTigerMetaStoreBuyPayloadElement {
	uint64_t EntryToBuy; // 0x00(0x08)
	int32_t QuantityToBuy; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerPersistentPlayerCharacter
// Size: 0xf0 (Inherited: 0x00)
struct FTigerPersistentPlayerCharacter {
	struct FTigerPersistentCharacterID UniqueCharacterID; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FTigerPersistentPlayerCharacterData Data; // 0x08(0xe0)
	int64_t LastUsedAt; // 0xe8(0x08)
};

// ScriptStruct Tiger.TigerPersistentPlayerCharacterData
// Size: 0xe0 (Inherited: 0x00)
struct FTigerPersistentPlayerCharacterData {
	enum class ETigerPowerKitType ArchetypeType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FTigerCharacterAppearance CharacterAppearance; // 0x08(0xc8)
	struct TArray<uint64_t> SelectedPerks; // 0xd0(0x10)
};

// ScriptStruct Tiger.TigerCharacterAppearance
// Size: 0xc8 (Inherited: 0x00)
struct FTigerCharacterAppearance {
	struct FTigerPersistentOutfitSetup PersistentAppearance; // 0x00(0x38)
	uint64_t HeadId; // 0x38(0x08)
	int32_t SkinColorIndex; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	uint64_t HairId; // 0x48(0x08)
	uint64_t HairColorId; // 0x50(0x08)
	uint64_t EyeColorId; // 0x58(0x08)
	uint64_t TattooId; // 0x60(0x08)
	uint64_t FacePaintId; // 0x68(0x08)
	uint64_t HeadgearId; // 0x70(0x08)
	uint64_t EyewearId; // 0x78(0x08)
	uint64_t PiercingSetId; // 0x80(0x08)
	uint64_t EyebrowShapeId; // 0x88(0x08)
	uint64_t EyebrowColorId; // 0x90(0x08)
	uint64_t BeardId; // 0x98(0x08)
	uint64_t BeardColorId; // 0xa0(0x08)
	uint64_t BodyTypeModifierId; // 0xa8(0x08)
	enum class ETigerGender BodyType; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct TArray<uint64_t> EmoteIds; // 0xb8(0x10)
};

// ScriptStruct Tiger.TigerPersistentOutfitSetup
// Size: 0x38 (Inherited: 0x00)
struct FTigerPersistentOutfitSetup {
	struct TSoftClassPtr<UObject> OutfitConfig; // 0x00(0x28)
	uint64_t OutfitId; // 0x28(0x08)
	int32_t HoodieIndex; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Tiger.TigerPersistentCharacterID
// Size: 0x01 (Inherited: 0x00)
struct FTigerPersistentCharacterID {
	char SlotIndex; // 0x00(0x01)
};

// ScriptStruct Tiger.TigerPersistentPlayerCardData
// Size: 0x18 (Inherited: 0x00)
struct FTigerPersistentPlayerCardData {
	struct FTigerItemId CharacterIconId; // 0x00(0x08)
	struct FTigerItemId CharacterCardShapeMaskId; // 0x08(0x08)
	struct FTigerItemId CharacterCardBackgroundTextureId; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerPersistentPlayerData
// Size: 0x1e0 (Inherited: 0x00)
struct FTigerPersistentPlayerData {
	struct FTigerQuestPersistentProgress QuestProgress; // 0x00(0x50)
	struct FTigerChallengePersistentProgressMap ChallengeMap; // 0x50(0x50)
	struct FTigerPersistentSeasonGameModeStats SeasonGameModeStats; // 0xa0(0x58)
	struct FTigerLocationPersistentProgress LocationProgress; // 0xf8(0x50)
	int32_t MatchesPlayed; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct TArray<int32_t> MatchesPlayedPerArchetype; // 0x150(0x10)
	struct TArray<struct FTigerGrimoireEntryStatusStruct> GrimoireEntries; // 0x160(0x10)
	struct TArray<int32_t> ReadDialogues; // 0x170(0x10)
	struct TArray<struct FTigerPersistentThrallData> PersistentThrallData; // 0x180(0x10)
	struct TArray<struct FTigerPersistentMissionData> PersistentThrallMissions; // 0x190(0x10)
	struct TArray<struct FTigerPersistentCollectibleData> PersistentCollectibleData; // 0x1a0(0x10)
	int32_t SharedThrallExp; // 0x1b0(0x04)
	char pad_1B4[0x4]; // 0x1b4(0x04)
	struct FTigerSuggestedArticlesData GrimoireSuggestedArticlesData; // 0x1b8(0x18)
	struct TArray<struct FTigerReadDialogueCategoryWrapper> ReadDialogueCategoriesContainer; // 0x1d0(0x10)
};

// ScriptStruct Tiger.TigerReadDialogueCategoryWrapper
// Size: 0x20 (Inherited: 0x00)
struct FTigerReadDialogueCategoryWrapper {
	struct FString NpcIdentifier; // 0x00(0x10)
	struct TArray<char> ReadCategories; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerSuggestedArticlesData
// Size: 0x18 (Inherited: 0x00)
struct FTigerSuggestedArticlesData {
	int32_t Day; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FString> EntryIds; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerPersistentCollectibleData
// Size: 0x08 (Inherited: 0x00)
struct FTigerPersistentCollectibleData {
	uint32_t CollectibleId; // 0x00(0x04)
	char CollectibleCount; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Tiger.TigerPersistentMissionData
// Size: 0x20 (Inherited: 0x00)
struct FTigerPersistentMissionData {
	int32_t MissionId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<enum class ETigerThrallId> ThrallsOnMission; // 0x08(0x10)
	int32_t Progress; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Tiger.TigerPersistentThrallData
// Size: 0x30 (Inherited: 0x00)
struct FTigerPersistentThrallData {
	struct FTigerThrallStats ThrallStats; // 0x00(0x10)
	char ThrallAbilities; // 0x10(0x01)
	enum class ETigerThrallId ThrallId; // 0x11(0x01)
	int8_t ThrallInjuryLevel; // 0x12(0x01)
	int8_t ThrallRating; // 0x13(0x01)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FTigerThrallStatModifier> ThrallStatModifiers; // 0x18(0x10)
	int32_t ThrallExp; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Tiger.TigerThrallStatModifier
// Size: 0x38 (Inherited: 0x00)
struct FTigerThrallStatModifier {
	int32_t InjuryLevel; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText ModifierName; // 0x08(0x18)
	uint32_t TurnsRemaining; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FTigerThrallStats StatModifiers; // 0x28(0x10)
};

// ScriptStruct Tiger.TigerThrallStats
// Size: 0x10 (Inherited: 0x00)
struct FTigerThrallStats {
	struct TArray<int32_t> Stats; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerGrimoireEntryStatusStruct
// Size: 0x08 (Inherited: 0x00)
struct FTigerGrimoireEntryStatusStruct {
	uint32_t EntryId; // 0x00(0x04)
	char State; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Tiger.TigerLocationPersistentProgress
// Size: 0x50 (Inherited: 0x00)
struct FTigerLocationPersistentProgress {
	struct TMap<struct FString, struct FTigerLocationPersistentProgressEntry> Progress; // 0x00(0x50)
};

// ScriptStruct Tiger.TigerLocationPersistentProgressEntry
// Size: 0x18 (Inherited: 0x00)
struct FTigerLocationPersistentProgressEntry {
	struct FString LocationName; // 0x00(0x10)
	float TimeSpentInLocation; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerPersistentSeasonGameModeStats
// Size: 0x58 (Inherited: 0x00)
struct FTigerPersistentSeasonGameModeStats {
	struct TMap<struct FString, struct FTigerPersistentGameModeMatchStats> GameModeStats; // 0x00(0x50)
	int64_t SeasonId; // 0x50(0x08)
};

// ScriptStruct Tiger.TigerPersistentGameModeMatchStats
// Size: 0x18 (Inherited: 0x00)
struct FTigerPersistentGameModeMatchStats {
	struct TArray<struct FTigerSeasonMatchStat> Stats; // 0x00(0x10)
	int32_t MatchesPlayed; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerSeasonMatchStat
// Size: 0x08 (Inherited: 0x00)
struct FTigerSeasonMatchStat {
	int32_t SeasonTotal; // 0x00(0x04)
	int32_t SeasonBest; // 0x04(0x04)
};

// ScriptStruct Tiger.TigerChallengePersistentProgressMap
// Size: 0x50 (Inherited: 0x00)
struct FTigerChallengePersistentProgressMap {
	struct TMap<enum class ETigerChallengeCategory, struct FTigerChallengePersistentProgress> ChallengeProgress; // 0x00(0x50)
};

// ScriptStruct Tiger.TigerChallengePersistentProgress
// Size: 0x68 (Inherited: 0x00)
struct FTigerChallengePersistentProgress {
	struct TMap<struct FTigerChallengeTypeID, struct FTigerChallengePersistentProgressEntry> Progress; // 0x00(0x50)
	int32_t Date; // 0x50(0x04)
	int32_t LastRewardTrackIndex; // 0x54(0x04)
	struct TArray<int32_t> LastRewardTrackIndices; // 0x58(0x10)
};

// ScriptStruct Tiger.TigerChallengeTypeID
// Size: 0x04 (Inherited: 0x00)
struct FTigerChallengeTypeID {
	uint32_t UID; // 0x00(0x04)
};

// ScriptStruct Tiger.TigerChallengePersistentProgressEntry
// Size: 0x10 (Inherited: 0x00)
struct FTigerChallengePersistentProgressEntry {
	int32_t Progress; // 0x00(0x04)
	int32_t Tier; // 0x04(0x04)
	bool bHasDistributedReward; // 0x08(0x01)
	bool bIsPersistentChallenge; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32_t LastTierRewardDistributed; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerQuestPersistentProgress
// Size: 0x50 (Inherited: 0x00)
struct FTigerQuestPersistentProgress {
	struct TMap<struct FString, struct FTigerQuestLinePersistentProgress> Progress; // 0x00(0x50)
};

// ScriptStruct Tiger.TigerQuestLinePersistentProgress
// Size: 0x50 (Inherited: 0x00)
struct FTigerQuestLinePersistentProgress {
	struct TMap<struct FString, struct FTigerQuestPersistentProgressEntry> Progress; // 0x00(0x50)
};

// ScriptStruct Tiger.TigerQuestPersistentProgressEntry
// Size: 0x18 (Inherited: 0x00)
struct FTigerQuestPersistentProgressEntry {
	bool bHasDistributedReward; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FTigerQuestObjectivePersistentProgressEntry> ObjectivesProgress; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerQuestObjectivePersistentProgressEntry
// Size: 0x18 (Inherited: 0x00)
struct FTigerQuestObjectivePersistentProgressEntry {
	struct FString Guid; // 0x00(0x10)
	int32_t Progress; // 0x10(0x04)
	bool bStarted; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Tiger.TigerPersistentPlayerTransactionalData
// Size: 0x88 (Inherited: 0x00)
struct FTigerPersistentPlayerTransactionalData {
	int64_t SeasonId; // 0x00(0x08)
	int64_t SeasonLevel; // 0x08(0x08)
	int64_t SeasonLevelExp; // 0x10(0x08)
	int32_t SeasonPlacementExpBonusPercentage; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FTigerPersistentInventoryItem> InventoryItems; // 0x20(0x10)
	struct TArray<struct FTigerPersistentOutfitSetup> Outfits; // 0x30(0x10)
	struct TArray<struct FTigerPersistentArchetypeTransactionalData> ArchetypeData; // 0x40(0x10)
	float Rating; // 0x50(0x04)
	int32_t RankPoints; // 0x54(0x04)
	int64_t PremiumCurrencyBalance; // 0x58(0x08)
	char pad_60[0x10]; // 0x60(0x10)
	int64_t PlayerLevel; // 0x70(0x08)
	int64_t PlayerLevelExp; // 0x78(0x08)
	char pad_80[0x8]; // 0x80(0x08)
};

// ScriptStruct Tiger.TigerPersistentArchetypeTransactionalData
// Size: 0x10 (Inherited: 0x00)
struct FTigerPersistentArchetypeTransactionalData {
	int64_t ArchetypeLevel; // 0x00(0x08)
	int64_t ArchetypeLevelExp; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerPersistentInventoryItem
// Size: 0x30 (Inherited: 0x00)
struct FTigerPersistentInventoryItem {
	struct TSoftClassPtr<UObject> ItemClassPath; // 0x00(0x28)
	int32_t Count; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Tiger.TigerMuteInfo
// Size: 0x18 (Inherited: 0x00)
struct FTigerMuteInfo {
	bool bIsMuted; // 0x00(0x01)
	char Reason; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FString EndsAt; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerEventConfigClientVisibleData
// Size: 0x50 (Inherited: 0x00)
struct FTigerEventConfigClientVisibleData {
	struct TMap<uint32_t, struct FTigerEventConfigClientEventData> SerializedEventData; // 0x00(0x50)
};

// ScriptStruct Tiger.TigerEventConfigClientEventData
// Size: 0x100 (Inherited: 0x00)
struct FTigerEventConfigClientEventData {
	struct TMap<struct FString, struct FString> Title; // 0x00(0x50)
	struct TMap<struct FString, struct FString> Description; // 0x50(0x50)
	struct TMap<struct FString, struct FString> BannerImageURL; // 0xa0(0x50)
	struct FDateTime StartDate; // 0xf0(0x08)
	struct FDateTime EndDate; // 0xf8(0x08)
};

// ScriptStruct Tiger.TigerEventConfigClientState
// Size: 0x50 (Inherited: 0x00)
struct FTigerEventConfigClientState {
	struct TMap<uint32_t, enum class ETigerEventSystemActivationState> SerializedActivationStates; // 0x00(0x50)
};

// ScriptStruct Tiger.TigerSeasonConfig
// Size: 0x360 (Inherited: 0x00)
struct FTigerSeasonConfig {
	uint32_t ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FDateTime SeasonStartDate; // 0x08(0x08)
	struct FDateTime SeasonEndDate; // 0x10(0x08)
	struct FDateTime BattlepassStartDate; // 0x18(0x08)
	struct FDateTime BattlepassEndDate; // 0x20(0x08)
	struct FTigerItemId BattlePassItemId; // 0x28(0x08)
	uint32_t BattlePassPrice; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TSoftObjectPtr<UTexture2D> BattlepassBannerTexture; // 0x38(0x28)
	struct TArray<struct FTigerItemIdWithPrice> SpecialItemPrices; // 0x60(0x10)
	struct TArray<struct FTigerSeasonConfig_RewardTier> FreeRewards; // 0x70(0x10)
	struct TArray<struct FTigerSeasonConfig_RewardTier> BattlepassRewards; // 0x80(0x10)
	struct TArray<struct FTigerSeasonConfig_RewardTier> PlayerLevelRewards; // 0x90(0x10)
	struct FTigerSeasonConfig_ArchetypeRewards ArchetypeLevelRewards; // 0xa0(0x90)
	struct TArray<struct FTigerSeasonConfig_WeeklyChallengeCollection> WeeklyChallenges; // 0x130(0x10)
	struct FTigerItemId DailyChallengeExpReward; // 0x140(0x08)
	struct FTigerItemId PersistentDailyChallengeTokenReward; // 0x148(0x08)
	struct FTigerSeasonConfig_DailyRewardCollection DailyRewards; // 0x150(0x20)
	struct FName DefaultVendorSubLevelName; // 0x170(0x08)
	struct FTigerItemId SoftCurrencyMatchRewardItemId; // 0x178(0x08)
	float SoftCurrencyMatchRewardMultiplier; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct FRuntimeFloatCurve SoftCurrencyPlacementBonus; // 0x188(0x88)
	struct FTigerSeasonExperiences SeasonExperiences; // 0x210(0xc8)
	struct FTigerPlayerExperiences PlayerExperiences; // 0x2d8(0x40)
	struct FTigerExpLevelRequirements SeasonExpRequirements; // 0x318(0x18)
	struct FTigerExpLevelRequirements ArchetypeExpRequirements; // 0x330(0x18)
	struct FTigerExpLevelRequirements PlayerExpRequirements; // 0x348(0x18)
};

// ScriptStruct Tiger.TigerExpLevelRequirements
// Size: 0x18 (Inherited: 0x00)
struct FTigerExpLevelRequirements {
	struct TArray<int32_t> ExpRequirements; // 0x00(0x10)
	bool bClampAtMaxLevel; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t ExpRequirementIncreasePostMaxLevel; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerPlayerExperiences
// Size: 0x40 (Inherited: 0x00)
struct FTigerPlayerExperiences {
	struct FTigerPlayerMedalTiers ExperienceSourceModifiers[0x4]; // 0x00(0x40)
};

// ScriptStruct Tiger.TigerSeasonExperiences
// Size: 0xc8 (Inherited: 0x00)
struct FTigerSeasonExperiences {
	struct TMap<enum class ETigerPlayerEvent, struct FTigerPlayerEventToSeasonExperienceSource> PlayerEventBasedExperiences; // 0x00(0x50)
	struct TArray<int32_t> TopPlacementExperience; // 0x50(0x10)
	struct FTigerSeasonExperienceSourceModifiers ExperienceSourceModifiers[0xd]; // 0x60(0x68)
};

// ScriptStruct Tiger.TigerSeasonExperienceSourceModifiers
// Size: 0x08 (Inherited: 0x00)
struct FTigerSeasonExperienceSourceModifiers {
	int32_t ExperienceCap; // 0x00(0x04)
	float ExperienceMultiplier; // 0x04(0x04)
};

// ScriptStruct Tiger.TigerPlayerEventToSeasonExperienceSource
// Size: 0x08 (Inherited: 0x00)
struct FTigerPlayerEventToSeasonExperienceSource {
	enum class ETigerSeasonExperienceSource ExperienceSource; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ExperienceAmount; // 0x04(0x04)
};

// ScriptStruct Tiger.TigerSeasonConfig_DailyRewardCollection
// Size: 0x20 (Inherited: 0x00)
struct FTigerSeasonConfig_DailyRewardCollection {
	struct TArray<struct FTigerItemId> TrackRewardIds; // 0x00(0x10)
	struct TArray<struct FTigerSeasonConfig_DailyFinalReward> DailyFinalRewardWeeks; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerSeasonConfig_DailyFinalReward
// Size: 0x38 (Inherited: 0x00)
struct FTigerSeasonConfig_DailyFinalReward {
	struct FTigerItemId DailyFinalRewardIds[0x7]; // 0x00(0x38)
};

// ScriptStruct Tiger.TigerChallengeConfigCollection
// Size: 0x18 (Inherited: 0x00)
struct FTigerChallengeConfigCollection {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct FTigerItemId> SequentialRewardIds; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerSeasonConfig_WeeklyChallengeCollection
// Size: 0x38 (Inherited: 0x18)
struct FTigerSeasonConfig_WeeklyChallengeCollection : FTigerChallengeConfigCollection {
	struct TArray<struct FTigerWeeklyChallengeInstanceDefinition> ChallengeDefinitions; // 0x18(0x10)
	struct FDateTime UnlockDate; // 0x28(0x08)
	struct FDateTime LockDate; // 0x30(0x08)
};

// ScriptStruct Tiger.TigerChallengeInstanceDefinition
// Size: 0x20 (Inherited: 0x00)
struct FTigerChallengeInstanceDefinition {
	char pad_0[0x8]; // 0x00(0x08)
	struct FTigerChallengeTypeID ChallengeStorageID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FTigerItemId> RewardIds; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerWeeklyChallengeInstanceDefinition
// Size: 0x28 (Inherited: 0x20)
struct FTigerWeeklyChallengeInstanceDefinition : FTigerChallengeInstanceDefinition {
	struct FTigerChallengeTypeID ChallengeTypeID; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Tiger.TigerSeasonConfig_ArchetypeRewards
// Size: 0x90 (Inherited: 0x00)
struct FTigerSeasonConfig_ArchetypeRewards {
	struct FTigerSeasonConfig_Archetypes Archetypes[0x9]; // 0x00(0x90)
};

// ScriptStruct Tiger.TigerSeasonConfig_Archetypes
// Size: 0x10 (Inherited: 0x00)
struct FTigerSeasonConfig_Archetypes {
	struct TArray<struct FTigerSeasonConfig_RewardTier> Rewards; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerSeasonConfig_RewardTier
// Size: 0x10 (Inherited: 0x00)
struct FTigerSeasonConfig_RewardTier {
	struct TArray<struct FTigerItemId> ItemIds; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerItemIdWithPrice
// Size: 0x18 (Inherited: 0x00)
struct FTigerItemIdWithPrice {
	struct FTigerItemId ItemId; // 0x00(0x08)
	struct FTigerItemPrice Price; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerItemPrice
// Size: 0x10 (Inherited: 0x00)
struct FTigerItemPrice {
	int32_t Amount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FTigerItemId SoftCurrencyId; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerLoginQueueToken
// Size: 0x10 (Inherited: 0x00)
struct FTigerLoginQueueToken {
	struct FString Content; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerMetaStoreBuyPayload
// Size: 0x18 (Inherited: 0x00)
struct FTigerMetaStoreBuyPayload {
	struct TArray<struct FTigerMetaStoreBuyPayloadElement> EntriesToBuy; // 0x00(0x10)
	uint32_t TotalCost; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerChallengeCategoryMap
// Size: 0x50 (Inherited: 0x00)
struct FTigerChallengeCategoryMap {
	struct TMap<struct FTigerChallengeTypeID, struct UTigerChallenge*> Challenges; // 0x00(0x50)
};

// ScriptStruct Tiger.TigerDeltaCorrectionData
// Size: 0x40 (Inherited: 0x00)
struct FTigerDeltaCorrectionData {
	char pad_0[0x38]; // 0x00(0x38)
	struct UAnimMontage* CurrentAnimation; // 0x38(0x08)
};

// ScriptStruct Tiger.TigerMeshCollection
// Size: 0x30 (Inherited: 0x00)
struct FTigerMeshCollection {
	struct TSoftObjectPtr<UTigerNPCVisualAsset> VisualAsset; // 0x00(0x28)
	int8_t HeadMeshIndex; // 0x28(0x01)
	int8_t HairMeshIndex; // 0x29(0x01)
	int8_t ColorSetIndex; // 0x2a(0x01)
	int8_t HairColorSetIndex; // 0x2b(0x01)
	int8_t PropAssetIndex; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct Tiger.TigerNpcReactionEvent
// Size: 0x18 (Inherited: 0x00)
struct FTigerNpcReactionEvent {
	float Intensity; // 0x00(0x04)
	enum class ETigerAIMasqueradeState PreState; // 0x04(0x01)
	enum class ETigerAIMasqueradeState PostState; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct FVector EventLocation; // 0x08(0x0c)
	bool bIsVisual; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Tiger.TigerNpcReactionData
// Size: 0x0c (Inherited: 0x00)
struct FTigerNpcReactionData {
	float ReactionExpireTime; // 0x00(0x04)
	float ReactionCompensationAngle; // 0x04(0x04)
	bool bCanMoveDuringReaction; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Tiger.TigerBpFindSessionResultList
// Size: 0x28 (Inherited: 0x00)
struct FTigerBpFindSessionResultList {
	char pad_0[0x18]; // 0x00(0x18)
	struct TArray<struct FString> AlternativeStrings; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerParty
// Size: 0x30 (Inherited: 0x00)
struct FTigerParty {
	struct FTigerPartyId ID; // 0x00(0x10)
	struct TArray<struct FString> PlayerIds; // 0x10(0x10)
	struct FString LeaderPlayerId; // 0x20(0x10)
};

// ScriptStruct Tiger.TigerPartyId
// Size: 0x10 (Inherited: 0x00)
struct FTigerPartyId {
	struct FGuid Guid; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerBpFindSessionSelectedSession
// Size: 0x110 (Inherited: 0x00)
struct FTigerBpFindSessionSelectedSession {
	char pad_0[0x110]; // 0x00(0x110)
};

// ScriptStruct Tiger.TigerRewardsCollection
// Size: 0x28 (Inherited: 0x00)
struct FTigerRewardsCollection {
	struct TArray<struct FTigerRewardWithQuantity> InventoryRewards; // 0x00(0x10)
	int32_t PremiumCurrency; // 0x10(0x04)
	int32_t SeasonExp; // 0x14(0x04)
	int32_t ArchetypeExp; // 0x18(0x04)
	int32_t PlayerExp; // 0x1c(0x04)
	int32_t SeasonPlacementExpBoostPercentage; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Tiger.TigerRewardWithQuantity
// Size: 0x10 (Inherited: 0x00)
struct FTigerRewardWithQuantity {
	struct FTigerItemId ItemId; // 0x00(0x08)
	int32_t Quantity; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerPlayerMatchMetaStats
// Size: 0x48 (Inherited: 0x00)
struct FTigerPlayerMatchMetaStats {
	struct FTigerSeasonSessionExperience SeasonSessionExperienceAccumulated; // 0x00(0x18)
	int32_t SeasonExpBeforeSession; // 0x18(0x04)
	int32_t ArchetypeExpBeforeSession; // 0x1c(0x04)
	int32_t ArchetypeExperienceAccumulated; // 0x20(0x04)
	enum class ETigerPowerKitType ArchetypeType; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	int32_t SoftCurrencyBeforeSession; // 0x28(0x04)
	int32_t SoftCurrencyAccumulated; // 0x2c(0x04)
	struct FTigerItemId SoftCurrencyItemId; // 0x30(0x08)
	int32_t PlayerExpBeforeSession; // 0x38(0x04)
	int32_t PlayerExperienceAccumulated; // 0x3c(0x04)
	int32_t RpBeforeSession; // 0x40(0x04)
	int32_t RpAccumulated; // 0x44(0x04)
};

// ScriptStruct Tiger.TigerSeasonSessionExperience
// Size: 0x18 (Inherited: 0x00)
struct FTigerSeasonSessionExperience {
	struct TArray<int32_t> SeasonExperienceAccumulatedSources; // 0x00(0x10)
	int32_t SeasonExperienceAccumulated; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerPlayerMatchStats
// Size: 0x38 (Inherited: 0x00)
struct FTigerPlayerMatchStats {
	enum class ETigerKillerType KillerType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString KillerName; // 0x08(0x10)
	int32_t PlayerScore; // 0x18(0x04)
	struct FTigerPlayerPostMatchScreenHighlightStat Placement; // 0x1c(0x0c)
	struct TArray<struct FTigerPlayerPostMatchScreenHighlightStat> Stats; // 0x28(0x10)
};

// ScriptStruct Tiger.TigerPlayerPostMatchScreenHighlightStat
// Size: 0x0c (Inherited: 0x00)
struct FTigerPlayerPostMatchScreenHighlightStat {
	int32_t MatchStatValue; // 0x00(0x04)
	float SeasonAverage; // 0x04(0x04)
	enum class ETigerSeasonMatchStatType MatchStatType; // 0x08(0x01)
	bool bIsNewSeasonBest; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct Tiger.TigerPreviewerData
// Size: 0x2d8 (Inherited: 0x00)
struct FTigerPreviewerData {
	struct TSoftClassPtr<UObject> Outfit; // 0x00(0x28)
	int32_t OutfitHoodieIndex; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TSoftClassPtr<UObject> Head; // 0x30(0x28)
	int32_t SkinColorIndex; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TSoftClassPtr<UObject> HairStyle; // 0x60(0x28)
	struct TSoftClassPtr<UObject> HairColor; // 0x88(0x28)
	struct TSoftClassPtr<UObject> Beard; // 0xb0(0x28)
	struct TSoftClassPtr<UObject> BeardColor; // 0xd8(0x28)
	struct TSoftClassPtr<UObject> EyeColor; // 0x100(0x28)
	struct TSoftClassPtr<UObject> Eyebrow; // 0x128(0x28)
	struct TSoftClassPtr<UObject> EyebrowColor; // 0x150(0x28)
	struct TSoftClassPtr<UObject> Tattoo; // 0x178(0x28)
	struct TSoftClassPtr<UObject> FacePaint; // 0x1a0(0x28)
	struct TSoftClassPtr<UObject> Headgear; // 0x1c8(0x28)
	struct TSoftClassPtr<UObject> Eyewear; // 0x1f0(0x28)
	struct TSoftClassPtr<UObject> PiercingSet; // 0x218(0x28)
	struct TSoftClassPtr<UObject> BodyTypeModifier; // 0x240(0x28)
	struct TArray<struct TSoftClassPtr<UObject>> Emotes; // 0x268(0x10)
	struct TSoftClassPtr<UObject> CurrentOutfitConfig; // 0x278(0x28)
	struct TSoftClassPtr<UObject> CombinedItem; // 0x2a0(0x28)
	char pad_2C8[0x10]; // 0x2c8(0x10)
};

// ScriptStruct Tiger.TigerGroupId
// Size: 0x10 (Inherited: 0x00)
struct FTigerGroupId {
	struct FGuid ID; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerGraphicsSettingsPS5
// Size: 0x10 (Inherited: 0x00)
struct FTigerGraphicsSettingsPS5 {
	enum class ETigerGraphicsQualityPS5 QualityPreset; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Gamma; // 0x04(0x04)
	bool bUseMotionBlur; // 0x08(0x01)
	bool bUseChromaticAberration; // 0x09(0x01)
	bool bUseFilmGrain; // 0x0a(0x01)
	bool bEnableVSync; // 0x0b(0x01)
	int32_t SavedVersion; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerGraphicsSettings
// Size: 0x48 (Inherited: 0x00)
struct FTigerGraphicsSettings {
	struct FTigerGraphicsQualityPreset QualityPreset; // 0x00(0x44)
	int32_t SavedVersion; // 0x44(0x04)
};

// ScriptStruct Tiger.TigerGraphicsQualityPreset
// Size: 0x44 (Inherited: 0x00)
struct FTigerGraphicsQualityPreset {
	int32_t ViewDistanceQuality; // 0x00(0x04)
	int32_t MaterialQuality; // 0x04(0x04)
	int32_t TextureQuality; // 0x08(0x04)
	int32_t TextureFilteringQuality; // 0x0c(0x04)
	int32_t VisualEffectQuality; // 0x10(0x04)
	int32_t FoliageQuality; // 0x14(0x04)
	int32_t LightingQuality; // 0x18(0x04)
	int32_t VolumetricFogQuality; // 0x1c(0x04)
	int32_t AmbientOcclusionQuality; // 0x20(0x04)
	int32_t ScreenSpaceReflectionQuality; // 0x24(0x04)
	int32_t ShadowQuality; // 0x28(0x04)
	int32_t AntiAliasingQuality; // 0x2c(0x04)
	int32_t SubSurfaceScatteringQuality; // 0x30(0x04)
	int32_t MotionBlurQuality; // 0x34(0x04)
	int32_t BloomQuality; // 0x38(0x04)
	int32_t LensFlareQuality; // 0x3c(0x04)
	bool bUseChromaticAberration; // 0x40(0x01)
	bool bUseFilmGrain; // 0x41(0x01)
	bool bUseLightShafts; // 0x42(0x01)
	char pad_43[0x1]; // 0x43(0x01)
};

// ScriptStruct Tiger.TigerGameplaySettings
// Size: 0x08 (Inherited: 0x00)
struct FTigerGameplaySettings {
	bool bSwapOutDefaultWeapon; // 0x00(0x01)
	bool bMuteGeneralChat; // 0x01(0x01)
	bool bRotateMinimap; // 0x02(0x01)
	bool bUseCrossplay; // 0x03(0x01)
	int32_t SavedVersion; // 0x04(0x04)
};

// ScriptStruct Tiger.TigerMatchStats
// Size: 0xb8 (Inherited: 0x00)
struct FTigerMatchStats {
	struct FTigerPlayerMatchStats PlayerMatchStats; // 0x00(0x38)
	struct FTigerPlayerMatchMetaStats OwnPlayerStats; // 0x38(0x48)
	struct TArray<struct FTigerProgressedChallengeWrapper> ProgressedChallenges; // 0x80(0x10)
	char InitialGroupCount; // 0x90(0x01)
	enum class ETigerGroupingMode GroupingMode; // 0x91(0x01)
	enum class ETigerMatchMode MatchMode; // 0x92(0x01)
	char pad_93[0x1]; // 0x93(0x01)
	struct FGuid MatchID; // 0x94(0x10)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FString MatchReporterId; // 0xa8(0x10)
};

// ScriptStruct Tiger.TigerProgressedChallengeWrapper
// Size: 0x90 (Inherited: 0x00)
struct FTigerProgressedChallengeWrapper {
	struct FText ChallengeName; // 0x00(0x18)
	struct FText ChallengeVariableName; // 0x18(0x18)
	struct FText ChallengeDescription; // 0x30(0x18)
	struct FString ChallengeTypeName; // 0x48(0x10)
	int32_t TargetValue; // 0x58(0x04)
	int32_t PostSessionProgress; // 0x5c(0x04)
	int32_t PreSessionProgress; // 0x60(0x04)
	enum class ETigerChallengeCategory ChallengeType; // 0x64(0x01)
	bool bHasTiers; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
	int32_t Tier; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<int32_t> TieredTargetValues; // 0x70(0x10)
	struct FTigerChallengeTypeID ChallengeTypeID; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct UTigerInventoryItemBase* ChallengeReward; // 0x88(0x08)
};

// ScriptStruct Tiger.TigerGroupInvitation
// Size: 0x10 (Inherited: 0x00)
struct FTigerGroupInvitation {
	struct FTigerGroupId GroupID; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerCharacterServerHit
// Size: 0x38 (Inherited: 0x00)
struct FTigerCharacterServerHit {
	struct ATigerCharacter* TigerChar; // 0x00(0x08)
	struct FVector_NetQuantize VictimLocation; // 0x08(0x0c)
	char BoneIndexHit; // 0x14(0x01)
	struct FSharkInt8Vector ImpactOffset; // 0x15(0x03)
	struct FVector_NetQuantizeNormal SwingDirection; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct UAnimMontage* KnockbackMontage; // 0x28(0x08)
	bool bAbortAttack; // 0x30(0x01)
	char CompressedActorYaw; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct Tiger.TigerMeleeAttackNetData
// Size: 0x20 (Inherited: 0x00)
struct FTigerMeleeAttackNetData {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Tiger.TigerCharacterClientHit
// Size: 0x28 (Inherited: 0x00)
struct FTigerCharacterClientHit {
	struct ATigerCharacter* TigerChar; // 0x00(0x08)
	struct FVector_NetQuantize VictimLocation; // 0x08(0x0c)
	char BoneIndexHit; // 0x14(0x01)
	struct FSharkInt8Vector ImpactOffset; // 0x15(0x03)
	struct FVector_NetQuantizeNormal SwingDirection; // 0x18(0x0c)
	char WeaponIndex; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Tiger.TigerMeleeWeaponAttackIdentifier
// Size: 0x02 (Inherited: 0x00)
struct FTigerMeleeWeaponAttackIdentifier {
	enum class ETigerWeaponMeleeAttackType AttackType; // 0x00(0x01)
	char AttackIndex; // 0x01(0x01)
};

// ScriptStruct Tiger.TigerNetworkedDebugShape
// Size: 0x40 (Inherited: 0x00)
struct FTigerNetworkedDebugShape {
	struct FColor Color; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct FVector ShapeSpecificData; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FQuat Rotation; // 0x20(0x10)
	float Thickness; // 0x30(0x04)
	float LifeTime; // 0x34(0x04)
	char Shape; // 0x38(0x01)
	char DepthPriority; // 0x39(0x01)
	bool bPersistentLines; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
};

// ScriptStruct Tiger.TigerDamageContext
// Size: 0x18 (Inherited: 0x00)
struct FTigerDamageContext {
	char pad_0[0x8]; // 0x00(0x08)
	struct UObject* DamagingUObject; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerOnlineErrorCode
// Size: 0x0c (Inherited: 0x00)
struct FTigerOnlineErrorCode {
	enum class ETigerOnlineErrorCategory Category; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ID; // 0x04(0x04)
	int32_t ErrorPriority; // 0x08(0x04)
};

// ScriptStruct Tiger.TigerClientSpawnLocationInfo
// Size: 0x18 (Inherited: 0x00)
struct FTigerClientSpawnLocationInfo {
	struct ATigerPlayerState* PlayerState; // 0x00(0x08)
	struct FVector2D DesiredSpawnLocation; // 0x08(0x08)
	float Orientation; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerAIPlayerAction
// Size: 0x58 (Inherited: 0x00)
struct FTigerAIPlayerAction {
	char pad_0[0x4]; // 0x00(0x04)
	enum class ETigerAIPlayerAction Action; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct ATigerCharacter* AffectedTarget; // 0x08(0x08)
	struct FVector Location; // 0x10(0x0c)
	bool bUseCustomLocation; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float HearingRangeSquared; // 0x20(0x04)
	float VisionRangeSquared; // 0x24(0x04)
	float MustReactRangeSquared; // 0x28(0x04)
	float FearMultiplier; // 0x2c(0x04)
	float MasqueradeMultiplier; // 0x30(0x04)
	bool bProcessOnlyByAffectedTarget; // 0x34(0x01)
	bool bMustBeProcessedByAffectedTarget; // 0x35(0x01)
	bool bDontProcessForAffectedTarget; // 0x36(0x01)
	bool bIgnoreInvisibility; // 0x37(0x01)
	bool bShouldDistanceScaleFearValue; // 0x38(0x01)
	bool bShouldDistanceScaleMasqueradePoints; // 0x39(0x01)
	char pad_3A[0x1e]; // 0x3a(0x1e)
};

// ScriptStruct Tiger.TigerRangedHitInfo
// Size: 0x20 (Inherited: 0x00)
struct FTigerRangedHitInfo {
	struct FVector_NetQuantize100 End; // 0x00(0x0c)
	enum class EBodyPart BodyPart; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct ATigerCharacter* HitCharacter; // 0x10(0x08)
	int32_t ProjectileId; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Tiger.TigerFireProjectileData
// Size: 0x14 (Inherited: 0x00)
struct FTigerFireProjectileData {
	struct FVector_NetQuantize100 ProjectileSpawnLocation; // 0x00(0x0c)
	float ShootDirPitch; // 0x0c(0x04)
	float ShootDirYaw; // 0x10(0x04)
};

// ScriptStruct Tiger.TigerFireProjectileDataInterpolated
// Size: 0x18 (Inherited: 0x14)
struct FTigerFireProjectileDataInterpolated : FTigerFireProjectileData {
	float LocationAlpha; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerPerformanceStates
// Size: 0x7c (Inherited: 0x00)
struct FTigerPerformanceStates {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FTigerPerformanceStateLatchData ServerPerformance; // 0x04(0x10)
	struct FTigerPerformanceStateLatchData FramesPerSecond; // 0x14(0x10)
	struct FTigerPerformanceStateLatchData PacketLoss; // 0x24(0x10)
	struct FTigerPerformanceStateLatchData Latency; // 0x34(0x10)
	struct FTigerPerformanceStateLatchData LatencyVariation; // 0x44(0x10)
	struct FTigerPerformanceStateLatchData RefreshRate; // 0x54(0x10)
	struct FTigerPerformanceStateLatchData PsoCompilation; // 0x64(0x10)
	char pad_74[0x8]; // 0x74(0x08)
};

// ScriptStruct Tiger.TigerPerformanceStateLatchData
// Size: 0x10 (Inherited: 0x00)
struct FTigerPerformanceStateLatchData {
	enum class FTigerPerformanceState State; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Value; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerReadyToPlayState
// Size: 0x0c (Inherited: 0x00)
struct FTigerReadyToPlayState {
	struct TWeakObjectPtr<struct ATigerPlayerController> PlayerController; // 0x00(0x08)
	bool bIsReadyToPlay; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Tiger.TigerBuffReplicatedInstanceData
// Size: 0x20 (Inherited: 0x00)
struct FTigerBuffReplicatedInstanceData {
	struct UTigerBuff* BuffType; // 0x00(0x08)
	int32_t BuffID; // 0x08(0x04)
	float TimeLeft; // 0x0c(0x04)
	float BuffStrength; // 0x10(0x04)
	struct TWeakObjectPtr<struct ATigerCharacter> BuffCaster; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Tiger.TigerCharacterCustomizationParameters
// Size: 0x38 (Inherited: 0x00)
struct FTigerCharacterCustomizationParameters {
	struct TArray<struct FTigerCharacterCustomizationScalarParameter> Scalars; // 0x00(0x10)
	struct TArray<struct FTigerCharacterCustomizationColorParameter> Colors; // 0x10(0x10)
	struct TArray<struct FTigerCharacterCustomizationTextureParameter> Textures; // 0x20(0x10)
	struct FName MaterialSlotName; // 0x30(0x08)
};

// ScriptStruct Tiger.TigerCharacterCustomizationTextureParameter
// Size: 0x18 (Inherited: 0x00)
struct FTigerCharacterCustomizationTextureParameter {
	enum class ETigerCharacterDynamicMeshType DynamicMeshType; // 0x00(0x01)
	enum class ETigerCharacterMeshPart Part; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FName Name; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UTexture* Texture; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerCharacterCustomizationColorParameter
// Size: 0x1c (Inherited: 0x00)
struct FTigerCharacterCustomizationColorParameter {
	enum class ETigerCharacterDynamicMeshType DynamicMeshType; // 0x00(0x01)
	enum class ETigerCharacterMeshPart Part; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FName Name; // 0x04(0x08)
	struct FLinearColor Color; // 0x0c(0x10)
};

// ScriptStruct Tiger.TigerCharacterCustomizationScalarParameter
// Size: 0x10 (Inherited: 0x00)
struct FTigerCharacterCustomizationScalarParameter {
	enum class ETigerCharacterDynamicMeshType DynamicMeshType; // 0x00(0x01)
	enum class ETigerCharacterMeshPart Part; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FName Name; // 0x04(0x08)
	float Value; // 0x0c(0x04)
};

// ScriptStruct Tiger.TutorialTrainerReviveData
// Size: 0x18 (Inherited: 0x00)
struct FTutorialTrainerReviveData {
	bool bIsGettingRevived; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ReviveTimeInSeconds; // 0x04(0x04)
	float CurrentReviveTime; // 0x08(0x04)
	float RotationSpeed; // 0x0c(0x04)
	struct TWeakObjectPtr<struct ATigerPlayer> CurrentRevivingPlayer; // 0x10(0x08)
};

// ScriptStruct Tiger.TutorialTrainerDiablerizeData
// Size: 0x20 (Inherited: 0x00)
struct FTutorialTrainerDiablerizeData {
	char pad_0[0x8]; // 0x00(0x08)
	float DiablerizeTimeLeft; // 0x08(0x04)
	float TimeToGetInPositionforDiablerize; // 0x0c(0x04)
	bool bIsGettingDiablerized; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct TWeakObjectPtr<struct ATigerCharacter> DiablerizingCharacter; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Tiger.TigerClientCategoryDefinition
// Size: 0x18 (Inherited: 0x00)
struct FTigerClientCategoryDefinition {
	enum class ETigerPersistentStoreCategory Category; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FTigerClientItemDefinition> AvailableItems; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerClientItemDefinition
// Size: 0x18 (Inherited: 0x00)
struct FTigerClientItemDefinition {
	struct FTigerItemId ItemId; // 0x00(0x08)
	int32_t Cost; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FTigerItemId SoftCurrencyId; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerRespawnFeatureSettings
// Size: 0xe8 (Inherited: 0x00)
struct FTigerRespawnFeatureSettings {
	int32_t InfiniteLifeTokensThreshold; // 0x00(0x04)
	int32_t MaxLifeTokens; // 0x04(0x04)
	int32_t InitialLifeTokens; // 0x08(0x04)
	int32_t DisableRespawnAtWaveNumber; // 0x0c(0x04)
	int32_t NumSpawnPointsToEvaluate; // 0x10(0x04)
	float MinSpawnDistanceToRedGasBorder; // 0x14(0x04)
	struct TMap<enum class ETigerRespawnPointScoringType, struct FTigerRespawnPointScoringSettings> RespawnPointScoringSettings; // 0x18(0x50)
	float RespawnTime; // 0x68(0x04)
	float GhostModeDuration; // 0x6c(0x04)
	float RespawnHealthRatio; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TSoftClassPtr<UObject> GhostBuffClass; // 0x78(0x28)
	bool bDropWeapons; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct TArray<struct UTigerItemAsset*> DroppedItemBlacklist; // 0xa8(0x10)
	struct TArray<enum class ETigerPlayerEvent> PlayerEventsThatIncreasesLives; // 0xb8(0x10)
	struct TArray<struct FTigerItemData> ItemDroppedOnDeath; // 0xc8(0x10)
	struct TArray<struct FTigerItemData> ItemsAddedOnRespawn; // 0xd8(0x10)
};

// ScriptStruct Tiger.TigerRespawnPointScoringSettings
// Size: 0x08 (Inherited: 0x00)
struct FTigerRespawnPointScoringSettings {
	float EffectiveDistance; // 0x00(0x04)
	float Weight; // 0x04(0x04)
};

// ScriptStruct Tiger.TigerGameModeFeatureWidget
// Size: 0x30 (Inherited: 0x00)
struct FTigerGameModeFeatureWidget {
	struct TSoftClassPtr<UObject> SoftWidgetClass; // 0x00(0x28)
	int32_t ZOrder; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Tiger.TigerOtherGroupMembersData
// Size: 0x20 (Inherited: 0x00)
struct FTigerOtherGroupMembersData {
	struct TArray<struct TWeakObjectPtr<struct ATigerPlayerState>> OtherGroupMembers; // 0x00(0x10)
	struct TArray<bool> OtherGroupMembersSilencedMeStatus; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerRevealedWave
// Size: 0x28 (Inherited: 0x00)
struct FTigerRevealedWave {
	struct ATigerHaven* RevealedHaven; // 0x00(0x08)
	int32_t Index; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FTigerWaveVertexIndexedPosition> Positions; // 0x10(0x10)
	int32_t TotalVerts; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Tiger.TigerWaveVertexIndexedPosition
// Size: 0x0c (Inherited: 0x00)
struct FTigerWaveVertexIndexedPosition {
	int32_t VertexIndex; // 0x00(0x04)
	struct FVector2D FinalPosition; // 0x04(0x08)
};

// ScriptStruct Tiger.TigerHolyIncenseSettings
// Size: 0x08 (Inherited: 0x00)
struct FTigerHolyIncenseSettings {
	enum class EMatchBalanceMode BalanceMode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float TimeScale; // 0x04(0x04)
};

// ScriptStruct Tiger.TigerWaveData
// Size: 0x88 (Inherited: 0x00)
struct FTigerWaveData {
	char pad_0[0x58]; // 0x00(0x58)
	struct FTigerRevealedWave RevealData; // 0x58(0x28)
	char pad_80[0x8]; // 0x80(0x08)
};

// ScriptStruct Tiger.TigerGrimoireUnlock
// Size: 0x10 (Inherited: 0x00)
struct FTigerGrimoireUnlock {
	enum class ETigerGrimoireUnlockType UnlockType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UTigerGrimoireEntry* Entry; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerPlayerPresenceInfo
// Size: 0x28 (Inherited: 0x00)
struct FTigerPlayerPresenceInfo {
	struct FString PlayerId; // 0x00(0x10)
	struct FString PlayerLocation; // 0x10(0x10)
	bool bIsOnline; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Tiger.TigerInviteId
// Size: 0x10 (Inherited: 0x00)
struct FTigerInviteId {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerStreamingPlayer
// Size: 0x38 (Inherited: 0x00)
struct FTigerStreamingPlayer {
	struct APlayerController* PlayerController; // 0x00(0x08)
	char pad_8[0x30]; // 0x08(0x30)
};

// ScriptStruct Tiger.TigerRecentlyStreamedCellEntries
// Size: 0x10 (Inherited: 0x00)
struct FTigerRecentlyStreamedCellEntries {
	struct UTigerWorldCompositionCellComponent* Cell; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerGenderClanKey
// Size: 0x02 (Inherited: 0x00)
struct FTigerGenderClanKey {
	enum class ETigerGender Gender; // 0x00(0x01)
	enum class ETigerClan Clan; // 0x01(0x01)
};

// ScriptStruct Tiger.TigerItemDatabaseCategory
// Size: 0x10 (Inherited: 0x00)
struct FTigerItemDatabaseCategory {
	struct TArray<struct FTigerItemDatabaseCategoryEntry> Items; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerItemDatabaseCategoryEntry
// Size: 0x30 (Inherited: 0x00)
struct FTigerItemDatabaseCategoryEntry {
	uint64_t ItemId; // 0x00(0x08)
	struct TSoftClassPtr<UObject> ItemPath; // 0x08(0x28)
};

// ScriptStruct Tiger.TigerConsequenceData
// Size: 0x20 (Inherited: 0x00)
struct FTigerConsequenceData {
	struct UTigerMasqueradeConsequence* ConsequenceClass; // 0x00(0x08)
	struct FTigerConsequenceUpdateData UpdateData; // 0x08(0x14)
	enum class ETigerAIPlayerAction PlayerAction; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Tiger.TigerConsequenceUpdateData
// Size: 0x14 (Inherited: 0x00)
struct FTigerConsequenceUpdateData {
	int32_t ConsequenceId; // 0x00(0x04)
	float ExpectedTimeLeft; // 0x04(0x04)
	struct FVector_NetQuantize VectorData; // 0x08(0x0c)
};

// ScriptStruct Tiger.TigerRecapData
// Size: 0xf0 (Inherited: 0x00)
struct FTigerRecapData {
	enum class ETigerPlayerLifeStatus CurrentLifeStatus; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FTigerRecapDamage> IncomingDamage; // 0x08(0x10)
	struct TArray<struct FTigerRecapDamage> OutgoingDamage; // 0x18(0x10)
	struct TArray<struct FTigerRecapHealing> IncomingHealing; // 0x28(0x10)
	struct TArray<struct FTigerRecapHealing> OutgoingHealing; // 0x38(0x10)
	struct TArray<struct FTigerRecapDown> IncomingDowned; // 0x48(0x10)
	struct TArray<struct FTigerRecapDown> OutgoingDowned; // 0x58(0x10)
	struct TArray<struct FTigerRecapRevive> IncomingRevives; // 0x68(0x10)
	struct TArray<struct FTigerRecapRevive> OutgoingRevives; // 0x78(0x10)
	struct TArray<struct FTigerRecapRespawn> IncomingRespawns; // 0x88(0x10)
	struct TArray<struct FTigerRecapRespawn> OutgoingRespawns; // 0x98(0x10)
	struct TArray<struct FTigerRecapDeath> Deaths; // 0xa8(0x10)
	struct TArray<struct FTigerRecapKill> Kills; // 0xb8(0x10)
	struct TArray<struct FTigerRecapElimination> Eliminations; // 0xc8(0x10)
	struct TArray<struct FTigerRecapAssist> Assists; // 0xd8(0x10)
	int32_t NumberOfSpectators; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
};

// ScriptStruct Tiger.TigerRecapAssist
// Size: 0x10 (Inherited: 0x00)
struct FTigerRecapAssist {
	struct FTigerRecapUser User; // 0x00(0x0c)
	struct FTigerRecapTime Time; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerRecapTime
// Size: 0x04 (Inherited: 0x00)
struct FTigerRecapTime {
	float Seconds; // 0x00(0x04)
};

// ScriptStruct Tiger.TigerRecapUser
// Size: 0x0c (Inherited: 0x00)
struct FTigerRecapUser {
	enum class ETigerDamageCauser Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t PlayerStateId; // 0x04(0x04)
	char LastKnownHealth; // 0x08(0x01)
	char LastKnownArmor; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct Tiger.TigerRecapElimination
// Size: 0x10 (Inherited: 0x00)
struct FTigerRecapElimination {
	struct FTigerRecapUser User; // 0x00(0x0c)
	struct FTigerRecapTime Time; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerRecapKill
// Size: 0x14 (Inherited: 0x00)
struct FTigerRecapKill {
	struct FTigerRecapUser User; // 0x00(0x0c)
	struct FTigerRecapTime Time; // 0x0c(0x04)
	bool bDiablerize; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Tiger.TigerRecapDeath
// Size: 0x20 (Inherited: 0x00)
struct FTigerRecapDeath {
	struct FTigerRecapUser Instigator; // 0x00(0x0c)
	struct FTigerRecapUser Credited; // 0x0c(0x0c)
	bool bWasDiablerized; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FTigerRecapTime Time; // 0x1c(0x04)
};

// ScriptStruct Tiger.TigerRecapRespawn
// Size: 0x10 (Inherited: 0x00)
struct FTigerRecapRespawn {
	struct FTigerRecapUser User; // 0x00(0x0c)
	struct FTigerRecapTime Time; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerRecapRevive
// Size: 0x10 (Inherited: 0x00)
struct FTigerRecapRevive {
	struct FTigerRecapUser User; // 0x00(0x0c)
	struct FTigerRecapTime Time; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerRecapDown
// Size: 0x10 (Inherited: 0x00)
struct FTigerRecapDown {
	struct FTigerRecapUser User; // 0x00(0x0c)
	struct FTigerRecapTime Time; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerRecapHealing
// Size: 0x18 (Inherited: 0x00)
struct FTigerRecapHealing {
	struct FTigerRecapUser User; // 0x00(0x0c)
	char Amount; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FTigerRecapTime StartTime; // 0x10(0x04)
	struct FTigerRecapTime EndTime; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerRecapDamage
// Size: 0x30 (Inherited: 0x00)
struct FTigerRecapDamage {
	struct FTigerRecapUser User; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FTigerRecapWeapon> Weapons; // 0x10(0x10)
	int32_t TotalDamage; // 0x20(0x04)
	struct FTigerRecapTime FirstHitTime; // 0x24(0x04)
	struct FTigerRecapTime LatestHitTime; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Tiger.TigerRecapWeapon
// Size: 0x20 (Inherited: 0x00)
struct FTigerRecapWeapon {
	struct TArray<struct FTigerRecapHit> Hits; // 0x00(0x10)
	int32_t TotalDamage; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UTigerWeapon* Weapon; // 0x18(0x08)
};

// ScriptStruct Tiger.TigerRecapHit
// Size: 0x08 (Inherited: 0x00)
struct FTigerRecapHit {
	struct FTigerRecapTime Time; // 0x00(0x04)
	char Damage; // 0x04(0x01)
	bool bCritical; // 0x05(0x01)
	enum class ETigerPlayerLifeStatus LifeStatus; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
};

// ScriptStruct Tiger.TigerUniquePingId
// Size: 0x04 (Inherited: 0x00)
struct FTigerUniquePingId {
	uint32_t Value; // 0x00(0x04)
};

// ScriptStruct Tiger.TigerPingNotificationNetData
// Size: 0x18 (Inherited: 0x00)
struct FTigerPingNotificationNetData {
	struct UTigerPingBase* PingClass; // 0x00(0x08)
	struct FTigerPingContext Context; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerPingContext
// Size: 0x10 (Inherited: 0x00)
struct FTigerPingContext {
	struct UDataAsset* Asset; // 0x00(0x08)
	int32_t Argument; // 0x08(0x04)
	char TelemetryTypeId; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Tiger.TigerPingResponse
// Size: 0x02 (Inherited: 0x00)
struct FTigerPingResponse {
	char PlayerGroupIndex; // 0x00(0x01)
	bool bIsInterested; // 0x01(0x01)
};

// ScriptStruct Tiger.TigerPingWorldNetData
// Size: 0x28 (Inherited: 0x18)
struct FTigerPingWorldNetData : FTigerPingNotificationNetData {
	struct FVector WorldLocation; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Tiger.PointOfInterest
// Size: 0xa0 (Inherited: 0x00)
struct FPointOfInterest {
	struct FText Name; // 0x00(0x18)
	struct UTexture2D* Image; // 0x18(0x08)
	struct FVector2D MapPosition; // 0x20(0x08)
	struct FText TooltipTitle; // 0x28(0x18)
	struct FLinearColor TooltipTitleColor; // 0x40(0x10)
	struct FText TooltipDescription; // 0x50(0x18)
	enum class ETigerItemRarity LootRarity; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct UTigerPingBase* PingType; // 0x70(0x08)
	struct TSoftClassPtr<UObject> HighTierLootGroup; // 0x78(0x28)
};

// ScriptStruct Tiger.TigerPingWrapper
// Size: 0x20 (Inherited: 0x00)
struct FTigerPingWrapper {
	struct UTigerPingClientData* ClientData; // 0x00(0x08)
	struct UTigerPingWorldInstanceUI* InnerWidget; // 0x08(0x08)
	struct UTigerPingMarkerProxy* MapMarkerProxy; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct Tiger.TigerDisableHSenseTarget
// Size: 0x28 (Inherited: 0x00)
struct FTigerDisableHSenseTarget {
	struct TSoftClassPtr<UObject> Actor; // 0x00(0x28)
};

// ScriptStruct Tiger.TigerNPCMasqueradeStateMessage
// Size: 0x10 (Inherited: 0x00)
struct FTigerNPCMasqueradeStateMessage {
	struct ATigerNPC* NPC; // 0x00(0x08)
	enum class ETigerAIMasqueradeState MasqueradeState; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Tiger.TigerTooltipAction
// Size: 0x48 (Inherited: 0x00)
struct FTigerTooltipAction {
	struct FText ActionText; // 0x00(0x18)
	struct FName InputAction; // 0x18(0x08)
	bool bIsHoldAction; // 0x20(0x01)
	bool bListenForOnPreviewKeyDown; // 0x21(0x01)
	bool bShouldConsumeInput; // 0x22(0x01)
	enum class EHorizontalAlignment HAlign; // 0x23(0x01)
	struct FDelegate OnPressed; // 0x24(0x10)
	struct FDelegate OnReleased; // 0x34(0x10)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Tiger.AutoInitializedWidget
// Size: 0x20 (Inherited: 0x00)
struct FAutoInitializedWidget {
	struct UUserWidget* WidgetClass; // 0x00(0x08)
	struct FString AssignToPropertyName; // 0x08(0x10)
	bool bAddToViewportOnPlayerSpawn; // 0x18(0x01)
	bool bAddToOnScreenWidgets; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	int32_t ZOrder; // 0x1c(0x04)
};

// ScriptStruct Tiger.StatChangeDescription
// Size: 0x28 (Inherited: 0x00)
struct FStatChangeDescription {
	struct FText StatName; // 0x00(0x18)
	struct FString StatChange; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerTelemetryIDBundle
// Size: 0x10 (Inherited: 0x00)
struct FTigerTelemetryIDBundle {
	struct UObject* FoundObject; // 0x00(0x08)
	uint64_t PersistentID; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerTelemetryDefinition
// Size: 0x78 (Inherited: 0x00)
struct FTigerTelemetryDefinition {
	struct FString EnumName; // 0x00(0x10)
	struct FString VariableType; // 0x10(0x10)
	int32_t ActualDataSize; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TMap<struct FString, int32_t> KeyValuePairs; // 0x28(0x50)
};

// ScriptStruct Tiger.TigerTelemetryIDExportFilter
// Size: 0x08 (Inherited: 0x00)
struct FTigerTelemetryIDExportFilter {
	struct UObject* FilterClass; // 0x00(0x08)
};

// ScriptStruct Tiger.TigerTelemetryIDCollisionBundle
// Size: 0x10 (Inherited: 0x00)
struct FTigerTelemetryIDCollisionBundle {
	struct UObject* CollidingObject1; // 0x00(0x08)
	struct UObject* CollidingObject2; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerChatMessage
// Size: 0x58 (Inherited: 0x00)
struct FTigerChatMessage {
	struct FText PlayerName; // 0x00(0x18)
	struct FText Message; // 0x18(0x18)
	struct FSharkUserId SharkUserId; // 0x30(0x10)
	struct FTigerPersistentPlayerID PlayerId; // 0x40(0x10)
	enum class EShAccountChannel PlayerChannel; // 0x50(0x01)
	enum class ETigerChatMessageCategory MessageCategory; // 0x51(0x01)
	char GroupPlayerId; // 0x52(0x01)
	char pad_53[0x5]; // 0x53(0x05)
};

// ScriptStruct Tiger.TigerPropAttachmentInfo
// Size: 0x60 (Inherited: 0x00)
struct FTigerPropAttachmentInfo {
	struct FName AttachIdentifier; // 0x00(0x08)
	struct UStreamableRenderAsset* Prop; // 0x08(0x08)
	struct FName SocketName; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform Transform; // 0x20(0x30)
	struct UMeshComponent* PropCompClass; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct Tiger.TigerGameModeDescriptor
// Size: 0x78 (Inherited: 0x00)
struct FTigerGameModeDescriptor {
	struct FString ID; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct FString Body; // 0x20(0x10)
	struct FString TileUrl; // 0x30(0x10)
	enum class ETigerGroupingMode GroupMode; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FDateTime ActiveStart; // 0x48(0x08)
	struct FDateTime ActiveEnd; // 0x50(0x08)
	int32_t MinPlayersInMatch; // 0x58(0x04)
	int32_t MaxPlayersInMatch; // 0x5c(0x04)
	int64_t PlayerLevelMin; // 0x60(0x08)
	int64_t PlayerLevelMax; // 0x68(0x08)
	int32_t GroupSize; // 0x70(0x04)
	enum class ETigerMatchMode MatchMode; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// ScriptStruct Tiger.TigerCharacterCustomizationItem
// Size: 0x30 (Inherited: 0x00)
struct FTigerCharacterCustomizationItem {
	char pad_0[0x8]; // 0x00(0x08)
	struct TSoftClassPtr<UObject> ItemClassPath; // 0x08(0x28)
};

// ScriptStruct Tiger.TigerCharacterCustomizationOutfitData
// Size: 0x30 (Inherited: 0x30)
struct FTigerCharacterCustomizationOutfitData : FTigerCharacterCustomizationItem {
};

// ScriptStruct Tiger.PerfTimerHandle
// Size: 0x08 (Inherited: 0x00)
struct FPerfTimerHandle {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Tiger.TigerRangedRandomState
// Size: 0x08 (Inherited: 0x00)
struct FTigerRangedRandomState {
	uint64_t RandomState; // 0x00(0x08)
};

// ScriptStruct Tiger.TigerFireSettings
// Size: 0xd8 (Inherited: 0x00)
struct FTigerFireSettings {
	float BulletDamage; // 0x00(0x04)
	enum class ETigerWeaponFireMode FireMode; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32_t BurstCount; // 0x08(0x04)
	float ShotsFiredPerSecondInBurst; // 0x0c(0x04)
	int32_t BulletsFiredSimultaneously; // 0x10(0x04)
	float ShotsFiredPerSecond; // 0x14(0x04)
	struct ATigerAreaEffect* AreaEffect; // 0x18(0x08)
	float FireStickyTime; // 0x20(0x04)
	float VerticalRecoilAmount; // 0x24(0x04)
	float HorizontalRecoilAmount; // 0x28(0x04)
	float StartingSpread; // 0x2c(0x04)
	struct FTigerSpreadModifier SpreadModifiers[0x7]; // 0x30(0x54)
	float TimeUntilSpreadDecreases; // 0x84(0x04)
	float BaseMovementSpeedMultiplier; // 0x88(0x04)
	float AimingMovementSpeedMultiplier; // 0x8c(0x04)
	float HipFireMovementSpeedMultiplier; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct UCurveFloat* SpreadIncreaseCurve; // 0x98(0x08)
	struct UCurveFloat* SpreadDecreaseCurve; // 0xa0(0x08)
	struct UCurveFloat* FireRateIncreaseCurve; // 0xa8(0x08)
	struct UCurveFloat* FireRateDecreaseCurve; // 0xb0(0x08)
	float MasqueradeNoiseEventRadius; // 0xb8(0x04)
	bool ReverseSpreadChange; // 0xbc(0x01)
	bool bPierceCivilians; // 0xbd(0x01)
	bool bUsesScope; // 0xbe(0x01)
	char pad_BF[0x1]; // 0xbf(0x01)
	int32_t ResistanceStart; // 0xc0(0x04)
	int32_t ResistanceEnd; // 0xc4(0x04)
	int32_t ResistanceStrength; // 0xc8(0x04)
	int32_t TriggerVibrationFeedbackStrength; // 0xcc(0x04)
	int32_t ADSResistanceStart; // 0xd0(0x04)
	int32_t ADSResistanceStrength; // 0xd4(0x04)
};

// ScriptStruct Tiger.TigerSpreadModifier
// Size: 0x0c (Inherited: 0x00)
struct FTigerSpreadModifier {
	enum class ETigerSpreadIncreaseMode Mode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Speed; // 0x04(0x04)
	float Amount; // 0x08(0x04)
};

// ScriptStruct Tiger.StreamingBenchmarkConfig
// Size: 0x01 (Inherited: 0x00)
struct FStreamingBenchmarkConfig {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Tiger.TigerResponseEnvelope
// Size: 0x18 (Inherited: 0x00)
struct FTigerResponseEnvelope {
	bool OK; // 0x00(0x01)
	bool Retryable; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FString Error; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerResponse_AdminMessagesConfigs
// Size: 0x28 (Inherited: 0x18)
struct FTigerResponse_AdminMessagesConfigs : FTigerResponseEnvelope {
	struct FString MessagesJson; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerAdminMessagesConfig
// Size: 0x10 (Inherited: 0x00)
struct FTigerAdminMessagesConfig {
	struct FString MessagesJson; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerAIMoveToLocationData
// Size: 0x18 (Inherited: 0x00)
struct FTigerAIMoveToLocationData {
	struct FVector Location; // 0x00(0x0c)
	float AcceptanceRadius; // 0x0c(0x04)
	float Yaw; // 0x10(0x04)
	bool bSetRotation; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Tiger.TigerCommandQueue
// Size: 0x10 (Inherited: 0x00)
struct FTigerCommandQueue {
	struct TArray<struct UTigerAICommandBase*> Commands; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerContextualAnimationWrapper
// Size: 0x0c (Inherited: 0x00)
struct FTigerContextualAnimationWrapper {
	struct FName AnimationName; // 0x00(0x08)
	float Chance; // 0x08(0x04)
};

// ScriptStruct Tiger.TigerAiMovementTicketGroup
// Size: 0x58 (Inherited: 0x00)
struct FTigerAiMovementTicketGroup {
	char pad_0[0x58]; // 0x00(0x58)
};

// ScriptStruct Tiger.TigerAiMovementBudget
// Size: 0x18 (Inherited: 0x00)
struct FTigerAiMovementBudget {
	int32_t NpcMoveBudget[0x3]; // 0x00(0x0c)
	float MinAllotedMoveTime; // 0x0c(0x04)
	float MaxAllotedMoveTime; // 0x10(0x04)
	bool bRestrictMovementTimePerTicket; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Tiger.TigerPatrollingHelicopterEventTicket
// Size: 0x20 (Inherited: 0x00)
struct FTigerPatrollingHelicopterEventTicket {
	struct TWeakObjectPtr<struct ATigerPlayer> BloodHuntTarget; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct Tiger.TigerMasqueradeState
// Size: 0x2c (Inherited: 0x00)
struct FTigerMasqueradeState {
	char pad_0[0x4]; // 0x00(0x04)
	struct TWeakObjectPtr<struct ATigerBaseNPC> NPC; // 0x04(0x08)
	struct TWeakObjectPtr<struct ATigerPlayer> TigerPlayer; // 0x0c(0x08)
	char pad_14[0x18]; // 0x14(0x18)
};

// ScriptStruct Tiger.TigerInvestigationTicket
// Size: 0x28 (Inherited: 0x00)
struct FTigerInvestigationTicket {
	struct TArray<struct TWeakObjectPtr<struct ATigerNPC>> WaitList; // 0x00(0x10)
	struct TWeakObjectPtr<struct ATigerNPC> CurrentInvestigator; // 0x10(0x08)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerPlayerActionProcessData
// Size: 0x70 (Inherited: 0x00)
struct FTigerPlayerActionProcessData {
	struct ATigerPlayer* TigerPlayer; // 0x00(0x08)
	struct ATigerBaseNPC* NPC; // 0x08(0x08)
	char pad_10[0x60]; // 0x10(0x60)
};

// ScriptStruct Tiger.TigerSightedPlayerData
// Size: 0x1c (Inherited: 0x00)
struct FTigerSightedPlayerData {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct Tiger.TigerAiGroupCapSlot
// Size: 0x50 (Inherited: 0x00)
struct FTigerAiGroupCapSlot {
	struct FVector Location; // 0x00(0x0c)
	float Yaw; // 0x0c(0x04)
	struct UTigerNPCAsset* NpcAssetToSpawn; // 0x10(0x08)
	struct TArray<enum class ETigerNPCType> RestrictedNpcTypesForSlot; // 0x18(0x10)
	struct TArray<struct FTigerAIGroupCapCommandWrapper> SlotCommands; // 0x28(0x10)
	bool bLoopCommands; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct ATigerNPC* OccupyingNPC; // 0x40(0x08)
	int32_t CommandIndex; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Tiger.TigerAIGroupCapCommandWrapper
// Size: 0x18 (Inherited: 0x00)
struct FTigerAIGroupCapCommandWrapper {
	struct FTigerAIGroupCapCondition Condition; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UTigerAICommandBase* Command; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerAIGroupCapCondition
// Size: 0x0c (Inherited: 0x00)
struct FTigerAIGroupCapCondition {
	int32_t Slot; // 0x00(0x04)
	int32_t CommandIndex; // 0x04(0x04)
	enum class ETigerAiConditionCheckTiming ConditionCheckTiming; // 0x08(0x01)
	enum class ETigerAiFailedCAPConditionAction FailedConditionAction; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct Tiger.TigerAimAssistEvaluationData
// Size: 0xa0 (Inherited: 0x00)
struct FTigerAimAssistEvaluationData {
	struct FTigerAimAssistState PreviousState; // 0x00(0x68)
	struct ATigerPlayer* Player; // 0x68(0x08)
	struct UTigerAimAssistSettings* Settings; // 0x70(0x08)
	char pad_78[0x28]; // 0x78(0x28)
};

// ScriptStruct Tiger.TigerAimAssistState
// Size: 0x68 (Inherited: 0x00)
struct FTigerAimAssistState {
	struct ATigerCharacter* Target; // 0x00(0x08)
	char pad_8[0x60]; // 0x08(0x60)
};

// ScriptStruct Tiger.TigerAimAssistModeConfig
// Size: 0x68 (Inherited: 0x00)
struct FTigerAimAssistModeConfig {
	bool bEnable; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FTigerAimAssistEffect SlowdownEffect; // 0x08(0x30)
	struct FTigerAimAssistEffect RotationEffect; // 0x38(0x30)
};

// ScriptStruct Tiger.TigerAimAssistEffect
// Size: 0x30 (Inherited: 0x00)
struct FTigerAimAssistEffect {
	bool bEnable; // 0x00(0x01)
	bool bDisableRadius; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FTigerAimAssistDistanceMapping Radius; // 0x08(0x10)
	struct FTigerAimAssistDistanceMapping Strength; // 0x18(0x10)
	float MinRangeMultiplier; // 0x28(0x04)
	float MaxRangeMultiplier; // 0x2c(0x04)
};

// ScriptStruct Tiger.TigerAimAssistDistanceMapping
// Size: 0x10 (Inherited: 0x00)
struct FTigerAimAssistDistanceMapping {
	struct UCurveFloat* NormalizedDistanceToMultiplier; // 0x00(0x08)
	struct FVector2D Multiplier; // 0x08(0x08)
};

// ScriptStruct Tiger.WeaponDistanceDesc
// Size: 0x08 (Inherited: 0x00)
struct FWeaponDistanceDesc {
	float MinDistSquared; // 0x00(0x04)
	float MaxDistSquared; // 0x04(0x04)
};

// ScriptStruct Tiger.TigerAIMasqueradeEvent
// Size: 0x88 (Inherited: 0x00)
struct FTigerAIMasqueradeEvent {
	float Amount; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct FVector HitLocation; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct ATigerCharacter* TargetActor; // 0x20(0x08)
	struct ATigerPlayer* Instigator; // 0x28(0x08)
	struct FTigerAIPlayerAction PlayerAction; // 0x30(0x58)
};

// ScriptStruct Tiger.TigerSightConfigData
// Size: 0x50 (Inherited: 0x00)
struct FTigerSightConfigData {
	struct TMap<enum class ETigerAIMasqueradeState, struct FTigerSightConfigProperties> SightProperties; // 0x00(0x50)
};

// ScriptStruct Tiger.TigerSightConfigProperties
// Size: 0x1c (Inherited: 0x00)
struct FTigerSightConfigProperties {
	float SightRadius; // 0x00(0x04)
	float LoseSightRadius; // 0x04(0x04)
	float PeripheralVisionAngleDegrees; // 0x08(0x04)
	float CloseSightRadius; // 0x0c(0x04)
	float CloseLoseSightRadius; // 0x10(0x04)
	float ClosePeripheralVisionAngleDegrees; // 0x14(0x04)
	float HeightDifference; // 0x18(0x04)
};

// ScriptStruct Tiger.TigerCapSpawnData
// Size: 0x40 (Inherited: 0x00)
struct FTigerCapSpawnData {
	struct UTigerNPCAsset* SpawnAsset; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform SpawnTransform; // 0x10(0x30)
};

// ScriptStruct Tiger.TigerRandomVisualAsset
// Size: 0x10 (Inherited: 0x00)
struct FTigerRandomVisualAsset {
	struct UTigerNPCVisualAsset* VisualAsset; // 0x00(0x08)
	float Weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerAISplinePathData
// Size: 0xa0 (Inherited: 0x00)
struct FTigerAISplinePathData {
	struct TArray<struct FVector> PathWaypoints; // 0x00(0x10)
	struct TArray<struct FVector> PathWaypointsRightVectors; // 0x10(0x10)
	struct FTigerAISplinePathConnection StartingPoint; // 0x20(0x30)
	struct FTigerAISplinePathConnection EndPoint; // 0x50(0x30)
	struct TArray<struct FTigerAISplinePathConnection> AdditionalPathConnections; // 0x80(0x10)
	bool bLooping; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	int32_t ExtraRows; // 0x94(0x04)
	float RowDistance; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct Tiger.TigerAISplinePathConnection
// Size: 0x30 (Inherited: 0x00)
struct FTigerAISplinePathConnection {
	int32_t Index; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<enum class ETigerNPCType> RestrictedTypes; // 0x08(0x10)
	struct ATigerAiSplinePathHub* ConnectedHub; // 0x18(0x08)
	struct ATigerAISplinePath* OwningSpline; // 0x20(0x08)
	float Weight; // 0x28(0x04)
	bool bAlwaysSwitchSpline; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct Tiger.TigerAnimMetaData
// Size: 0x18 (Inherited: 0x00)
struct FTigerAnimMetaData {
	struct UAnimMontage* Montage; // 0x00(0x08)
	struct UAnimMetaData* MetaData; // 0x08(0x08)
	float BlendWeight; // 0x10(0x04)
	enum class ETigerAnimBlendState BlendState; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Tiger.TigerPlayerBlendSpace1DByClan
// Size: 0x20 (Inherited: 0x00)
struct FTigerPlayerBlendSpace1DByClan {
	struct UBlendSpace1D* AnimationObjects[0x4]; // 0x00(0x20)
};

// ScriptStruct Tiger.TigerPlayerBlendSpaceByClan
// Size: 0x20 (Inherited: 0x00)
struct FTigerPlayerBlendSpaceByClan {
	struct UBlendSpace* AnimationObjects[0x4]; // 0x00(0x20)
};

// ScriptStruct Tiger.TigerPlayerMontageByClan
// Size: 0x20 (Inherited: 0x00)
struct FTigerPlayerMontageByClan {
	struct UAnimMontage* AnimationObjects[0x4]; // 0x00(0x20)
};

// ScriptStruct Tiger.TigerPlayerSequenceByClan
// Size: 0x20 (Inherited: 0x00)
struct FTigerPlayerSequenceByClan {
	struct UAnimSequence* AnimationObjects[0x4]; // 0x00(0x20)
};

// ScriptStruct Tiger.TigerAnimNotifyIKData
// Size: 0x34 (Inherited: 0x00)
struct FTigerAnimNotifyIKData {
	struct FVector IKTarget; // 0x00(0x0c)
	struct FVector RelativeTargetJointTarget; // 0x0c(0x0c)
	float CurrentIKAlphaBlend; // 0x18(0x04)
	bool bShouldBeUsed; // 0x1c(0x01)
	char pad_1D[0x17]; // 0x1d(0x17)
};

// ScriptStruct Tiger.TigerDamageImmunitySelector
// Size: 0x08 (Inherited: 0x00)
struct FTigerDamageImmunitySelector {
	struct UDamageType* DamageType; // 0x00(0x08)
};

// ScriptStruct Tiger.TigerArchetype
// Size: 0x10 (Inherited: 0x00)
struct FTigerArchetype {
	struct TArray<struct FTigerArchetypeReward> Rewards; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerArchetypeReward
// Size: 0x10 (Inherited: 0x00)
struct FTigerArchetypeReward {
	int32_t Level; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FTigerItemId ItemId; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerHeightenedSensesAudioVisualization
// Size: 0x08 (Inherited: 0x00)
struct FTigerHeightenedSensesAudioVisualization {
	struct UParticleSystemComponent* ParticleSystem; // 0x00(0x08)
};

// ScriptStruct Tiger.TigerBuildingSystemBalconyVolumeDefaults
// Size: 0x48 (Inherited: 0x00)
struct FTigerBuildingSystemBalconyVolumeDefaults {
	struct FVector BottomVolumeOffset; // 0x00(0x0c)
	struct FVector BottomVolumeScale; // 0x0c(0x0c)
	struct FVector LeftVolumeOffset; // 0x18(0x0c)
	struct FVector LeftVolumeScale; // 0x24(0x0c)
	struct FVector RightVolumeOffset; // 0x30(0x0c)
	struct FVector RightVolumeScale; // 0x3c(0x0c)
};

// ScriptStruct Tiger.TigerFacePoseData
// Size: 0x38 (Inherited: 0x00)
struct FTigerFacePoseData {
	struct TSoftObjectPtr<USkeletalMesh> HeadMesh; // 0x00(0x28)
	struct UPoseAsset* PoseAsset; // 0x28(0x08)
	struct UAnimSequence* PoseSourceAnimation; // 0x30(0x08)
};

// ScriptStruct Tiger.TigerBloodResonanceBuffs
// Size: 0x10 (Inherited: 0x00)
struct FTigerBloodResonanceBuffs {
	struct TArray<struct UTigerBuff*> Buffs; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerNiagaraAttachment
// Size: 0x48 (Inherited: 0x00)
struct FTigerNiagaraAttachment {
	struct FSoftObjectPath NiagaraPath; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FName AttachPointName; // 0x20(0x08)
	struct FVector Location; // 0x28(0x0c)
	struct FRotator Rotation; // 0x34(0x0c)
	enum class EAttachLocation AttachLocationRule; // 0x40(0x01)
	bool bOnlySpawnOnLocalPlayer; // 0x41(0x01)
	bool bUseAbsoluteRotation; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)
};

// ScriptStruct Tiger.TigerDeferredBuffInstantiation
// Size: 0x28 (Inherited: 0x00)
struct FTigerDeferredBuffInstantiation {
	char pad_0[0x8]; // 0x00(0x08)
	struct ATigerCharacter* BuffCaster; // 0x08(0x08)
	char pad_10[0x18]; // 0x10(0x18)
};

// ScriptStruct Tiger.TigerSidePieceMaterialOverrideCache
// Size: 0x28 (Inherited: 0x00)
struct FTigerSidePieceMaterialOverrideCache {
	struct UStaticMesh* OldMesh; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> Materials; // 0x08(0x10)
	struct TArray<struct FName> SlotNames; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerBuildingSystemWallPieceInstancingData
// Size: 0x10 (Inherited: 0x00)
struct FTigerBuildingSystemWallPieceInstancingData {
	struct TArray<struct FTigerBuildingSystemWallPieceInstancingDataEntry> Entries; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerBuildingSystemWallPieceInstancingDataEntry
// Size: 0x18 (Inherited: 0x00)
struct FTigerBuildingSystemWallPieceInstancingDataEntry {
	struct UStaticMeshComponent* Component; // 0x00(0x08)
	struct TArray<float> Data; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerBuildingSystemMaterialCache
// Size: 0x18 (Inherited: 0x00)
struct FTigerBuildingSystemMaterialCache {
	struct TArray<struct FTigerBuildingSystemMaterialCacheMaterialBinding> MaterialBindings; // 0x00(0x10)
	bool bStaticMeshComponent; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Tiger.TigerBuildingSystemMaterialCacheMaterialBinding
// Size: 0x10 (Inherited: 0x00)
struct FTigerBuildingSystemMaterialCacheMaterialBinding {
	int32_t MaterialIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UMaterialInterface* Material; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerBuildingSystemSideFloorEnables
// Size: 0x04 (Inherited: 0x00)
struct FTigerBuildingSystemSideFloorEnables {
	bool bFront; // 0x00(0x01)
	bool bLeft; // 0x01(0x01)
	bool bBack; // 0x02(0x01)
	bool bRight; // 0x03(0x01)
};

// ScriptStruct Tiger.TigerBuildingSystemFloorComponents
// Size: 0x10 (Inherited: 0x00)
struct FTigerBuildingSystemFloorComponents {
	struct TArray<struct UStaticMeshComponent*> SidePieceComponents; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerBuildingSystemCornerOverrides
// Size: 0x40 (Inherited: 0x00)
struct FTigerBuildingSystemCornerOverrides {
	struct UStaticMesh* GroundFloorCorners; // 0x00(0x08)
	struct UStaticMesh* ColumnsFloor1; // 0x08(0x08)
	struct UStaticMesh* ColumnsFloor2; // 0x10(0x08)
	struct UStaticMesh* ColumnsFloor3; // 0x18(0x08)
	struct UStaticMesh* ColumnsFloor4; // 0x20(0x08)
	struct UStaticMesh* ColumnsFloor5; // 0x28(0x08)
	struct UStaticMesh* ColumnsFloor6; // 0x30(0x08)
	struct UStaticMesh* ColumnsFloor7; // 0x38(0x08)
};

// ScriptStruct Tiger.TigerBuildingSystemGroundFloorOverrides
// Size: 0x18 (Inherited: 0x00)
struct FTigerBuildingSystemGroundFloorOverrides {
	struct UTigerBuildingWallPreset* Preset; // 0x00(0x08)
	int32_t Index; // 0x08(0x04)
	bool bOverrideScaling; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float MeshWidth; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerBuildingSystemSideOverrides
// Size: 0x40 (Inherited: 0x00)
struct FTigerBuildingSystemSideOverrides {
	struct UTigerBuildingWallPreset* GroundFloorPreset; // 0x00(0x08)
	struct UTigerBuildingWallPreset* FloorPreset1; // 0x08(0x08)
	struct UTigerBuildingWallPreset* FloorPreset2; // 0x10(0x08)
	struct UTigerBuildingWallPreset* FloorPreset3; // 0x18(0x08)
	struct UTigerBuildingWallPreset* FloorPreset4; // 0x20(0x08)
	struct UTigerBuildingWallPreset* FloorPreset5; // 0x28(0x08)
	struct UTigerBuildingWallPreset* FloorPreset6; // 0x30(0x08)
	struct UTigerBuildingWallPreset* FloorPreset7; // 0x38(0x08)
};

// ScriptStruct Tiger.TigerBuildingSystemTransformableCorner
// Size: 0x40 (Inherited: 0x00)
struct FTigerBuildingSystemTransformableCorner {
	struct UPoseableMeshComponent* Component; // 0x00(0x08)
	struct UStaticMeshComponent* StaticComponent; // 0x08(0x08)
	struct FRotator MiddleBoneRotation; // 0x10(0x0c)
	struct FVector EndBoneLocation; // 0x1c(0x0c)
	struct FVector StartNormal; // 0x28(0x0c)
	struct FVector NextNormal; // 0x34(0x0c)
};

// ScriptStruct Tiger.TigerStreamableBuildingSides
// Size: 0x10 (Inherited: 0x00)
struct FTigerStreamableBuildingSides {
	struct TArray<struct FTigerStreamableBuildingSide> BuildingWalls; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerStreamableBuildingSide
// Size: 0x30 (Inherited: 0x00)
struct FTigerStreamableBuildingSide {
	struct TArray<struct UStaticMeshComponent*> SideSegments; // 0x00(0x10)
	struct FVector Normal; // 0x10(0x0c)
	struct FVector Center; // 0x1c(0x0c)
	bool bVisible; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Tiger.ChallengeIconDatabaseRow
// Size: 0x90 (Inherited: 0x08)
struct FChallengeIconDatabaseRow : FTableRowBase {
	struct FSlateBrush Brush; // 0x08(0x88)
};

// ScriptStruct Tiger.TigerNestedSubCategoryContainer
// Size: 0x20 (Inherited: 0x00)
struct FTigerNestedSubCategoryContainer {
	struct TArray<struct FTigerChallengeTypeID> ChallengeStorageIDs; // 0x00(0x10)
	struct TArray<struct FTigerItemId> RewardIdForSpecificChallenge; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerChallengeCollectionEntry
// Size: 0x18 (Inherited: 0x00)
struct FTigerChallengeCollectionEntry {
	struct FTigerChallengeTypeID ChallengeTypeID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UTigerChallenge* ReferenceChallenge; // 0x08(0x08)
	enum class ETigerChallengeCategory ChallengeCategory; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Tiger.TigerTestChallengeCollection
// Size: 0x28 (Inherited: 0x18)
struct FTigerTestChallengeCollection : FTigerChallengeConfigCollection {
	struct TArray<struct FTigerTestChallengeInstanceDefinition> ChallengeDefinitions; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerTestChallengeInstanceDefinition
// Size: 0x28 (Inherited: 0x20)
struct FTigerTestChallengeInstanceDefinition : FTigerChallengeInstanceDefinition {
	struct FTigerChallengeTypeID ChallengeTypeID; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Tiger.TigerMasterChallengeCollection
// Size: 0x70 (Inherited: 0x18)
struct FTigerMasterChallengeCollection : FTigerChallengeConfigCollection {
	uint32_t SeasonId; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TMap<enum class ETigerChallengeSubCategory, struct FTigerNestedMasteryInstanceDefinitionArray> ChallengeDefinitionsBySubcategory; // 0x20(0x50)
};

// ScriptStruct Tiger.TigerNestedMasteryInstanceDefinitionArray
// Size: 0x10 (Inherited: 0x00)
struct FTigerNestedMasteryInstanceDefinitionArray {
	struct TArray<struct FTigerMasteryChallengeInstanceDefinition> ChallengeDefinitions; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerMasteryChallengeInstanceDefinition
// Size: 0x28 (Inherited: 0x20)
struct FTigerMasteryChallengeInstanceDefinition : FTigerChallengeInstanceDefinition {
	struct FTigerChallengeTypeID ChallengeTypeID; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Tiger.TigerChallengeRequirementBase
// Size: 0x08 (Inherited: 0x00)
struct FTigerChallengeRequirementBase {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Tiger.TigerChallengeRequirementDistance
// Size: 0x10 (Inherited: 0x08)
struct FTigerChallengeRequirementDistance : FTigerChallengeRequirementBase {
	bool bMeasureDistance; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t Distance; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerChallengeRequirementPowerKit
// Size: 0x10 (Inherited: 0x08)
struct FTigerChallengeRequirementPowerKit : FTigerChallengeRequirementBase {
	bool bCheckPowerKit; // 0x08(0x01)
	enum class ETigerPowerKitType PowerKit; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct Tiger.TigerChallengeRequirementAirborne
// Size: 0x10 (Inherited: 0x08)
struct FTigerChallengeRequirementAirborne : FTigerChallengeRequirementBase {
	bool bCheckAirborne; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Tiger.TigerChallengeRequirementTraversalState
// Size: 0x10 (Inherited: 0x08)
struct FTigerChallengeRequirementTraversalState : FTigerChallengeRequirementBase {
	bool bCheckTraversal; // 0x08(0x01)
	enum class ETigerTraversalState RequiredTraversalState; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct Tiger.TigerChallengeRequirementBloodhunted
// Size: 0x10 (Inherited: 0x08)
struct FTigerChallengeRequirementBloodhunted : FTigerChallengeRequirementBase {
	bool bOnlyWhenBloodhunted; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Tiger.TigerChallengeRequirementDisciplineSlot
// Size: 0x10 (Inherited: 0x08)
struct FTigerChallengeRequirementDisciplineSlot : FTigerChallengeRequirementBase {
	bool bUseSpecificSlot; // 0x08(0x01)
	enum class ETigerDisciplineSlot RequiredSlot; // 0x09(0x01)
	bool bUseAnyDisciplineSlot; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
};

// ScriptStruct Tiger.TigerChallengeRequirementExcludeGameMode
// Size: 0x20 (Inherited: 0x08)
struct FTigerChallengeRequirementExcludeGameMode : FTigerChallengeRequirementBase {
	bool bExcludeGameMode; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString ExcludedGameModeId; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerChallengeRequirementGameMode
// Size: 0x20 (Inherited: 0x08)
struct FTigerChallengeRequirementGameMode : FTigerChallengeRequirementBase {
	bool bSpecificGameMode; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString RequiredGameModeId; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerChallengeRequirementBalanceMode
// Size: 0x10 (Inherited: 0x08)
struct FTigerChallengeRequirementBalanceMode : FTigerChallengeRequirementBase {
	bool bSpecificBalanceMode; // 0x08(0x01)
	enum class EMatchBalanceMode RequiredBalanceMode; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct Tiger.TigerChallengeRequirementClan
// Size: 0x10 (Inherited: 0x08)
struct FTigerChallengeRequirementClan : FTigerChallengeRequirementBase {
	bool bSpecificClan; // 0x08(0x01)
	enum class ETigerClan RequiredClan; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct Tiger.TigerChallengeRequirementWeaponType
// Size: 0x18 (Inherited: 0x08)
struct FTigerChallengeRequirementWeaponType : FTigerChallengeRequirementBase {
	bool bAnyRangedWeapon; // 0x08(0x01)
	bool bAnyMeleeWeapon; // 0x09(0x01)
	bool bAllowDisciplineDamage; // 0x0a(0x01)
	bool bAllowReflectedDamage; // 0x0b(0x01)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UTigerItemAsset* RequiredWeaponAsAsset; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerChallengeCollectionArray
// Size: 0x10 (Inherited: 0x00)
struct FTigerChallengeCollectionArray {
	struct TArray<struct UTigerChallengeCollection*> ChallengeCollections; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerCompressedRotation
// Size: 0x02 (Inherited: 0x00)
struct FTigerCompressedRotation {
	char Yaw; // 0x00(0x01)
	char Pitch; // 0x01(0x01)
};

// ScriptStruct Tiger.TigerCharacterBlendShapeScalarValue
// Size: 0x0c (Inherited: 0x00)
struct FTigerCharacterBlendShapeScalarValue {
	struct FName Name; // 0x00(0x08)
	float Value; // 0x08(0x04)
};

// ScriptStruct Tiger.TigerClanCustomizationValidationOutput
// Size: 0x10 (Inherited: 0x00)
struct FTigerClanCustomizationValidationOutput {
	struct TArray<struct FTigerClanCustomizationValidationError> ValidationErrors; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerClanCustomizationValidationError
// Size: 0x18 (Inherited: 0x00)
struct FTigerClanCustomizationValidationError {
	enum class ETigerClanCustomizationValidationErrorType ErrorType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UTigerInventoryItemBase* ErrorItem; // 0x08(0x08)
	struct UTigerInventoryItemBase* CollisionItem; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerCombinedItemCustomizations
// Size: 0x10 (Inherited: 0x00)
struct FTigerCombinedItemCustomizations {
	struct TArray<struct FTigerCharacterCustomizationItem> CombinedItems; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerCharacterPiercingSetCustomizationItem
// Size: 0x10 (Inherited: 0x00)
struct FTigerCharacterPiercingSetCustomizationItem {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	struct FName FaceSlot; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerCharacterCustomizationHeadData
// Size: 0x30 (Inherited: 0x30)
struct FTigerCharacterCustomizationHeadData : FTigerCharacterCustomizationItem {
};

// ScriptStruct Tiger.TigerCharacterPoseableMeshOffset
// Size: 0x18 (Inherited: 0x00)
struct FTigerCharacterPoseableMeshOffset {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
};

// ScriptStruct Tiger.TigerCharacterHeadEyewearOffset
// Size: 0x18 (Inherited: 0x00)
struct FTigerCharacterHeadEyewearOffset {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
};

// ScriptStruct Tiger.TigerCharacterHeadHeadgearOffset
// Size: 0x18 (Inherited: 0x00)
struct FTigerCharacterHeadHeadgearOffset {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
};

// ScriptStruct Tiger.TigerCharacterHeadPiercingSocket
// Size: 0x18 (Inherited: 0x00)
struct FTigerCharacterHeadPiercingSocket {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
};

// ScriptStruct Tiger.TigerCharacterOutfitHoodieVariation
// Size: 0xb8 (Inherited: 0x00)
struct FTigerCharacterOutfitHoodieVariation {
	bool bEnableHairAnimDynamics; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<USkeletalMesh> Mesh; // 0x08(0x28)
	struct TMap<int32_t, struct TSoftObjectPtr<UMaterialInterface>> Materials; // 0x30(0x50)
	struct FTigerCharacterCustomizationParameters AdditionalParameters; // 0x80(0x38)
};

// ScriptStruct Tiger.TigerLodSplitMesh
// Size: 0x78 (Inherited: 0x00)
struct FTigerLodSplitMesh {
	struct TSoftObjectPtr<USkeletalMesh> Mesh; // 0x00(0x28)
	struct TSoftObjectPtr<USkeletalMesh> Mesh_Lod0; // 0x28(0x28)
	struct TSoftObjectPtr<USkeletalMesh> Mesh_NoLod0; // 0x50(0x28)
};

// ScriptStruct Tiger.TigerCharacterHolsteredWeaponTransforms
// Size: 0x60 (Inherited: 0x00)
struct FTigerCharacterHolsteredWeaponTransforms {
	struct FTransform MeleeWeaponHolsteredTransform; // 0x00(0x30)
	struct FTransform MeleeWeaponSecondaryHolsteredTransform; // 0x30(0x30)
};

// ScriptStruct Tiger.TigerCharacterPoseableMeshBoneSetupData
// Size: 0x2c (Inherited: 0x00)
struct FTigerCharacterPoseableMeshBoneSetupData {
	enum class ETigerCharacterMeshPart BodyPart; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName ParentBone; // 0x04(0x08)
	struct FName MeshBone; // 0x0c(0x08)
	struct FVector RelativeLocation; // 0x14(0x0c)
	struct FRotator RelativeRotation; // 0x20(0x0c)
};

// ScriptStruct Tiger.TigerMeshData
// Size: 0x02 (Inherited: 0x00)
struct FTigerMeshData {
	bool bIsVisibile; // 0x00(0x01)
	bool bVisibilityIsAllowed; // 0x01(0x01)
};

// ScriptStruct Tiger.TigerPoseableMeshData
// Size: 0x18 (Inherited: 0x02)
struct FTigerPoseableMeshData : FTigerMeshData {
	char pad_2[0x6]; // 0x02(0x06)
	struct USkeletalMeshComponent* MeshComponent; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerStaticMeshData
// Size: 0x18 (Inherited: 0x02)
struct FTigerStaticMeshData : FTigerMeshData {
	char pad_2[0x6]; // 0x02(0x06)
	struct UStaticMeshComponent* MeshComponent; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerCharacterMeshData
// Size: 0x18 (Inherited: 0x02)
struct FTigerCharacterMeshData : FTigerMeshData {
	char pad_2[0x6]; // 0x02(0x06)
	struct USkeletalMeshComponent* MeshComponent; // 0x08(0x08)
	struct USkeletalMesh* RegisteredMesh; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerPhysicalInteractionMontages
// Size: 0x60 (Inherited: 0x00)
struct FTigerPhysicalInteractionMontages {
	struct FTigerPhysicalInteractionDescription DescriptionByTargetGender[0x2]; // 0x00(0x60)
};

// ScriptStruct Tiger.TigerPhysicalInteractionDescription
// Size: 0x30 (Inherited: 0x00)
struct FTigerPhysicalInteractionDescription {
	struct UAnimMontage* PrimeStart; // 0x00(0x08)
	struct UAnimMontage* PrimeMid; // 0x08(0x08)
	struct UAnimMontage* PrimeEnd; // 0x10(0x08)
	struct UAnimMontage* SecondaryStart; // 0x18(0x08)
	struct UAnimMontage* SecondaryMid; // 0x20(0x08)
	struct UAnimMontage* SecondaryEnd; // 0x28(0x08)
};

// ScriptStruct Tiger.TigerCharacterPoseableMeshBoneData
// Size: 0x24 (Inherited: 0x00)
struct FTigerCharacterPoseableMeshBoneData {
	enum class ETigerCharacterMeshPart BodyPart; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName ParentBone; // 0x04(0x08)
	struct FVector RelativeLocation; // 0x0c(0x0c)
	struct FRotator RelativeRotation; // 0x18(0x0c)
};

// ScriptStruct Tiger.TigerCharacterCinematicTemplate
// Size: 0x60 (Inherited: 0x00)
struct FTigerCharacterCinematicTemplate {
	struct FString PresetName; // 0x00(0x10)
	struct FString Clan; // 0x10(0x10)
	struct FString PowerKitIndex; // 0x20(0x10)
	struct FString Gender; // 0x30(0x10)
	struct FString OutfitCommand; // 0x40(0x10)
	struct TArray<struct FString> UtilityItems; // 0x50(0x10)
};

// ScriptStruct Tiger.ClientDebugInfo
// Size: 0x0c (Inherited: 0x00)
struct FClientDebugInfo {
	uint32_t ClientUid; // 0x00(0x04)
	struct FVector2D Location; // 0x04(0x08)
};

// ScriptStruct Tiger.ActivateObjectState
// Size: 0x08 (Inherited: 0x00)
struct FActivateObjectState {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Tiger.ClientSpawnData
// Size: 0x50 (Inherited: 0x00)
struct FClientSpawnData {
	uint32_t ClientUid; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UObject* SpawnClass; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct TArray<char> ClassSpecificData; // 0x40(0x10)
};

// ScriptStruct Tiger.TigerLoggedInElsewherePush
// Size: 0x01 (Inherited: 0x00)
struct FTigerLoggedInElsewherePush {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Tiger.TigerCollectibleTableRow
// Size: 0x10 (Inherited: 0x08)
struct FTigerCollectibleTableRow : FTableRowBase {
	struct UTigerCollectibleData* Collectible; // 0x08(0x08)
};

// ScriptStruct Tiger.AccessToken
// Size: 0x28 (Inherited: 0x00)
struct FAccessToken {
	struct FString Token; // 0x00(0x10)
	struct FString EndPoint; // 0x10(0x10)
	uint32_t ExpirationTimeInSeconds; // 0x20(0x04)
	bool RequiresServerSecret; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Tiger.TigerResponse_GetEntitlementsToken
// Size: 0x28 (Inherited: 0x18)
struct FTigerResponse_GetEntitlementsToken : FTigerResponseEnvelope {
	struct FString Token; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerRequest_GetEntitlementsToken
// Size: 0x38 (Inherited: 0x00)
struct FTigerRequest_GetEntitlementsToken {
	char PlatformBackendType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString AuthenticationCode; // 0x08(0x10)
	struct FString CountryCode; // 0x18(0x10)
	struct TArray<struct FString> Entitlements; // 0x28(0x10)
};

// ScriptStruct Tiger.TigerResponse_GetAccessToken
// Size: 0x40 (Inherited: 0x18)
struct FTigerResponse_GetAccessToken : FTigerResponseEnvelope {
	struct FString Token; // 0x18(0x10)
	struct FString EndPoint; // 0x28(0x10)
	uint32_t ExpirationTimeInSeconds; // 0x38(0x04)
	bool RequiresServerSecret; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct Tiger.TigerRequest_GetAccessToken
// Size: 0x01 (Inherited: 0x00)
struct FTigerRequest_GetAccessToken {
	char PlatformBackendType; // 0x00(0x01)
};

// ScriptStruct Tiger.TigerOwnedConsumable
// Size: 0x10 (Inherited: 0x00)
struct FTigerOwnedConsumable {
	struct UTigerConsumableAsset* ConsumableAsset; // 0x00(0x08)
	int32_t Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerCurrentContextualHelp
// Size: 0x18 (Inherited: 0x00)
struct FTigerCurrentContextualHelp {
	struct UTigerContextualHelp* ContextualHelp; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerContextualHelpContext
// Size: 0x18 (Inherited: 0x00)
struct FTigerContextualHelpContext {
	struct ATigerPlayerController* PlayerController; // 0x00(0x08)
	struct UTigerPowerKit* PowerKit; // 0x08(0x08)
	int32_t NumMatchesPlayedTotal; // 0x10(0x04)
	int32_t NumMatchesWithArchetype; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerDamageNumberData
// Size: 0x20 (Inherited: 0x00)
struct FTigerDamageNumberData {
	struct FVector_NetQuantize HitLocationOffset; // 0x00(0x0c)
	int16_t TotalDamageDealt; // 0x0c(0x02)
	int16_t HealthDamageDealt; // 0x0e(0x02)
	float NewHealth; // 0x10(0x04)
	bool bHasExtraHealth; // 0x14(0x01)
	bool bHasShield; // 0x15(0x01)
	bool bWasCriticalHit; // 0x16(0x01)
	bool bWasDowned; // 0x17(0x01)
	bool bWasKilled; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float RangedDamageFallofPercent; // 0x1c(0x04)
};

// ScriptStruct Tiger.TigerDamageSource
// Size: 0x24 (Inherited: 0x00)
struct FTigerDamageSource {
	struct FVector DamageSourceDirection; // 0x00(0x0c)
	struct FVector DamageSourceLocation; // 0x0c(0x0c)
	float NewHealth; // 0x18(0x04)
	float DamageAmount; // 0x1c(0x04)
	bool bIsRedGasDamage; // 0x20(0x01)
	bool bHasDirection; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
};

// ScriptStruct Tiger.DamageTriggerOverlapData
// Size: 0x10 (Inherited: 0x00)
struct FDamageTriggerOverlapData {
	struct ATigerCharacter* Character; // 0x00(0x08)
	float TimerAccumulator; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerDisciplineLevelInfo
// Size: 0x40 (Inherited: 0x00)
struct FTigerDisciplineLevelInfo {
	struct FText StatName; // 0x00(0x18)
	struct TArray<float> StatChanges; // 0x18(0x10)
	struct FText StatChangeSuffix; // 0x28(0x18)
};

// ScriptStruct Tiger.EarthshockUseDataNetworked
// Size: 0x34 (Inherited: 0x00)
struct FEarthshockUseDataNetworked {
	struct FVector StartLocation; // 0x00(0x0c)
	struct FVector TargetLocation; // 0x0c(0x0c)
	struct FVector SurfaceNormal; // 0x18(0x0c)
	struct FVector ConeDirection; // 0x24(0x0c)
	bool bTargetIsWall; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
};

// ScriptStruct Tiger.DistrictDataAnchor
// Size: 0x10 (Inherited: 0x00)
struct FDistrictDataAnchor {
	struct FVector2D WorldPosition; // 0x00(0x08)
	struct FVector2D MapPosition; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerDsGameSessionDetails
// Size: 0x30 (Inherited: 0x00)
struct FTigerDsGameSessionDetails {
	struct FString GameSessionData; // 0x00(0x10)
	int32_t MaxPlayers; // 0x10(0x04)
	bool AllowsJoin; // 0x14(0x01)
	char GroupingMode; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct FString GAMEMODEID; // 0x18(0x10)
	char MATCHMAKINGPLATFORM; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Tiger.TigerDsSettings
// Size: 0x208 (Inherited: 0x00)
struct FTigerDsSettings {
	char pad_0[0x208]; // 0x00(0x208)
};

// ScriptStruct Tiger.TigerElysiumNpcData
// Size: 0x190 (Inherited: 0x00)
struct FTigerElysiumNpcData {
	struct TSoftObjectPtr<USkeletalMesh> BodyMesh; // 0x00(0x28)
	struct TSoftObjectPtr<USkeletalMesh> HeadMesh; // 0x28(0x28)
	struct TSoftObjectPtr<USkeletalMesh> HairMesh; // 0x50(0x28)
	struct TSoftObjectPtr<USkeletalMesh> HoodieMesh; // 0x78(0x28)
	struct FTigerElysiumNpcProp FirstPropAsset; // 0xa0(0x70)
	struct FTigerElysiumNpcProp SecondPropAsset; // 0x110(0x70)
	struct FTigerElysiumNpcAnimationData AnimationData; // 0x180(0x10)
};

// ScriptStruct Tiger.TigerElysiumNpcAnimationData
// Size: 0x10 (Inherited: 0x00)
struct FTigerElysiumNpcAnimationData {
	struct UAnimSequenceBase* AnimationToPlay; // 0x00(0x08)
	float AnimationOffset; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerElysiumNpcProp
// Size: 0x70 (Inherited: 0x00)
struct FTigerElysiumNpcProp {
	struct TSoftObjectPtr<UObject> PropAsset; // 0x00(0x28)
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform LocalTransform; // 0x30(0x30)
	struct FName AttachmentPoint; // 0x60(0x08)
	char pad_68[0x8]; // 0x68(0x08)
};

// ScriptStruct Tiger.TigerEmoteTableRow
// Size: 0x38 (Inherited: 0x08)
struct FTigerEmoteTableRow : FTableRowBase {
	struct FText EmoteName; // 0x08(0x18)
	struct UTexture2D* EmoteIcon; // 0x20(0x08)
	struct UAnimMontage* EmoteMontage; // 0x28(0x08)
	bool bStopsMovement; // 0x30(0x01)
	bool bAlwaysUnlocked; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct Tiger.TigerPlayingEmote
// Size: 0x10 (Inherited: 0x00)
struct FTigerPlayingEmote {
	struct UAnimMontage* Montage; // 0x00(0x08)
	float StartTime; // 0x08(0x04)
	bool StopsMovement; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Tiger.TigerResponse_EventConfigs
// Size: 0x70 (Inherited: 0x18)
struct FTigerResponse_EventConfigs : FTigerResponseEnvelope {
	bool UseLocal; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t LastChecksum; // 0x1c(0x04)
	struct TMap<struct FString, struct FTigerEventConfig> EventConfigs; // 0x20(0x50)
};

// ScriptStruct Tiger.TigerEventConfig
// Size: 0x178 (Inherited: 0x00)
struct FTigerEventConfig {
	struct FString EventName; // 0x00(0x10)
	struct FString EventsJson; // 0x10(0x10)
	struct TMap<struct FString, struct FString> EventTitle; // 0x20(0x50)
	struct TMap<struct FString, struct FString> EventDescription; // 0x70(0x50)
	struct TMap<struct FString, struct FString> EventBannerImageURL; // 0xc0(0x50)
	enum class ETigerEventConfig_EventType EventType; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct TArray<struct FTigerEventConfig_ChallengeInstanceDefinition> EventChallengeDefinitions; // 0x118(0x10)
	struct TArray<struct FTigerEventConfig_Rewards> EventRewards; // 0x128(0x10)
	enum class ETigerEventConfig_TimeFrame Timeframe; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
	struct FTigerEventConfig_Repeating EventRepeatingPeriod; // 0x140(0x18)
	struct FDateTime EventLifeTimeStart; // 0x158(0x08)
	struct FDateTime EventLifeTimeEnd; // 0x160(0x08)
	int32_t PromotionPeriodInDays; // 0x168(0x04)
	int32_t CooloffPeriodInDays; // 0x16c(0x04)
	bool EventActive; // 0x170(0x01)
	char pad_171[0x3]; // 0x171(0x03)
	uint32_t EventId; // 0x174(0x04)
};

// ScriptStruct Tiger.TigerEventConfig_Repeating
// Size: 0x18 (Inherited: 0x00)
struct FTigerEventConfig_Repeating {
	enum class ETigerEventConfig_RepeatingPeriod RepeatingPeriod; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FDateTime ActiveStart; // 0x08(0x08)
	struct FDateTime ActiveEnd; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerEventConfig_Rewards
// Size: 0x10 (Inherited: 0x00)
struct FTigerEventConfig_Rewards {
	struct TArray<struct FTigerItemId> ItemIds; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerEventConfig_ChallengeInstanceDefinition
// Size: 0x10 (Inherited: 0x00)
struct FTigerEventConfig_ChallengeInstanceDefinition {
	struct FTigerChallengeTypeID ChallengeStorageID; // 0x00(0x04)
	struct FTigerChallengeTypeID ChallengeTypeID; // 0x04(0x04)
	struct FTigerItemId RewardId; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerEventConfigs
// Size: 0x58 (Inherited: 0x00)
struct FTigerEventConfigs {
	bool UseLocal; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t LastChecksum; // 0x04(0x04)
	char pad_8[0x50]; // 0x08(0x50)
};

// ScriptStruct Tiger.EventTimerHandles
// Size: 0x10 (Inherited: 0x00)
struct FEventTimerHandles {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerExtendedGroupMemberClientData
// Size: 0x20 (Inherited: 0x00)
struct FTigerExtendedGroupMemberClientData {
	char pad_0[0x8]; // 0x00(0x08)
	struct UTigerGroupMemberMarkerProxy* MapMarkerProxy; // 0x08(0x08)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerExtendedGroupPlayerInfo
// Size: 0x18 (Inherited: 0x00)
struct FTigerExtendedGroupPlayerInfo {
	int32_t PlayerId; // 0x00(0x04)
	struct FVector_NetQuantize Location; // 0x04(0x0c)
	float Yaw; // 0x10(0x04)
	bool bIsDead; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Tiger.TigerFakeGameSessionToken
// Size: 0x50 (Inherited: 0x00)
struct FTigerFakeGameSessionToken {
	struct FString Ip; // 0x00(0x10)
	uint16_t Port; // 0x10(0x02)
	char pad_12[0x6]; // 0x12(0x06)
	struct FString GAMEMODEID; // 0x18(0x10)
	int32_t GroupSize; // 0x28(0x04)
	enum class ETigerMatchMode MatchMode; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	enum class ETigerSessionType SESSIONTYPE; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString DsSettings; // 0x38(0x10)
	bool MatchSettingsVariationElected; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Tiger.TigerFeedingDataByGender
// Size: 0x120 (Inherited: 0x00)
struct FTigerFeedingDataByGender {
	struct FTigerFeedingMontages FeedingDataByVampireGender[0x2]; // 0x00(0x120)
};

// ScriptStruct Tiger.TigerFeedingMontages
// Size: 0x90 (Inherited: 0x00)
struct FTigerFeedingMontages {
	struct FTigerFeedingDescription FemaleTargetDescription; // 0x00(0x30)
	struct FTigerFeedingDescription MaleTargetDescription; // 0x30(0x30)
	struct FTigerFeedingDescription EntityTargetDescription; // 0x60(0x30)
};

// ScriptStruct Tiger.TigerFeedingDescription
// Size: 0x30 (Inherited: 0x00)
struct FTigerFeedingDescription {
	struct UAnimMontage* AttackerApproach; // 0x00(0x08)
	struct UAnimMontage* AttackerFeeding; // 0x08(0x08)
	struct UAnimMontage* AttackerDecouple; // 0x10(0x08)
	struct UAnimMontage* VictimApproach; // 0x18(0x08)
	struct UAnimMontage* VictimFeeding; // 0x20(0x08)
	struct UAnimMontage* VictimDecouple; // 0x28(0x08)
};

// ScriptStruct Tiger.TigerResponse_GetUserInfo
// Size: 0x48 (Inherited: 0x18)
struct FTigerResponse_GetUserInfo : FTigerResponseEnvelope {
	struct FString OpenId; // 0x18(0x10)
	struct FString SharkmobUserId; // 0x28(0x10)
	struct FString PlayerName; // 0x38(0x10)
};

// ScriptStruct Tiger.TigerResponse_ConvertedIds
// Size: 0x28 (Inherited: 0x18)
struct FTigerResponse_ConvertedIds : FTigerResponseEnvelope {
	struct TArray<struct FTigerFriendsAccountIdSet> PlayerIds; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerFriendsAccountIdSet
// Size: 0x38 (Inherited: 0x00)
struct FTigerFriendsAccountIdSet {
	struct FString PlatformUserId; // 0x00(0x10)
	struct FString PlayerId; // 0x10(0x10)
	struct FString SharkmobUserId; // 0x20(0x10)
	enum class EShAccountChannel PlayerChannel; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Tiger.TigerRequest_ChatNotification
// Size: 0x20 (Inherited: 0x00)
struct FTigerRequest_ChatNotification {
	struct FString RecipientPlayerId; // 0x00(0x10)
	struct FString Command; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerRequest_GetSharkmobAccountIds
// Size: 0x18 (Inherited: 0x00)
struct FTigerRequest_GetSharkmobAccountIds {
	uint32_t ChannelID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FString> PlatformUserIds; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerResponse_SearchPlayer
// Size: 0x28 (Inherited: 0x18)
struct FTigerResponse_SearchPlayer : FTigerResponseEnvelope {
	struct TArray<struct FTigerFriendServiceFriend> Players; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerFriendServiceFriend
// Size: 0x58 (Inherited: 0x00)
struct FTigerFriendServiceFriend {
	struct FString DISPLAYNAME; // 0x00(0x10)
	struct FString SharkmobUserId; // 0x10(0x10)
	struct FString OpenId; // 0x20(0x10)
	enum class EShAccountChannel Channel; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString CardData; // 0x38(0x10)
	struct FString PlayerLevel; // 0x48(0x10)
};

// ScriptStruct Tiger.TigerRequest_SearchPlayerAction
// Size: 0x10 (Inherited: 0x00)
struct FTigerRequest_SearchPlayerAction {
	struct FString UserName; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerRequest_FriendAction
// Size: 0x10 (Inherited: 0x00)
struct FTigerRequest_FriendAction {
	struct FString SharkmobUserId; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerResponse_FriendInvites
// Size: 0x28 (Inherited: 0x18)
struct FTigerResponse_FriendInvites : FTigerResponseEnvelope {
	struct TArray<struct FTigerFriendServiceFriend> Invites; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerResponse_FriendsList
// Size: 0x28 (Inherited: 0x18)
struct FTigerResponse_FriendsList : FTigerResponseEnvelope {
	struct TArray<struct FTigerFriendServiceFriend> Friends; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerFullCharacterAppearance
// Size: 0xe0 (Inherited: 0x00)
struct FTigerFullCharacterAppearance {
	struct FTigerCharacterAppearance PartialCharacterAppearance; // 0x00(0xc8)
	struct FTigerPersistentPlayerCardData PlayerCardData; // 0xc8(0x18)
};

// ScriptStruct Tiger.TigerCachedAchievementRetry
// Size: 0x0c (Inherited: 0x00)
struct FTigerCachedAchievementRetry {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Tiger.TigerGameModeUserData
// Size: 0x10 (Inherited: 0x00)
struct FTigerGameModeUserData {
	struct FString SelectedGameModeId; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerGameModesConfigBranch
// Size: 0x30 (Inherited: 0x00)
struct FTigerGameModesConfigBranch {
	int32_t SeasonId; // 0x00(0x04)
	bool IsDefault; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FString Name; // 0x08(0x10)
	int32_t Revision; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FTigerGameModeConfig> GameModes; // 0x20(0x10)
};

// ScriptStruct Tiger.TigerGameModeConfig
// Size: 0x2a8 (Inherited: 0x00)
struct FTigerGameModeConfig {
	struct FString ID; // 0x00(0x10)
	bool Hidden; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString Name; // 0x18(0x10)
	struct FString Body; // 0x28(0x10)
	struct FString TileUrl; // 0x38(0x10)
	struct FDateTime ActiveStart; // 0x48(0x08)
	struct FDateTime ActiveEnd; // 0x50(0x08)
	bool bHasDateRange; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FTigerGameModeMinMax PlayerLevelRequirement; // 0x60(0x10)
	struct FTigerGameModeMinMax PlayerCount; // 0x70(0x10)
	enum class ETigerGroupingMode GroupMode; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	int32_t GroupSize; // 0x84(0x04)
	enum class ETigerMatchMode MatchMode; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	enum class ETigerSessionType SESSIONTYPE; // 0x8c(0x04)
	struct FTigerDsSettings DsSettings; // 0x90(0x208)
	struct FString TelemetryID; // 0x298(0x10)
};

// ScriptStruct Tiger.TigerGameModeMinMax
// Size: 0x10 (Inherited: 0x00)
struct FTigerGameModeMinMax {
	int64_t Min; // 0x00(0x08)
	int64_t Max; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerResponse_GameModesConfig
// Size: 0x30 (Inherited: 0x18)
struct FTigerResponse_GameModesConfig : FTigerResponseEnvelope {
	bool AlreadyOnLatestRevision; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString Config; // 0x20(0x10)
};

// ScriptStruct Tiger.TigerLanguageSettings
// Size: 0x28 (Inherited: 0x00)
struct FTigerLanguageSettings {
	struct FString AudioLanguage; // 0x00(0x10)
	struct FString TextLanguage; // 0x10(0x10)
	bool bUseSubtitles; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t SavedVersion; // 0x24(0x04)
};

// ScriptStruct Tiger.TigerAudioSettings
// Size: 0x70 (Inherited: 0x00)
struct FTigerAudioSettings {
	float MasterVolume; // 0x00(0x04)
	float SFXVolume; // 0x04(0x04)
	float MusicVolume; // 0x08(0x04)
	float VideoVolume; // 0x0c(0x04)
	float DialogueVolume; // 0x10(0x04)
	float VoiceChatVolume; // 0x14(0x04)
	float MicVolume; // 0x18(0x04)
	float ControllerSpeakerVolume; // 0x1c(0x04)
	bool bEnableVoiceChat; // 0x20(0x01)
	bool bPushToTalk; // 0x21(0x01)
	bool bAllowBackgroundAudio; // 0x22(0x01)
	bool bEnableDolbyAtmos; // 0x23(0x01)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString VoipInputDevice; // 0x28(0x10)
	struct FString VoipOutputDevice; // 0x38(0x10)
	struct FString AudioOutputDevice; // 0x48(0x10)
	struct FString MixPresetName; // 0x58(0x10)
	int32_t SavedVersion; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Tiger.TigerDisplaySettings
// Size: 0x2c (Inherited: 0x00)
struct FTigerDisplaySettings {
	int32_t ResolutionX; // 0x00(0x04)
	int32_t ResolutionY; // 0x04(0x04)
	float ResolutionScale; // 0x08(0x04)
	int32_t WindowMode; // 0x0c(0x04)
	float Gamma; // 0x10(0x04)
	float FrameRateLimit; // 0x14(0x04)
	float FrameRateLimitOverride; // 0x18(0x04)
	bool bEnableFrameRateSmoothing; // 0x1c(0x01)
	bool bEnableVSync; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	int32_t FsrQualityLevel; // 0x20(0x04)
	float FsrSharpening; // 0x24(0x04)
	int32_t SavedVersion; // 0x28(0x04)
};

// ScriptStruct Tiger.TigerStreamerModeSettings
// Size: 0x10 (Inherited: 0x00)
struct FTigerStreamerModeSettings {
	enum class ETigerStreamerModeLevel StreamerModeLevel; // 0x00(0x01)
	bool bEnableAnonymousMode; // 0x01(0x01)
	bool bEnablePlayerScramble; // 0x02(0x01)
	bool bDisableKillFeed; // 0x03(0x01)
	bool bDisableMiniMap; // 0x04(0x01)
	bool bDisableNotifications; // 0x05(0x01)
	bool bDisablePlayerMessages; // 0x06(0x01)
	bool bHidePlayerCurrency; // 0x07(0x01)
	bool bHideMatchId; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t SavedVersion; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerGrimoireCardBorderQualityRow
// Size: 0x18 (Inherited: 0x08)
struct FTigerGrimoireCardBorderQualityRow : FTableRowBase {
	float DamageAmount; // 0x08(0x04)
	float ExtraDamage; // 0x0c(0x04)
	float ExtraDamageOnEdges; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerGrimoireCardColorRow
// Size: 0x10 (Inherited: 0x08)
struct FTigerGrimoireCardColorRow : FTableRowBase {
	struct FColor Color; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerGrimoireEntryRow
// Size: 0x28 (Inherited: 0x08)
struct FTigerGrimoireEntryRow : FTableRowBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct UTigerGrimoireEntry* Entry; // 0x10(0x08)
	struct TArray<struct FTigerGrimoireSubEntry> SubEntries; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerGrimoireSubEntry
// Size: 0x18 (Inherited: 0x00)
struct FTigerGrimoireSubEntry {
	char pad_0[0x4]; // 0x00(0x04)
	struct FName EntryName; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UTigerGrimoireEntry* Entry; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerGrimoireEntryTimeThreshold
// Size: 0x10 (Inherited: 0x00)
struct FTigerGrimoireEntryTimeThreshold {
	struct UTigerGrimoireEntry* Entry; // 0x00(0x08)
	float TimeToSpend; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Tiger.GroupingInfo
// Size: 0x04 (Inherited: 0x00)
struct FGroupingInfo {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct Tiger.TigerGroupSettingsData
// Size: 0x38 (Inherited: 0x00)
struct FTigerGroupSettingsData {
	struct UTexture2D* CompassMarkerTexture; // 0x00(0x08)
	struct UUserWidget* MapMarkerWidgetType; // 0x08(0x08)
	struct TSoftClassPtr<UObject> ExtendedGroupMemberWidgetClass; // 0x10(0x28)
};

// ScriptStruct Tiger.TigerHeatmapData
// Size: 0x14 (Inherited: 0x00)
struct FTigerHeatmapData {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct Tiger.TigerCampingData
// Size: 0x10 (Inherited: 0x00)
struct FTigerCampingData {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerDebugDrawCallbackEntry
// Size: 0x60 (Inherited: 0x00)
struct FTigerDebugDrawCallbackEntry {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct Tiger.TigerInbox
// Size: 0x20 (Inherited: 0x00)
struct FTigerInbox {
	int32_t Page; // 0x00(0x04)
	int32_t Count; // 0x04(0x04)
	int32_t TotalCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FTigerInboxMessage> Messages; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerInboxMessage
// Size: 0x40 (Inherited: 0x00)
struct FTigerInboxMessage {
	uint64_t ID; // 0x00(0x08)
	enum class ETigerInboxMessageCategory Category; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Header; // 0x10(0x10)
	enum class ETigerInboxMessageStatus Status; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FDateTime ReceivedAt; // 0x28(0x08)
	struct FTigerInboxMessageBody Body; // 0x30(0x10)
};

// ScriptStruct Tiger.TigerInboxMessageBody
// Size: 0x10 (Inherited: 0x00)
struct FTigerInboxMessageBody {
	struct TArray<struct FTigerInboxMessageSection> Sections; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerInboxMessageSection
// Size: 0x18 (Inherited: 0x00)
struct FTigerInboxMessageSection {
	enum class ETigerInboxMessageSectionType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Content; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerResponse_GetInbox
// Size: 0x30 (Inherited: 0x18)
struct FTigerResponse_GetInbox : FTigerResponseEnvelope {
	int32_t Count; // 0x18(0x04)
	int32_t TotalCount; // 0x1c(0x04)
	struct TArray<struct FTigerResponse_InboxMessage> Messages; // 0x20(0x10)
};

// ScriptStruct Tiger.TigerResponse_InboxMessage
// Size: 0x50 (Inherited: 0x00)
struct FTigerResponse_InboxMessage {
	uint64_t ID; // 0x00(0x08)
	struct FString Category; // 0x08(0x10)
	struct FString Header; // 0x18(0x10)
	bool Read; // 0x28(0x01)
	bool New; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct FString ReceivedAt; // 0x30(0x10)
	struct FTigerResponse_InboxMessageBody Body; // 0x40(0x10)
};

// ScriptStruct Tiger.TigerResponse_InboxMessageBody
// Size: 0x10 (Inherited: 0x00)
struct FTigerResponse_InboxMessageBody {
	struct TArray<struct FTigerResponse_InboxMessageSection> Sections; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerResponse_InboxMessageSection
// Size: 0x20 (Inherited: 0x00)
struct FTigerResponse_InboxMessageSection {
	struct FString Type; // 0x00(0x10)
	struct FString Content; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerRequest_UpdateInbox
// Size: 0x28 (Inherited: 0x00)
struct FTigerRequest_UpdateInbox {
	struct TArray<uint64_t> IdsToDelete; // 0x00(0x10)
	struct TArray<uint64_t> IdsToUpdate; // 0x10(0x10)
	bool MarkAsRead; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Tiger.TigerRequest_GetInbox
// Size: 0x20 (Inherited: 0x00)
struct FTigerRequest_GetInbox {
	uint64_t Page; // 0x00(0x08)
	int32_t PageSize; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString Locale; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerTooltipStatChange
// Size: 0x20 (Inherited: 0x00)
struct FTigerTooltipStatChange {
	struct FText StatName; // 0x00(0x18)
	enum class ETigerTooltipStatChangeAmount Amount; // 0x18(0x01)
	bool bIsNegativeChange; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct Tiger.ItemClusterArray
// Size: 0x120 (Inherited: 0x108)
struct FItemClusterArray : FFastArraySerializer {
	struct TArray<struct FTigerClusteredItem> Items; // 0x108(0x10)
	struct ATigerItemCluster* Parent; // 0x118(0x08)
};

// ScriptStruct Tiger.TigerClusteredItem
// Size: 0x80 (Inherited: 0x0c)
struct FTigerClusteredItem : FFastArraySerializerItem {
	char pad_C[0x14]; // 0x0c(0x14)
	struct FTransform Transform; // 0x20(0x30)
	struct FVector_NetQuantize100 Velocity; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct UTigerItemAsset* Item; // 0x60(0x08)
	uint32_t ItemCount; // 0x68(0x04)
	uint32_t ItemUID; // 0x6c(0x04)
	int32_t PlayerIdWhoDroppedItem; // 0x70(0x04)
	enum class ETigerTelemetryItemSourceID ItemSource; // 0x74(0x01)
	char pad_75[0xb]; // 0x75(0x0b)
};

// ScriptStruct Tiger.TigerSeasonalItemLink
// Size: 0x38 (Inherited: 0x08)
struct FTigerSeasonalItemLink : FTableRowBase {
	uint64_t ItemId; // 0x08(0x08)
	struct TSoftClassPtr<UObject> ItemPath; // 0x10(0x28)
};

// ScriptStruct Tiger.TigerIDRemapExportArray
// Size: 0x10 (Inherited: 0x00)
struct FTigerIDRemapExportArray {
	struct TArray<struct FTigerItemIDRemapElement> IdPairs; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerItemIDRemapElement
// Size: 0x20 (Inherited: 0x00)
struct FTigerItemIDRemapElement {
	struct FString PersistentID; // 0x00(0x10)
	struct FString TelemetryID; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerItemPreviewCamera
// Size: 0x18 (Inherited: 0x00)
struct FTigerItemPreviewCamera {
	struct ACineCameraActor* CameraActor; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerJudgeRotationSettings
// Size: 0x08 (Inherited: 0x00)
struct FTigerJudgeRotationSettings {
	enum class ETigerJudgeRotationMode RotationMode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float RotationSpeed; // 0x04(0x04)
};

// ScriptStruct Tiger.TigerTimedAnimationTriggerWrapper
// Size: 0x18 (Inherited: 0x00)
struct FTigerTimedAnimationTriggerWrapper {
	struct TArray<struct FTigerTimedAnimationTrigger> AnimationTriggers; // 0x00(0x10)
	float ElapsedTime; // 0x10(0x04)
	bool bIsActive; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Tiger.TigerTimedAnimationTrigger
// Size: 0x10 (Inherited: 0x00)
struct FTigerTimedAnimationTrigger {
	struct FName Name; // 0x00(0x08)
	float TriggerTime; // 0x08(0x04)
	enum class ETigerTimedAnimationType AnimationType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Tiger.TigerJudgePlayerDamage
// Size: 0x20 (Inherited: 0x00)
struct FTigerJudgePlayerDamage {
	struct ATigerPlayer* Player; // 0x00(0x08)
	struct TArray<float> DamageCollection; // 0x08(0x10)
	float DamageOverLastSecond; // 0x18(0x04)
	float TotalDamage; // 0x1c(0x04)
};

// ScriptStruct Tiger.TigerJudgeSwingCollisionInfo
// Size: 0x10 (Inherited: 0x00)
struct FTigerJudgeSwingCollisionInfo {
	struct TArray<struct FTigerJudgeSwingCollisionInstant> CollisionInstants; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerJudgeSwingCollisionInstant
// Size: 0x30 (Inherited: 0x00)
struct FTigerJudgeSwingCollisionInstant {
	float TimeInSwing; // 0x00(0x04)
	struct FVector SwordStartSweepLoc; // 0x04(0x0c)
	struct FVector SwordEndSweepLoc; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FQuat SwordRot; // 0x20(0x10)
};

// ScriptStruct Tiger.TigerJudgeTargetConsideration
// Size: 0x28 (Inherited: 0x00)
struct FTigerJudgeTargetConsideration {
	struct ATigerPlayer* Player; // 0x00(0x08)
	struct TArray<struct UTigerJudgeBaseAttackState*> ApplicableAttacks; // 0x08(0x10)
	float DamageDoneSinceReset; // 0x18(0x04)
	float DistanceToPlayer; // 0x1c(0x04)
	float TargetValue; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Tiger.TigerLegalDocumentVersions
// Size: 0x60 (Inherited: 0x00)
struct FTigerLegalDocumentVersions {
	struct FString Eula; // 0x00(0x10)
	struct FString PrivacyPolicy; // 0x10(0x10)
	struct FString ExportGate; // 0x20(0x10)
	struct FString KoreaSpecial1; // 0x30(0x10)
	struct FString KoreaSpecial3; // 0x40(0x10)
	struct FString KoreaSpecial4; // 0x50(0x10)
};

// ScriptStruct Tiger.TigerLegalDocumentsData
// Size: 0x60 (Inherited: 0x00)
struct FTigerLegalDocumentsData {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct Tiger.TigerCountryCode
// Size: 0x50 (Inherited: 0x08)
struct FTigerCountryCode : FTableRowBase {
	struct FText EngShortName; // 0x08(0x18)
	struct FString Alpha2; // 0x20(0x10)
	struct FString Alpha3; // 0x30(0x10)
	int32_t Numeric; // 0x40(0x04)
	int32_t AgeMin; // 0x44(0x04)
	int32_t AgeRating; // 0x48(0x04)
	int32_t ExportGate; // 0x4c(0x04)
};

// ScriptStruct Tiger.TigerCombatTarget
// Size: 0x18 (Inherited: 0x00)
struct FTigerCombatTarget {
	struct AActor* TargetActor; // 0x00(0x08)
	float CombatPriorityValue; // 0x08(0x04)
	float RecentTotalDamageCaused; // 0x0c(0x04)
	float TimeLastDamagedBy; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerBotNameData
// Size: 0x20 (Inherited: 0x08)
struct FTigerBotNameData : FTableRowBase {
	struct FText BotNames; // 0x08(0x18)
};

// ScriptStruct Tiger.TigerResponse_LoginToken
// Size: 0x30 (Inherited: 0x18)
struct FTigerResponse_LoginToken : FTigerResponseEnvelope {
	uint16_t EstimatedTimeInSeconds; // 0x18(0x02)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct FString Token; // 0x20(0x10)
};

// ScriptStruct Tiger.TigerRequest_LoginToken
// Size: 0x10 (Inherited: 0x00)
struct FTigerRequest_LoginToken {
	struct FString Token; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerLootItemType
// Size: 0x10 (Inherited: 0x00)
struct FTigerLootItemType {
	struct UTigerItemAsset* LootAsset; // 0x00(0x08)
	int32_t AmmoCount; // 0x08(0x04)
	int32_t DropChanceWeight; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerLootLocationEntry
// Size: 0x10 (Inherited: 0x00)
struct FTigerLootLocationEntry {
	struct UTigerItemLootTable* LootTable; // 0x00(0x08)
	int32_t MinimumItemCount; // 0x08(0x04)
	int32_t MaximumItemCount; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerSubItemLootTable
// Size: 0x28 (Inherited: 0x00)
struct FTigerSubItemLootTable {
	struct UTigerItemLootTable* SubLootTable; // 0x00(0x08)
	enum class ETigerItemRarity MinimumRarity; // 0x08(0x01)
	enum class ETigerItemRarity MaximumRarity; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float WeightMultiplier; // 0x0c(0x04)
	float WeightMultiplierByRarity[0x5]; // 0x10(0x14)
	float OverrideTotalWeight; // 0x24(0x04)
};

// ScriptStruct Tiger.TigerGeneratedLootTable
// Size: 0x18 (Inherited: 0x00)
struct FTigerGeneratedLootTable {
	struct TArray<struct FTigerItemLootEntry> Items; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerItemLootEntry
// Size: 0x20 (Inherited: 0x00)
struct FTigerItemLootEntry {
	struct UTigerItemAsset* ItemAsset; // 0x00(0x08)
	int32_t MinItemCount; // 0x08(0x04)
	int32_t MaxItemCount; // 0x0c(0x04)
	float Weight; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UTigerItemLootTable* SpawnsWith; // 0x18(0x08)
};

// ScriptStruct Tiger.TigerLootTableKey
// Size: 0x03 (Inherited: 0x00)
struct FTigerLootTableKey {
	char pad_0[0x3]; // 0x00(0x03)
};

// ScriptStruct Tiger.TigerRandomizedLootResult
// Size: 0x20 (Inherited: 0x00)
struct FTigerRandomizedLootResult {
	struct UTigerItemAsset* PrimaryItem; // 0x00(0x08)
	int32_t PrimaryItemCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UTigerItemAsset* SecondaryItem; // 0x10(0x08)
	int32_t SecondaryItemCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Tiger.TigerMapInfo
// Size: 0xb8 (Inherited: 0x00)
struct FTigerMapInfo {
	struct FMapLandmarkPoint FirstLandmark; // 0x00(0x18)
	struct FMapLandmarkPoint SecondLandmark; // 0x18(0x18)
	struct UTexture2D* MapTexture; // 0x30(0x08)
	struct FString LevelName; // 0x38(0x10)
	struct TArray<struct FPointOfInterest> PointsOfInterest; // 0x48(0x10)
	struct FVector2D MinimapSize; // 0x58(0x08)
	float CachedScale; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TMap<struct UUserWidget*, enum class EMapMarkerType> BotMarkerTypes; // 0x68(0x50)
};

// ScriptStruct Tiger.MapLandmarkPoint
// Size: 0x18 (Inherited: 0x00)
struct FMapLandmarkPoint {
	struct FName LandmarkName; // 0x00(0x08)
	struct FVector2D PositionInWorld; // 0x08(0x08)
	struct FVector2D PositionOnMap; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerBloodHuntPositionWrapper
// Size: 0x18 (Inherited: 0x00)
struct FTigerBloodHuntPositionWrapper {
	struct ATigerPlayerState* PlayerState; // 0x00(0x08)
	struct FVector_NetQuantize WorldPosition; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerMasteryChallengesConfig
// Size: 0x10 (Inherited: 0x00)
struct FTigerMasteryChallengesConfig {
	struct TArray<struct FTigerMasterChallengeCollection> Seasons; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerWinConditions
// Size: 0x10 (Inherited: 0x00)
struct FTigerWinConditions {
	struct TArray<struct FPrimaryAssetId> SoftGameModeFeatureAssets; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerHighTierLootSettings
// Size: 0x30 (Inherited: 0x00)
struct FTigerHighTierLootSettings {
	struct FSharkRandomDeviationInt NumberOfHighTierLootLocations; // 0x00(0x08)
	struct TSoftObjectPtr<UTigerItemLootTable> HighTierLootTable; // 0x08(0x28)
};

// ScriptStruct Tiger.TigerPreSpawnSettings
// Size: 0x28 (Inherited: 0x00)
struct FTigerPreSpawnSettings {
	int32_t GroupSyncSettleTime; // 0x00(0x04)
	int32_t InitialArchetypeSelectCountDown; // 0x04(0x04)
	int32_t PostArchetypeSelectTime; // 0x08(0x04)
	int32_t PreSpawnSelectionTime; // 0x0c(0x04)
	int32_t SpawnSelectionTime; // 0x10(0x04)
	int32_t TimeUntilAutomaticSpawnAssignment; // 0x14(0x04)
	int32_t PostSpawnSelectionTime; // 0x18(0x04)
	int32_t ArchetypeSelectTimePerPlayer; // 0x1c(0x04)
	int32_t TeamViewTime; // 0x20(0x04)
	int32_t FreeLookPreparationTime; // 0x24(0x04)
};

// ScriptStruct Tiger.TigerBattleRoyalePlayerSpawnSettings
// Size: 0x08 (Inherited: 0x00)
struct FTigerBattleRoyalePlayerSpawnSettings {
	float MinimumDistanceCentimetersBetweenGroups; // 0x00(0x04)
	float DesiredDistanceCentimetersBetweenGroups; // 0x04(0x04)
};

// ScriptStruct Tiger.TigerHavenCapturePointSettings
// Size: 0x20 (Inherited: 0x00)
struct FTigerHavenCapturePointSettings {
	float TimeUntilEnableCapturePoint; // 0x00(0x04)
	float TimeUntilRevealEveryoneAndSpeedupCapturePercentages; // 0x04(0x04)
	float CaptureSpeedPercentageIncreasePerSecondWhenEveryoneIsRevealed; // 0x08(0x04)
	float MaxCaptureSpeedPercentagePerSecondWhenEveryoneIsRevealed; // 0x0c(0x04)
	float CaptureTime; // 0x10(0x04)
	float CapturePercentageIncreasePerSecond; // 0x14(0x04)
	float FastDecrementPercentageDropPerSecond; // 0x18(0x04)
	float SlowDecrementPercentageDropPerSecond; // 0x1c(0x04)
};

// ScriptStruct Tiger.TigerSHPBSettings
// Size: 0x1c (Inherited: 0x00)
struct FTigerSHPBSettings {
	int32_t StartMinSHPBNPCs; // 0x00(0x04)
	int32_t StartMaxSHPBNPCs; // 0x04(0x04)
	int32_t IntervalMinSHPBNPCs; // 0x08(0x04)
	int32_t IntervalMaxSHPBNPCs; // 0x0c(0x04)
	float MinSpawnInterval; // 0x10(0x04)
	float MaxSpawnInterval; // 0x14(0x04)
	float LastIntervalSpawnMatchTime; // 0x18(0x04)
};

// ScriptStruct Tiger.TigerRatSpawnpointSettings
// Size: 0x08 (Inherited: 0x00)
struct FTigerRatSpawnpointSettings {
	int32_t MinRatSpawnpoints; // 0x00(0x04)
	int32_t MaxRatSpawnpoints; // 0x04(0x04)
};

// ScriptStruct Tiger.TigerEntityCheckpointsSettings
// Size: 0x10 (Inherited: 0x00)
struct FTigerEntityCheckpointsSettings {
	int32_t MinEntityCheckpoints; // 0x00(0x04)
	int32_t MaxEntityCheckpoints; // 0x04(0x04)
	float MinAutomaticSupplyDropCallInDelay; // 0x08(0x04)
	float MaxAutomaticSupplyDropCallInDelay; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerExtendedGroupScore
// Size: 0x28 (Inherited: 0x00)
struct FTigerExtendedGroupScore {
	int32_t TotalScore; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString ExtendedGroupId; // 0x08(0x10)
	struct TArray<struct FTigerScoreByPlayerId> IndividualScores; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerScoreByPlayerId
// Size: 0x20 (Inherited: 0x00)
struct FTigerScoreByPlayerId {
	struct FString PlayerId; // 0x00(0x10)
	int32_t Score; // 0x10(0x04)
	char pad_14[0xc]; // 0x14(0x0c)
};

// ScriptStruct Tiger.TigerMeleeAttack
// Size: 0x88 (Inherited: 0x00)
struct FTigerMeleeAttack {
	struct FName AttackName; // 0x00(0x08)
	int32_t AttackGroup; // 0x08(0x04)
	struct FName SwingAnimationMontageName; // 0x0c(0x08)
	struct FName SwingAnimationNoTargetMontageName; // 0x14(0x08)
	struct FName RecoveryAnimationMontageName; // 0x1c(0x08)
	struct FName RecoveryAnimationNoTargetMontageName; // 0x24(0x08)
	struct FName HitAnimationMontageName; // 0x2c(0x08)
	struct FName DirectionalHitAnimationMontageNames[0x4]; // 0x34(0x20)
	float HitEffectAngle; // 0x54(0x04)
	struct UMatineeCameraShake* HitCameraShake; // 0x58(0x08)
	struct UCurveFloat* InputMultiplierCurve; // 0x60(0x08)
	float AttackCooldown; // 0x68(0x04)
	bool bAllowMultipleHits; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	float TargetingAttackMinimumDistance; // 0x70(0x04)
	float AerialAttackAbortedBlendOutTime; // 0x74(0x04)
	struct UCurveFloat* DamageScalingCurve; // 0x78(0x08)
	int32_t AttackIndex; // 0x80(0x04)
	enum class ETigerWeaponMeleeAttackType AttackType; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
};

// ScriptStruct Tiger.TigerMeleeWeaponAttackData
// Size: 0x48 (Inherited: 0x08)
struct FTigerMeleeWeaponAttackData : FTableRowBase {
	float SwingDepth; // 0x08(0x04)
	float SwingOffsetX; // 0x0c(0x04)
	float SwingOffsetY; // 0x10(0x04)
	float SwingOffsetZ; // 0x14(0x04)
	float SwingDamageAmount; // 0x18(0x04)
	struct FVector2D FlinchStrengthMin; // 0x1c(0x08)
	struct FVector2D FlinchStrengthMax; // 0x24(0x08)
	float AimAssistConeAngle; // 0x2c(0x04)
	float AimAssistConeLength; // 0x30(0x04)
	float StopAimAssistTime; // 0x34(0x04)
	float EnableMeleeRecoveryMoveTime; // 0x38(0x04)
	float CanStartNextAttackTime; // 0x3c(0x04)
	float WorldStaticCollisionRadius; // 0x40(0x04)
	float WorldStaticCollisionHalfHeight; // 0x44(0x04)
};

// ScriptStruct Tiger.TigerMeleeAimAssistData
// Size: 0x08 (Inherited: 0x00)
struct FTigerMeleeAimAssistData {
	float ConeAngle; // 0x00(0x04)
	float ConeLength; // 0x04(0x04)
};

// ScriptStruct Tiger.TigerMeleeAimAssistCandidate
// Size: 0x28 (Inherited: 0x00)
struct FTigerMeleeAimAssistCandidate {
	struct ATigerCharacter* TigerCharacter; // 0x00(0x08)
	struct FVector PredictedLocation; // 0x08(0x0c)
	bool bCanSweepToPredictedLocation; // 0x14(0x01)
	bool bIsKindred; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	float DistanceFromCrosshair; // 0x18(0x04)
	float DistanceFromPlayerSquared; // 0x1c(0x04)
	float AngleFromPlayer; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Tiger.TigerSwingCollisionInfo
// Size: 0x10 (Inherited: 0x00)
struct FTigerSwingCollisionInfo {
	struct TArray<struct FTigerSwingCollisionInstant> CollisionInstants; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerSwingCollisionInstant
// Size: 0x40 (Inherited: 0x00)
struct FTigerSwingCollisionInstant {
	struct FTransform Transform; // 0x00(0x30)
	float TimeInSwing; // 0x30(0x04)
	int32_t HitboxNotifyIndexForWeapon; // 0x34(0x04)
	int32_t WeaponIndex; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Tiger.TigerMeleeFlinchData
// Size: 0x18 (Inherited: 0x00)
struct FTigerMeleeFlinchData {
	struct UCurveFloat* HorizontalFlinch; // 0x00(0x08)
	struct UCurveFloat* VerticalFlinch; // 0x08(0x08)
	float HorizontalStrength; // 0x10(0x04)
	float VerticalStrength; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerMetaStoreEntriesKeeper
// Size: 0x40 (Inherited: 0x00)
struct FTigerMetaStoreEntriesKeeper {
	struct TArray<struct FDelegate> ConfigEventSubscribers; // 0x00(0x10)
	struct FTigerMetaStoreEntriesConfig StoreEntryConfig; // 0x10(0x28)
	enum class ETigerMetaStoreEventType LastEventStatus; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Tiger.TigerModularListItemInfo
// Size: 0x28 (Inherited: 0x00)
struct FTigerModularListItemInfo {
	struct FText Text; // 0x00(0x18)
	bool bIsHeading; // 0x18(0x01)
	bool bIsLocked; // 0x19(0x01)
	bool bShowProgressCounter; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
	int32_t CurrentProgressValue; // 0x1c(0x04)
	int32_t MaxProgressValue; // 0x20(0x04)
	bool bIsNew; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Tiger.TigerMultiplayMetaData
// Size: 0x08 (Inherited: 0x00)
struct FTigerMultiplayMetaData {
	bool FakeMatchmakingEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t BuildChangeList; // 0x04(0x04)
};

// ScriptStruct Tiger.TigerMultiplayServerInfo
// Size: 0x10 (Inherited: 0x00)
struct FTigerMultiplayServerInfo {
	struct FString SessionId; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerRequest_MultiplayDeallocate
// Size: 0x20 (Inherited: 0x00)
struct FTigerRequest_MultiplayDeallocate {
	struct FString FleetId; // 0x00(0x10)
	struct FString GameSessionId; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerResponse_MultiplayHeartbeat
// Size: 0x20 (Inherited: 0x18)
struct FTigerResponse_MultiplayHeartbeat : FTigerResponseEnvelope {
	bool IsDraining; // 0x18(0x01)
	bool ShouldForceStop; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct Tiger.TigerRequest_MultiplayHeartbeat
// Size: 0x28 (Inherited: 0x00)
struct FTigerRequest_MultiplayHeartbeat {
	struct FString GameSessionId; // 0x00(0x10)
	int32_t PlayerCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString MetaData; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerRegionsConfigResponse
// Size: 0x28 (Inherited: 0x18)
struct FTigerRegionsConfigResponse : FTigerResponseEnvelope {
	struct TArray<struct FTigerRegionConfig> AvailableRegions; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerRegionConfig
// Size: 0x30 (Inherited: 0x00)
struct FTigerRegionConfig {
	struct FString RegionName; // 0x00(0x10)
	struct FString RegionId; // 0x10(0x10)
	struct TArray<struct FTigerPingServerConfig> PingServers; // 0x20(0x10)
};

// ScriptStruct Tiger.TigerPingServerConfig
// Size: 0x18 (Inherited: 0x00)
struct FTigerPingServerConfig {
	struct FString PingServerIpV4; // 0x00(0x10)
	uint16_t PingServerPort; // 0x10(0x02)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct Tiger.TigerNearCameraFadeDebugData
// Size: 0x28 (Inherited: 0x00)
struct FTigerNearCameraFadeDebugData {
	bool bDebugNearCameraFade; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UMaterialInterface* NearCameraFadeDebugMaterial; // 0x08(0x08)
	struct UMaterialInterface* DebugVisualizationMaterialEnabled; // 0x10(0x08)
	struct UMaterialInterface* DebugVisualizationMaterialNoMaster; // 0x18(0x08)
	struct UMaterialInterface* DebugVisualizationMaterialNoSimpleCollision; // 0x20(0x08)
};

// ScriptStruct Tiger.TigerNearCameraFadeMaterialMasterData
// Size: 0x18 (Inherited: 0x00)
struct FTigerNearCameraFadeMaterialMasterData {
	struct UMaterialInterface* MasterMaterial; // 0x00(0x08)
	struct FName UseCameraDitherFadeName; // 0x08(0x08)
	struct FName FadeLengthName; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerTrackedPlayerData
// Size: 0x18 (Inherited: 0x00)
struct FTigerTrackedPlayerData {
	struct APlayerState* PlayerState; // 0x00(0x08)
	struct ATigerBestialTrailVisualizer* Visualizer; // 0x08(0x08)
	int32_t TrackingBuffID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerItemNotification
// Size: 0x28 (Inherited: 0x00)
struct FTigerItemNotification {
	struct UTigerItemAsset* Item; // 0x00(0x08)
	int32_t ItemCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText OverrideName; // 0x10(0x18)
};

// ScriptStruct Tiger.DisplayedItemWidget
// Size: 0x10 (Inherited: 0x00)
struct FDisplayedItemWidget {
	struct UUserWidget* Widget; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerNpcDialogue
// Size: 0xc8 (Inherited: 0x00)
struct FTigerNpcDialogue {
	bool bDisabled; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText DialogueHeader; // 0x08(0x18)
	struct TArray<struct FText> DialogueText; // 0x20(0x10)
	bool bRandomiseText; // 0x30(0x01)
	enum class ETigerDialoguePriority DialoguePriority; // 0x31(0x01)
	enum class ETigerDialogueIdleAnimation IdleAnimation; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)
	struct TArray<struct UTigerDialogueCondition*> DialogueConditions; // 0x38(0x10)
	enum class ETigerDialogueRepeatability Repeatability; // 0x48(0x01)
	enum class ETigerDialogueCategory DialogueCategory; // 0x49(0x01)
	bool bIgnoreCategoryRestrictions; // 0x4a(0x01)
	char pad_4B[0x5]; // 0x4b(0x05)
	struct FTigerQuestIdentifier QuestToStartId; // 0x50(0x40)
	struct TArray<struct FTigerGrimoireUnlock> GrimoireUnlocks; // 0x90(0x10)
	bool bSuperfluousAudio; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct UAkAudioEvent* DialogueAudio; // 0xa8(0x08)
	struct UAnimMontage* AnimationToPlay; // 0xb0(0x08)
	uint32_t EventId; // 0xb8(0x04)
	char pad_BC[0xc]; // 0xbc(0x0c)
};

// ScriptStruct Tiger.TigerNPCSpawningPoint
// Size: 0x20 (Inherited: 0x00)
struct FTigerNPCSpawningPoint {
	struct UTigerNPCAsset* NPCAsset; // 0x00(0x08)
	struct FVector SpawnPoint; // 0x08(0x0c)
	struct FRotator Rotation; // 0x14(0x0c)
};

// ScriptStruct Tiger.TigerPropAttachment
// Size: 0x18 (Inherited: 0x00)
struct FTigerPropAttachment {
	struct FName AttachIdentifier; // 0x00(0x08)
	struct TScriptInterface<ITigerPropCompInterface> Prop; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerSpawnGroupBudgetTableRow
// Size: 0x18 (Inherited: 0x08)
struct FTigerSpawnGroupBudgetTableRow : FTableRowBase {
	struct FTigerSpawnGroupBudget Budgets[0x2]; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerSpawnGroupBudget
// Size: 0x08 (Inherited: 0x00)
struct FTigerSpawnGroupBudget {
	int32_t MaxSpawned; // 0x00(0x04)
	int32_t MinSpawned; // 0x04(0x04)
};

// ScriptStruct Tiger.TigerNpcVoCategory
// Size: 0x08 (Inherited: 0x00)
struct FTigerNpcVoCategory {
	struct FName Category; // 0x00(0x08)
};

// ScriptStruct Tiger.TigerOnlineStatusMessageEntry
// Size: 0x28 (Inherited: 0x00)
struct FTigerOnlineStatusMessageEntry {
	struct FTigerOnlineErrorCode ErrorCode; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText Message; // 0x10(0x18)
};

// ScriptStruct Tiger.TigerSessionConnectionParams
// Size: 0x20 (Inherited: 0x00)
struct FTigerSessionConnectionParams {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Tiger.TigerRequest_PromotePlayer
// Size: 0x18 (Inherited: 0x00)
struct FTigerRequest_PromotePlayer {
	struct FString PlayerId; // 0x00(0x10)
	char PlayerChannel; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Tiger.TigerRequest_AcknowledgeStateUpdate
// Size: 0x04 (Inherited: 0x00)
struct FTigerRequest_AcknowledgeStateUpdate {
	uint32_t StateUpdateId; // 0x00(0x04)
};

// ScriptStruct Tiger.TigerRequest_CreateGameSession
// Size: 0x20 (Inherited: 0x00)
struct FTigerRequest_CreateGameSession {
	struct FString GameSessionToken; // 0x00(0x10)
	struct FString SESSIONTYPE; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerResponse_AcceptInvite
// Size: 0x78 (Inherited: 0x18)
struct FTigerResponse_AcceptInvite : FTigerResponseEnvelope {
	struct FString HostPlayerId; // 0x18(0x10)
	struct FString PartyId; // 0x28(0x10)
	struct TArray<struct FString> PartyPlayerIds; // 0x38(0x10)
	int32_t LeaderIndex; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString HostAddr; // 0x50(0x10)
	int32_t HostPort; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FString GameSessionToken; // 0x68(0x10)
};

// ScriptStruct Tiger.TigerRequest_DeclineInvite
// Size: 0x10 (Inherited: 0x00)
struct FTigerRequest_DeclineInvite {
	struct FString PartyInviteToken; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerRequest_AcceptInvite
// Size: 0x10 (Inherited: 0x00)
struct FTigerRequest_AcceptInvite {
	struct FString PartyInviteToken; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerResponse_InvitePlayer
// Size: 0x28 (Inherited: 0x18)
struct FTigerResponse_InvitePlayer : FTigerResponseEnvelope {
	struct FString InviteId; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerRequest_InvitePlayer
// Size: 0x48 (Inherited: 0x00)
struct FTigerRequest_InvitePlayer {
	struct FString GuestPlayerId; // 0x00(0x10)
	char GuestPlayerChannel; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString GameSessionToken; // 0x18(0x10)
	struct FString LanSessionUrl; // 0x28(0x10)
	struct FString UserData; // 0x38(0x10)
};

// ScriptStruct Tiger.TigerResponse_GetPartyMaintenanceMode
// Size: 0x20 (Inherited: 0x18)
struct FTigerResponse_GetPartyMaintenanceMode : FTigerResponseEnvelope {
	bool MaintenanceMode; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Tiger.TigerResponse_GetParty
// Size: 0x78 (Inherited: 0x18)
struct FTigerResponse_GetParty : FTigerResponseEnvelope {
	bool PartyFound; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString PartyId; // 0x20(0x10)
	struct TArray<struct FString> PlayerIds; // 0x30(0x10)
	int32_t LeaderIndex; // 0x40(0x04)
	int32_t MaxMembers; // 0x44(0x04)
	struct FString HostAddr; // 0x48(0x10)
	int32_t HostPort; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString GameSessionToken; // 0x60(0x10)
	bool MaintenanceMode; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct Tiger.TigerPartyInviteToken
// Size: 0x10 (Inherited: 0x00)
struct FTigerPartyInviteToken {
	struct FString Content; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerPlatformPartyId
// Size: 0x20 (Inherited: 0x00)
struct FTigerPlatformPartyId {
	struct FString PlatformPartyId[0x2]; // 0x00(0x20)
};

// ScriptStruct Tiger.TigerClanPassiveAndDefault
// Size: 0x10 (Inherited: 0x00)
struct FTigerClanPassiveAndDefault {
	struct UActorComponent* PassiveLogic; // 0x00(0x08)
	struct UTigerPassiveConfig* PassiveConfig; // 0x08(0x08)
};

// ScriptStruct Tiger.HideousTimingData
// Size: 0x08 (Inherited: 0x00)
struct FHideousTimingData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Tiger.TigerPerformanceIndicatorValues
// Size: 0x10 (Inherited: 0x00)
struct FTigerPerformanceIndicatorValues {
	float WarmupTimer; // 0x00(0x04)
	float CooldownTimer; // 0x04(0x04)
	float SevereValue; // 0x08(0x04)
	float WarningValue; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerPersistentCategoryGroupDefinition
// Size: 0x10 (Inherited: 0x00)
struct FTigerPersistentCategoryGroupDefinition {
	struct TArray<struct FTigerPersistentCategoryDefinition> CategoryDefinitions; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerPersistentCategoryDefinition
// Size: 0x20 (Inherited: 0x08)
struct FTigerPersistentCategoryDefinition : FTableRowBase {
	enum class ETigerPersistentStoreCategory Category; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FTigerPersistentItemDefinition> AvailableItems; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerPersistentItemDefinition
// Size: 0x30 (Inherited: 0x00)
struct FTigerPersistentItemDefinition {
	struct FTigerItemId ItemId; // 0x00(0x08)
	struct FSoftObjectPath ItemClassPath; // 0x08(0x18)
	int32_t Cost; // 0x20(0x04)
	int32_t StorePriority; // 0x24(0x04)
	struct FTigerItemId SoftCurrencyId; // 0x28(0x08)
};

// ScriptStruct Tiger.TigerInventoryCombinedItemValue
// Size: 0x10 (Inherited: 0x00)
struct FTigerInventoryCombinedItemValue {
	struct FTigerInventoryItemOwnerType Key; // 0x00(0x03)
	char pad_3[0x5]; // 0x03(0x05)
	struct UTigerInventoryItemBase* Value; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerInventoryItemOwnerType
// Size: 0x03 (Inherited: 0x00)
struct FTigerInventoryItemOwnerType {
	enum class ETigerClan Clan; // 0x00(0x01)
	enum class ETigerPowerKitType Archetype; // 0x01(0x01)
	enum class ETigerGender Gender; // 0x02(0x01)
};

// ScriptStruct Tiger.TigerLoginFailedInfo
// Size: 0x20 (Inherited: 0x00)
struct FTigerLoginFailedInfo {
	enum class ETigerLoginResult FailReason; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FTigerBanInfo BanInfo; // 0x08(0x18)
};

// ScriptStruct Tiger.TigerBanInfo
// Size: 0x18 (Inherited: 0x00)
struct FTigerBanInfo {
	char Reason; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString EndsAt; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerProgressedQuestWrapper
// Size: 0x28 (Inherited: 0x00)
struct FTigerProgressedQuestWrapper {
	struct FText QuestDescription; // 0x00(0x18)
	struct TArray<struct FTigerProgressedObjectiveWrapper> ProgressedObjectives; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerProgressedObjectiveWrapper
// Size: 0x0c (Inherited: 0x00)
struct FTigerProgressedObjectiveWrapper {
	int32_t TargetValue; // 0x00(0x04)
	int32_t PostSessionProgress; // 0x04(0x04)
	int32_t PreSessionProgress; // 0x08(0x04)
};

// ScriptStruct Tiger.TigerItemIdWithPriceJSON
// Size: 0x28 (Inherited: 0x00)
struct FTigerItemIdWithPriceJSON {
	struct FString ItemId; // 0x00(0x10)
	struct FTigerItemPriceJSON Price; // 0x10(0x18)
};

// ScriptStruct Tiger.TigerItemPriceJSON
// Size: 0x18 (Inherited: 0x00)
struct FTigerItemPriceJSON {
	int32_t Amount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString SoftCurrencyId; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerPingNotificationUIData
// Size: 0x28 (Inherited: 0x00)
struct FTigerPingNotificationUIData {
	struct FText NotificationText; // 0x00(0x18)
	struct FTigerPingIconData IconData; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerPingIconData
// Size: 0x10 (Inherited: 0x00)
struct FTigerPingIconData {
	struct UTexture2D* Texture; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	enum class ETigerUIColor TintColor; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Tiger.TigerPingCoordinatorEntry
// Size: 0x48 (Inherited: 0x00)
struct FTigerPingCoordinatorEntry {
	struct FTigerUniquePingId UniqueID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UTigerPingBase* PingClass; // 0x08(0x08)
	struct TWeakObjectPtr<struct AActor> ContextActor; // 0x10(0x08)
	struct UDataAsset* ContextObject; // 0x18(0x08)
	char TelemetryTypeId; // 0x20(0x01)
	char pad_21[0x27]; // 0x21(0x27)
};

// ScriptStruct Tiger.TigerFastRepMovementData
// Size: 0x28 (Inherited: 0x00)
struct FTigerFastRepMovementData {
	struct FVector_NetQuantize LinearVelocity; // 0x00(0x0c)
	struct FVector_NetQuantize100 Location; // 0x0c(0x0c)
	struct FRotator Rotation; // 0x18(0x0c)
	char PackedMovementMode; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Tiger.TigerPassiveWithLogicArray
// Size: 0x10 (Inherited: 0x00)
struct FTigerPassiveWithLogicArray {
	struct TArray<struct FTigerClanPassiveAndDefault> Passives; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerMovementAchievementData
// Size: 0x14 (Inherited: 0x00)
struct FTigerMovementAchievementData {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct Tiger.TigerAttackingNPCCollection
// Size: 0x18 (Inherited: 0x00)
struct FTigerAttackingNPCCollection {
	struct TArray<struct TWeakObjectPtr<struct ATigerNPC>> AttackingNPCs; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerNpcThatCanSeePlayerWrapper
// Size: 0x18 (Inherited: 0x00)
struct FTigerNpcThatCanSeePlayerWrapper {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Tiger.TigerNpcThatCanSeePlayerWrapper_Client
// Size: 0x0c (Inherited: 0x00)
struct FTigerNpcThatCanSeePlayerWrapper_Client {
	struct TWeakObjectPtr<struct ATigerBaseNPC> NPC; // 0x00(0x08)
	float LastTimeReactingToPlayerAction; // 0x08(0x04)
};

// ScriptStruct Tiger.TigerInventoryStats
// Size: 0x1c (Inherited: 0x00)
struct FTigerInventoryStats {
	float MeleeDamage; // 0x00(0x04)
	float ShootingDamage; // 0x04(0x04)
	float AbilityDamageBonus; // 0x08(0x04)
	float MeleeDefense; // 0x0c(0x04)
	float ShootingDefense; // 0x10(0x04)
	float AbilityDefense; // 0x14(0x04)
	float AbilityHaste; // 0x18(0x04)
};

// ScriptStruct Tiger.TigerHandIkWallTraceData
// Size: 0x58 (Inherited: 0x00)
struct FTigerHandIkWallTraceData {
	struct FTigerHandIkData RightHandIkData; // 0x00(0x28)
	struct FTigerHandIkData LeftHandIkData; // 0x28(0x28)
	enum class ETraceTypeQuery InTraceChannel; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float TraceLength; // 0x54(0x04)
};

// ScriptStruct Tiger.TigerHandIkData
// Size: 0x28 (Inherited: 0x00)
struct FTigerHandIkData {
	struct FName HandBoneName; // 0x00(0x08)
	struct FVector HandLocation; // 0x08(0x0c)
	float ToWallDistance; // 0x14(0x04)
	bool bTraceSuccessful; // 0x18(0x01)
	char pad_19[0xf]; // 0x19(0x0f)
};

// ScriptStruct Tiger.TigerPlayerAnimationSets
// Size: 0x20 (Inherited: 0x00)
struct FTigerPlayerAnimationSets {
	struct UTigerAnimationSetAsset* AnimationSetByClan[0x4]; // 0x00(0x20)
};

// ScriptStruct Tiger.TigerWallSlideSideSpecificOffsets
// Size: 0x0c (Inherited: 0x00)
struct FTigerWallSlideSideSpecificOffsets {
	float Offset[0x3]; // 0x00(0x0c)
};

// ScriptStruct Tiger.TigerSlotAnimationAsDynamicMontageData
// Size: 0x28 (Inherited: 0x00)
struct FTigerSlotAnimationAsDynamicMontageData {
	struct FName AnimationSequenceName; // 0x00(0x08)
	struct FName SlotNodeName; // 0x08(0x08)
	float BlendInTime; // 0x10(0x04)
	float BlendOutTime; // 0x14(0x04)
	float InPlayRate; // 0x18(0x04)
	float BlendoutTriggerTime; // 0x1c(0x04)
	float InTimeToStartMontageAt; // 0x20(0x04)
	int32_t LoopCount; // 0x24(0x04)
};

// ScriptStruct Tiger.TigerPlayerLevelData
// Size: 0x08 (Inherited: 0x00)
struct FTigerPlayerLevelData {
	uint32_t Level; // 0x00(0x04)
	uint32_t Exp; // 0x04(0x04)
};

// ScriptStruct Tiger.TigerSeasonalData
// Size: 0x10 (Inherited: 0x00)
struct FTigerSeasonalData {
	uint32_t OldExp; // 0x00(0x04)
	uint32_t NewExp; // 0x04(0x04)
	uint32_t OldLevel; // 0x08(0x04)
	uint32_t NewLevel; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerPlayerIdWithPlacement
// Size: 0x18 (Inherited: 0x00)
struct FTigerPlayerIdWithPlacement {
	struct FString PlayerId; // 0x00(0x10)
	int32_t Placement; // 0x10(0x04)
	char Platform; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Tiger.TigerResponse_GetPremiumCurrencyBalance
// Size: 0x20 (Inherited: 0x18)
struct FTigerResponse_GetPremiumCurrencyBalance : FTigerResponseEnvelope {
	uint64_t Balance; // 0x18(0x08)
};

// ScriptStruct Tiger.TigerResponse_IncrementPremiumCurrency
// Size: 0x28 (Inherited: 0x18)
struct FTigerResponse_IncrementPremiumCurrency : FTigerResponseEnvelope {
	uint64_t OldAmount; // 0x18(0x08)
	uint64_t NewAmount; // 0x20(0x08)
};

// ScriptStruct Tiger.TigerRequest_IncrementPremiumCurrency
// Size: 0x08 (Inherited: 0x00)
struct FTigerRequest_IncrementPremiumCurrency {
	uint64_t Amount; // 0x00(0x08)
};

// ScriptStruct Tiger.TigerResponse_GetStoreEntriesChecksum
// Size: 0x20 (Inherited: 0x18)
struct FTigerResponse_GetStoreEntriesChecksum : FTigerResponseEnvelope {
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct Tiger.TigerResponse_GetStoreEntries
// Size: 0x30 (Inherited: 0x18)
struct FTigerResponse_GetStoreEntries : FTigerResponseEnvelope {
	struct TArray<struct FTigerResponse_StoreEntry> StoreEntries; // 0x18(0x10)
	int64_t Checksum; // 0x28(0x08)
};

// ScriptStruct Tiger.TigerResponse_StoreEntry
// Size: 0x240 (Inherited: 0x00)
struct FTigerResponse_StoreEntry {
	struct FString StoreEntryID; // 0x00(0x10)
	uint32_t PremiumPrice; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString ImagePath; // 0x18(0x10)
	uint32_t DiscountedPrice; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FDateTime StartAt; // 0x30(0x08)
	struct FDateTime EndsAt; // 0x38(0x08)
	uint32_t Slot; // 0x40(0x04)
	bool HasLocalizableName; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FTigerResponse_LocalizableString LocalizableName; // 0x48(0xf0)
	bool HasLocalizableDescription; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
	struct FTigerResponse_LocalizableString LocalizableDescription; // 0x140(0xf0)
	struct TArray<struct FTigerResponse_StoreEntryItem> Items; // 0x230(0x10)
};

// ScriptStruct Tiger.TigerResponse_StoreEntryItem
// Size: 0x18 (Inherited: 0x00)
struct FTigerResponse_StoreEntryItem {
	struct FString ItemId; // 0x00(0x10)
	uint32_t Quantity; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerResponse_LocalizableString
// Size: 0xf0 (Inherited: 0x00)
struct FTigerResponse_LocalizableString {
	struct FString English; // 0x00(0x10)
	struct FString British; // 0x10(0x10)
	struct FString French; // 0x20(0x10)
	struct FString Italian; // 0x30(0x10)
	struct FString German; // 0x40(0x10)
	struct FString Spanish; // 0x50(0x10)
	struct FString Latin; // 0x60(0x10)
	struct FString Portuguese; // 0x70(0x10)
	struct FString PortugueseBrazilian; // 0x80(0x10)
	struct FString Polish; // 0x90(0x10)
	struct FString Russian; // 0xa0(0x10)
	struct FString Japanese; // 0xb0(0x10)
	struct FString Korean; // 0xc0(0x10)
	struct FString ChineseSimplified; // 0xd0(0x10)
	struct FString ChineseTraditional; // 0xe0(0x10)
};

// ScriptStruct Tiger.TigerResponse_GetServerMetricsConfig
// Size: 0x28 (Inherited: 0x18)
struct FTigerResponse_GetServerMetricsConfig : FTigerResponseEnvelope {
	struct FString MetricsConfig; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerSeasonConfigResponse_DailyRewardCollection
// Size: 0x20 (Inherited: 0x00)
struct FTigerSeasonConfigResponse_DailyRewardCollection {
	struct TArray<struct FString> TrackRewardIds; // 0x00(0x10)
	struct TArray<struct FTigerSeasonConfigResponse_DailyFinalReward> DailyFinalRewardWeeks; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerSeasonConfigResponse_DailyFinalReward
// Size: 0x10 (Inherited: 0x00)
struct FTigerSeasonConfigResponse_DailyFinalReward {
	struct TArray<struct FString> DailyFinalRewardIds; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerSeasonConfigResponse_ChallengeCollection
// Size: 0x30 (Inherited: 0x00)
struct FTigerSeasonConfigResponse_ChallengeCollection {
	struct TArray<struct FTigerSeasonConfigResponse_WeeklyChallengeDefinition> ChallengeDefinitions; // 0x00(0x10)
	struct TArray<struct FString> SequentialRewardIds; // 0x10(0x10)
	struct FDateTime UnlockDate; // 0x20(0x08)
	struct FDateTime LockDate; // 0x28(0x08)
};

// ScriptStruct Tiger.TigerSeasonConfigResponse_WeeklyChallengeDefinition
// Size: 0x18 (Inherited: 0x00)
struct FTigerSeasonConfigResponse_WeeklyChallengeDefinition {
	struct FTigerChallengeTypeID ChallengeStorageID; // 0x00(0x04)
	struct FTigerChallengeTypeID ChallengeTypeID; // 0x04(0x04)
	struct TArray<struct FString> RewardIds; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerSeasonConfigResponse_ArchetypeRewards
// Size: 0x90 (Inherited: 0x00)
struct FTigerSeasonConfigResponse_ArchetypeRewards {
	struct FTigerSeasonConfigResponse_Archetypes Archetypes[0x9]; // 0x00(0x90)
};

// ScriptStruct Tiger.TigerSeasonConfigResponse_Archetypes
// Size: 0x10 (Inherited: 0x00)
struct FTigerSeasonConfigResponse_Archetypes {
	struct TArray<struct FTigerSeasonConfigResponse_RewardTier> Rewards; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerSeasonConfigResponse_RewardTier
// Size: 0x10 (Inherited: 0x00)
struct FTigerSeasonConfigResponse_RewardTier {
	struct TArray<struct FString> ItemIds; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerRequest_RegisterGameSessionResults
// Size: 0x10 (Inherited: 0x00)
struct FTigerRequest_RegisterGameSessionResults {
	struct TArray<struct FTigerPlayerIdWithPlacement> Result; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerResponse_GetMatchmakingToken
// Size: 0x28 (Inherited: 0x18)
struct FTigerResponse_GetMatchmakingToken : FTigerResponseEnvelope {
	struct FString MatchmakingDataToken; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerRequest_GetMatchmakingToken
// Size: 0x10 (Inherited: 0x00)
struct FTigerRequest_GetMatchmakingToken {
	struct TArray<struct FString> PlayerIds; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerResponse_GetSeasonConfig
// Size: 0x50 (Inherited: 0x18)
struct FTigerResponse_GetSeasonConfig : FTigerResponseEnvelope {
	struct FString Config; // 0x18(0x10)
	struct FString PublicIpv4; // 0x28(0x10)
	struct FString PublicIpv6; // 0x38(0x10)
	struct FDateTime CurrentDateTime; // 0x48(0x08)
};

// ScriptStruct Tiger.TigerResponse_BuyItem
// Size: 0x130 (Inherited: 0x18)
struct FTigerResponse_BuyItem : FTigerResponseEnvelope {
	struct FTigerResponse_TransactionalPlayerData Transactional; // 0x18(0x118)
};

// ScriptStruct Tiger.TigerResponse_TransactionalPlayerData
// Size: 0x118 (Inherited: 0x00)
struct FTigerResponse_TransactionalPlayerData {
	int32_t Version; // 0x00(0x04)
	uint32_t SeasonId; // 0x04(0x04)
	uint32_t SeasonLevel; // 0x08(0x04)
	uint32_t SeasonLevelExp; // 0x0c(0x04)
	uint32_t SeasonPlacementExpBonusPercentage; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TMap<struct FString, struct FTigerResponse_GenericExp> GenericExps; // 0x18(0x50)
	struct TMap<struct FString, int32_t> InventoryItems; // 0x68(0x50)
	struct TMap<struct FString, struct FString> CustomizationConfigs; // 0xb8(0x50)
	float Rating; // 0x108(0x04)
	int32_t RankPoints; // 0x10c(0x04)
	uint64_t PremiumCurrencyBalance; // 0x110(0x08)
};

// ScriptStruct Tiger.TigerResponse_GenericExp
// Size: 0x08 (Inherited: 0x00)
struct FTigerResponse_GenericExp {
	uint32_t Level; // 0x00(0x04)
	uint32_t Exp; // 0x04(0x04)
};

// ScriptStruct Tiger.TigerRequest_SetCustomizationConfigs
// Size: 0x20 (Inherited: 0x00)
struct FTigerRequest_SetCustomizationConfigs {
	struct TArray<struct FString> Keys; // 0x00(0x10)
	struct TArray<struct FString> Values; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerResponse_BuyStoreEntries
// Size: 0x148 (Inherited: 0x18)
struct FTigerResponse_BuyStoreEntries : FTigerResponseEnvelope {
	struct FTigerResponse_TransactionalPlayerData Transactional; // 0x18(0x118)
	struct TArray<struct FTigerBoughtItemElement> BoughtItems; // 0x130(0x10)
	char BuyResult; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
};

// ScriptStruct Tiger.TigerBoughtItemElement
// Size: 0x18 (Inherited: 0x00)
struct FTigerBoughtItemElement {
	struct FString ItemId; // 0x00(0x10)
	uint32_t Quantity; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerRequest_BuyStoreEntries
// Size: 0x28 (Inherited: 0x00)
struct FTigerRequest_BuyStoreEntries {
	struct TArray<struct FTigerStoreEntryAndQuantity> StoreEntriesToBuy; // 0x00(0x10)
	uint32_t TotalCost; // 0x10(0x04)
	char Channel; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FString PlatformEntitlementsToken; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerStoreEntryAndQuantity
// Size: 0x18 (Inherited: 0x00)
struct FTigerStoreEntryAndQuantity {
	struct FString ItemId; // 0x00(0x10)
	uint32_t Quantity; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerRequest_BuyItems
// Size: 0x60 (Inherited: 0x00)
struct FTigerRequest_BuyItems {
	struct TArray<struct FTigerItemIdWithQuantity> ItemsToBuy; // 0x00(0x10)
	struct TArray<struct FString> CustomizationKeys; // 0x10(0x10)
	struct TArray<struct FString> CustomizationValues; // 0x20(0x10)
	int32_t TotalCost; // 0x30(0x04)
	int32_t CurrencyAmountToAdd; // 0x34(0x04)
	uint32_t SeasonPlacementExpBoostPercentageToAdd; // 0x38(0x04)
	char Channel; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct TArray<struct FTigerItemIdWithQuantity> ItemsToConsume; // 0x40(0x10)
	struct FString PlatformEntitlementsToken; // 0x50(0x10)
};

// ScriptStruct Tiger.TigerItemIdWithQuantity
// Size: 0x18 (Inherited: 0x00)
struct FTigerItemIdWithQuantity {
	struct FString ID; // 0x00(0x10)
	uint32_t Quantity; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerResponse_GetStoreItemConfigs
// Size: 0x68 (Inherited: 0x18)
struct FTigerResponse_GetStoreItemConfigs : FTigerResponseEnvelope {
	struct TMap<struct FString, struct FTigerResponse_CategoryGroupDefinition> CategoryGroups; // 0x18(0x50)
};

// ScriptStruct Tiger.TigerResponse_CategoryGroupDefinition
// Size: 0x10 (Inherited: 0x00)
struct FTigerResponse_CategoryGroupDefinition {
	struct FString CategoryDefinitions; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerRequest_StoreEntryConfig
// Size: 0x01 (Inherited: 0x00)
struct FTigerRequest_StoreEntryConfig {
	char Show; // 0x00(0x01)
};

// ScriptStruct Tiger.TigerRequest_UpdatePlayerRankPoints
// Size: 0x04 (Inherited: 0x00)
struct FTigerRequest_UpdatePlayerRankPoints {
	uint32_t RankPoints; // 0x00(0x04)
};

// ScriptStruct Tiger.TigerRequest_UpdatePlayerData
// Size: 0x20 (Inherited: 0x00)
struct FTigerRequest_UpdatePlayerData {
	struct FString Data; // 0x00(0x10)
	struct FString CardData; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerResponse_GetCreatePlayer
// Size: 0x180 (Inherited: 0x18)
struct FTigerResponse_GetCreatePlayer : FTigerResponseEnvelope {
	struct FTigerResponse_TransactionalPlayerData Transactional; // 0x18(0x118)
	struct FString Data; // 0x130(0x10)
	struct FString CardData; // 0x140(0x10)
	bool Banned; // 0x150(0x01)
	char BanReason; // 0x151(0x01)
	char pad_152[0x6]; // 0x152(0x06)
	struct FString BanEndsAt; // 0x158(0x10)
	bool Muted; // 0x168(0x01)
	char MutedReason; // 0x169(0x01)
	char pad_16A[0x6]; // 0x16a(0x06)
	struct FString MutedEndsAt; // 0x170(0x10)
};

// ScriptStruct Tiger.TigerRequest_GetCreatePlayer
// Size: 0x10 (Inherited: 0x00)
struct FTigerRequest_GetCreatePlayer {
	struct FString PlatformEntitlementsToken; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerOutfitCustomizationConfigValue
// Size: 0x04 (Inherited: 0x00)
struct FTigerOutfitCustomizationConfigValue {
	int32_t HoodieIndex; // 0x00(0x04)
};

// ScriptStruct Tiger.TigerResponse_UpdateSeasonProgress
// Size: 0x78 (Inherited: 0x18)
struct FTigerResponse_UpdateSeasonProgress : FTigerResponseEnvelope {
	uint32_t OldSeasonExp; // 0x18(0x04)
	uint32_t NewSeasonExp; // 0x1c(0x04)
	uint32_t OldSeasonLevel; // 0x20(0x04)
	uint32_t NewSeasonLevel; // 0x24(0x04)
	struct TMap<struct FString, struct FTigerResponse_GenericExp> NewGenericExps; // 0x28(0x50)
};

// ScriptStruct Tiger.TigerRequest_UpdateSeasonProgress
// Size: 0x78 (Inherited: 0x00)
struct FTigerRequest_UpdateSeasonProgress {
	uint32_t ExpGained; // 0x00(0x04)
	uint32_t ExpRemovedDueToConversion; // 0x04(0x04)
	uint32_t LevelCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString ArchetypeId; // 0x10(0x10)
	uint32_t PlayedSeconds; // 0x20(0x04)
	bool IncrementMatchesPlayed; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct TMap<struct FString, struct FTigerRequest_UpdateSeasonProgressGenericExp> GenericExps; // 0x28(0x50)
};

// ScriptStruct Tiger.TigerRequest_UpdateSeasonProgressGenericExp
// Size: 0x08 (Inherited: 0x00)
struct FTigerRequest_UpdateSeasonProgressGenericExp {
	uint32_t Level; // 0x00(0x04)
	uint32_t Exp; // 0x04(0x04)
};

// ScriptStruct Tiger.TigerResponse_IncrementSeasonExp
// Size: 0x20 (Inherited: 0x18)
struct FTigerResponse_IncrementSeasonExp : FTigerResponseEnvelope {
	uint32_t OldExp; // 0x18(0x04)
	uint32_t NewExp; // 0x1c(0x04)
};

// ScriptStruct Tiger.TigerRequest_IncrementSeasonExp
// Size: 0x04 (Inherited: 0x00)
struct FTigerRequest_IncrementSeasonExp {
	uint32_t Exp; // 0x00(0x04)
};

// ScriptStruct Tiger.TigerRequest_UpdateLastUse
// Size: 0x01 (Inherited: 0x00)
struct FTigerRequest_UpdateLastUse {
	char CharacterId; // 0x00(0x01)
};

// ScriptStruct Tiger.TigerResponse_GetCharactersForPlayer
// Size: 0x28 (Inherited: 0x18)
struct FTigerResponse_GetCharactersForPlayer : FTigerResponseEnvelope {
	struct TArray<struct FTigerResponse_Character> Characters; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerResponse_Character
// Size: 0x20 (Inherited: 0x00)
struct FTigerResponse_Character {
	char CharacterId; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Data; // 0x08(0x10)
	int64_t LastUsedAt; // 0x18(0x08)
};

// ScriptStruct Tiger.TigerResponse_GetCharacter
// Size: 0x38 (Inherited: 0x18)
struct FTigerResponse_GetCharacter : FTigerResponseEnvelope {
	struct FTigerResponse_Character Character; // 0x18(0x20)
};

// ScriptStruct Tiger.TigerRequest_UpdateCharacter
// Size: 0xe0 (Inherited: 0x00)
struct FTigerRequest_UpdateCharacter {
	struct FTigerPersistentPlayerCharacterData CharacterData; // 0x00(0xe0)
};

// ScriptStruct Tiger.TigerRequest_AddCharacter
// Size: 0x01 (Inherited: 0x00)
struct FTigerRequest_AddCharacter {
	char Archetype; // 0x00(0x01)
};

// ScriptStruct Tiger.TigerResponse_GetPlayerInfoFromTicket
// Size: 0x50 (Inherited: 0x18)
struct FTigerResponse_GetPlayerInfoFromTicket : FTigerResponseEnvelope {
	struct FString PlayerId; // 0x18(0x10)
	struct FString SharkmobUserId; // 0x28(0x10)
	struct FString PlayerName; // 0x38(0x10)
	char Channel; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Tiger.TigerRequest_GetPlayerInfoFromTicket
// Size: 0x10 (Inherited: 0x00)
struct FTigerRequest_GetPlayerInfoFromTicket {
	struct FString Ticket; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerResponse_GetVersionIsValid
// Size: 0x40 (Inherited: 0x18)
struct FTigerResponse_GetVersionIsValid : FTigerResponseEnvelope {
	bool VersionIsValid; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString PublicIpv4; // 0x20(0x10)
	struct FString PublicIpv6; // 0x30(0x10)
};

// ScriptStruct Tiger.TigerResponse_GetLonelyFishTicket
// Size: 0x50 (Inherited: 0x18)
struct FTigerResponse_GetLonelyFishTicket : FTigerResponseEnvelope {
	struct FString Ticket; // 0x18(0x10)
	struct FString PlayerId; // 0x28(0x10)
	struct FString SharkmobUserName; // 0x38(0x10)
	float DesiredRefreshIntervalMinutes; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Tiger.TigerRequest_GetLonelyFishTicket
// Size: 0x58 (Inherited: 0x00)
struct FTigerRequest_GetLonelyFishTicket {
	struct FString AuthenticationOpenId; // 0x00(0x10)
	struct FString AuthenticationToken; // 0x10(0x10)
	char AuthenticationChannelId; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FString LoginToken; // 0x28(0x10)
	struct FString Location; // 0x38(0x10)
	struct FString DevPlayerName; // 0x48(0x10)
};

// ScriptStruct Tiger.TigerPlayerGridCell
// Size: 0x30 (Inherited: 0x00)
struct FTigerPlayerGridCell {
	struct TArray<int32_t> CellIndexOffsets; // 0x00(0x10)
	struct FVector2D WorldPosition; // 0x10(0x08)
	int32_t PlayersInCellArea; // 0x18(0x04)
	int32_t ClosestPlayerCellDistance; // 0x1c(0x04)
	struct TArray<struct TWeakObjectPtr<struct ATigerPlayer>> PlayersInCell; // 0x20(0x10)
};

// ScriptStruct Tiger.BloodHuntMarker
// Size: 0x10 (Inherited: 0x00)
struct FBloodHuntMarker {
	struct UTigerCompassMarkerWidget* CompassMarker; // 0x00(0x08)
	struct UTigerMapMarkerProxy* MapMarkerProxy; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerPlayerMaterialOverrideCopyData
// Size: 0x10 (Inherited: 0x00)
struct FTigerPlayerMaterialOverrideCopyData {
	enum class ETigerCharacterMeshPart BodyPart; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t MaterialIndex; // 0x04(0x04)
	struct FName ParameterName; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerPlayerMeshMaterialData
// Size: 0x10 (Inherited: 0x00)
struct FTigerPlayerMeshMaterialData {
	struct TArray<struct UMaterialInterface*> OriginalMaterials; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerPlayerNetSubscription
// Size: 0x18 (Inherited: 0x00)
struct FTigerPlayerNetSubscription {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Tiger.TigerPlayerNetSubscriptionMask
// Size: 0x04 (Inherited: 0x00)
struct FTigerPlayerNetSubscriptionMask {
	int32_t Mask; // 0x00(0x04)
};

// ScriptStruct Tiger.TigerPlayerSavedLocation
// Size: 0x10 (Inherited: 0x00)
struct FTigerPlayerSavedLocation {
	struct FVector Location; // 0x00(0x0c)
	float Timestamp; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerPaperDollHighlightComponents
// Size: 0x50 (Inherited: 0x00)
struct FTigerPaperDollHighlightComponents {
	struct TMap<struct USpotLightComponent*, float> SpotLightIntensities; // 0x00(0x50)
};

// ScriptStruct Tiger.TigerPremiumCurrencyPackData
// Size: 0x50 (Inherited: 0x00)
struct FTigerPremiumCurrencyPackData {
	char pad_0[0x10]; // 0x00(0x10)
	int32_t Amount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Currency; // 0x18(0x10)
	struct FString ImagePath; // 0x28(0x10)
	int32_t Bonus; // 0x38(0x04)
	float Price; // 0x3c(0x04)
	float RegularPrice; // 0x40(0x04)
	float UpsellPrice; // 0x44(0x04)
	enum class ETigerPremiumCurrencyPackDiscount DiscountType; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Tiger.TigerRequest_DsPresence
// Size: 0x20 (Inherited: 0x00)
struct FTigerRequest_DsPresence {
	struct FString DsInstanceId; // 0x00(0x10)
	struct TArray<struct FString> PlayerIds; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerRequest_SetInterestedPlayers
// Size: 0x10 (Inherited: 0x00)
struct FTigerRequest_SetInterestedPlayers {
	struct TArray<struct FString> InterestedPlayers; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerRequest_SetPlayerInfo
// Size: 0x20 (Inherited: 0x00)
struct FTigerRequest_SetPlayerInfo {
	struct FString PlayerLevel; // 0x00(0x10)
	struct FString CardData; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerRequest_SetLocation
// Size: 0x10 (Inherited: 0x00)
struct FTigerRequest_SetLocation {
	struct FString Location; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerRequest_Presence
// Size: 0x20 (Inherited: 0x00)
struct FTigerRequest_Presence {
	struct FString Location; // 0x00(0x10)
	struct TArray<struct FString> InterestedPlayers; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerResponse_Presence
// Size: 0x20 (Inherited: 0x18)
struct FTigerResponse_Presence : FTigerResponseEnvelope {
	bool ResendData; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Tiger.TigerResponse_GetPlayers
// Size: 0x30 (Inherited: 0x18)
struct FTigerResponse_GetPlayers : FTigerResponseEnvelope {
	struct TArray<struct FPresenceInfo> InterestedPlayers; // 0x18(0x10)
	bool ResendData; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Tiger.PresenceInfo
// Size: 0x28 (Inherited: 0x00)
struct FPresenceInfo {
	struct FString PlayerId; // 0x00(0x10)
	struct FString Location; // 0x10(0x10)
	bool IsOnline; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Tiger.TigerPromotionalPopupConfig
// Size: 0xf8 (Inherited: 0x00)
struct FTigerPromotionalPopupConfig {
	struct TMap<struct FString, struct FString> PromoPopup_BgImage; // 0x00(0x50)
	struct TMap<struct FString, struct FString> PromoPopup_Title; // 0x50(0x50)
	struct TMap<struct FString, struct FString> PromoPopup_Paragraph; // 0xa0(0x50)
	int32_t PopupTriggerInterval; // 0xf0(0x04)
	int32_t PopupVersion; // 0xf4(0x04)
};

// ScriptStruct Tiger.TigerPromotionalPopupConfigEntry
// Size: 0x40 (Inherited: 0x00)
struct FTigerPromotionalPopupConfigEntry {
	struct FString ImageUrl; // 0x00(0x10)
	struct FText Title; // 0x10(0x18)
	struct FText Paragraph; // 0x28(0x18)
};

// ScriptStruct Tiger.TigerPromotionalUiData
// Size: 0x10 (Inherited: 0x00)
struct FTigerPromotionalUiData {
	struct FDateTime LastShowDateTime; // 0x00(0x08)
	int32_t LastShowVersion; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerQueuedTextPromptPriorityEntry
// Size: 0x18 (Inherited: 0x00)
struct FTigerQueuedTextPromptPriorityEntry {
	struct FName PropertyName; // 0x00(0x08)
	struct UTigerSimpleTextPrompt* PromptClass; // 0x08(0x08)
	struct FName VisibleName; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerQueuedTextPrompt
// Size: 0x60 (Inherited: 0x00)
struct FTigerQueuedTextPrompt {
	struct UTigerSimpleTextPrompt* Prompt; // 0x00(0x08)
	char pad_8[0x58]; // 0x08(0x58)
};

// ScriptStruct Tiger.TigerDummyPropAttachment
// Size: 0x70 (Inherited: 0x00)
struct FTigerDummyPropAttachment {
	struct FTigerPropAttachmentInfo AttachmentInfo; // 0x00(0x60)
	bool bShow; // 0x60(0x01)
	char pad_61[0xf]; // 0x61(0x0f)
};

// ScriptStruct Tiger.TigerPushMessage
// Size: 0x10 (Inherited: 0x00)
struct FTigerPushMessage {
	struct FString MsgType; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerDsPushRegisterReq
// Size: 0x40 (Inherited: 0x10)
struct FTigerDsPushRegisterReq : FTigerPushMessage {
	struct FString ClientProtocolVersion; // 0x10(0x10)
	struct FString ServerSecret; // 0x20(0x10)
	struct FString DsInstanceId; // 0x30(0x10)
};

// ScriptStruct Tiger.TigerGameClientPushRegisterReq
// Size: 0x30 (Inherited: 0x10)
struct FTigerGameClientPushRegisterReq : FTigerPushMessage {
	struct FString ClientProtocolVersion; // 0x10(0x10)
	struct FString Ticket; // 0x20(0x10)
};

// ScriptStruct Tiger.MutePush
// Size: 0x28 (Inherited: 0x00)
struct FMutePush {
	struct FString PlayerId; // 0x00(0x10)
	bool IsMuted; // 0x10(0x01)
	char MutedReason; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct FString MutedEndsAt; // 0x18(0x10)
};

// ScriptStruct Tiger.PresencePush
// Size: 0x28 (Inherited: 0x00)
struct FPresencePush {
	struct FString PlayerId; // 0x00(0x10)
	struct FString Location; // 0x10(0x10)
	bool IsOnline; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Tiger.OnlinePresencePush
// Size: 0x18 (Inherited: 0x00)
struct FOnlinePresencePush {
	struct FString PlayerId; // 0x00(0x10)
	bool IsOnline; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Tiger.LocationPresencePush
// Size: 0x20 (Inherited: 0x00)
struct FLocationPresencePush {
	struct FString PlayerId; // 0x00(0x10)
	struct FString Location; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerPartyPokePush
// Size: 0x10 (Inherited: 0x00)
struct FTigerPartyPokePush {
	struct FString PartyId; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerPartyTravelPush
// Size: 0x48 (Inherited: 0x00)
struct FTigerPartyTravelPush {
	struct FString SESSIONTYPE; // 0x00(0x10)
	struct FString PartyId; // 0x10(0x10)
	struct FString GameSessionToken; // 0x20(0x10)
	struct FString Host; // 0x30(0x10)
	int32_t Port; // 0x40(0x04)
	uint32_t StateUpdateId; // 0x44(0x04)
};

// ScriptStruct Tiger.TigerRemovedFromPartyPush
// Size: 0x10 (Inherited: 0x00)
struct FTigerRemovedFromPartyPush {
	struct FString PartyId; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerChatNotificationPush
// Size: 0x20 (Inherited: 0x00)
struct FTigerChatNotificationPush {
	struct FString PlayerId; // 0x00(0x10)
	struct FString Command; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerMemberLeftPush
// Size: 0x30 (Inherited: 0x00)
struct FTigerMemberLeftPush {
	struct FString PartyId; // 0x00(0x10)
	struct FString DepartingPlayerId; // 0x10(0x10)
	struct FString NewLeaderPlayerId; // 0x20(0x10)
};

// ScriptStruct Tiger.TigerMemberJoinedPush
// Size: 0x20 (Inherited: 0x00)
struct FTigerMemberJoinedPush {
	struct FString PartyId; // 0x00(0x10)
	struct FString JoiningPlayerId; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerInviteResponsePush
// Size: 0x50 (Inherited: 0x00)
struct FTigerInviteResponsePush {
	struct FString InviteId; // 0x00(0x10)
	bool Accepted; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString PartyId; // 0x18(0x10)
	struct FString GuestPlayerId; // 0x28(0x10)
	struct TArray<struct FString> PlayerIds; // 0x38(0x10)
	int32_t LeaderIndex; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Tiger.TigerInvitePush
// Size: 0x58 (Inherited: 0x00)
struct FTigerInvitePush {
	struct FString InviteId; // 0x00(0x10)
	struct FString HostPlayerId; // 0x10(0x10)
	struct FString HostPlayerName; // 0x20(0x10)
	enum class EShAccountChannel HostPlayerChannel; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString PartyInviteToken; // 0x38(0x10)
	struct FString UserData; // 0x48(0x10)
};

// ScriptStruct Tiger.TigerQuestItemLocationDetails
// Size: 0x50 (Inherited: 0x00)
struct FTigerQuestItemLocationDetails {
	struct FTigerQuestIdentifier QuestIdentifier; // 0x00(0x40)
	struct FVector Location; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Tiger.TigerQuestCollectionEntry
// Size: 0x10 (Inherited: 0x00)
struct FTigerQuestCollectionEntry {
	int32_t UniqueQuestID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UTigerQuest* ReferenceQuest; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerProjectileAreaEffect
// Size: 0x10 (Inherited: 0x00)
struct FTigerProjectileAreaEffect {
	struct ATigerAreaEffect* AreaEffect; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerShotProjectileData
// Size: 0x38 (Inherited: 0x00)
struct FTigerShotProjectileData {
	char pad_0[0x30]; // 0x00(0x30)
	struct UTigerRangedWeapon* RangedWeapon; // 0x30(0x08)
};

// ScriptStruct Tiger.TigerRankConfig
// Size: 0x28 (Inherited: 0x00)
struct FTigerRankConfig {
	struct TArray<struct FTigerRankConfig_RankLevel> RankLevels; // 0x00(0x10)
	struct FTigerRankConfig_RankPointGain RankPointGain; // 0x10(0x18)
};

// ScriptStruct Tiger.TigerRankConfig_RankPointGain
// Size: 0x18 (Inherited: 0x00)
struct FTigerRankConfig_RankPointGain {
	int32_t Eliminations; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FTigerRankConfig_Placement> Placements; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerRankConfig_Placement
// Size: 0x0c (Inherited: 0x00)
struct FTigerRankConfig_Placement {
	int32_t Gain; // 0x00(0x04)
	int32_t MinPlacement; // 0x04(0x04)
	int32_t MaxPlacement; // 0x08(0x04)
};

// ScriptStruct Tiger.TigerRankConfig_RankLevel
// Size: 0x28 (Inherited: 0x00)
struct FTigerRankConfig_RankLevel {
	struct FString Name; // 0x00(0x10)
	int32_t RankPointsThreshold; // 0x10(0x04)
	int32_t MatchFee; // 0x14(0x04)
	struct TArray<struct FTigerItemId> RewardItemIds; // 0x18(0x10)
};

// ScriptStruct Tiger.Rank
// Size: 0x18 (Inherited: 0x00)
struct FRank {
	struct FString Name; // 0x00(0x10)
	int32_t RankPoints; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerRegionPingerSettings
// Size: 0x14 (Inherited: 0x00)
struct FTigerRegionPingerSettings {
	int32_t PingNumSamples; // 0x00(0x04)
	int32_t NumPingsToDisregard; // 0x04(0x04)
	float PingTimeoutSeconds; // 0x08(0x04)
	int32_t AllowedConsecutiveFailures; // 0x0c(0x04)
	float WaitSecondsOnUnreachable; // 0x10(0x04)
};

// ScriptStruct Tiger.TigerBookmarkPosition
// Size: 0x40 (Inherited: 0x00)
struct FTigerBookmarkPosition {
	float BookmarkTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Label; // 0x08(0x10)
	struct FVector CameraPosition; // 0x18(0x0c)
	char pad_24[0xc]; // 0x24(0x0c)
	struct FQuat CameraRotation; // 0x30(0x10)
};

// ScriptStruct Tiger.TigerReplayCameraMove
// Size: 0x10 (Inherited: 0x00)
struct FTigerReplayCameraMove {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerReplayCameraPosition
// Size: 0x80 (Inherited: 0x00)
struct FTigerReplayCameraPosition {
	enum class ETigerReplayCameraMode Mode; // 0x00(0x01)
	enum class ETigerReplayCameraRotateMode RotationMode; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t SpectatedId; // 0x04(0x04)
	struct FString LookAtBoneName; // 0x08(0x10)
	struct FVector CameraPosition; // 0x18(0x0c)
	char pad_24[0xc]; // 0x24(0x0c)
	struct FQuat CameraRotation; // 0x30(0x10)
	struct FVector CameraRelativeLocation; // 0x40(0x0c)
	float CameraTime; // 0x4c(0x04)
	enum class ETigerReplayCameraMoveType MoveType; // 0x50(0x01)
	enum class ETigerReplayCameraRelativeMoveType RelativeMoveType; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	float MoveTypeParameter; // 0x54(0x04)
	enum class ETigerReplayCameraTransitionType TransitionType; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float CameraFOV; // 0x5c(0x04)
	float CameraFocalDistance; // 0x60(0x04)
	float CameraFStop; // 0x64(0x04)
	float CameraSensorWidth; // 0x68(0x04)
	bool bCameraTargetFocus; // 0x6c(0x01)
	bool bChaseRelativeCamera; // 0x6d(0x01)
	bool bCameraShakeEnabled; // 0x6e(0x01)
	char pad_6F[0x1]; // 0x6f(0x01)
	float PlayBackSpeed; // 0x70(0x04)
	float CameraShakeScale; // 0x74(0x04)
	char pad_78[0x8]; // 0x78(0x08)
};

// ScriptStruct Tiger.TigerReplayInfo
// Size: 0x30 (Inherited: 0x00)
struct FTigerReplayInfo {
	struct FString ReplayName; // 0x00(0x10)
	struct FString FriendlyName; // 0x10(0x10)
	struct FDateTime Timestamp; // 0x20(0x08)
	int32_t LengthInMS; // 0x28(0x04)
	bool bIsValid; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct Tiger.TigerResurrectToken
// Size: 0x10 (Inherited: 0x00)
struct FTigerResurrectToken {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Tiger.RewardEntryData
// Size: 0x10 (Inherited: 0x00)
struct FRewardEntryData {
	struct TArray<struct UTigerRewardEntry*> RewardEntries; // 0x00(0x10)
};

// ScriptStruct Tiger.SerializableRewardsData
// Size: 0x50 (Inherited: 0x00)
struct FSerializableRewardsData {
	struct TMap<char, struct FSerializableRewardEntries> RewardEntriesByCategory; // 0x00(0x50)
};

// ScriptStruct Tiger.SerializableRewardEntries
// Size: 0x10 (Inherited: 0x00)
struct FSerializableRewardEntries {
	struct TArray<struct FSerializableRewardEntry> RewardEntries; // 0x00(0x10)
};

// ScriptStruct Tiger.SerializableRewardEntry
// Size: 0x18 (Inherited: 0x00)
struct FSerializableRewardEntry {
	struct FString IDString; // 0x00(0x10)
	int32_t UnlockLevel; // 0x10(0x04)
	char EntryType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Tiger.TigerRichIconRow
// Size: 0x90 (Inherited: 0x08)
struct FTigerRichIconRow : FTableRowBase {
	struct FSlateBrush Brush; // 0x08(0x88)
};

// ScriptStruct Tiger.TigerRoofSystemPrimitiveData
// Size: 0x20 (Inherited: 0x00)
struct FTigerRoofSystemPrimitiveData {
	struct FVector4 Color; // 0x00(0x10)
	float Desaturation; // 0x10(0x04)
	char pad_14[0xc]; // 0x14(0x0c)
};

// ScriptStruct Tiger.TigerRoofSystemFreeTransformablePrimitiveData
// Size: 0x20 (Inherited: 0x00)
struct FTigerRoofSystemFreeTransformablePrimitiveData {
	struct FVector4 Color; // 0x00(0x10)
	float Desaturation; // 0x10(0x04)
	char pad_14[0xc]; // 0x14(0x0c)
};

// ScriptStruct Tiger.TigerRoofSystemFreeTransformableMaterialCache
// Size: 0x18 (Inherited: 0x00)
struct FTigerRoofSystemFreeTransformableMaterialCache {
	struct TArray<struct FTigerRoofSystemFreeTransformableMaterialCacheMaterialBinding> MaterialBindings; // 0x00(0x10)
	bool bStaticMeshComponent; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Tiger.TigerRoofSystemFreeTransformableMaterialCacheMaterialBinding
// Size: 0x10 (Inherited: 0x00)
struct FTigerRoofSystemFreeTransformableMaterialCacheMaterialBinding {
	int32_t MaterialIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UMaterialInterface* Material; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerRoofSystemFreeTransformableCorner
// Size: 0x40 (Inherited: 0x00)
struct FTigerRoofSystemFreeTransformableCorner {
	struct UPoseableMeshComponent* CornerComponent; // 0x00(0x08)
	struct UStaticMeshComponent* StaticComponent; // 0x08(0x08)
	struct UProceduralMeshComponent* CollisionComponent; // 0x10(0x08)
	struct FVector TopBoneLocation; // 0x18(0x0c)
	struct FVector LeftBoneLocation; // 0x24(0x0c)
	struct FVector RightBoneLocation; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Tiger.TigerSubLevelBackground
// Size: 0x30 (Inherited: 0x00)
struct FTigerSubLevelBackground {
	struct FSoftObjectPath SubLevel; // 0x00(0x18)
	struct FText UiName; // 0x18(0x18)
};

// ScriptStruct Tiger.TigerRewardUIData
// Size: 0x48 (Inherited: 0x00)
struct FTigerRewardUIData {
	struct FText Name; // 0x00(0x18)
	struct FText Type; // 0x18(0x18)
	bool bIsLocked; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UTigerInventoryItemBase* Item; // 0x38(0x08)
	struct FTigerItemId ItemId; // 0x40(0x08)
};

// ScriptStruct Tiger.TigerItemPreviewData
// Size: 0x18 (Inherited: 0x00)
struct FTigerItemPreviewData {
	struct ATigerBattlepassRewardPreview* PreviewActorClass; // 0x00(0x08)
	struct TArray<struct UTigerInventoryItemBase*> ItemClasses; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerBattlepassRewardPreviewRow
// Size: 0x60 (Inherited: 0x08)
struct FTigerBattlepassRewardPreviewRow : FTableRowBase {
	struct TSoftClassPtr<UObject> ItemClass; // 0x08(0x28)
	struct TSoftClassPtr<UObject> PreviewActorClass; // 0x30(0x28)
	struct FName CameraTag; // 0x58(0x08)
};

// ScriptStruct Tiger.TigerPostProcessSettingsSetup
// Size: 0x10 (Inherited: 0x00)
struct FTigerPostProcessSettingsSetup {
	struct TArray<struct UMaterialInterface*> PostProcessMaterials; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerDsLoginElsewherePush
// Size: 0x20 (Inherited: 0x00)
struct FTigerDsLoginElsewherePush {
	struct FString PlayerId; // 0x00(0x10)
	struct FString OtherDsInstanceId; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerKickPlayerPush
// Size: 0x18 (Inherited: 0x00)
struct FTigerKickPlayerPush {
	struct FString PlayerId; // 0x00(0x10)
	char BanReason; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Tiger.VerifyGameSessionTokenResult
// Size: 0x60 (Inherited: 0x00)
struct FVerifyGameSessionTokenResult {
	bool bVerifiedOk; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString GameSessionId; // 0x08(0x10)
	struct FGroupingInfo GroupingInfo; // 0x18(0x04)
	int32_t GameSessionPlayerCount; // 0x1c(0x04)
	uint32_t GameSessionBotCount; // 0x20(0x04)
	bool MatchSettingsVariationElected; // 0x24(0x01)
	enum class ETigerMatchMode MatchMode; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
	struct FString DsSettings; // 0x28(0x10)
	struct FString GAMEMODEID; // 0x38(0x10)
	struct FString GameModeName; // 0x48(0x10)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct Tiger.TigerResponse_GetGameSessionDsData
// Size: 0x70 (Inherited: 0x18)
struct FTigerResponse_GetGameSessionDsData : FTigerResponseEnvelope {
	int32_t GameSessionPlayerCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString GameSessionId; // 0x20(0x10)
	int32_t GroupSize; // 0x30(0x04)
	enum class ETigerMatchMode MatchMode; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	uint32_t GameSessionBotCount; // 0x38(0x04)
	bool MatchSettingsVariationElected; // 0x3c(0x01)
	char PlatformBackendType; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	struct FString DsSettings; // 0x40(0x10)
	struct FString GAMEMODEID; // 0x50(0x10)
	struct FString GameModeName; // 0x60(0x10)
};

// ScriptStruct Tiger.TigerResponse_MatchSettingsVariationConfig
// Size: 0x30 (Inherited: 0x00)
struct FTigerResponse_MatchSettingsVariationConfig {
	double GasSpeedFactor; // 0x00(0x08)
	int32_t CivilianResonance; // 0x08(0x04)
	bool SwapLootTable; // 0x0c(0x01)
	bool DisableEntity; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	int32_t StartingResonance; // 0x10(0x04)
	int32_t BloodhuntedTimeSeconds; // 0x14(0x04)
	bool AllHighTierLootActive; // 0x18(0x01)
	bool BrokenMasqueradeAtStart; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct TArray<struct FTigerResponse_MatchSettingsVariationParameterSet> ParameterSets; // 0x20(0x10)
};

// ScriptStruct Tiger.TigerResponse_MatchSettingsVariationParameterSet
// Size: 0x18 (Inherited: 0x00)
struct FTigerResponse_MatchSettingsVariationParameterSet {
	struct TArray<struct FString> Parameters; // 0x00(0x10)
	double Probability; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerRequest_GetGameSessionDsData
// Size: 0x38 (Inherited: 0x00)
struct FTigerRequest_GetGameSessionDsData {
	struct FString GameSessionToken; // 0x00(0x10)
	int32_t DsPort; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString PlayerUniqueId; // 0x18(0x10)
	struct FString OverrideIp; // 0x28(0x10)
};

// ScriptStruct Tiger.TigerRequest_RunningGameServerHeartbeat
// Size: 0x60 (Inherited: 0x00)
struct FTigerRequest_RunningGameServerHeartbeat {
	struct FString OverrideIp; // 0x00(0x10)
	int32_t Port; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString DsVersionId; // 0x18(0x10)
	int32_t PlayerCount; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FTigerDsGameSessionDetails SessionDetails; // 0x30(0x30)
};

// ScriptStruct Tiger.TigerResponse_IdleGameServerHeartbeat
// Size: 0x50 (Inherited: 0x18)
struct FTigerResponse_IdleGameServerHeartbeat : FTigerResponseEnvelope {
	bool HasSwitchedToRunning; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FTigerDsGameSessionDetails SessionDetails; // 0x20(0x30)
};

// ScriptStruct Tiger.TigerRequest_IdleGameServerHeartbeat
// Size: 0x30 (Inherited: 0x00)
struct FTigerRequest_IdleGameServerHeartbeat {
	struct FString OverrideIp; // 0x00(0x10)
	int32_t Port; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString DsVersionId; // 0x18(0x10)
	int32_t PlayerCount; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Tiger.TigerRequest_RegisterNewIdle
// Size: 0x28 (Inherited: 0x00)
struct FTigerRequest_RegisterNewIdle {
	struct FString OverrideIp; // 0x00(0x10)
	int32_t Port; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString DsVersionId; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerShockwaveWallData
// Size: 0x60 (Inherited: 0x00)
struct FTigerShockwaveWallData {
	struct TArray<struct UCurveFloat*> SpeedCurve; // 0x00(0x10)
	struct TArray<struct UCurveVector*> EffectExtentCurve; // 0x10(0x10)
	struct TArray<struct FVector> TerrainSweepBoxExtent; // 0x20(0x10)
	struct TArray<float> TravelDistance; // 0x30(0x10)
	struct TArray<float> Damage; // 0x40(0x10)
	struct TArray<struct UTigerBuff*> OnHitBuff; // 0x50(0x10)
};

// ScriptStruct Tiger.TigerSignificanceBudget
// Size: 0x40 (Inherited: 0x00)
struct FTigerSignificanceBudget {
	struct TArray<struct FTigerSignificancePlayerBucket> PlayerBuckets; // 0x00(0x10)
	struct TArray<struct FTigerSignificanceElysiumNpcBucket> ElysiumNpcBuckets; // 0x10(0x10)
	struct TArray<float> PlayerUroScreenSizeThresholds; // 0x20(0x10)
	struct TArray<float> NpcUroScreenSizeThresholds; // 0x30(0x10)
};

// ScriptStruct Tiger.TigerSignificanceElysiumNpcBucket
// Size: 0x10 (Inherited: 0x00)
struct FTigerSignificanceElysiumNpcBucket {
	int32_t BucketSize; // 0x00(0x04)
	float TickRate; // 0x04(0x04)
	uint32_t VisibleMeshesBitMask; // 0x08(0x04)
	bool bForceLastLod; // 0x0c(0x01)
	bool bEnableClothSim; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct Tiger.TigerSignificancePlayerBucket
// Size: 0x14 (Inherited: 0x00)
struct FTigerSignificancePlayerBucket {
	int32_t BucketSize; // 0x00(0x04)
	float TickRate; // 0x04(0x04)
	float MoveCompTickRate; // 0x08(0x04)
	uint32_t VisibleMeshesBitMask; // 0x0c(0x04)
	bool bEnableClothSim; // 0x10(0x01)
	bool bEnableFootIk; // 0x11(0x01)
	enum class ENetworkSmoothingMode NetworkSmoothingMode; // 0x12(0x01)
	char pad_13[0x1]; // 0x13(0x01)
};

// ScriptStruct Tiger.TigerPlayerStateFriendPair
// Size: 0x10 (Inherited: 0x00)
struct FTigerPlayerStateFriendPair {
	struct ATigerPlayerState* PlayerState; // 0x00(0x08)
	struct UTigerFriend* Friend; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerDesiredSpawnLocation
// Size: 0x20 (Inherited: 0x00)
struct FTigerDesiredSpawnLocation {
	struct ATigerPlayerController* PlayerController; // 0x00(0x08)
	struct AActor* AssignedSpawnPoint; // 0x08(0x08)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerSplatmapSplatHistoryItem
// Size: 0x20 (Inherited: 0x00)
struct FTigerSplatmapSplatHistoryItem {
	struct UTexture* Textures[0x4]; // 0x00(0x20)
};

// ScriptStruct Tiger.StaticPhysicsPiercingData
// Size: 0x50 (Inherited: 0x00)
struct FStaticPhysicsPiercingData {
	struct UStaticMeshComponent* PiercingStaticMesh; // 0x00(0x08)
	struct FVector PreviousLocation; // 0x08(0x0c)
	char pad_14[0xc]; // 0x14(0x0c)
	struct FTransform CachedRelativeTransform; // 0x20(0x30)
};

// ScriptStruct Tiger.PlayerStatistic
// Size: 0x18 (Inherited: 0x00)
struct FPlayerStatistic {
	struct FString Name; // 0x00(0x10)
	int32_t Count; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerAnimationStatistic
// Size: 0x18 (Inherited: 0x00)
struct FTigerAnimationStatistic {
	struct FString Name; // 0x00(0x10)
	int32_t RelativeTimePlayed; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerTelemetryPlayerGeneralInfo
// Size: 0x40 (Inherited: 0x00)
struct FTigerTelemetryPlayerGeneralInfo {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct Tiger.TigerTelemetryTutorialLocationsContainer
// Size: 0x10 (Inherited: 0x00)
struct FTigerTelemetryTutorialLocationsContainer {
	struct TArray<struct FTigerTelemetryTutorialLocation> Locations; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerTelemetryTutorialLocation
// Size: 0x20 (Inherited: 0x00)
struct FTigerTelemetryTutorialLocation {
	struct FString ObjectiveId; // 0x00(0x10)
	struct FString Location; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerTelemetryTutorialTimeStampContainer
// Size: 0x10 (Inherited: 0x00)
struct FTigerTelemetryTutorialTimeStampContainer {
	struct TArray<struct FTigerTelemetryTutorialTimeStamp> TimeStamps; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerTelemetryTutorialTimeStamp
// Size: 0x18 (Inherited: 0x00)
struct FTigerTelemetryTutorialTimeStamp {
	struct FString ObjectiveId; // 0x00(0x10)
	float Timestamp; // 0x10(0x04)
	bool bCompleted; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Tiger.TigerTelemetryItemSpawnAmounts
// Size: 0x50 (Inherited: 0x00)
struct FTigerTelemetryItemSpawnAmounts {
	struct TMap<uint64_t, int32_t> ItemAmounts; // 0x00(0x50)
};

// ScriptStruct Tiger.TigerStatusEffect
// Size: 0x0d (Inherited: 0x00)
struct FTigerStatusEffect {
	bool bBlockInteraction; // 0x00(0x01)
	bool bBlockOffensiveActions; // 0x01(0x01)
	bool bBlockObjectInteractions; // 0x02(0x01)
	bool bInvulnerable; // 0x03(0x01)
	bool bInvisible; // 0x04(0x01)
	bool bHidden; // 0x05(0x01)
	bool bLogicHidden; // 0x06(0x01)
	bool bDisableSprint; // 0x07(0x01)
	bool bDisableClimb; // 0x08(0x01)
	bool bDisableDisciplines; // 0x09(0x01)
	bool bDisableRotation; // 0x0a(0x01)
	bool bDisableHeightenedSenses; // 0x0b(0x01)
	bool bBlockAILogic; // 0x0c(0x01)
};

// ScriptStruct Tiger.TigerResponse_GetPremiumCurrencyPacks
// Size: 0x28 (Inherited: 0x18)
struct FTigerResponse_GetPremiumCurrencyPacks : FTigerResponseEnvelope {
	struct TArray<struct FTigerResponse_PremiumCurrencyPack> CurrencyPacks; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerResponse_PremiumCurrencyPack
// Size: 0x60 (Inherited: 0x18)
struct FTigerResponse_PremiumCurrencyPack : FTigerResponseEnvelope {
	struct FString ID; // 0x18(0x10)
	int32_t Amount; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString ImagePath; // 0x30(0x10)
	int16_t Bonus; // 0x40(0x02)
	char pad_42[0x6]; // 0x42(0x06)
	double Price; // 0x48(0x08)
	struct FString CurrencyType; // 0x50(0x10)
};

// ScriptStruct Tiger.TigerRequest_PremiumCurrencyPackById
// Size: 0x10 (Inherited: 0x00)
struct FTigerRequest_PremiumCurrencyPackById {
	struct TArray<struct FString> Ids; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerRequest_PremiumCurrencyPack
// Size: 0x10 (Inherited: 0x00)
struct FTigerRequest_PremiumCurrencyPack {
	struct FString CurrencyType; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerResponse_GetSupportedCurrencyCode
// Size: 0x28 (Inherited: 0x18)
struct FTigerResponse_GetSupportedCurrencyCode : FTigerResponseEnvelope {
	struct FString Type; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerRequest_GetSupportedCurrencyCode
// Size: 0x10 (Inherited: 0x00)
struct FTigerRequest_GetSupportedCurrencyCode {
	struct FString userId; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerRichTextSizeRow
// Size: 0x18 (Inherited: 0x08)
struct FTigerRichTextSizeRow : FTableRowBase {
	struct UObject* FontObject; // 0x08(0x08)
	int32_t Size; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerTelemetryResponse
// Size: 0x18 (Inherited: 0x00)
struct FTigerTelemetryResponse {
	struct FString Error; // 0x00(0x10)
	bool OK; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Tiger.TigerTelemetryData
// Size: 0x80 (Inherited: 0x00)
struct FTigerTelemetryData {
	struct FString PlayerId; // 0x00(0x10)
	struct FString EventName; // 0x10(0x10)
	struct FString Universe; // 0x20(0x10)
	struct FString PlatformType; // 0x30(0x10)
	struct FString ApplicationVersion; // 0x40(0x10)
	struct FString EventTimestamp; // 0x50(0x10)
	struct FString SessionId; // 0x60(0x10)
	struct TArray<struct FTigerTelemetryKeyValuePair> Data; // 0x70(0x10)
};

// ScriptStruct Tiger.TigerTelemetryKeyValuePair
// Size: 0x20 (Inherited: 0x00)
struct FTigerTelemetryKeyValuePair {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerTelemetryDefinitionMaster
// Size: 0x50 (Inherited: 0x00)
struct FTigerTelemetryDefinitionMaster {
	struct TMap<struct FString, struct FTigerTelemetryDefinition> Definitions; // 0x00(0x50)
};

// ScriptStruct Tiger.TigerTelemetryActiveQuestLinesContainer
// Size: 0x10 (Inherited: 0x00)
struct FTigerTelemetryActiveQuestLinesContainer {
	struct TArray<struct FTigerTelemetryActiveQuestData> ActiveQuestLines; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerTelemetryActiveQuestData
// Size: 0x20 (Inherited: 0x00)
struct FTigerTelemetryActiveQuestData {
	struct FString QuestLineId; // 0x00(0x10)
	struct FString ActiveQuestID; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerTelemetryQuestLinesContainer
// Size: 0x10 (Inherited: 0x00)
struct FTigerTelemetryQuestLinesContainer {
	struct TArray<struct FString> QuestLines; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerTelemetryMenuToTimeMapping
// Size: 0x50 (Inherited: 0x00)
struct FTigerTelemetryMenuToTimeMapping {
	struct TMap<struct FString, int32_t> MenuToTimeMapping; // 0x00(0x50)
};

// ScriptStruct Tiger.TigerTelemetryArchetypeAmounts
// Size: 0x50 (Inherited: 0x00)
struct FTigerTelemetryArchetypeAmounts {
	struct TMap<int32_t, int32_t> ArchetypeAmounts; // 0x00(0x50)
};

// ScriptStruct Tiger.TigerTelemetryPerformanceDataAggregator
// Size: 0x110 (Inherited: 0x00)
struct FTigerTelemetryPerformanceDataAggregator {
	char pad_0[0x110]; // 0x00(0x110)
};

// ScriptStruct Tiger.TigerTelemetryEventQuest_Progress
// Size: 0x70 (Inherited: 0x08)
struct FTigerTelemetryEventQuest_Progress : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString GameAppid; // 0x20(0x10)
	struct FString ClientVersion; // 0x30(0x10)
	struct FString InactiveQuestLines; // 0x40(0x10)
	struct FString CompleteQuestLines; // 0x50(0x10)
	struct FString QuestProgress; // 0x60(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventQuest_TimeLimitedQuestProgress
// Size: 0x88 (Inherited: 0x08)
struct FTigerTelemetryEventQuest_TimeLimitedQuestProgress : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString GameAppid; // 0x20(0x10)
	struct FString ClientVersion; // 0x30(0x10)
	struct FString ActiveQuestID; // 0x40(0x10)
	struct FString ActiveQuestLineID; // 0x50(0x10)
	struct FString EventStartDate; // 0x60(0x10)
	struct FString EventEndDate; // 0x70(0x10)
	int32_t QuestsCompleted; // 0x80(0x04)
	int32_t QuestsIncomplete; // 0x84(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventQuest_Complete
// Size: 0x98 (Inherited: 0x08)
struct FTigerTelemetryEventQuest_Complete : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString GameAppid; // 0x20(0x10)
	struct FString ClientVersion; // 0x30(0x10)
	struct FString QuestId; // 0x40(0x10)
	struct FString QuestLineId; // 0x50(0x10)
	struct FString NextQuestId; // 0x60(0x10)
	struct FString NextQuestLineId; // 0x70(0x10)
	struct FString Rewards; // 0x80(0x10)
	int32_t NumGamesPlayed; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventQuest_Started
// Size: 0x88 (Inherited: 0x08)
struct FTigerTelemetryEventQuest_Started : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString GameAppid; // 0x20(0x10)
	struct FString ClientVersion; // 0x30(0x10)
	struct FString QuestId; // 0x40(0x10)
	struct FString QuestLineId; // 0x50(0x10)
	struct FString NextQuestId; // 0x60(0x10)
	struct FString NextQuestLineId; // 0x70(0x10)
	int32_t NumGamesPlayed; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventQuest_ObjectiveComplete
// Size: 0x80 (Inherited: 0x08)
struct FTigerTelemetryEventQuest_ObjectiveComplete : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString GameAppid; // 0x20(0x10)
	struct FString ClientVersion; // 0x30(0x10)
	struct FString QuestId; // 0x40(0x10)
	struct FString QuestLineId; // 0x50(0x10)
	struct FString ObjectiveId; // 0x60(0x10)
	struct FString ObjectiveType; // 0x70(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_Feeding
// Size: 0x68 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_Feeding : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString BattleID; // 0x20(0x10)
	struct FString GameAppid; // 0x30(0x10)
	struct FString InteractLocation; // 0x40(0x10)
	int32_t BloodResonanceType; // 0x50(0x04)
	int32_t FeedingCompleted; // 0x54(0x04)
	struct FString ClientVersion; // 0x58(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_WorldInteraction
// Size: 0x78 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_WorldInteraction : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString BattleID; // 0x20(0x10)
	struct FString GameAppid; // 0x30(0x10)
	struct FString InteractLocation; // 0x40(0x10)
	int32_t MeetsRequirements; // 0x50(0x04)
	int32_t InteractionCompleted; // 0x54(0x04)
	struct FString InteractionId; // 0x58(0x10)
	struct FString ClientVersion; // 0x68(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventSupport_PlayerReport
// Size: 0xc8 (Inherited: 0x08)
struct FTigerTelemetryEventSupport_PlayerReport : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString ReportingUin; // 0x10(0x10)
	struct FString ReportedUin; // 0x20(0x10)
	struct FString GameAppid; // 0x30(0x10)
	struct FString ClientVersion; // 0x40(0x10)
	int32_t ReportingPlatID; // 0x50(0x04)
	int32_t ReportedPlatID; // 0x54(0x04)
	struct FString BattleID; // 0x58(0x10)
	struct FString MapID; // 0x68(0x10)
	struct FString GAMEMODEID; // 0x78(0x10)
	struct FString ReportReason; // 0x88(0x10)
	struct FString AdditionalInformation; // 0x98(0x10)
	struct FString ReportingPlayerName; // 0xa8(0x10)
	struct FString ReportedPlayerName; // 0xb8(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventPerf_PositionalData
// Size: 0xf0 (Inherited: 0x08)
struct FTigerTelemetryEventPerf_PositionalData : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString GameAppid; // 0x20(0x10)
	struct FString ClientVersion; // 0x30(0x10)
	int32_t PlatID; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString BattleID; // 0x48(0x10)
	int32_t MapID; // 0x58(0x04)
	int32_t LastPerfID; // 0x5c(0x04)
	struct FString PerfBatchID; // 0x60(0x10)
	struct FString Location; // 0x70(0x10)
	int32_t PlayerHealth; // 0x80(0x04)
	int32_t TraversalMode; // 0x84(0x04)
	struct FString Equipped; // 0x88(0x10)
	struct FString Inventory; // 0x98(0x10)
	struct FString MaxSysMem; // 0xa8(0x10)
	struct FString MaxVRamMem; // 0xb8(0x10)
	int32_t NumPsoCompiles; // 0xc8(0x04)
	int32_t AvgFrameTime; // 0xcc(0x04)
	int32_t AvgGameTime; // 0xd0(0x04)
	int32_t AvgGpuTime; // 0xd4(0x04)
	int32_t AvgRenderTime; // 0xd8(0x04)
	int32_t AvgRhiTime; // 0xdc(0x04)
	int32_t MaxNumPlayersRenderedConcurrently; // 0xe0(0x04)
	int32_t AvgNumPlayersRenderedConcurrently; // 0xe4(0x04)
	int32_t UsingGamepad; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventPerf_SessionSummary
// Size: 0x110 (Inherited: 0x08)
struct FTigerTelemetryEventPerf_SessionSummary : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString GameAppid; // 0x20(0x10)
	struct FString ClientVersion; // 0x30(0x10)
	int32_t PlatID; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString BattleID; // 0x48(0x10)
	int32_t MapID; // 0x58(0x04)
	int32_t LastPerfID; // 0x5c(0x04)
	struct FString PerfBatchID; // 0x60(0x10)
	int32_t SettingsDirtied; // 0x70(0x04)
	int32_t PsoTotal; // 0x74(0x04)
	int32_t PsoPrePassComplete; // 0x78(0x04)
	int32_t AvgFrameTime; // 0x7c(0x04)
	int32_t AvgGameTime; // 0x80(0x04)
	int32_t AvgGpuTime; // 0x84(0x04)
	int32_t AvgRenderTime; // 0x88(0x04)
	int32_t AvgRhiTime; // 0x8c(0x04)
	int32_t MinFrameTime; // 0x90(0x04)
	int32_t MinGameTime; // 0x94(0x04)
	int32_t MinGpuTime; // 0x98(0x04)
	int32_t MinRenderTime; // 0x9c(0x04)
	int32_t MinRhiTime; // 0xa0(0x04)
	int32_t MaxFrameTime; // 0xa4(0x04)
	int32_t MaxGameTime; // 0xa8(0x04)
	int32_t MaxGpuTime; // 0xac(0x04)
	int32_t MaxRhiTime; // 0xb0(0x04)
	int32_t MaxRenderTime; // 0xb4(0x04)
	struct FString AvgSysMem; // 0xb8(0x10)
	struct FString AvgVRamMem; // 0xc8(0x10)
	struct FString MaxSysMem; // 0xd8(0x10)
	struct FString MaxVRamMem; // 0xe8(0x10)
	struct FString PlayerSettings; // 0xf8(0x10)
	int32_t MaxNumPlayersRenderedConcurrently; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventPerf_LoadingFinished
// Size: 0x68 (Inherited: 0x08)
struct FTigerTelemetryEventPerf_LoadingFinished : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString GameAppid; // 0x20(0x10)
	struct FString ClientVersion; // 0x30(0x10)
	int32_t PlatID; // 0x40(0x04)
	int32_t PrevMapID; // 0x44(0x04)
	int32_t CurrentMapID; // 0x48(0x04)
	int32_t LastPerfID; // 0x4c(0x04)
	int32_t TimeToLoad; // 0x50(0x04)
	int32_t TimeToStartPlay; // 0x54(0x04)
	struct FString PlayerSettings; // 0x58(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventElysium_NpcInteract
// Size: 0x58 (Inherited: 0x08)
struct FTigerTelemetryEventElysium_NpcInteract : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString NpcName; // 0x20(0x10)
	int32_t InteractionDuration; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString GameAppid; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventElysium_Exit
// Size: 0x88 (Inherited: 0x08)
struct FTigerTelemetryEventElysium_Exit : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString ExitPointName; // 0x20(0x10)
	int32_t TotalElysiumTime; // 0x30(0x04)
	int32_t TotalMoveDistance; // 0x34(0x04)
	int32_t WallGrindTime; // 0x38(0x04)
	int32_t SlideTime; // 0x3c(0x04)
	int32_t AirTime; // 0x40(0x04)
	int32_t NotMovingTime; // 0x44(0x04)
	int32_t TotalJumps; // 0x48(0x04)
	int32_t TotalLedgeGrabs; // 0x4c(0x04)
	int32_t TotalLowVaults; // 0x50(0x04)
	int32_t TotalSlideJumps; // 0x54(0x04)
	struct FString AggregatedMenuTimes; // 0x58(0x10)
	struct FString GameAppid; // 0x68(0x10)
	struct FString ClientVersion; // 0x78(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventElysium_Enter
// Size: 0x50 (Inherited: 0x08)
struct FTigerTelemetryEventElysium_Enter : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString EntryPointName; // 0x20(0x10)
	struct FString GameAppid; // 0x30(0x10)
	struct FString ClientVersion; // 0x40(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventStore_AquiredInventoryItems
// Size: 0x70 (Inherited: 0x08)
struct FTigerTelemetryEventStore_AquiredInventoryItems : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	struct FString UnlockedItems; // 0x58(0x10)
	int32_t UnlockSource; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventAccount_Customization
// Size: 0x68 (Inherited: 0x08)
struct FTigerTelemetryEventAccount_Customization : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	struct FString CharacterCard; // 0x58(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventCharacter_Customization
// Size: 0xf8 (Inherited: 0x08)
struct FTigerTelemetryEventCharacter_Customization : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	int32_t ArchetypeId; // 0x58(0x04)
	int32_t CharacterId; // 0x5c(0x04)
	struct FString OutfitId; // 0x60(0x10)
	struct FString Accessories; // 0x70(0x10)
	struct FString Body; // 0x80(0x10)
	struct FString Hair; // 0x90(0x10)
	struct FString Eye; // 0xa0(0x10)
	struct FString MakeupID; // 0xb0(0x10)
	struct FString TattooId; // 0xc0(0x10)
	struct FString FacialHair; // 0xd0(0x10)
	struct FString EmotesID; // 0xe0(0x10)
	int32_t TotalTimeSpend; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventProgression_BattlepassLevelUp
// Size: 0x80 (Inherited: 0x08)
struct FTigerTelemetryEventProgression_BattlepassLevelUp : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	struct FString BattlepassExperienceSource; // 0x58(0x10)
	int32_t BattlepassLevelBefore; // 0x68(0x04)
	int32_t BattlepassLevelAfter; // 0x6c(0x04)
	int32_t BattlepassExperienceBefore; // 0x70(0x04)
	int32_t BattlepassExperienceAfter; // 0x74(0x04)
	int32_t ChangedBattlepassExperience; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventSocial_DeleteFriend
// Size: 0x68 (Inherited: 0x08)
struct FTigerTelemetryEventSocial_DeleteFriend : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	struct FString IDDeleted; // 0x58(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventSocial_FriendRequestResponse
// Size: 0x70 (Inherited: 0x08)
struct FTigerTelemetryEventSocial_FriendRequestResponse : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	struct FString IDRequestSentFrom; // 0x58(0x10)
	int32_t RequestResponse; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventSocial_FriendRequest
// Size: 0x68 (Inherited: 0x08)
struct FTigerTelemetryEventSocial_FriendRequest : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	struct FString IDRequestRecipient; // 0x58(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventSocial_FriendList
// Size: 0x80 (Inherited: 0x08)
struct FTigerTelemetryEventSocial_FriendList : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	int32_t SharkmobFriendNumber; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString SharkmobFriendIDList; // 0x60(0x10)
	struct FString PlatformFriendNumber; // 0x70(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventTutorial_Exit
// Size: 0x88 (Inherited: 0x08)
struct FTigerTelemetryEventTutorial_Exit : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	int32_t TutorialStartTime; // 0x58(0x04)
	int32_t TutorialEndTime; // 0x5c(0x04)
	int32_t TutorialFinished; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FString ObjectiveDuration; // 0x68(0x10)
	struct FString ObjectiveLocation; // 0x78(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventChallenge_Progress
// Size: 0x88 (Inherited: 0x08)
struct FTigerTelemetryEventChallenge_Progress : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	struct FString DailyChallengeProgress; // 0x58(0x10)
	struct FString WeeklyChallengeProgress; // 0x68(0x10)
	struct FString MasteryChallengeProgress; // 0x78(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventChallenge_Completed
// Size: 0x70 (Inherited: 0x08)
struct FTigerTelemetryEventChallenge_Completed : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	struct FString ChallengeID; // 0x58(0x10)
	int32_t ChallengeType; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventChallenge_List
// Size: 0x88 (Inherited: 0x08)
struct FTigerTelemetryEventChallenge_List : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	struct FString DailyChallengeID; // 0x58(0x10)
	struct FString WeeklyChallengeID; // 0x68(0x10)
	struct FString MasteryChallengeID; // 0x78(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventStore_CurrencySpend
// Size: 0x90 (Inherited: 0x08)
struct FTigerTelemetryEventStore_CurrencySpend : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	struct FString Country; // 0x58(0x10)
	struct FString StoreEntryID; // 0x68(0x10)
	int32_t Count; // 0x78(0x04)
	int32_t CurrencyType; // 0x7c(0x04)
	int32_t Price; // 0x80(0x04)
	int32_t DiscountedPrice; // 0x84(0x04)
	int32_t TotalDiscountedPrice; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventStore_FlashStorePurchase
// Size: 0xb0 (Inherited: 0x08)
struct FTigerTelemetryEventStore_FlashStorePurchase : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	struct FString Country; // 0x58(0x10)
	struct FString StoreEntryID; // 0x68(0x10)
	struct FString StoreEntryName; // 0x78(0x10)
	int32_t CurrencyType; // 0x88(0x04)
	int32_t Price; // 0x8c(0x04)
	int32_t DiscountPrice; // 0x90(0x04)
	int32_t DiscountTotalPrice; // 0x94(0x04)
	int32_t DiscountTimeLeft; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString LocalizedStoreEntryName; // 0xa0(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventStore_PremiumCurrencyIncrease
// Size: 0xe0 (Inherited: 0x08)
struct FTigerTelemetryEventStore_PremiumCurrencyIncrease : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	struct FString ClientIP; // 0x58(0x10)
	struct FString Country; // 0x68(0x10)
	int32_t CurrencySource; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FString PremiumCurrencyBefore; // 0x80(0x10)
	struct FString PremiumCurrencyAfter; // 0x90(0x10)
	int32_t IncreasedPremiumCurrency; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FString CurrencyPackID; // 0xa8(0x10)
	int32_t OriginalCurrencyPackPrice; // 0xb8(0x04)
	int32_t DiscountedCurrencyPackPrice; // 0xbc(0x04)
	struct FString PlayerPayCurrency; // 0xc0(0x10)
	struct FString PurchasingPlatform; // 0xd0(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventStore_FlashStoreRefresh
// Size: 0x88 (Inherited: 0x08)
struct FTigerTelemetryEventStore_FlashStoreRefresh : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	struct FString ClientIP; // 0x58(0x10)
	struct FString Country; // 0x68(0x10)
	struct FString StoreEntryList; // 0x78(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventStore_BattlepassPurchase
// Size: 0x88 (Inherited: 0x08)
struct FTigerTelemetryEventStore_BattlepassPurchase : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	int32_t BattlepassType; // 0x58(0x04)
	int32_t OriginalBattlepassPrice; // 0x5c(0x04)
	int32_t DiscountedBattlepassPrice; // 0x60(0x04)
	int32_t BattlepassLevelAtPurchase; // 0x64(0x04)
	int32_t BattlepassLevelAfterPurchase; // 0x68(0x04)
	int32_t AccountLevelAtPurchase; // 0x6c(0x04)
	struct FString Country; // 0x70(0x10)
	int32_t Season; // 0x80(0x04)
	int32_t SeasonDay; // 0x84(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventStore_ItemExit
// Size: 0x68 (Inherited: 0x08)
struct FTigerTelemetryEventStore_ItemExit : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	struct FString ItemId; // 0x58(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventStore_ItemPreview
// Size: 0x68 (Inherited: 0x08)
struct FTigerTelemetryEventStore_ItemPreview : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	struct FString ItemId; // 0x58(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventStore_Exit
// Size: 0x58 (Inherited: 0x08)
struct FTigerTelemetryEventStore_Exit : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventStore_Preview
// Size: 0x58 (Inherited: 0x08)
struct FTigerTelemetryEventStore_Preview : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_PlayerRespawn
// Size: 0x58 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_PlayerRespawn : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameAppid; // 0x10(0x10)
	struct FString Uin; // 0x20(0x10)
	struct FString BattleID; // 0x30(0x10)
	struct FString PlayerRespawnLocation; // 0x40(0x10)
	int32_t RespawnsRemaining; // 0x50(0x04)
	int32_t RespawnMethod; // 0x54(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_ScourgeDashUse
// Size: 0x70 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_ScourgeDashUse : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameAppid; // 0x10(0x10)
	struct FString Uin; // 0x20(0x10)
	struct FString BattleID; // 0x30(0x10)
	int32_t TotalDistanceScourgeDashed; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString ScourgeDashStartLocation; // 0x48(0x10)
	struct FString ScourgeDashEndLocation; // 0x58(0x10)
	int32_t DidDamageTarget; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_KatanaReflectUse
// Size: 0x48 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_KatanaReflectUse : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString BattleID; // 0x20(0x10)
	struct FString GameAppid; // 0x30(0x10)
	int32_t TotalTimeInKatanaReflectState; // 0x40(0x04)
	int32_t TotalDamageNullified; // 0x44(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_MeleeWeaponUse
// Size: 0x70 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_MeleeWeaponUse : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString BattleID; // 0x20(0x10)
	struct FString GameAppid; // 0x30(0x10)
	struct FString ItemId; // 0x40(0x10)
	int32_t DurationMeleeWeaponHeldFor; // 0x50(0x04)
	int32_t NumberOfTimesMeleeWeaponDrawn; // 0x54(0x04)
	int32_t NumberOfAttacksWithMeleeWeapon; // 0x58(0x04)
	int32_t NumberOfHitsWithMeleeWeapon; // 0x5c(0x04)
	int32_t TotalDamageDoneWithMeleeWeapon; // 0x60(0x04)
	int32_t TotalNumberOfDownsWithMeleeWeapon; // 0x64(0x04)
	int32_t TotalNumberOfKillsWithMeleeWeapon; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_RangedWeaponUse
// Size: 0x68 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_RangedWeaponUse : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString BattleID; // 0x20(0x10)
	struct FString GameAppid; // 0x30(0x10)
	struct FString ItemId; // 0x40(0x10)
	int32_t NumberOfRangedHits; // 0x50(0x04)
	int32_t NumberOfRangedShots; // 0x54(0x04)
	int32_t DamageDealtWithWeapon; // 0x58(0x04)
	int32_t EnemiesDownedWithWeapon; // 0x5c(0x04)
	int32_t NumberOfTimesOutOfAmmoWithWeapon; // 0x60(0x04)
	int32_t NumberHeadshotsWithWeapon; // 0x64(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_PlayerPings
// Size: 0x60 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_PlayerPings : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString BattleID; // 0x20(0x10)
	struct FString GameAppid; // 0x30(0x10)
	int32_t PingType; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString PingTarget; // 0x48(0x10)
	int32_t AgreementsReceived; // 0x58(0x04)
	int32_t CauseOfPingRemoval; // 0x5c(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_PlayerRedGasStats
// Size: 0x48 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_PlayerRedGasStats : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString BattleID; // 0x20(0x10)
	struct FString GameAppid; // 0x30(0x10)
	int32_t TotalTimeInRedGas; // 0x40(0x04)
	int32_t TotalTimeInRedGasWithStimulant; // 0x44(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_EndPlayerMasquerad
// Size: 0x58 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_EndPlayerMasquerad : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString BattleID; // 0x20(0x10)
	struct FString GameAppid; // 0x30(0x10)
	int32_t TotalTimeBloodHunted; // 0x40(0x04)
	int32_t TotalBloodHuntsByFeeding; // 0x44(0x04)
	int32_t TotalBloodHuntsByKilling; // 0x48(0x04)
	int32_t TotalNumberAreaMarkerConsequences; // 0x4c(0x04)
	int32_t TotalNumberMapMarkerConsequences; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_PlayerTraversal
// Size: 0x80 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_PlayerTraversal : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString BattleID; // 0x20(0x10)
	struct FString GameAppid; // 0x30(0x10)
	int32_t TotalMoveDistance; // 0x40(0x04)
	int32_t WalkingDistance; // 0x44(0x04)
	int32_t DisciplineTravelDistance; // 0x48(0x04)
	int32_t CrouchingTime; // 0x4c(0x04)
	int32_t ClimbingTime; // 0x50(0x04)
	int32_t TimeInside; // 0x54(0x04)
	int32_t WallHangTime; // 0x58(0x04)
	int32_t WallGrindTime; // 0x5c(0x04)
	int32_t SlideTime; // 0x60(0x04)
	int32_t AirTime; // 0x64(0x04)
	int32_t NotMovingTime; // 0x68(0x04)
	int32_t TotalJumps; // 0x6c(0x04)
	int32_t TotalWallJumps; // 0x70(0x04)
	int32_t TotalSlideJumps; // 0x74(0x04)
	int32_t TotalLedgeGrabs; // 0x78(0x04)
	int32_t TotalLowVaults; // 0x7c(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_PlayerMetaChange
// Size: 0x60 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_PlayerMetaChange : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString BattleID; // 0x20(0x10)
	struct FString GameAppid; // 0x30(0x10)
	int32_t SeasonExperienceGained; // 0x40(0x04)
	int32_t SeasonLevelBeforeChange; // 0x44(0x04)
	int32_t SeasonLevelAfterChange; // 0x48(0x04)
	int32_t ArchetypeId; // 0x4c(0x04)
	int32_t ArchetypeExperienceGained; // 0x50(0x04)
	int32_t ArchetypeLevelBeforeChange; // 0x54(0x04)
	int32_t ArchetypeLevelAfterChange; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_EndPlayerResults
// Size: 0x78 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_EndPlayerResults : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString BattleID; // 0x20(0x10)
	struct FString GameAppid; // 0x30(0x10)
	int32_t PlayerQuitBeforeEnd; // 0x40(0x04)
	int32_t KillCount; // 0x44(0x04)
	int32_t AssistCount; // 0x48(0x04)
	int32_t TotalSurvivalTime; // 0x4c(0x04)
	int32_t NumberOfAlliedRevives; // 0x50(0x04)
	int32_t TotalAmountOfHealing; // 0x54(0x04)
	int32_t TotalNumberOfHealingEvents; // 0x58(0x04)
	int32_t TotalFeedingAbortsByDamage; // 0x5c(0x04)
	int32_t TotalFeedingAbortsByPlayer; // 0x60(0x04)
	int32_t InflictedKnockdownCount; // 0x64(0x04)
	int32_t DeathCount; // 0x68(0x04)
	int32_t TimesKnockedDown; // 0x6c(0x04)
	int32_t IndividualScoreContribution; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_PlayerRankChanges
// Size: 0x88 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_PlayerRankChanges : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString BattleID; // 0x20(0x10)
	struct FString GameAppid; // 0x30(0x10)
	int32_t PlayerResult; // 0x40(0x04)
	int32_t TeamRank; // 0x44(0x04)
	int32_t ChangedKillRatingValue; // 0x48(0x04)
	int32_t KillRatingValueAfterChanged; // 0x4c(0x04)
	int32_t ChangedWinRatingValue; // 0x50(0x04)
	int32_t WinRatingValueAfterChanged; // 0x54(0x04)
	struct FString PreviousRankedBracket; // 0x58(0x10)
	struct FString NewRankedBracket; // 0x68(0x10)
	int32_t TotalPoint; // 0x78(0x04)
	int32_t RatingLevel; // 0x7c(0x04)
	int32_t RankedPointsBefore; // 0x80(0x04)
	int32_t RankedPointsAfter; // 0x84(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_EndGameEvent
// Size: 0x88 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_EndGameEvent : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString BattleID; // 0x10(0x10)
	struct FString GameAppid; // 0x20(0x10)
	struct FString WinningPlayerID; // 0x30(0x10)
	int32_t SeasonId; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString ClanID; // 0x48(0x10)
	struct FString ArchetypeId; // 0x58(0x10)
	struct FString ExtendedGroupScoreBreakDown; // 0x68(0x10)
	int32_t ScoreTarget; // 0x78(0x04)
	int32_t TimeLimit; // 0x7c(0x04)
	int32_t MatchTimeLeft; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_DamageEvents
// Size: 0xb0 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_DamageEvents : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString BattleID; // 0x10(0x10)
	struct FString UinSource; // 0x20(0x10)
	struct FString UinTarget; // 0x30(0x10)
	struct FString GameAppid; // 0x40(0x10)
	int32_t DamageTypeID; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString DamageCauseID; // 0x58(0x10)
	int32_t DamageDone; // 0x68(0x04)
	int32_t SourceType; // 0x6c(0x04)
	int32_t TargetType; // 0x70(0x04)
	int32_t KilledTarget; // 0x74(0x04)
	int32_t KnockedDownTarget; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FString TargetDamageLocation; // 0x80(0x10)
	struct FString SourceDamageLocation; // 0x90(0x10)
	int32_t TargetWasBloodHunted; // 0xa0(0x04)
	int32_t DamageEventWasHeadshot; // 0xa4(0x04)
	int32_t VictimRemainingHealth; // 0xa8(0x04)
	int32_t VictimRemainingArmor; // 0xac(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_ItemConsumption
// Size: 0x50 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_ItemConsumption : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString BattleID; // 0x20(0x10)
	struct FString GameAppid; // 0x30(0x10)
	struct FString ItemId; // 0x40(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_DisciplineUse
// Size: 0x58 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_DisciplineUse : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString BattleID; // 0x20(0x10)
	struct FString GameAppid; // 0x30(0x10)
	int32_t DisciplineID; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString DisciplinesUseLocation; // 0x48(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_ItemDrop
// Size: 0x68 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_ItemDrop : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString BattleID; // 0x20(0x10)
	struct FString GameAppid; // 0x30(0x10)
	struct FString ItemId; // 0x40(0x10)
	int32_t ItemDropQuantity; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString DropLocation; // 0x58(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_ItemPickups
// Size: 0x70 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_ItemPickups : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString BattleID; // 0x20(0x10)
	struct FString GameAppid; // 0x30(0x10)
	struct FString ItemId; // 0x40(0x10)
	int32_t ItemPickUpQuantity; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString PickUpLocation; // 0x58(0x10)
	int32_t ItemSourceID; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_PlayerStart
// Size: 0xe0 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_PlayerStart : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString BattleID; // 0x20(0x10)
	struct FString GameAppid; // 0x30(0x10)
	int32_t PlatID; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString LeaderID; // 0x48(0x10)
	struct FString ClientVersion; // 0x58(0x10)
	int32_t ClanID; // 0x68(0x04)
	int32_t ArchetypeId; // 0x6c(0x04)
	int32_t SquadNum; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FString SquadMembers; // 0x78(0x10)
	struct FString SpawnLocation; // 0x88(0x10)
	int32_t MatchMakingID; // 0x98(0x04)
	int32_t RankedPoints; // 0x9c(0x04)
	struct FString SelectedPlayerPerks; // 0xa0(0x10)
	struct FString AvailablePlayerPerks; // 0xb0(0x10)
	struct FString ExtendedGroupId; // 0xc0(0x10)
	struct FString ExtendedGroupMemberIDs; // 0xd0(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_MatchData
// Size: 0xf8 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_MatchData : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString ClientVersion; // 0x28(0x10)
	struct FString BattleID; // 0x38(0x10)
	struct FString GameAppid; // 0x48(0x10)
	int32_t GameplayMode; // 0x58(0x04)
	int32_t RankMode; // 0x5c(0x04)
	int32_t TeamSize; // 0x60(0x04)
	int32_t MapID; // 0x64(0x04)
	int32_t NumPlayers; // 0x68(0x04)
	int32_t NumBots; // 0x6c(0x04)
	struct FString ItemTypeAmounts; // 0x70(0x10)
	struct FString PlayerArchetypesAmounts; // 0x80(0x10)
	struct FString SafeZoneLocations; // 0x90(0x10)
	int32_t NumberofTeams; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FString GAMEMODEID; // 0xa8(0x10)
	struct FString ArenaName; // 0xb8(0x10)
	struct FString ScoringBreakdown; // 0xc8(0x10)
	int32_t ScoreTarget; // 0xd8(0x04)
	int32_t TimeLimit; // 0xdc(0x04)
	int32_t ExtendedGroupSize; // 0xe0(0x04)
	int32_t CiviliansEnabled; // 0xe4(0x04)
	struct FString ArenaArea; // 0xe8(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventServerDelay
// Size: 0x90 (Inherited: 0x08)
struct FTigerTelemetryEventServerDelay : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString ClientVersion; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString BattleID; // 0x48(0x10)
	int32_t PlatID; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString GameAppid; // 0x60(0x10)
	int32_t NetworkType; // 0x70(0x04)
	int32_t UploadSeq; // 0x74(0x04)
	int32_t AvgDelay; // 0x78(0x04)
	int32_t MaxDelay; // 0x7c(0x04)
	int32_t MinDelay; // 0x80(0x04)
	int32_t OutPacketLossPercent; // 0x84(0x04)
	int32_t InPacketLossPercent; // 0x88(0x04)
	int32_t MapID; // 0x8c(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventServerLog
// Size: 0x58 (Inherited: 0x08)
struct FTigerTelemetryEventServerLog : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Country; // 0x10(0x10)
	struct FString GameSvrId; // 0x20(0x10)
	int32_t AreaId; // 0x30(0x04)
	int32_t OnlineCountPC; // 0x34(0x04)
	int32_t OnlineCountPS; // 0x38(0x04)
	int32_t OnlineCountXbox; // 0x3c(0x04)
	int32_t UserCount; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString GameAppid; // 0x48(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchMaking_Cancelled
// Size: 0x38 (Inherited: 0x08)
struct FTigerTelemetryEventMatchMaking_Cancelled : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t MatchMakingID; // 0x0c(0x04)
	struct FString Uin; // 0x10(0x10)
	struct FString GameAppid; // 0x20(0x10)
	int32_t CancelReason; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchMaking_Succeeded
// Size: 0x30 (Inherited: 0x08)
struct FTigerTelemetryEventMatchMaking_Succeeded : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t MatchMakingID; // 0x0c(0x04)
	struct FString Uin; // 0x10(0x10)
	struct FString GameAppid; // 0x20(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchMaking_BattleInfo
// Size: 0xb0 (Inherited: 0x08)
struct FTigerTelemetryEventMatchMaking_BattleInfo : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString LeaderID; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	int32_t ClanID; // 0x58(0x04)
	int32_t ArchetypeId; // 0x5c(0x04)
	int32_t GameplayMode; // 0x60(0x04)
	int32_t RankMode; // 0x64(0x04)
	int32_t TeamSize; // 0x68(0x04)
	int32_t NumPremadeMembers; // 0x6c(0x04)
	int32_t MapID; // 0x70(0x04)
	int32_t MatchMakingID; // 0x74(0x04)
	int32_t PlayerELO; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FString GameAppid; // 0x80(0x10)
	int32_t PlayerRankedPoints; // 0x90(0x04)
	int32_t RankedPointsPaid; // 0x94(0x04)
	int32_t CrossplayEnabled; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString GAMEMODEID; // 0xa0(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventPlayerLogout
// Size: 0xc0 (Inherited: 0x08)
struct FTigerTelemetryEventPlayerLogout : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	struct FString GameAppid; // 0x20(0x10)
	int32_t AreaId; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString Uin; // 0x38(0x10)
	int32_t Level; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString ClientIP; // 0x50(0x10)
	int32_t OnlineTime; // 0x60(0x04)
	int32_t PlayTime; // 0x64(0x04)
	int32_t LoginWay; // 0x68(0x04)
	int32_t PlatID; // 0x6c(0x04)
	int32_t SMFriendsNum; // 0x70(0x04)
	int32_t PlatformFriendsNum; // 0x74(0x04)
	struct FString ClientVersion; // 0x78(0x10)
	struct FString ClientLanguage; // 0x88(0x10)
	struct FString Country; // 0x98(0x10)
	struct FString OperatingSys; // 0xa8(0x10)
	int32_t MatchesPlayed; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventPlayerLogin
// Size: 0x110 (Inherited: 0x08)
struct FTigerTelemetryEventPlayerLogin : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameAppid; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString Uin; // 0x28(0x10)
	int32_t Level; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString ClientIP; // 0x40(0x10)
	int32_t LoginWay; // 0x50(0x04)
	int32_t PlatID; // 0x54(0x04)
	int32_t SMFriendsNum; // 0x58(0x04)
	int32_t PlatformFriendsNum; // 0x5c(0x04)
	struct FString ClientVersion; // 0x60(0x10)
	int16_t ScreenWidth; // 0x70(0x02)
	int16_t ScreenHeight; // 0x72(0x02)
	char pad_74[0x4]; // 0x74(0x04)
	struct FString CpuHardware; // 0x78(0x10)
	struct FString ClientIPV6; // 0x88(0x10)
	int32_t DeviceType; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString OperatingSys; // 0xa0(0x10)
	struct FString DeviceModel; // 0xb0(0x10)
	int32_t SysRAM; // 0xc0(0x04)
	int32_t VRAM; // 0xc4(0x04)
	struct FString VideoCard; // 0xc8(0x10)
	struct FString Microphone; // 0xd8(0x10)
	int32_t AvlHardDiskSpace; // 0xe8(0x04)
	int32_t AllHardDiskSpace; // 0xec(0x04)
	struct FString ClientLanguage; // 0xf0(0x10)
	struct FString Country; // 0x100(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventPlayerRegister
// Size: 0x70 (Inherited: 0x08)
struct FTigerTelemetryEventPlayerRegister : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameAppid; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString Uin; // 0x28(0x10)
	struct FString ClientIP; // 0x38(0x10)
	int32_t RegWay; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString ClientVersion; // 0x50(0x10)
	struct FString Country; // 0x60(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventGameServerState
// Size: 0x48 (Inherited: 0x08)
struct FTigerTelemetryEventGameServerState : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int64_t AreaId; // 0x20(0x08)
	struct FString ServerIP; // 0x28(0x10)
	struct FString GameAppid; // 0x38(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerDamageProcessEvent
// Size: 0x150 (Inherited: 0x08)
struct FTigerTelemetryEventAcePlayerDamageProcessEvent : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString BattleID; // 0x10(0x10)
	int32_t MapID; // 0x20(0x04)
	int32_t GameplayMode; // 0x24(0x04)
	int32_t RankMode; // 0x28(0x04)
	uint32_t game_id_; // 0x2c(0x04)
	int32_t PlatID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString GameSvrId; // 0x38(0x10)
	int32_t AreaId; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	int64_t ZoneId; // 0x50(0x08)
	uint32_t channel_id; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString Uin; // 0x60(0x10)
	uint16_t account_type_; // 0x70(0x02)
	char pad_72[0x2]; // 0x72(0x02)
	int32_t NumPlayers; // 0x74(0x04)
	int64_t role_id_; // 0x78(0x08)
	char rolename_len; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FString rolename; // 0x88(0x10)
	int32_t Level; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString team_id; // 0xa0(0x10)
	int32_t Index; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FString attacker_player_position; // 0xb8(0x10)
	int64_t attacker_weapon_id; // 0xc8(0x08)
	uint32_t attacker_weapon_type; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FString attacker_player_direction; // 0xd8(0x10)
	uint32_t attacker_blood_left; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FString victim_Uin; // 0xf0(0x10)
	uint16_t victim_account_type_; // 0x100(0x02)
	char pad_102[0x6]; // 0x102(0x06)
	struct FString victim_player_position; // 0x108(0x10)
	struct FString visible_body_part; // 0x118(0x10)
	uint32_t victim_blood_left; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	int64_t hit_part; // 0x130(0x08)
	int64_t DamageCauseID; // 0x138(0x08)
	int32_t DamageTypeID; // 0x140(0x04)
	int32_t DamageDone; // 0x144(0x04)
	char death_type; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerChangeWeaponEvent
// Size: 0xc0 (Inherited: 0x08)
struct FTigerTelemetryEventAcePlayerChangeWeaponEvent : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString BattleID; // 0x10(0x10)
	int32_t MapID; // 0x20(0x04)
	int32_t GameplayMode; // 0x24(0x04)
	int32_t RankMode; // 0x28(0x04)
	uint32_t game_id_; // 0x2c(0x04)
	int32_t PlatID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString GameSvrId; // 0x38(0x10)
	int32_t AreaId; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	int64_t ZoneId; // 0x50(0x08)
	uint32_t channel_id; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString Uin; // 0x60(0x10)
	uint16_t account_type_; // 0x70(0x02)
	char pad_72[0x2]; // 0x72(0x02)
	int32_t NumPlayers; // 0x74(0x04)
	int64_t role_id_; // 0x78(0x08)
	char rolename_len; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FString rolename; // 0x88(0x10)
	int32_t Level; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString team_id; // 0xa0(0x10)
	int64_t ori_weapon; // 0xb0(0x08)
	int64_t dst_weapon; // 0xb8(0x08)
};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerRebornEvent
// Size: 0xb8 (Inherited: 0x08)
struct FTigerTelemetryEventAcePlayerRebornEvent : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString BattleID; // 0x10(0x10)
	int32_t MapID; // 0x20(0x04)
	int32_t GameplayMode; // 0x24(0x04)
	int32_t RankMode; // 0x28(0x04)
	uint32_t game_id_; // 0x2c(0x04)
	int32_t PlatID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString GameSvrId; // 0x38(0x10)
	int32_t AreaId; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	int64_t ZoneId; // 0x50(0x08)
	uint32_t channel_id; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString Uin; // 0x60(0x10)
	uint16_t account_type_; // 0x70(0x02)
	char pad_72[0x2]; // 0x72(0x02)
	int32_t NumPlayers; // 0x74(0x04)
	int64_t role_id_; // 0x78(0x08)
	char rolename_len; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FString rolename; // 0x88(0x10)
	int32_t Level; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString team_id; // 0xa0(0x10)
	char rebirth_type; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerReportCrimeEvent
// Size: 0xb0 (Inherited: 0x08)
struct FTigerTelemetryEventAcePlayerReportCrimeEvent : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString BattleID; // 0x10(0x10)
	int32_t MapID; // 0x20(0x04)
	int32_t GameplayMode; // 0x24(0x04)
	int32_t RankMode; // 0x28(0x04)
	uint32_t game_id_; // 0x2c(0x04)
	int32_t PlatID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString GameSvrId; // 0x38(0x10)
	int32_t AreaId; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	int64_t ZoneId; // 0x50(0x08)
	uint32_t channel_id; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString Uin; // 0x60(0x10)
	uint16_t account_type_; // 0x70(0x02)
	char pad_72[0x6]; // 0x72(0x06)
	struct FString reported_Uin; // 0x78(0x10)
	uint16_t reported_account_type_; // 0x88(0x02)
	char pad_8A[0x6]; // 0x8a(0x06)
	struct FString report_type; // 0x90(0x10)
	struct FString report_reason; // 0xa0(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventAceBulletShotEvent
// Size: 0x118 (Inherited: 0x08)
struct FTigerTelemetryEventAceBulletShotEvent : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString BattleID; // 0x10(0x10)
	int32_t MapID; // 0x20(0x04)
	int32_t GameplayMode; // 0x24(0x04)
	int32_t RankMode; // 0x28(0x04)
	uint32_t game_id_; // 0x2c(0x04)
	int32_t PlatID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString GameSvrId; // 0x38(0x10)
	int32_t AreaId; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	int64_t ZoneId; // 0x50(0x08)
	uint32_t channel_id; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString Uin; // 0x60(0x10)
	uint16_t account_type_; // 0x70(0x02)
	char pad_72[0x2]; // 0x72(0x02)
	int32_t NumPlayers; // 0x74(0x04)
	int64_t role_id_; // 0x78(0x08)
	char rolename_len; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FString rolename; // 0x88(0x10)
	int32_t Level; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString team_id; // 0xa0(0x10)
	int64_t shot_id; // 0xb0(0x08)
	int64_t weapon_id; // 0xb8(0x08)
	uint32_t weapon_type; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FString player_position; // 0xc8(0x10)
	struct FString attacker_player_direction; // 0xd8(0x10)
	char bullets_cost; // 0xe8(0x01)
	char pad_E9[0x1]; // 0xe9(0x01)
	uint16_t bullets_left; // 0xea(0x02)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FString victim_player_position; // 0xf0(0x10)
	struct FString shot_dst_position; // 0x100(0x10)
	char hit_part; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerDieEvent
// Size: 0x120 (Inherited: 0x08)
struct FTigerTelemetryEventAcePlayerDieEvent : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString BattleID; // 0x10(0x10)
	int32_t MapID; // 0x20(0x04)
	int32_t GameplayMode; // 0x24(0x04)
	int32_t RankMode; // 0x28(0x04)
	uint32_t game_id_; // 0x2c(0x04)
	int32_t PlatID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString GameSvrId; // 0x38(0x10)
	int32_t AreaId; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	int64_t ZoneId; // 0x50(0x08)
	uint32_t channel_id; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString Uin; // 0x60(0x10)
	uint16_t account_type_; // 0x70(0x02)
	char pad_72[0x2]; // 0x72(0x02)
	int32_t NumPlayers; // 0x74(0x04)
	int64_t role_id_; // 0x78(0x08)
	char rolename_len; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FString rolename; // 0x88(0x10)
	int32_t Level; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString team_id; // 0xa0(0x10)
	struct FString victim_player_position; // 0xb0(0x10)
	int64_t victim_weapon_id; // 0xc0(0x08)
	uint32_t victim_weapon_type; // 0xc8(0x04)
	uint32_t victim_blood_left; // 0xcc(0x04)
	struct FString attacker_Uin; // 0xd0(0x10)
	uint16_t attacker_account_type_; // 0xe0(0x02)
	char pad_E2[0x6]; // 0xe2(0x06)
	struct FString attacker_player_position; // 0xe8(0x10)
	int64_t attacker_weapon_id; // 0xf8(0x08)
	uint32_t attacker_weapon_type; // 0x100(0x04)
	uint32_t attacker_blood_left; // 0x104(0x04)
	char hit_part; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	int64_t die_reason; // 0x110(0x08)
	int64_t death_type; // 0x118(0x08)
};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerGameSummaryEvent2
// Size: 0xc8 (Inherited: 0x08)
struct FTigerTelemetryEventAcePlayerGameSummaryEvent2 : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString BattleID; // 0x10(0x10)
	int32_t MapID; // 0x20(0x04)
	int32_t GameplayMode; // 0x24(0x04)
	int32_t RankMode; // 0x28(0x04)
	uint32_t game_id_; // 0x2c(0x04)
	int32_t PlatID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString GameSvrId; // 0x38(0x10)
	int32_t AreaId; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	int64_t ZoneId; // 0x50(0x08)
	uint32_t channel_id; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString Uin; // 0x60(0x10)
	uint16_t account_type_; // 0x70(0x02)
	char pad_72[0x2]; // 0x72(0x02)
	int32_t NumPlayers; // 0x74(0x04)
	int64_t role_id_; // 0x78(0x08)
	char rolename_len; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FString rolename; // 0x88(0x10)
	int32_t Level; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString team_id; // 0xa0(0x10)
	int32_t Duration; // 0xb0(0x04)
	uint16_t Rank; // 0xb4(0x02)
	uint16_t NumberOfRangedShots; // 0xb6(0x02)
	uint16_t NumberOfRangedHits; // 0xb8(0x02)
	char pad_BA[0x2]; // 0xba(0x02)
	int32_t KillCount; // 0xbc(0x04)
	uint16_t death_num; // 0xc0(0x02)
	char pad_C2[0x2]; // 0xc2(0x02)
	int32_t AssistCount; // 0xc4(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerGameSummaryEvent
// Size: 0xd8 (Inherited: 0x08)
struct FTigerTelemetryEventAcePlayerGameSummaryEvent : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString BattleID; // 0x10(0x10)
	int32_t MapID; // 0x20(0x04)
	int32_t GameplayMode; // 0x24(0x04)
	int32_t RankMode; // 0x28(0x04)
	uint32_t game_id_; // 0x2c(0x04)
	int32_t PlatID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString GameSvrId; // 0x38(0x10)
	int32_t AreaId; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	int64_t ZoneId; // 0x50(0x08)
	uint32_t channel_id; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString Uin; // 0x60(0x10)
	uint16_t account_type_; // 0x70(0x02)
	char pad_72[0x2]; // 0x72(0x02)
	int32_t NumPlayers; // 0x74(0x04)
	int64_t role_id_; // 0x78(0x08)
	char rolename_len; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FString rolename; // 0x88(0x10)
	int32_t Level; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString team_id; // 0xa0(0x10)
	int8_t Result; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	int32_t Duration; // 0xb4(0x04)
	uint16_t Rank; // 0xb8(0x02)
	char pad_BA[0x2]; // 0xba(0x02)
	int32_t KillCount; // 0xbc(0x04)
	uint16_t death_num; // 0xc0(0x02)
	char pad_C2[0x2]; // 0xc2(0x02)
	int32_t AssistCount; // 0xc4(0x04)
	uint32_t Score; // 0xc8(0x04)
	int32_t Bonus; // 0xcc(0x04)
	int32_t experience; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerDisconnectEvent
// Size: 0xa0 (Inherited: 0x08)
struct FTigerTelemetryEventAcePlayerDisconnectEvent : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString BattleID; // 0x10(0x10)
	int32_t MapID; // 0x20(0x04)
	int32_t GameplayMode; // 0x24(0x04)
	int32_t RankMode; // 0x28(0x04)
	uint32_t game_id_; // 0x2c(0x04)
	int32_t PlatID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString GameSvrId; // 0x38(0x10)
	int32_t AreaId; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	int64_t ZoneId; // 0x50(0x08)
	uint32_t channel_id; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString Uin; // 0x60(0x10)
	uint16_t account_type_; // 0x70(0x02)
	char pad_72[0x2]; // 0x72(0x02)
	int32_t NumPlayers; // 0x74(0x04)
	int64_t role_id_; // 0x78(0x08)
	char rolename_len; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FString rolename; // 0x88(0x10)
	char disconnect_flag; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerConnectEvent
// Size: 0xd0 (Inherited: 0x08)
struct FTigerTelemetryEventAcePlayerConnectEvent : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString BattleID; // 0x10(0x10)
	int32_t MapID; // 0x20(0x04)
	int32_t GameplayMode; // 0x24(0x04)
	int32_t RankMode; // 0x28(0x04)
	uint32_t game_id_; // 0x2c(0x04)
	int32_t PlatID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString GameSvrId; // 0x38(0x10)
	int32_t AreaId; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	int64_t ZoneId; // 0x50(0x08)
	uint32_t channel_id; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString Uin; // 0x60(0x10)
	uint16_t account_type_; // 0x70(0x02)
	char pad_72[0x2]; // 0x72(0x02)
	int32_t NumPlayers; // 0x74(0x04)
	int64_t role_id_; // 0x78(0x08)
	char rolename_len; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FString rolename; // 0x88(0x10)
	int32_t Level; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString team_id; // 0xa0(0x10)
	int8_t Gender; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	int64_t experience; // 0xb8(0x08)
	int64_t money; // 0xc0(0x08)
	char connect_flag; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// ScriptStruct Tiger.TigerTelemetryEventPlayerRevived
// Size: 0x38 (Inherited: 0x08)
struct FTigerTelemetryEventPlayerRevived : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Location; // 0x10(0x10)
	struct FString PlayerId; // 0x20(0x10)
	int32_t was_helped; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventPlayerDied
// Size: 0x40 (Inherited: 0x08)
struct FTigerTelemetryEventPlayerDied : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString player_location; // 0x10(0x10)
	struct FString damage_causer; // 0x20(0x10)
	struct FString damage_reason; // 0x30(0x10)
};

// ScriptStruct Tiger.TigerTelemetryIDExportArray
// Size: 0x01 (Inherited: 0x00)
struct FTigerTelemetryIDExportArray {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Tiger.TigerTelemetryIDExportData
// Size: 0x01 (Inherited: 0x00)
struct FTigerTelemetryIDExportData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Tiger.TigerRequest_AddTelemetry
// Size: 0x10 (Inherited: 0x00)
struct FTigerRequest_AddTelemetry {
	struct FString Data; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerTestChallengesConfig
// Size: 0x28 (Inherited: 0x00)
struct FTigerTestChallengesConfig {
	struct FTigerTestChallengeCollection TestChallenges; // 0x00(0x28)
};

// ScriptStruct Tiger.TigerThrallMissionTableRow
// Size: 0x10 (Inherited: 0x08)
struct FTigerThrallMissionTableRow : FTableRowBase {
	struct UTigerThrallMission* Mission; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerThrallMissionMapMarker
// Size: 0x18 (Inherited: 0x00)
struct FTigerThrallMissionMapMarker {
	struct FVector2D Position; // 0x00(0x08)
	struct UTexture2D* Icon; // 0x08(0x08)
	struct FVector2D Size; // 0x10(0x08)
};

// ScriptStruct Tiger.ThrallMissionRequirements
// Size: 0x18 (Inherited: 0x00)
struct FThrallMissionRequirements {
	int32_t MinRequiredThalls; // 0x00(0x04)
	int32_t MaxRequiredThralls; // 0x04(0x04)
	struct FTigerThrallStats TotalRequiredStats; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerThrallMissionReward
// Size: 0x18 (Inherited: 0x00)
struct FTigerThrallMissionReward {
	int32_t XpReward; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FTigerThrallMissionRewardItem> Rewards; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerThrallMissionRewardItem
// Size: 0x30 (Inherited: 0x00)
struct FTigerThrallMissionRewardItem {
	struct TSoftClassPtr<UObject> ItemClassPath; // 0x00(0x28)
	int32_t Count; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Tiger.TigerThrallMissionObjective
// Size: 0x38 (Inherited: 0x00)
struct FTigerThrallMissionObjective {
	enum class ETigerMissionType MissionType; // 0x00(0x04)
	enum class ETigerMissionObjectiveType ObjectiveType; // 0x04(0x04)
	struct FName ObjectiveName; // 0x08(0x08)
	struct FString ObjectiveDescription; // 0x10(0x10)
	struct TArray<enum class ETigerThrallStatId> SuccessStatIds; // 0x20(0x10)
	int32_t PercentReductionIfDiscovered; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Tiger.TigerThrallAbilityTableRow
// Size: 0x18 (Inherited: 0x08)
struct FTigerThrallAbilityTableRow : FTableRowBase {
	enum class ETigerThrallAbilityId AbilityId; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UTexture2D* AbilityIcon; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerThrallStatModifiersTableRow
// Size: 0x38 (Inherited: 0x08)
struct FTigerThrallStatModifiersTableRow : FTableRowBase {
	struct FText Name; // 0x08(0x18)
	int32_t StartingTurnsAffecting; // 0x20(0x04)
	int32_t InjuryLevel; // 0x24(0x04)
	struct FTigerThrallStats StatModifier; // 0x28(0x10)
};

// ScriptStruct Tiger.TigerBaseThrallTableRow
// Size: 0x18 (Inherited: 0x08)
struct FTigerBaseThrallTableRow : FTableRowBase {
	enum class ETigerThrallId ThrallId; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UTigerBaseThrallData* BaseThrall; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerThrallUpgradeScreenInformation
// Size: 0x10 (Inherited: 0x00)
struct FTigerThrallUpgradeScreenInformation {
	struct TArray<int32_t> ThrallStatsArray; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerThrallDetailsScreenInformation
// Size: 0x60 (Inherited: 0x00)
struct FTigerThrallDetailsScreenInformation {
	struct FText ThrallInjuries; // 0x00(0x18)
	struct FText ThrallDescription; // 0x18(0x18)
	struct FText ThrallHintText; // 0x30(0x18)
	struct UTexture2D* ThrallKeepsakePortrait; // 0x48(0x08)
	struct TArray<int32_t> ThrallStatsArray; // 0x50(0x10)
};

// ScriptStruct Tiger.TigerThrallCharacterCardInformation
// Size: 0x40 (Inherited: 0x00)
struct FTigerThrallCharacterCardInformation {
	struct FText ThrallName; // 0x00(0x18)
	struct UTexture2D* ThrallPortrait; // 0x18(0x08)
	int32_t ThrallExp; // 0x20(0x04)
	float ThrallExpNormalised; // 0x24(0x04)
	float ThrallHealthNormalised; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FTigerThrallAbility> ThrallAbilities; // 0x30(0x10)
};

// ScriptStruct Tiger.TigerThrallAbility
// Size: 0x28 (Inherited: 0x00)
struct FTigerThrallAbility {
	struct FText AbilityName; // 0x00(0x18)
	struct UTexture2D* AbilityIcon; // 0x18(0x08)
	enum class ETigerThrallAbilityId AbilityId; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Tiger.TigerWallJumpBlendBundle
// Size: 0x10 (Inherited: 0x00)
struct FTigerWallJumpBlendBundle {
	float InputBlendScale; // 0x00(0x04)
	float NormalBlendScale; // 0x04(0x04)
	float VelocityDirectionBlendScale; // 0x08(0x04)
	float VelocityForceScale; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerMetadata
// Size: 0x48 (Inherited: 0x00)
struct FTigerMetadata {
	struct TArray<struct FTigerRankMetadata> Ranks; // 0x00(0x10)
	struct FTigerRankConfig_RankPointGain RankPointGain; // 0x10(0x18)
	struct TArray<struct FTigerWeaponMetadata> WeaponMetadata; // 0x28(0x10)
	struct TArray<struct FString> ArchetypeNames; // 0x38(0x10)
};

// ScriptStruct Tiger.TigerWeaponMetadata
// Size: 0x30 (Inherited: 0x00)
struct FTigerWeaponMetadata {
	struct FString Name; // 0x00(0x10)
	struct FString IconFileName; // 0x10(0x10)
	struct TArray<struct FString> WeaponIds; // 0x20(0x10)
};

// ScriptStruct Tiger.TigerRankMetadata
// Size: 0x28 (Inherited: 0x00)
struct FTigerRankMetadata {
	struct FString Name; // 0x00(0x10)
	int32_t RankPointsThreshold; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString IconFileName; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerResponse_TrackerMatchStats
// Size: 0x18 (Inherited: 0x18)
struct FTigerResponse_TrackerMatchStats : FTigerResponseEnvelope {
};

// ScriptStruct Tiger.TigerRequest_TrackerMatchStats
// Size: 0x78 (Inherited: 0x00)
struct FTigerRequest_TrackerMatchStats {
	struct FString Mode; // 0x00(0x10)
	int64_t SeasonId; // 0x10(0x08)
	struct FGuid MatchID; // 0x18(0x10)
	struct FString Date; // 0x28(0x10)
	struct FString GameplayMode; // 0x38(0x10)
	struct FString RankMode; // 0x48(0x10)
	struct FString Map; // 0x58(0x10)
	struct TArray<struct FTigerPlayerTrackerStats> PlayerStats; // 0x68(0x10)
};

// ScriptStruct Tiger.TigerPlayerTrackerStats
// Size: 0x150 (Inherited: 0x00)
struct FTigerPlayerTrackerStats {
	struct FString PlayerId; // 0x00(0x10)
	struct FGuid GroupID; // 0x10(0x10)
	struct FGuid TeamId; // 0x20(0x10)
	struct FString Platform; // 0x30(0x10)
	struct FString PlayerName; // 0x40(0x10)
	int32_t Placement; // 0x50(0x04)
	int32_t Kills; // 0x54(0x04)
	int32_t Assists; // 0x58(0x04)
	int32_t TimeAlive; // 0x5c(0x04)
	int32_t AlliesRevived; // 0x60(0x04)
	int32_t Diableries; // 0x64(0x04)
	int32_t DamageDone; // 0x68(0x04)
	int32_t DistanceTraveled; // 0x6c(0x04)
	int32_t Deaths; // 0x70(0x04)
	int32_t ArchetypeIndex; // 0x74(0x04)
	int32_t ArchetypeLevel; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TMap<struct FString, struct FTigerRangedWeaponTrackerStats> RangedWeaponStats; // 0x80(0x50)
	struct TMap<struct FString, struct FTigerMeleeWeaponTrackerStats> MeleeWeaponStats; // 0xd0(0x50)
	int32_t PlayerLevel; // 0x120(0x04)
	int32_t PlayerRankPoints; // 0x124(0x04)
	int32_t PlayerSeasonLevel; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct FString PlayerIconId; // 0x130(0x10)
	struct FTigerPlayerMedalsEarned PlayerMedalsEarned; // 0x140(0x10)
};

// ScriptStruct Tiger.TigerPlayerMedalsEarned
// Size: 0x10 (Inherited: 0x00)
struct FTigerPlayerMedalsEarned {
	enum class ETigerMedalTier EliminationsMedal; // 0x00(0x04)
	enum class ETigerMedalTier AssistsMedal; // 0x04(0x04)
	enum class ETigerMedalTier DiableriesMedal; // 0x08(0x04)
	enum class ETigerMedalTier DamageDealtMedal; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerMeleeWeaponTrackerStats
// Size: 0x10 (Inherited: 0x00)
struct FTigerMeleeWeaponTrackerStats {
	int32_t Attacks; // 0x00(0x04)
	int32_t Downs; // 0x04(0x04)
	int32_t Hits; // 0x08(0x04)
	int32_t DamageDone; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerRangedWeaponTrackerStats
// Size: 0x14 (Inherited: 0x00)
struct FTigerRangedWeaponTrackerStats {
	int32_t Downs; // 0x00(0x04)
	int32_t Shots; // 0x04(0x04)
	int32_t Hits; // 0x08(0x04)
	int32_t Headshots; // 0x0c(0x04)
	int32_t DamageDone; // 0x10(0x04)
};

// ScriptStruct Tiger.TigerNewNotificationSaveLoadStruct
// Size: 0x18 (Inherited: 0x00)
struct FTigerNewNotificationSaveLoadStruct {
	struct TArray<struct FTigerNewNotificationNodeEntry> SaveLoadEntries; // 0x00(0x10)
	int64_t LatestLoginDaysFromEpoch; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerNewNotificationNodeEntry
// Size: 0x18 (Inherited: 0x00)
struct FTigerNewNotificationNodeEntry {
	char EnumMenuOption; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FString> Ids; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerCustomizableAxisKeybindData
// Size: 0x38 (Inherited: 0x00)
struct FTigerCustomizableAxisKeybindData {
	struct FText DISPLAYNAME; // 0x00(0x18)
	struct FText OptionalReverseDisplayName; // 0x18(0x18)
	bool DebugOnly; // 0x30(0x01)
	bool AllowDebugOnConsoleShipping; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct Tiger.TigerCustomizableKeybindData
// Size: 0x20 (Inherited: 0x00)
struct FTigerCustomizableKeybindData {
	struct FText DISPLAYNAME; // 0x00(0x18)
	bool DebugOnly; // 0x18(0x01)
	bool AllowDebugOnConsoleShipping; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct Tiger.TigerInputPresetData
// Size: 0x18 (Inherited: 0x00)
struct FTigerInputPresetData {
	struct FString ConfigFileName; // 0x00(0x10)
	bool bUseAutoSprint; // 0x10(0x01)
	bool bHoldForHeightenedSenses; // 0x11(0x01)
	bool bHoldForInventory; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
};

// ScriptStruct Tiger.TigerInputBindings
// Size: 0x48 (Inherited: 0x00)
struct FTigerInputBindings {
	struct TArray<struct FInputActionKeyMapping> KeyboardMouseMappings; // 0x00(0x10)
	struct TArray<struct FInputAxisKeyMapping> KeyboardMouseAxisMappings; // 0x10(0x10)
	struct TArray<struct FInputActionKeyMapping> GamepadMappings; // 0x20(0x10)
	struct TArray<struct FInputAxisKeyMapping> GamepadAxisMappings; // 0x30(0x10)
	int32_t SavedVersion; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Tiger.TigerInputSettings
// Size: 0xc8 (Inherited: 0x00)
struct FTigerInputSettings {
	struct FTigerControllerSettings KeyboardMouseSettings; // 0x00(0x30)
	struct FTigerControllerSettings GamepadSettings; // 0x30(0x30)
	struct FTigerGamepadSpecificSettings GamepadSpecificSettings; // 0x60(0x60)
	bool bUseAutoSprint; // 0xc0(0x01)
	bool bHoldForHeightenedSenses; // 0xc1(0x01)
	bool bHoldToAimDownSights; // 0xc2(0x01)
	char pad_C3[0x1]; // 0xc3(0x01)
	int32_t SavedVersion; // 0xc4(0x04)
};

// ScriptStruct Tiger.TigerGamepadSpecificSettings
// Size: 0x60 (Inherited: 0x00)
struct FTigerGamepadSpecificSettings {
	float DeadZone; // 0x00(0x04)
	int32_t InputCurve; // 0x04(0x04)
	float RumbleIntensity; // 0x08(0x04)
	bool bEnableAimAssistSlowDown; // 0x0c(0x01)
	bool bEnableAimAssistRotation; // 0x0d(0x01)
	bool bEnableAdaptiveTriggers; // 0x0e(0x01)
	bool bEnableAdaptiveTriggerVibration; // 0x0f(0x01)
	bool bShowAdvancedOptions; // 0x10(0x01)
	bool bEnableDampen; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	float DampenHorizontalStrength; // 0x14(0x04)
	float DampenVerticalStrength; // 0x18(0x04)
	float DampenHorizontalADSStrength; // 0x1c(0x04)
	float DampenVerticalADSStrength; // 0x20(0x04)
	float DampenHorizontalScopedStrength; // 0x24(0x04)
	float DampenVerticalScopedStrength; // 0x28(0x04)
	float DampenTime; // 0x2c(0x04)
	float DampenZone; // 0x30(0x04)
	bool bEnableBoost; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float BoostHorizontalStrength; // 0x38(0x04)
	float BoostVerticalStrength; // 0x3c(0x04)
	float BoostHorizontalADSStrength; // 0x40(0x04)
	float BoostVerticalADSStrength; // 0x44(0x04)
	float BoostHorizontalScopedStrength; // 0x48(0x04)
	float BoostVerticalScopedStrength; // 0x4c(0x04)
	float BoostZone; // 0x50(0x04)
	float BoostRampTime; // 0x54(0x04)
	float BoostDelayTime; // 0x58(0x04)
	int32_t SavedVersion; // 0x5c(0x04)
};

// ScriptStruct Tiger.TigerControllerSettings
// Size: 0x30 (Inherited: 0x00)
struct FTigerControllerSettings {
	int32_t WeaponCyclePreset; // 0x00(0x04)
	struct FTigerSensitivitySetting SensitivitySettings; // 0x04(0x20)
	bool bInvertedYAxis; // 0x24(0x01)
	bool bInvertedXAxis; // 0x25(0x01)
	bool bHoldJumpToClimb; // 0x26(0x01)
	bool bHoldForInventory; // 0x27(0x01)
	int32_t GamepadSavedVersion; // 0x28(0x04)
	int32_t KeyboardMouseSavedVersion; // 0x2c(0x04)
};

// ScriptStruct Tiger.TigerSensitivitySetting
// Size: 0x20 (Inherited: 0x00)
struct FTigerSensitivitySetting {
	float MasterSensitivityX; // 0x00(0x04)
	float MasterSensitivityY; // 0x04(0x04)
	float HorizontalSensitivity; // 0x08(0x04)
	float VerticalSensitivity; // 0x0c(0x04)
	float AimingSensitivityX; // 0x10(0x04)
	float AimingSensitivityY; // 0x14(0x04)
	float ScopedSensitivityX; // 0x18(0x04)
	float ScopedSensitivityY; // 0x1c(0x04)
};

// ScriptStruct Tiger.TigerVendorStoreCategoryItem
// Size: 0x98 (Inherited: 0x00)
struct FTigerVendorStoreCategoryItem {
	struct FTigerMetaStoreEntry StoreEntry; // 0x00(0x50)
	struct TSoftClassPtr<UObject> ItemClassPath; // 0x50(0x28)
	struct UTigerInventoryItemBase* BaseItem; // 0x78(0x08)
	int32_t Cost; // 0x80(0x04)
	int32_t InventoryCount; // 0x84(0x04)
	struct FTigerItemId SoftCurrencyId; // 0x88(0x08)
	int32_t StorePriority; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct Tiger.TigerVoEvent
// Size: 0x18 (Inherited: 0x00)
struct FTigerVoEvent {
	struct FName Category; // 0x00(0x08)
	struct AActor* EventActor; // 0x08(0x08)
	bool bPlayFacialAnimFromCategory; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Tiger.TigerVoCategoryData
// Size: 0x0c (Inherited: 0x00)
struct FTigerVoCategoryData {
	char Prio; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float TriggerChance; // 0x04(0x04)
	float Cooldown; // 0x08(0x04)
};

// ScriptStruct Tiger.TigerWaveDataRow
// Size: 0x20 (Inherited: 0x08)
struct FTigerWaveDataRow : FTableRowBase {
	float WaitTime; // 0x08(0x04)
	float ClosingTime; // 0x0c(0x04)
	float DamageTickInterval; // 0x10(0x04)
	float DamagePerTick; // 0x14(0x04)
	float CoveragePercentage; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Tiger.TigerHolyIncenseBorderLine
// Size: 0x1c (Inherited: 0x00)
struct FTigerHolyIncenseBorderLine {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct Tiger.TigerWeaponScalingCrosshairSlot
// Size: 0x90 (Inherited: 0x00)
struct FTigerWeaponScalingCrosshairSlot {
	struct FSlateBrush Brush; // 0x00(0x88)
	float RenderAngle; // 0x88(0x04)
	float AdditionalSize; // 0x8c(0x04)
};

// ScriptStruct Tiger.TigerWeaponCrosshairSlot
// Size: 0xb8 (Inherited: 0x00)
struct FTigerWeaponCrosshairSlot {
	struct FVector2D Direction; // 0x00(0x08)
	struct FVector2D Offset; // 0x08(0x08)
	struct FVector2D Alignment; // 0x10(0x08)
	struct FSlateBrush Brush; // 0x18(0x88)
	struct FLinearColor Color; // 0xa0(0x10)
	float RenderAngle; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// ScriptStruct Tiger.TigerRangedWeaponData
// Size: 0xc0 (Inherited: 0x08)
struct FTigerRangedWeaponData : FTableRowBase {
	int32_t MaxAmmoInClips[0x4]; // 0x08(0x10)
	int32_t AmmoOnPickup; // 0x18(0x04)
	bool bCanHeadshot; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float BodyPartDamageModifiers[0x6]; // 0x20(0x18)
	float NPCBulletDamage; // 0x38(0x04)
	float OverrideReloadTime; // 0x3c(0x04)
	float ReloadCooldown; // 0x40(0x04)
	float ReloadSpeedMultiplier; // 0x44(0x04)
	float ActivationTime; // 0x48(0x04)
	bool bEnableFireModeSwitchByDefault; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct TArray<struct FTigerFireSettings> FireSettings; // 0x50(0x10)
	struct TArray<struct UTigerRangedModItemAsset*> BarrelMods; // 0x60(0x10)
	struct TArray<struct UTigerRangedModItemAsset*> AmmoMods; // 0x70(0x10)
	struct TArray<struct UTigerRangedModItemAsset*> ScopeMods; // 0x80(0x10)
	struct TArray<struct UTigerRangedModItemAsset*> StockMods; // 0x90(0x10)
	struct TArray<struct UTigerRangedModItemAsset*> SpecialMods; // 0xa0(0x10)
	struct UTigerBuff* InAirMomentumDrainBuff; // 0xb0(0x08)
	float InAirMomentumDrainBuffSpeedMultiplier; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// ScriptStruct Tiger.SkyOverrides
// Size: 0xd8 (Inherited: 0x00)
struct FSkyOverrides {
	struct FSkyTextures SkyTexturesOverride; // 0x00(0x78)
	enum class EFogVariations FogVariationOverride; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	struct FPostProcessOverrides PostProcessOverride; // 0x7c(0x58)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// ScriptStruct Tiger.PostProcessOverrides
// Size: 0x58 (Inherited: 0x00)
struct FPostProcessOverrides {
	float Temperature; // 0x00(0x04)
	float Tint; // 0x04(0x04)
	struct FLinearColor Saturation; // 0x08(0x10)
	struct FLinearColor Contrast; // 0x18(0x10)
	struct FLinearColor Gamma; // 0x28(0x10)
	struct FLinearColor Gain; // 0x38(0x10)
	struct FLinearColor Offset; // 0x48(0x10)
};

// ScriptStruct Tiger.SkyTextures
// Size: 0x78 (Inherited: 0x00)
struct FSkyTextures {
	struct TSoftObjectPtr<UTextureCube> SkyTextureOverride; // 0x00(0x28)
	struct TSoftObjectPtr<UTextureCube> FlowmapTextureOverride; // 0x28(0x28)
	struct TSoftObjectPtr<UTextureCube> SkyLightTextureOverride; // 0x50(0x28)
};

// ScriptStruct Tiger.GatheredTigerCompositionCell
// Size: 0x28 (Inherited: 0x00)
struct FGatheredTigerCompositionCell {
	char pad_0[0x28]; // 0x00(0x28)
};

