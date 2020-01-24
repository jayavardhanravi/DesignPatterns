#pragma once

class Mesh
{
public:
	virtual ~Mesh() {};

	virtual void AddChildMesh(Mesh *) {};
	virtual Mesh* GetChildMesh(int) { return nullptr; };
	virtual void RemoveChildMesh(int) {};

	virtual int GetVertices() = 0;
};