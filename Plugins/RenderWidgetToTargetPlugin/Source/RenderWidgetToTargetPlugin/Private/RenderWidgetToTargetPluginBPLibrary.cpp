// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "RenderWidgetToTargetPluginBPLibrary.h"

#include "RenderWidgetToTargetPlugin.h"

URenderWidgetToTargetPluginBPLibrary::URenderWidgetToTargetPluginBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

void URenderWidgetToTargetPluginBPLibrary::DrawWidgetToTarget(UTextureRenderTarget2D * Target, UUserWidget * WidgetToRender, FVector2D DrawSize, bool UseGamma, float DeltaTime)
{

	if (FSlateApplication::IsInitialized()
		&& WidgetToRender != NULL && WidgetToRender->IsValidLowLevel()
		&& DrawSize.X >= 1 && DrawSize.Y >= 1)
	{
		FWidgetRenderer * WidgetRenderer = new FWidgetRenderer(UseGamma);

		TSharedRef<SWidget> ref = WidgetToRender->TakeWidget();
		WidgetRenderer->DrawWidget(Target, ref, DrawSize, DeltaTime);
	}
}

