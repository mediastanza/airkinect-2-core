/*
 * Copyright 2012 AS3NUI
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */
#ifndef KinectExtension_AKOpenNIUserMasksGenerator_h
#define KinectExtension_AKOpenNIUserMasksGenerator_h

#include "../ExtensionConfig.h"
#ifdef AIRKINECT_TARGET_OPENNI

#include "../AKUserMasksGenerator.h"
#include <XnCppWrapper.h>

class AKOpenNIUserMasksGenerator : public AKUserMasksGenerator
{
public:

	void setSceneMetaData(xn::SceneMetaData* sceneMetaData);

	void generateTargetBytes();

protected:

	xn::SceneMetaData* _sceneMetaData;
	
};

#endif
#endif