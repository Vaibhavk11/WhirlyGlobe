/*
 *  DeafultShaderPrograms.h
 *  WhirlyGlobeLib
 *
 *  Created by Steve Gifford on 7/29/13.
 *  Copyright 2011-2015 mousebird consulting
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 */

#import <Foundation/Foundation.h>
#import "OpenGLES2Program.h"
#import "Scene.h"

namespace WhirlyKit
{
/// Triangle shader with lighting
#define kToolkitDefaultTriangleProgram "Default Triangle;lighting=yes"
/// Triangle shader without lighting
#define kToolkitDefaultTriangleNoLightingProgram "Default Triangle;lighting=no"
/// Triangle shader, takes two textures, with lighting
#define kToolkitDefaultTriangleMultiTex "Default Triangle;multitex=yes;lighting=yes"
/// Line (and point) shader with backface culling (for globe)
#define kToolkitDefaultLineProgram "Default Line;backface=yes"
/// Line (and point) shader without backface culling
#define kToolkitDefaultLineNoBackfaceProgram "Default Line;backface=no"
/// Billboard shader
#define kToolkitDefaultBillboardProgram "Default Billboard"
/// Screen space shader
#define kToolkitDefaultScreenSpaceProgram "Default Screenspace"
/// Screen space shader w/ motion
#define kToolkitDefaultScreenSpaceMotionProgram "Default Screenspace Motion"
/// Widened vector shader
#define kToolkitDefaultWideVectorProgram "Default Wide Vector"

/// Create the default shaders and register them in the appropriate places in the scene
void SetupDefaultShaders(Scene *);

}
