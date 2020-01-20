/*!
* @file Prototype.cpp
* @brief Design Patterns : Prototype
* @author Jayavardhan Ravi
* @date 01-20-2020
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

#include "builder/MeshController.h"

/*!
* @brief Main Function to test the implementations
*/
int main()
{
	MeshController controller;
	controller.Initialize();

	Mesh *cylinderMesh = controller.GetPrototype(MESHTYPE::CYLINDER);
	std::cout << "Mesh Obtained : " << cylinderMesh->PrintMeshType() << " with Color :"<< cylinderMesh->GetColor() << std::endl;

	Mesh *sphereMesh = controller.GetPrototype(MESHTYPE::SPHERE);
	std::cout << "Mesh Obtained : " << sphereMesh->PrintMeshType() << " with Color :" << sphereMesh->GetColor() << std::endl;

	CylinderMesh *cylinderMeshConverted = dynamic_cast<CylinderMesh*>(controller.GetPrototype(MESHTYPE::CYLINDER));
	cylinderMeshConverted->SetColor("White");
	std::cout << "Mesh Obtained : " << cylinderMeshConverted->PrintMeshType() << " with Color :" << cylinderMeshConverted->GetColor() << std::endl;

	SphereMesh *sphereMeshConverted = dynamic_cast<SphereMesh*>(controller.GetPrototype(MESHTYPE::SPHERE));
	sphereMeshConverted->SetColor("Black");
	std::cout << "Mesh Obtained : " << sphereMeshConverted->PrintMeshType() << " with Color :" << sphereMeshConverted->GetColor() << std::endl;

}