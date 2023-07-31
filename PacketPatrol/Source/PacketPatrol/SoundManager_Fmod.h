// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <string>

/**
 * 
 */

namespace FMOD 
{
    class System;
    class Channel;
    class Sound;
};

class PACKETPATROL_API SoundManager_Fmod
{
public:
    SoundManager_Fmod();
    ~SoundManager_Fmod();
    int initialize();
    int loadSoundFromPath(std::string pathToFile);
    int loadSoundFromMemory(char* memoryPtr, unsigned int memorySize);
    void playSound();
    void pauseSound(bool unPause = false);
        
private:
    FMOD::System* _system;
    FMOD::Channel* _channel;
    FMOD::Sound* _sound;

};
