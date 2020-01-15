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
#include "builder/MeshBuilder.h"

/*!
* @brief Main Function to test the implementations
*/
int main()
{
	MeshBuilder testMeshBuilder;
	std::cout << "Cylinder Mesh -> " << testMeshBuilder.CreateMesh(MESHTYPE::CYLINDER)->getName() << std::endl;
	std::cout << "Sphere Mesh -> " << testMeshBuilder.CreateMesh(MESHTYPE::SPHERE)->getName() << std::endl;
	std::cout << "Box Mesh -> " << testMeshBuilder.CreateMesh(MESHTYPE::BOX)->getName() << std::endl;
	std::cout << "Cone Mesh -> " << testMeshBuilder.CreateMesh(MESHTYPE::CONE)->getName() << std::endl;
}
