// Copyright Justin Renaud-Gélinas & Antoine Chamberland-Dyotte 

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "JueSettings.h"
#include "GameFramework/GameUserSettings.h"
#include "JueGameUserSettings.generated.h"


/** Delegates for each setting types  */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameSettingsSignature, const FJueGameSettings&, UpdatedGameSettings);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnControlsSignature, const FJueControlSettings&, UpdatedControls);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAudioSignature, const FJueAudioSettings&, UpdatedAudio);

/** Game  */


/**
 * 
 */
UCLASS(Blueprintable)
class JUE_API UJUEGameUserSettings : public UGameUserSettings
{
	GENERATED_BODY()

public:
	virtual void ApplySettings(bool bCheckForCommandLineOverrides) override;
	
	/** Events Signature */
	UPROPERTY(BlueprintAssignable, Category = "GameplaySettings")
	FOnGameSettingsSignature OnGameSettingsUpdate;
	UPROPERTY(BlueprintAssignable, Category = "GameplaySettings")
	FOnControlsSignature OnControlsSettingsUpdate;
	UPROPERTY(BlueprintAssignable, Category = "AudioSettings")
	FOnAudioSignature OnAudioSettingsUpdate;
	

	/** Settings */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GameplaySettings", Config)
	FJueGameSettings GameSettings;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GameplaySettings", Config)
	FJueControlSettings ControlSettings;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AudioSettings", Config)
	FJueAudioSettings AudioSettings;

	/** Setters */
	UFUNCTION(BlueprintCallable, Category = "GameplaySettings")
	void SetGameSpeed(float GameSpeed);

	UFUNCTION(BlueprintCallable, Category = "GameplaySettings")
	void SetSensitivity(float HorizontalSensitivity, float VerticalSensitivity);

	UFUNCTION(BlueprintCallable, Category = "GameplaySettings")
	void SetAimSensitivity(float HorizontalAimSensitivity, float VerticalAimSensitivity);
	
	UFUNCTION(BlueprintCallable, Category = "AudioSettings")
	void SetMainAudioVolume(float MainAudioVolume);
	
	UFUNCTION(BlueprintCallable, Category = "AudioSettings")
	void SetMusicAudioVolume(float MusicAudioVolume);
	
	UFUNCTION(BlueprintCallable, Category = "AudioSettings")
	void SetSFXAudioVolume(float SFXAudioVolume);

	UFUNCTION(BlueprintCallable, Category = "AudioSettings")
	void SetAmbianceAudioVolume(float AmbianceAudioVolume);

	/** Getters */
	UFUNCTION(BlueprintPure, Category = "GameplaySettings")
	float GetGameSpeed() const;

	UFUNCTION(BlueprintPure, Category = "GameplaySettings")
	float GetHorizontalSensitivity() const;
	
	UFUNCTION(BlueprintPure, Category = "GameplaySettings")
	float GetVerticalSensitivity() const;
	
	UFUNCTION(BlueprintPure, Category = "GameplaySettings")
	float GetHorizontalAimSensitivity() const;
	
	UFUNCTION(BlueprintPure, Category = "GameplaySettings")
	float GetVerticalAimSensitivity() const;
	
	
	UFUNCTION(BlueprintPure, Category = "AudioSettings")
	float GetMainAudioVolume() const;

	UFUNCTION(BlueprintPure, Category = "AudioSettings")
	float GetMusicAudioVolume() const;
	
	UFUNCTION(BlueprintPure, Category = "AudioSettings")
	float GetSFXAudioVolume() const;

	UFUNCTION(BlueprintPure, Category = "AudioSettings")
	float GetAmbianceAudioVolume() const;
};
