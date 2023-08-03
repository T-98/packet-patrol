// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "SoundManager_Fmod.h"
#include <memory>

#include "UObject/NoExportTypes.h"
#include "AudioManager.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class PACKETPATROL_API UAudioManager : public UObject
{
	GENERATED_BODY()

	public:
    UFUNCTION(BlueprintCallable, Category = Init)
        int32 InitializeManager();
	UFUNCTION(BlueprintCallable, Category = Init)
        int32 InitSpectrum_Linear(const int32 numBars);
    UFUNCTION(BlueprintCallable, Category = Init)
        int32 InitSpectrum_Log(const int32 numBars);

        
    UFUNCTION(BlueprintCallable, Category = Actions)
        int32 PlaySong();
    UFUNCTION(BlueprintCallable, Category = Actions)
        void PauseSong(bool unPause);
	UFUNCTION(BlueprintCallable, Category = Actions)
        void Update();

    UFUNCTION(BlueprintPure, Category = Access)
        const FString& GetSongName() const;

	UFUNCTION(BlueprintCallable, Category = Access)
        void GetSpectrum_Linear(TArray<float>& frequencyValues, const int32 effectiveBars);
    UFUNCTION(BlueprintCallable, Category = Access)
        void GetSpectrum_Log(TArray<float>& frequencyValues, const int32 effectiveBars);

    UAudioManager();
    ~UAudioManager();

private:
    std::unique_ptr<SoundManager_Fmod> _soundManager;
    FString currentSongName;

};
