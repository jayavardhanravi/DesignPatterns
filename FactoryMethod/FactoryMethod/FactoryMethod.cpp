/*!
* @file FactoryMethod.cpp
* @brief Design Patterns : Factory Method
* @author Jayavardhan Ravi
* @date 01-15-2020
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

// Include files for MeshBuilder Classes
#include "builder/CylinderMeshBuilder.h"
#include "builder/SphereMeshBuilder.h"
#include "builder/BoxMeshBuilder.h"
#include "builder/ConeMeshBuilder.h"

/*!
* @file FactoryMethod.cpp
* @brief Enumeration class for identifying different types of mesh
* @details There are various types of mesh shapes possible which include Cylinder, Sphere, Box and Cone
* @class MESHTYPE
*/
enum class MESHTYPE
{
	CYLINDER,
	SPHERE,
	BOX,
	CONE
};

/*!
* @brief Provides the class for creating different mesh objects based on the MESHTYPE provided
* @class TestApplication
*/
class TestApplication
{
public:
	TestApplication();
	~TestApplication();

	std::unique_ptr<Mesh> BuildMesh(MESHTYPE);
};

/*!
* @brief Constructor of TestApplication Class
*/
TestApplication::TestApplication()
{

}

/*!
* @brief Destructor of TestApplication Class
*/
TestApplication::~TestApplication()
{

}

/*!
* @file FactoryMethod.cpp
* @brief Build Mesh Objects based on the Mesh type provided
* @details 
* Different mesh objects are created based on the different mesh types provided
* @see MESHTYPE
* @param[in] type Type of Mesh To Generate
* @return Return the Unique pointer of the Mesh Object
*/
std::unique_ptr<Mesh> TestApplication::BuildMesh(MESHTYPE type)
{
	switch (type)
	{
	case MESHTYPE::CYLINDER:
	{
		CylinderMeshBuilder meshBuilder;
		auto meshObj = meshBuilder.CreateMesh();
		return meshObj;
	}
	case MESHTYPE::SPHERE:
	{
		SphereMeshBuilder meshBuilder;
		auto meshObj = meshBuilder.CreateMesh();
		return meshObj;
	}
	case MESHTYPE::BOX:
	{
		BoxMeshBuilder meshBuilder;
		auto meshObj = meshBuilder.CreateMesh();
		return meshObj;
	}
	case MESHTYPE::CONE:
	{
		ConeMeshBuilder meshBuilder;
		auto meshObj = meshBuilder.CreateMesh();
		return meshObj;
	}
	default:
		return nullptr;
	}
}

/*!
* @brief Main Function to test the implementations
*/
int main()
{
	TestApplication testApplication;
	std::cout << "Cylinder Mesh -> " << testApplication.BuildMesh(MESHTYPE::CYLINDER)->getName() << std::endl;
	std::cout << "Sphere Mesh -> " << testApplication.BuildMesh(MESHTYPE::SPHERE)->getName() << std::endl;
	std::cout << "Box Mesh -> " << testApplication.BuildMesh(MESHTYPE::BOX)->getName() << std::endl;
	std::cout << "Cone Mesh -> " << testApplication.BuildMesh(MESHTYPE::CONE)->getName() << std::endl;
}
