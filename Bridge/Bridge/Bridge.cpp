/*!
* @file Bridge.cpp
* @brief Design Patterns : Bridge
* @author Jayavardhan Ravi
* @date 01-23-2020
*
* BSD 2-Clause License
*
* Copyright (c) 2020, Jayavardhan Ravi
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*
* 1. Redistributions of source code must retain the above copyright notice, this
*    list of conditions and the following disclaimer.
*
* 2. Redistributions in binary form must reproduce the above copyright notice,
*    this list of conditions and the following disclaimer in the documentation
*    and/or other materials provided with the distribution.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
* FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
* DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
* CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
#include <iostream>

#include "ImplementationModule/ColorProperty.h"
#include "ImplementationModule/TextureProperty.h"

#include "AbstractionModule/CylinderMesh.h"
#include "AbstractionModule/SphereMesh.h"

/*!
* @brief Main Function to test the implementations
*/
int main()
{
	std::unique_ptr<MeshProperty> colorProperty = std::make_unique<ColorProperty>();
	CylinderMesh meshWithColorCylinder(colorProperty.get());
	std::cout << "[CYLINDER WITH SOLID COLOR SURFACE] : " << meshWithColorCylinder.GetProperty() << std::endl;

	SphereMesh meshWithColorSphere(colorProperty.get());
	std::cout << "[SPHERE WITH SOLID COLOR SURFACE] : " << meshWithColorSphere.GetProperty() << std::endl;

	std::unique_ptr<MeshProperty> textureProperty = std::make_unique<TextureProperty>();
	CylinderMesh meshWithTextureCylinder(textureProperty.get());
	std::cout << "[CYLINDER WITH TEXTURED SURFACE] : " << meshWithTextureCylinder.GetProperty() << std::endl;

	CylinderMesh meshWithTextureSphere(textureProperty.get());
	std::cout << "[SPHERE WITH TEXTURED SURFACE] : " << meshWithTextureSphere.GetProperty() << std::endl;
}