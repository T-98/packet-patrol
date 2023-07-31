// Fill out your copyright notice in the Description page of Project Settings.


#include "AudioManager.h"
#include "Misc/Paths.h"
#include "Misc/FileHelper.h"
#include <string>

UAudioManager::UAudioManager()
{
}

UAudioManager::~UAudioManager()
{
}

int32 UAudioManager::InitializeManager()
{
    _soundManager = std::unique_ptr<SoundManager_Fmod>(new SoundManager_Fmod());
    int result = _soundManager->initialize();
    if (result > 0)
    {
        return result;
    }
    return 0;
}

int32 UAudioManager::PlaySong()
{
    FString songsPath = FPaths::ProjectContentDir() + "NonAssets/";
    currentSongName = "Voyage - Aura";
    FString songFile(songsPath + currentSongName + ".wav");
    uint8* data; 
    unsigned int dataLength = 0;
    TArray <uint8> rawFile;
    FFileHelper::LoadFileToArray(rawFile, *songFile);
    data = rawFile.GetData();
    dataLength = rawFile.Num() * sizeof(uint8);
    int32 result = _soundManager->loadSoundFromMemory(reinterpret_cast<char*>(data), dataLength);
    if (result > 0)
    {
            return result; //missing file
    }
    _soundManager->playSound();
    return 0;
}

void UAudioManager::PauseSong(bool unPause)
{
    _soundManager->pauseSound(unPause);
}

const FString& UAudioManager::GetSongName() const
{
    return currentSongName;
}
