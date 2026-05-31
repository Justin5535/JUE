// Fill out your copyright notice in the Description page of Project Settings.


#include "JueGameUserSettings.h"

void UJUEGameUserSettings::ApplySettings(bool bCheckForCommandLineOverrides)
{
	Super::ApplySettings(bCheckForCommandLineOverrides);
	
	OnGameSettingsUpdate.Broadcast(GameSettings);
	OnControlsSettingsUpdate.Broadcast(ControlSettings);
	OnAudioSettingsUpdate.Broadcast(AudioSettings);
}

void UJUEGameUserSettings::SetGameSpeed(float GameSpeed)
{
	GameSettings.GameSpeed = GameSpeed;
}

void UJUEGameUserSettings::SetSensitivity(float HorizontalSensitivity, float VerticalSensitivity)
{
	ControlSettings.HorizontalSensitivity = HorizontalSensitivity;
	ControlSettings.VerticalSensitivity = VerticalSensitivity;
}

void UJUEGameUserSettings::SetAimSensitivity(float HorizontalAimSensitivity, float VerticalAimSensitivity)
{
	ControlSettings.HorizontalAimSensitivity = HorizontalAimSensitivity;
	ControlSettings.VerticalAimSensitivity = VerticalAimSensitivity;
}

void UJUEGameUserSettings::SetMainAudioVolume(float MainAudioVolume)
{
	AudioSettings.MainAudioVolume = MainAudioVolume;
}

void UJUEGameUserSettings::SetMusicAudioVolume(float MusicAudioVolume)
{
	AudioSettings.MusicAudioVolume = MusicAudioVolume;
}

void UJUEGameUserSettings::SetSFXAudioVolume(float SFXAudioVolume)
{
	AudioSettings.SFXAudioVolume = SFXAudioVolume;
}

void UJUEGameUserSettings::SetAmbianceAudioVolume(float AmbianceAudioVolume)
{
	AudioSettings.AmbianceAudioVolume = AmbianceAudioVolume;
}

float UJUEGameUserSettings::GetGameSpeed() const
{
	return GameSettings.GameSpeed;
}

float UJUEGameUserSettings::GetHorizontalSensitivity() const
{
	return ControlSettings.HorizontalSensitivity;
}

float UJUEGameUserSettings::GetVerticalSensitivity() const
{
	return ControlSettings.VerticalSensitivity;
}

float UJUEGameUserSettings::GetHorizontalAimSensitivity() const
{
	return ControlSettings.HorizontalAimSensitivity;
}

float UJUEGameUserSettings::GetVerticalAimSensitivity() const
{
	return ControlSettings.VerticalAimSensitivity;
}

float UJUEGameUserSettings::GetMainAudioVolume() const
{
	return AudioSettings.MainAudioVolume;
}

float UJUEGameUserSettings::GetMusicAudioVolume() const
{
	return AudioSettings.MusicAudioVolume;
}

float UJUEGameUserSettings::GetSFXAudioVolume() const
{
	return AudioSettings.SFXAudioVolume;
}

float UJUEGameUserSettings::GetAmbianceAudioVolume() const
{
	return AudioSettings.AmbianceAudioVolume;
}