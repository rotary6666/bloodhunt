// Enum Shark.EShAccountChannel
enum class EShAccountChannel : uint8 {
	DEV = 0,
	STEAM = 21,
	SHARKNET = 25,
	PS5 = 27,
	UNKNOWN = 255,
	EShAccountChannel_MAX = 256
};

// Enum Shark.ESharkPlatformType
enum class ESharkPlatformType : uint8 {
	Windows = 0,
	PS5 = 1,
	ESharkPlatformType_MAX = 2
};

// Enum Shark.ESharkCustomPrimitiveFloatDataName
enum class ESharkCustomPrimitiveFloatDataName : uint8 {
	AlbedoHueShift = 0,
	Alpha = 1,
	AmbientOcclusion = 2,
	DiffuseDesaturation = 3,
	DirtAmount = 4,
	EmissiveMultiplier = 5,
	Height = 6,
	Metallic = 7,
	Roughness = 8,
	RoughnessOffset = 9,
	WindStrength = 10,
	GlassDestruction_Use = 11,
	GlassDestruction_UseUv = 12,
	Vehicle_Roughness = 13,
	Vehicle_Rustiness = 14,
	Vehicle_Dirtiness = 15,
	Vehicle_EmissiveStrength = 16,
	Vehicle_Metalness = 17,
	Vehicle_CrushAllZones = 18,
	Vehicle_CrushZone0 = 19,
	Vehicle_CrushZone1 = 20,
	Vehicle_CrushZone2 = 21,
	Vehicle_CrushZone3 = 22,
	Vehicle_CrushZone4 = 23,
	Vehicle_CanBounce = 24,
	Vehicle_CanSquash = 25,
	Custom_1 = 26,
	Custom_2 = 27,
	Custom_3 = 28,
	Custom_4 = 29,
	Custom_5 = 30,
	Custom_6 = 31,
	Custom_7 = 32,
	Custom_8 = 33,
	Custom_9 = 34,
	Custom_10 = 35,
	Custom_11 = 36,
	Custom_12 = 37,
	Custom_13 = 38,
	Custom_14 = 39,
	Custom_15 = 40,
	Custom_16 = 41,
	Custom_17 = 42,
	Custom_18 = 43,
	Custom_19 = 44,
	Custom_20 = 45,
	Custom_21 = 46,
	Custom_22 = 47,
	Custom_23 = 48,
	Custom_24 = 49,
	Custom_25 = 50,
	Custom_26 = 51,
	Custom_27 = 52,
	Custom_28 = 53,
	Custom_29 = 54,
	Custom_30 = 55,
	Custom_31 = 56,
	Custom_32 = 57,
	Count = 58,
	ESharkCustomPrimitiveFloatDataName_MAX = 59
};

// Enum Shark.ESharkCustomPrimitiveVector2DataName
enum class ESharkCustomPrimitiveVector2DataName : uint8 {
	UvOffset = 0,
	UvScale = 1,
	GlassDestruction_Tiling = 2,
	Custom_0_2 = 3,
	Custom_2_4 = 4,
	Custom_4_6 = 5,
	Custom_6_8 = 6,
	Custom_8_10 = 7,
	Custom_10_12 = 8,
	Custom_12_14 = 9,
	Custom_14_16 = 10,
	Custom_16_18 = 11,
	Custom_18_20 = 12,
	Custom_20_22 = 13,
	Custom_22_24 = 14,
	Custom_24_26 = 15,
	Custom_26_28 = 16,
	Custom_28_30 = 17,
	Custom_30_32 = 18,
	Count = 19,
	ESharkCustomPrimitiveVector2DataName_MAX = 20
};

// Enum Shark.ESharkCustomPrimitiveVector3DataName
enum class ESharkCustomPrimitiveVector3DataName : uint8 {
	Color1_Rgb = 0,
	Color2_Rgb = 1,
	EmissiveColor_Rgb = 2,
	GlassDestruction_Pos = 3,
	GlassDestruction_ProjX = 4,
	GlassDestruction_ProjY = 5,
	Vehicle_ColorTintRgb = 6,
	Vehicle_InteriorColorTintRgb = 7,
	Vehicle_BounceXyz = 8,
	Custom_0_3 = 9,
	Custom_1_4 = 10,
	Custom_4_7 = 11,
	Custom_5_8 = 12,
	Custom_8_11 = 13,
	Custom_9_12 = 14,
	Custom_12_15 = 15,
	Custom_13_16 = 16,
	Custom_16_19 = 17,
	Custom_17_20 = 18,
	Custom_20_23 = 19,
	Custom_21_24 = 20,
	Custom_24_27 = 21,
	Custom_25_28 = 22,
	Custom_28_31 = 23,
	Custom_29_32 = 24,
	Count = 25,
	ESharkCustomPrimitiveVector3DataName_MAX = 26
};

// Enum Shark.ESharkCustomPrimitiveVector4DataName
enum class ESharkCustomPrimitiveVector4DataName : uint8 {
	ColorRgba = 0,
	Custom_0_4 = 1,
	Custom_4_8 = 2,
	Custom_8_12 = 3,
	Custom_12_16 = 4,
	Custom_16_20 = 5,
	Custom_20_24 = 6,
	Custom_24_28 = 7,
	Custom_28_32 = 8,
	Count = 9,
	ESharkCustomPrimitiveVector4DataName_MAX = 10
};

// Enum Shark.ESharkFourWayDirection
enum class ESharkFourWayDirection : uint8 {
	Forward = 0,
	Right = 1,
	Back = 2,
	Left = 3,
	Count = 4,
	ESharkFourWayDirection_MAX = 5
};

// Enum Shark.ESharkTelemtryResponseCodes
enum class ESharkTelemtryResponseCodes : int32 {
	UNKNOWN_CODE = 0,
	Success = 1,
	StandardHTTPCode = 2,
	InvalidMessage = 1000,
	IllegalTitleInput = 1001,
	IllegalDataInput = 1002,
	IllegalMessage = 1003,
	ServerException = 1004,
	InvalidURL = 1005,
	InvalidVerbOrContentType = 1006,
	ESharkTelemtryResponseCodes_MAX = 1007
};

// ScriptStruct Shark.SharkAccountActionResult
// Size: 0x30 (Inherited: 0x00)
struct FSharkAccountActionResult {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString InternalErrorMessage; // 0x08(0x10)
	struct FString InternalThirdPartyErrorMessage; // 0x18(0x10)
	int32_t ErrorCode; // 0x28(0x04)
	int32_t ThirdPartyErrorCode; // 0x2c(0x04)
};

// ScriptStruct Shark.SharkLoginResult
// Size: 0x98 (Inherited: 0x30)
struct FSharkLoginResult : FSharkAccountActionResult {
	struct FString UserName; // 0x30(0x10)
	struct FString OpenId; // 0x40(0x10)
	struct FString Token; // 0x50(0x10)
	struct FString PfKey; // 0x60(0x10)
	struct FString Pf; // 0x70(0x10)
	struct FString SharkmobToken; // 0x80(0x10)
	enum class EShAccountChannel AuthenticationChannelId; // 0x90(0x01)
	bool IsNewAccount; // 0x91(0x01)
	char pad_92[0x6]; // 0x92(0x06)
};

// ScriptStruct Shark.SharkAccountRegistrationData
// Size: 0x50 (Inherited: 0x00)
struct FSharkAccountRegistrationData {
	struct FString Email; // 0x00(0x10)
	struct FString Password; // 0x10(0x10)
	int32_t RegionId; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString UserName; // 0x28(0x10)
	struct FString VerificationCode; // 0x38(0x10)
	int32_t RecieveEmail; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Shark.SharkRandomDeviation
// Size: 0x08 (Inherited: 0x00)
struct FSharkRandomDeviation {
	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)
};

// ScriptStruct Shark.SharkUserId
// Size: 0x10 (Inherited: 0x00)
struct FSharkUserId {
	struct FString ID; // 0x00(0x10)
};

// ScriptStruct Shark.SharkInt8Vector
// Size: 0x03 (Inherited: 0x00)
struct FSharkInt8Vector {
	int8_t X; // 0x00(0x01)
	int8_t Y; // 0x01(0x01)
	int8_t Z; // 0x02(0x01)
};

// ScriptStruct Shark.SharkTokenBucket
// Size: 0x0c (Inherited: 0x00)
struct FSharkTokenBucket {
	char pad_0[0x4]; // 0x00(0x04)
	float Capacity; // 0x04(0x04)
	float TokenFillRatePerSecond; // 0x08(0x04)
};

// ScriptStruct Shark.SharkRandomDeviationInt
// Size: 0x08 (Inherited: 0x00)
struct FSharkRandomDeviationInt {
	int32_t Min; // 0x00(0x04)
	int32_t Max; // 0x04(0x04)
};

// ScriptStruct Shark.SharkTelemetryEventBase
// Size: 0x08 (Inherited: 0x00)
struct FSharkTelemetryEventBase {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Shark.SharkTelemetryDateTime
// Size: 0x01 (Inherited: 0x00)
struct FSharkTelemetryDateTime {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Shark.ShChannelInfo
// Size: 0x10 (Inherited: 0x00)
struct FShChannelInfo {
	struct FShMapInfo map_info; // 0x00(0x10)
};

// ScriptStruct Shark.ShMapInfo
// Size: 0x10 (Inherited: 0x00)
struct FShMapInfo {
	struct FString sacc_token; // 0x00(0x10)
};

// ScriptStruct Shark.SharkGameInstanceId
// Size: 0x10 (Inherited: 0x00)
struct FSharkGameInstanceId {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Shark.SharkRoundRobinClassSettings
// Size: 0x30 (Inherited: 0x00)
struct FSharkRoundRobinClassSettings {
	struct TSoftClassPtr<UObject> Class; // 0x00(0x28)
	enum class ETickingGroup TickingGroup; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	uint32_t FramesBetweenUpdates; // 0x2c(0x04)
};

// ScriptStruct Shark.SharkServerMetricsConfig
// Size: 0x28 (Inherited: 0x00)
struct FSharkServerMetricsConfig {
	float UploadIntervalSeconds; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString UploadURI; // 0x08(0x10)
	struct FString Database; // 0x18(0x10)
};

// ScriptStruct Shark.SharkTelemtryEventData
// Size: 0x28 (Inherited: 0x00)
struct FSharkTelemtryEventData {
	char pad_0[0x18]; // 0x00(0x18)
	struct UStruct* StaticPropertyStruct; // 0x18(0x08)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct Shark.SharkTelemetrySettings
// Size: 0x50 (Inherited: 0x00)
struct FSharkTelemetrySettings {
	struct FString DomainURL; // 0x00(0x10)
	struct FString SecretKey; // 0x10(0x10)
	struct FString ApplicationName; // 0x20(0x10)
	struct FString ApplicationID; // 0x30(0x10)
	int32_t DefaultRequestRetryCount; // 0x40(0x04)
	int32_t ChunkDispatchMaxBodySizeBytes; // 0x44(0x04)
	int32_t ChunkDispatchAmountThreshold; // 0x48(0x04)
	float ChunkDispatchTimeSecondsThreshold; // 0x4c(0x04)
};

// ScriptStruct Shark.SharkTelemetryHTTPSResponse
// Size: 0x98 (Inherited: 0x00)
struct FSharkTelemetryHTTPSResponse {
	struct FSharkTelemetryHTTPSRequestHeader Title; // 0x00(0x80)
	struct FSharkTelemetryHTTPSResponseDataChunk Data; // 0x80(0x18)
};

// ScriptStruct Shark.SharkTelemetryHTTPSResponseDataChunk
// Size: 0x18 (Inherited: 0x00)
struct FSharkTelemetryHTTPSResponseDataChunk {
	int32_t code; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Msg; // 0x08(0x10)
};

// ScriptStruct Shark.SharkTelemetryHTTPSRequestHeader
// Size: 0x80 (Inherited: 0x00)
struct FSharkTelemetryHTTPSRequestHeader {
	struct FString app_id; // 0x00(0x10)
	struct FString app_name; // 0x10(0x10)
	struct FString Timestamp; // 0x20(0x10)
	struct FString seq_id; // 0x30(0x10)
	struct FString retry_times; // 0x40(0x10)
	struct FString key_x; // 0x50(0x10)
	struct FString key_y; // 0x60(0x10)
	struct FString key_z; // 0x70(0x10)
};

// ScriptStruct Shark.SharkTelemetryDataBundle
// Size: 0x10 (Inherited: 0x00)
struct FSharkTelemetryDataBundle {
	struct TArray<struct FSharkTelemetryHTTPSRequestDataChunk> Data; // 0x00(0x10)
};

// ScriptStruct Shark.SharkTelemetryHTTPSRequestDataChunk
// Size: 0x20 (Inherited: 0x00)
struct FSharkTelemetryHTTPSRequestDataChunk {
	struct FString log_name; // 0x00(0x10)
	struct FString log_fields; // 0x10(0x10)
};

// ScriptStruct Shark.SharkTelemetryHTTPSRequest
// Size: 0x90 (Inherited: 0x00)
struct FSharkTelemetryHTTPSRequest {
	struct FSharkTelemetryHTTPSRequestHeader Title; // 0x00(0x80)
	struct TArray<struct FSharkTelemetryHTTPSRequestDataChunk> Data; // 0x80(0x10)
};

