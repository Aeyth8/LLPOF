#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChromaSDKPlugin

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "ChromaSDKPlugin_structs.hpp"


namespace SDK
{

// Class ChromaSDKPlugin.ChromaSDKPluginBPLibrary
// 0x0000 (0x0028 - 0x0028)
class UChromaSDKPluginBPLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void AddNonZeroAllKeys(int32 SourceAnimationId, int32 TargetAnimationId, int32 FrameId);
	static void AddNonZeroAllKeysAllFrames(int32 SourceAnimationId, int32 TargetAnimationId);
	static void AddNonZeroAllKeysAllFramesName(const class FString& SourceAnimationName, const class FString& TargetAnimationName);
	static void AddNonZeroAllKeysAllFramesOffset(int32 SourceAnimationId, int32 TargetAnimationId, int32 Offset);
	static void AddNonZeroAllKeysAllFramesOffsetName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 Offset);
	static void AddNonZeroAllKeysName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 FrameId);
	static void AddNonZeroTargetAllKeysAllFrames(int32 SourceAnimationId, int32 TargetAnimationId);
	static void AddNonZeroTargetAllKeysAllFramesName(const class FString& SourceAnimationName, const class FString& TargetAnimationName);
	static void AddNonZeroTargetAllKeysAllFramesOffset(int32 SourceAnimationId, int32 TargetAnimationId, int32 Offset);
	static void AddNonZeroTargetAllKeysAllFramesOffsetName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 Offset);
	static void AppendAllFrames(int32 SourceAnimationId, int32 TargetAnimationId);
	static void AppendAllFramesName(const class FString& SourceAnimationName, const class FString& TargetAnimationName);
	static struct FChromaSDKEffectResult ChromaSDKCreateEffectCustom1D(EChromaSDKDevice1DEnum Device, const TArray<struct FLinearColor>& Colors);
	static struct FChromaSDKEffectResult ChromaSDKCreateEffectCustom2D(EChromaSDKDevice2DEnum Device, const TArray<struct FChromaSDKColors>& Colors);
	static struct FChromaSDKEffectResult ChromaSDKCreateEffectKeyboardCustom2D(const TArray<struct FChromaSDKColors>& Colors);
	static struct FChromaSDKEffectResult ChromaSDKCreateEffectNone(EChromaSDKDeviceEnum Device);
	static struct FChromaSDKEffectResult ChromaSDKCreateEffectStatic(EChromaSDKDeviceEnum Device, const struct FLinearColor& ColorParam);
	static int32 ChromaSDKDeleteEffect(const struct FChromaSDKGuid& EffectId);
	static int32 ChromaSDKInit();
	static int32 ChromaSDKInitSDK(const struct FChromaSDKAppInfoType& AppInfo);
	static int32 ChromaSDKSetEffect(const struct FChromaSDKGuid& EffectId);
	static int32 ChromaSDKUnInit();
	static void ClearAll();
	static void ClearAnimationType(EChromaSDKDeviceEnum Device);
	static void CloseAll();
	static void CloseAnimation(const int32 AnimationId);
	static void CloseAnimationName(const class FString& AnimationName);
	static void CopyAllKeys(int32 SourceAnimationId, int32 TargetAnimationId, int32 FrameId);
	static void CopyAllKeysAllFrames(int32 SourceAnimationId, int32 TargetAnimationId);
	static void CopyAllKeysAllFramesName(const class FString& SourceAnimationName, const class FString& TargetAnimationName);
	static void CopyAllKeysName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 FrameId);
	static void CopyAnimation(int32 SourceAnimationId, const class FString& TargetAnimationName);
	static void CopyAnimationName(const class FString& SourceAnimationName, const class FString& TargetAnimationName);
	static void CopyKeyColor(int32 SourceAnimationId, int32 TargetAnimationId, int32 FrameIndex, EChromaSDKKeyboardKey Key);
	static void CopyKeyColorName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, const int32 FrameIndex, EChromaSDKKeyboardKey Key);
	static void CopyKeysColor(int32 SourceAnimationId, int32 TargetAnimationId, int32 FrameIndex, const TArray<EChromaSDKKeyboardKey>& Keys);
	static void CopyKeysColorAllFrames(int32 SourceAnimationId, int32 TargetAnimationId, const TArray<EChromaSDKKeyboardKey>& Keys);
	static void CopyKeysColorAllFramesName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, const TArray<EChromaSDKKeyboardKey>& Keys);
	static void CopyKeysColorName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, const int32 FrameIndex, const TArray<EChromaSDKKeyboardKey>& Keys);
	static void CopyNonZeroAllKeys(int32 SourceAnimationId, int32 TargetAnimationId, int32 FrameId);
	static void CopyNonZeroAllKeysAllFrames(int32 SourceAnimationId, int32 TargetAnimationId);
	static void CopyNonZeroAllKeysAllFramesName(const class FString& SourceAnimationName, const class FString& TargetAnimationName);
	static void CopyNonZeroAllKeysAllFramesOffset(int32 SourceAnimationId, int32 TargetAnimationId, int32 Offset);
	static void CopyNonZeroAllKeysAllFramesOffsetName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 Offset);
	static void CopyNonZeroAllKeysName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 FrameId);
	static void CopyNonZeroAllKeysOffset(int32 SourceAnimationId, int32 TargetAnimationId, int32 FrameId, int32 Offset);
	static void CopyNonZeroAllKeysOffsetName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 FrameId, int32 Offset);
	static void CopyNonZeroKeyColor(int32 SourceAnimationId, int32 TargetAnimationId, int32 FrameIndex, EChromaSDKKeyboardKey Key);
	static void CopyNonZeroKeyColorName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, const int32 FrameIndex, EChromaSDKKeyboardKey Key);
	static void CopyNonZeroKeysColor(int32 SourceAnimationId, int32 TargetAnimationId, int32 FrameIndex, const TArray<EChromaSDKKeyboardKey>& Keys);
	static void CopyNonZeroKeysColorAllFrames(int32 SourceAnimationId, int32 TargetAnimationId, const TArray<EChromaSDKKeyboardKey>& Keys);
	static void CopyNonZeroKeysColorAllFramesName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, const TArray<EChromaSDKKeyboardKey>& Keys);
	static void CopyNonZeroKeysColorName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, const int32 FrameIndex, const TArray<EChromaSDKKeyboardKey>& Keys);
	static void CopyNonZeroTargetAllKeys(int32 SourceAnimationId, int32 TargetAnimationId, int32 FrameId);
	static void CopyNonZeroTargetAllKeysAllFrames(int32 SourceAnimationId, int32 TargetAnimationId);
	static void CopyNonZeroTargetAllKeysAllFramesName(const class FString& SourceAnimationName, const class FString& TargetAnimationName);
	static void CopyNonZeroTargetAllKeysAllFramesOffset(int32 SourceAnimationId, int32 TargetAnimationId, int32 Offset);
	static void CopyNonZeroTargetAllKeysAllFramesOffsetName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 Offset);
	static void CopyNonZeroTargetAllKeysName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 FrameId);
	static void CopyZeroTargetAllKeysAllFrames(int32 SourceAnimationId, int32 TargetAnimationId);
	static void CopyZeroTargetAllKeysAllFramesName(const class FString& SourceAnimationName, const class FString& TargetAnimationName);
	static TArray<struct FLinearColor> CreateColors1D(EChromaSDKDevice1DEnum Device);
	static TArray<struct FChromaSDKColors> CreateColors2D(EChromaSDKDevice2DEnum Device);
	static TArray<struct FLinearColor> CreateRandomColors1D(EChromaSDKDevice1DEnum Device);
	static TArray<struct FChromaSDKColors> CreateRandomColors2D(EChromaSDKDevice2DEnum Device);
	static TArray<struct FLinearColor> CreateRandomColorsBlackAndWhite1D(EChromaSDKDevice1DEnum Device);
	static TArray<struct FChromaSDKColors> CreateRandomColorsBlackAndWhite2D(EChromaSDKDevice2DEnum Device);
	static void DuplicateFirstFrame(int32 AnimationId, int32 FrameCount);
	static void DuplicateFirstFrameName(const class FString& AnimationName, int32 FrameCount);
	static void DuplicateFrames(int32 AnimationId);
	static void DuplicateFramesName(const class FString& AnimationName);
	static void DuplicateMirrorFrames(int32 AnimationId);
	static void DuplicateMirrorFramesName(const class FString& AnimationName);
	static void FadeEndFrames(int32 AnimationId, int32 Fade);
	static void FadeEndFramesName(const class FString& AnimationName, int32 Fade);
	static void FadeStartFrames(int32 AnimationId, int32 Fade);
	static void FadeStartFramesName(const class FString& AnimationName, int32 Fade);
	static void FillColor(int32 AnimationId, int32 FrameId, const struct FLinearColor& ColorParam);
	static void FillColorAllFrames(int32 AnimationId, const struct FLinearColor& ColorParam);
	static void FillColorAllFramesName(const class FString& AnimationName, const struct FLinearColor& ColorParam);
	static void FillColorAllFramesRGB(int32 AnimationId, int32 Red, int32 Green, int32 blue);
	static void FillColorAllFramesRGBName(const class FString& AnimationName, int32 Red, int32 Green, int32 blue);
	static void FillColorName(const class FString& AnimationName, int32 FrameId, const struct FLinearColor& ColorParam);
	static void FillColorRGB(int32 AnimationId, int32 FrameId, int32 Red, int32 Green, int32 blue);
	static void FillColorRGBName(const class FString& AnimationName, int32 FrameId, int32 Red, int32 Green, int32 blue);
	static void FillNonZeroColor(int32 AnimationId, int32 FrameId, const struct FLinearColor& ColorParam);
	static void FillNonZeroColorAllFrames(int32 AnimationId, const struct FLinearColor& ColorParam);
	static void FillNonZeroColorAllFramesName(const class FString& AnimationName, const struct FLinearColor& ColorParam);
	static void FillNonZeroColorAllFramesRGB(int32 AnimationId, int32 Red, int32 Green, int32 blue);
	static void FillNonZeroColorAllFramesRGBName(const class FString& AnimationName, int32 Red, int32 Green, int32 blue);
	static void FillNonZeroColorName(const class FString& AnimationName, int32 FrameId, const struct FLinearColor& ColorParam);
	static void FillNonZeroColorRGB(int32 AnimationId, int32 FrameId, int32 Red, int32 Green, int32 blue);
	static void FillNonZeroColorRGBName(const class FString& AnimationName, int32 FrameId, int32 Red, int32 Green, int32 blue);
	static void FillRandomColors(int32 AnimationId, int32 FrameId);
	static void FillRandomColorsAllFrames(int32 AnimationId);
	static void FillRandomColorsAllFramesName(const class FString& AnimationName);
	static void FillRandomColorsBlackAndWhite(int32 AnimationId, int32 FrameId);
	static void FillRandomColorsBlackAndWhiteAllFrames(int32 AnimationId);
	static void FillRandomColorsBlackAndWhiteAllFramesName(const class FString& AnimationName);
	static void FillRandomColorsBlackAndWhiteName(const class FString& AnimationName, int32 FrameId);
	static void FillRandomColorsName(const class FString& AnimationName, int32 FrameId);
	static void FillThresholdColorsAllFrames(int32 AnimationId, int32 Threshold, const struct FLinearColor& ColorParam);
	static void FillThresholdColorsAllFramesName(const class FString& AnimationName, int32 Threshold, const struct FLinearColor& ColorParam);
	static void FillThresholdColorsAllFramesRGB(int32 AnimationId, int32 Threshold, int32 Red, int32 Green, int32 blue);
	static void FillThresholdColorsAllFramesRGBName(const class FString& AnimationName, int32 Threshold, int32 Red, int32 Green, int32 blue);
	static void FillThresholdColorsMinMaxAllFramesRGB(int32 AnimationId, int32 MinThreshold, int32 MinRed, int32 MinGreen, int32 MinBlue, int32 MaxThreshold, int32 MaxRed, int32 MaxGreen, int32 MaxBlue);
	static void FillThresholdColorsMinMaxAllFramesRGBName(const class FString& AnimationName, int32 MinThreshold, int32 MinRed, int32 MinGreen, int32 MinBlue, int32 MaxThreshold, int32 MaxRed, int32 MaxGreen, int32 MaxBlue);
	static void FillThresholdColorsRGB(int32 AnimationId, int32 FrameId, int32 Threshold, int32 Red, int32 Green, int32 blue);
	static void FillThresholdColorsRGBName(const class FString& AnimationName, int32 FrameId, int32 Threshold, int32 Red, int32 Green, int32 blue);
	static void FillThresholdRGBColorsAllFramesRGB(int32 AnimationId, int32 RedThreshold, int32 GreenThreshold, int32 blueThreshold, int32 Red, int32 Green, int32 blue);
	static void FillThresholdRGBColorsAllFramesRGBName(const class FString& AnimationName, int32 RedThreshold, int32 GreenThreshold, int32 blueThreshold, int32 Red, int32 Green, int32 blue);
	static void FillZeroColor(int32 AnimationId, int32 FrameId, const struct FLinearColor& ColorParam);
	static void FillZeroColorAllFrames(int32 AnimationId, const struct FLinearColor& ColorParam);
	static void FillZeroColorAllFramesName(const class FString& AnimationName, const struct FLinearColor& ColorParam);
	static void FillZeroColorAllFramesRGB(int32 AnimationId, int32 Red, int32 Green, int32 blue);
	static void FillZeroColorAllFramesRGBName(const class FString& AnimationName, int32 Red, int32 Green, int32 blue);
	static void FillZeroColorName(const class FString& AnimationName, int32 FrameId, const struct FLinearColor& ColorParam);
	static void FillZeroColorRGB(int32 AnimationId, int32 FrameId, int32 Red, int32 Green, int32 blue);
	static void FillZeroColorRGBName(const class FString& AnimationName, int32 FrameId, int32 Red, int32 Green, int32 blue);
	static int32 GetAnimation(const class FString& AnimationName);
	static int32 GetAnimationCount();
	static int32 GetAnimationId(const class FString& AnimationName);
	static int32 GetAnimationIdByIndex(int32 Index_0);
	static class FString GetAnimationName(const int32 AnimationId);
	static int32 GetBGRInt(int32 Red, int32 Green, int32 blue);
	static int32 GetCurrentFrame(int32 AnimationId);
	static int32 GetCurrentFrameName(const class FString& AnimationName);
	static int32 GetFrameCount(const int32 AnimationId);
	static int32 GetFrameCountName(const class FString& AnimationName);
	static struct FLinearColor GetKeyboardKeyColor(EChromaSDKKeyboardKey Key, TArray<struct FChromaSDKColors>& Colors);
	static EChromaSDKKeyboardKey GetKeyboardRazerKey(const struct FKey& Key);
	static int32 GetKeyboardRzKey(EChromaSDKKeyboardKey Key);
	static struct FLinearColor GetKeyColor(int32 AnimationId, int32 FrameIndex, EChromaSDKKeyboardKey Key);
	static struct FLinearColor GetKeyColorName(const class FString& AnimationName, const int32 FrameIndex, EChromaSDKKeyboardKey Key);
	static int32 GetMaxColumn(EChromaSDKDevice2DEnum Device);
	static int32 GetMaxLeds(EChromaSDKDevice1DEnum Device);
	static int32 GetMaxRow(EChromaSDKDevice2DEnum Device);
	static struct FLinearColor GetMouseLedColor(EChromaSDKMouseLed Led, TArray<struct FChromaSDKColors>& Colors);
	static int32 GetPlayingAnimationCount();
	static int32 GetPlayingAnimationId(int32 Index_0);
	static struct FLinearColor GetRGB(int32 Red, int32 Green, int32 blue);
	static void InsertDelay(int32 AnimationId, int32 FrameId, int32 Delay);
	static void InsertDelayName(const class FString& AnimationName, int32 FrameId, int32 Delay);
	static void InsertFrame(int32 AnimationId, int32 SourceFrame, int32 TargetFrame);
	static void InsertFrameName(const class FString& AnimationName, int32 SourceFrame, int32 TargetFrame);
	static void InvertColorsAllFrames(int32 AnimationId);
	static void InvertColorsAllFramesName(const class FString& AnimationName);
	static bool IsAnimationPlaying(const class FString& AnimationName);
	static bool IsAnimationTypePlaying(EChromaSDKDeviceEnum Device);
	static bool IsChromaSDKAvailable();
	static bool IsInitialized();
	static bool IsPlatformWindows();
	static float Lerp(float Start, float End, float Amt);
	static struct FLinearColor LerpColor(const struct FLinearColor& ColorParam1, const struct FLinearColor& ColorParam2, float T);
	static int32 LerpColorBGR(int32 From, int32 To, float T);
	static void LoadAnimation(const int32 AnimationId);
	static void LoadAnimationName(const class FString& AnimationName);
	static void MakeBlankFrames(int32 AnimationId, int32 FrameCount, float Duration, const struct FLinearColor& ColorParam);
	static void MakeBlankFramesName(const class FString& AnimationName, int32 FrameCount, float Duration, const struct FLinearColor& ColorParam);
	static void MakeBlankFramesRandom(int32 AnimationId, int32 FrameCount, float Duration);
	static void MakeBlankFramesRandomBlackAndWhite(int32 AnimationId, int32 FrameCount, float Duration);
	static void MakeBlankFramesRandomBlackAndWhiteName(const class FString& AnimationName, int32 FrameCount, float Duration);
	static void MakeBlankFramesRandomName(const class FString& AnimationName, int32 FrameCount, float Duration);
	static void MakeBlankFramesRGB(int32 AnimationId, int32 FrameCount, float Duration, int32 Red, int32 Green, int32 blue);
	static void MakeBlankFramesRGBName(const class FString& AnimationName, int32 FrameCount, float Duration, int32 Red, int32 Green, int32 blue);
	static void MultiplyColorLerpAllFrames(int32 AnimationId, const struct FLinearColor& ColorParam1, const struct FLinearColor& ColorParam2);
	static void MultiplyColorLerpAllFramesName(const class FString& AnimationName, const struct FLinearColor& ColorParam1, const struct FLinearColor& ColorParam2);
	static void MultiplyIntensity(int32 AnimationId, int32 FrameId, float Intensity);
	static void MultiplyIntensityAllFrames(int32 AnimationId, float Intensity);
	static void MultiplyIntensityAllFramesName(const class FString& AnimationName, float Intensity);
	static void MultiplyIntensityAllFramesRGB(int32 AnimationId, int32 Red, int32 Green, int32 blue);
	static void MultiplyIntensityAllFramesRGBName(const class FString& AnimationName, int32 Red, int32 Green, int32 blue);
	static void MultiplyIntensityColor(int32 AnimationId, int32 FrameId, const struct FLinearColor& ColorParam);
	static void MultiplyIntensityColorAllFrames(int32 AnimationId, const struct FLinearColor& ColorParam);
	static void MultiplyIntensityColorAllFramesName(const class FString& AnimationName, const struct FLinearColor& ColorParam);
	static void MultiplyIntensityColorName(const class FString& AnimationName, int32 FrameId, const struct FLinearColor& ColorParam);
	static void MultiplyIntensityName(const class FString& AnimationName, int32 FrameId, float Intensity);
	static void MultiplyIntensityRGB(int32 AnimationId, int32 FrameId, int32 Red, int32 Green, int32 blue);
	static void MultiplyIntensityRGBName(const class FString& AnimationName, int32 FrameId, int32 Red, int32 Green, int32 blue);
	static void MultiplyNonZeroTargetColorLerpAllFrames(int32 AnimationId, const struct FLinearColor& ColorParam1, const struct FLinearColor& ColorParam2);
	static void MultiplyNonZeroTargetColorLerpAllFramesName(const class FString& AnimationName, const struct FLinearColor& ColorParam1, const struct FLinearColor& ColorParam2);
	static void MultiplyTargetColorLerpAllFrames(int32 AnimationId, const struct FLinearColor& ColorParam1, const struct FLinearColor& ColorParam2);
	static void MultiplyTargetColorLerpAllFramesName(const class FString& AnimationName, const struct FLinearColor& ColorParam1, const struct FLinearColor& ColorParam2);
	static void OffsetColors(int32 AnimationId, int32 FrameId, int32 Red, int32 Green, int32 blue);
	static void OffsetColorsAllFrames(int32 AnimationId, int32 Red, int32 Green, int32 blue);
	static void OffsetColorsAllFramesName(const class FString& AnimationName, int32 Red, int32 Green, int32 blue);
	static void OffsetColorsName(const class FString& AnimationName, int32 FrameId, int32 Red, int32 Green, int32 blue);
	static void OffsetNonZeroColors(int32 AnimationId, int32 FrameId, int32 Red, int32 Green, int32 blue);
	static void OffsetNonZeroColorsAllFrames(int32 AnimationId, int32 Red, int32 Green, int32 blue);
	static void OffsetNonZeroColorsAllFramesName(const class FString& AnimationName, int32 Red, int32 Green, int32 blue);
	static void OffsetNonZeroColorsName(const class FString& AnimationName, int32 FrameId, int32 Red, int32 Green, int32 blue);
	static void OpenAnimationFromMemory(const TArray<uint8>& Data, const class FString& AnimationName);
	static void OverrideFrameDurationName(const class FString& AnimationName, float Duration);
	static void PlayAnimation(const class FString& AnimationName, bool Loop);
	static void PlayAnimationComposite(const class FString& AnimationName, bool Loop);
	static void PlayAnimationName(const class FString& AnimationName, bool Loop);
	static void PlayAnimations(const TArray<class FString>& AnimationNames, bool Loop);
	static int32 PreviewFrame(int32 AnimationId, int32 FrameId);
	static void PreviewFrameName(const class FString& AnimationName, int32 FrameId);
	static void ReduceFrames(int32 AnimationId, int32 N);
	static void ReduceFramesName(const class FString& AnimationName, int32 N);
	static void ReverseAllFrames(int32 AnimationId);
	static void ReverseAllFramesName(const class FString& AnimationName);
	static void SetChromaCustomColorAllFramesName(const class FString& AnimationName);
	static void SetChromaCustomFlagName(const class FString& AnimationName, bool Flag);
	static void SetCurrentFrame(int32 AnimationId, int32 FrameId);
	static void SetCurrentFrameName(const class FString& AnimationName, int32 FrameId);
	static void SetIdleAnimationName(const class FString& AnimationName);
	static void SetKeyboardKeyColor(EChromaSDKKeyboardKey Key, const struct FLinearColor& ColorParam, TArray<struct FChromaSDKColors>& Colors);
	static void SetKeyColor(int32 AnimationId, int32 FrameIndex, EChromaSDKKeyboardKey Key, const struct FLinearColor& ColorParam);
	static void SetKeyColorAllFrames(int32 AnimationId, EChromaSDKKeyboardKey Key, const struct FLinearColor& ColorParam);
	static void SetKeyColorAllFramesName(const class FString& AnimationName, EChromaSDKKeyboardKey Key, const struct FLinearColor& ColorParam);
	static void SetKeyColorName(const class FString& AnimationName, const int32 FrameIndex, EChromaSDKKeyboardKey Key, const struct FLinearColor& ColorParam);
	static void SetKeyNonZeroColor(int32 AnimationId, int32 FrameIndex, EChromaSDKKeyboardKey Key, const struct FLinearColor& ColorParam);
	static void SetKeyNonZeroColorAllFrames(int32 AnimationId, EChromaSDKKeyboardKey Key, const struct FLinearColor& ColorParam);
	static void SetKeyNonZeroColorAllFramesName(const class FString& AnimationName, EChromaSDKKeyboardKey Key, const struct FLinearColor& ColorParam);
	static void SetKeyNonZeroColorName(const class FString& AnimationName, const int32 FrameIndex, EChromaSDKKeyboardKey Key, const struct FLinearColor& ColorParam);
	static void SetKeyRowColumnColorName(const class FString& AnimationName, const int32 FrameIndex, const int32 Row, const int32 Column, const struct FLinearColor& ColorParam);
	static void SetKeysColor(int32 AnimationId, int32 FrameIndex, const TArray<EChromaSDKKeyboardKey>& Keys, const struct FLinearColor& ColorParam);
	static void SetKeysColorAllFrames(int32 AnimationId, const TArray<EChromaSDKKeyboardKey>& Keys, const struct FLinearColor& ColorParam);
	static void SetKeysColorAllFramesName(const class FString& AnimationName, const TArray<EChromaSDKKeyboardKey>& Keys, const struct FLinearColor& ColorParam);
	static void SetKeysColorAllFramesRGB(int32 AnimationId, const TArray<EChromaSDKKeyboardKey>& Keys, int32 Red, int32 Green, int32 blue);
	static void SetKeysColorAllFramesRGBName(const class FString& AnimationName, const TArray<EChromaSDKKeyboardKey>& Keys, int32 Red, int32 Green, int32 blue);
	static void SetKeysColorName(const class FString& AnimationName, const int32 FrameIndex, const TArray<EChromaSDKKeyboardKey>& Keys, const struct FLinearColor& ColorParam);
	static void SetKeysColorRGB(int32 AnimationId, int32 FrameIndex, const TArray<EChromaSDKKeyboardKey>& Keys, int32 Red, int32 Green, int32 blue);
	static void SetKeysColorRGBName(const class FString& AnimationName, const int32 FrameIndex, const TArray<EChromaSDKKeyboardKey>& Keys, int32 Red, int32 Green, int32 blue);
	static void SetKeysNonZeroColor(int32 AnimationId, int32 FrameIndex, const TArray<EChromaSDKKeyboardKey>& Keys, const struct FLinearColor& ColorParam);
	static void SetKeysNonZeroColorAllFrames(int32 AnimationId, const TArray<EChromaSDKKeyboardKey>& Keys, const struct FLinearColor& ColorParam);
	static void SetKeysNonZeroColorAllFramesName(const class FString& AnimationName, const TArray<EChromaSDKKeyboardKey>& Keys, const struct FLinearColor& ColorParam);
	static void SetKeysNonZeroColorName(const class FString& AnimationName, const int32 FrameIndex, const TArray<EChromaSDKKeyboardKey>& Keys, const struct FLinearColor& ColorParam);
	static void SetMouseLedColor(EChromaSDKMouseLed Led, const struct FLinearColor& ColorParam, TArray<struct FChromaSDKColors>& Colors);
	static void SetStaticColor(EChromaSDKDeviceEnum Device, const struct FLinearColor& Color);
	static void SetStaticColorAll(const struct FLinearColor& Color);
	static void StopAll();
	static void StopAnimation(const class FString& AnimationName);
	static void StopAnimationComposite(const class FString& AnimationName);
	static void StopAnimations(const TArray<class FString>& AnimationNames);
	static void StopAnimationType(EChromaSDKDeviceEnum Device);
	static void SubtractNonZeroAllKeys(int32 SourceAnimationId, int32 TargetAnimationId, int32 FrameId);
	static void SubtractNonZeroAllKeysAllFrames(int32 SourceAnimationId, int32 TargetAnimationId);
	static void SubtractNonZeroAllKeysAllFramesName(const class FString& SourceAnimationName, const class FString& TargetAnimationName);
	static void SubtractNonZeroAllKeysAllFramesOffset(int32 SourceAnimationId, int32 TargetAnimationId, int32 Offset);
	static void SubtractNonZeroAllKeysAllFramesOffsetName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 Offset);
	static void SubtractNonZeroAllKeysName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 FrameId);
	static void SubtractNonZeroTargetAllKeysAllFrames(int32 SourceAnimationId, int32 TargetAnimationId);
	static void SubtractNonZeroTargetAllKeysAllFramesName(const class FString& SourceAnimationName, const class FString& TargetAnimationName);
	static void SubtractNonZeroTargetAllKeysAllFramesOffset(int32 SourceAnimationId, int32 TargetAnimationId, int32 Offset);
	static void SubtractNonZeroTargetAllKeysAllFramesOffsetName(const class FString& SourceAnimationName, const class FString& TargetAnimationName, int32 Offset);
	static int32 ToBGR(const struct FLinearColor& ColorParam);
	static struct FLinearColor ToLinearColor(int32 ColorParam);
	static void TrimEndFrames(int32 AnimationId, int32 LastFrameId);
	static void TrimEndFramesName(const class FString& AnimationName, int32 LastFrameId);
	static void TrimFrame(int32 AnimationId, int32 FrameId);
	static void TrimFrameName(const class FString& AnimationName, int32 FrameId);
	static void TrimStartFrames(int32 AnimationId, int32 NumberOfFrames);
	static void TrimStartFramesName(const class FString& AnimationName, int32 NumberOfFrames);
	static void UnloadAnimation(const int32 AnimationId);
	static void UnloadAnimationName(const class FString& AnimationName);
	static void UseIdleAnimation(EChromaSDKDeviceEnum Device, bool Flag);
	static void UseIdleAnimations(bool Flag);
	static void UsePreloading(int32 AnimationId, bool Flag);
	static void UsePreloadingName(const class FString& AnimationName, bool Flag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChromaSDKPluginBPLibrary">();
	}
	static class UChromaSDKPluginBPLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChromaSDKPluginBPLibrary>();
	}
};
static_assert(alignof(UChromaSDKPluginBPLibrary) == 0x000008, "Wrong alignment on UChromaSDKPluginBPLibrary");
static_assert(sizeof(UChromaSDKPluginBPLibrary) == 0x000028, "Wrong size on UChromaSDKPluginBPLibrary");

// Class ChromaSDKPlugin.ChromaSDKSubsystem
// 0x00A0 (0x00D0 - 0x0030)
class UChromaSDKSubsystem final : public UGameInstanceSubsystem
{
public:
	uint8                                         Pad_30[0xA0];                                      // 0x0030(0x00A0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void PlayAnimation(const class FString& AnimationName, bool bLooping);
	void StopAllAnimations();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChromaSDKSubsystem">();
	}
	static class UChromaSDKSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChromaSDKSubsystem>();
	}
};
static_assert(alignof(UChromaSDKSubsystem) == 0x000008, "Wrong alignment on UChromaSDKSubsystem");
static_assert(sizeof(UChromaSDKSubsystem) == 0x0000D0, "Wrong size on UChromaSDKSubsystem");

}
