#pragma once

#include <GL/glew.h>

#include "Mesh.h"
#include "Material.h"
#include "Renderer.h"
#include "Transform.h"
#include "Mat4Property.h"

class MeshRenderer : public Renderer
{
public:
	MeshRenderer(Mesh* renderMesh, Material* renderShader);
	~MeshRenderer();

	void AddToEntity(Entity * entity) override;
	void Draw() override;
	glm::mat4 GetMvpMatrix();

private:
	Mat4Property * mvpProperty;
	Mesh* renderMesh;
	Material* renderMaterial;
	Transform* transform;
};

