#pragma once

#include "GLTexture.h"

#include <map>

namespace gengine {

class TextureCache
{
public:
	TextureCache();
	~TextureCache();

	GLTexture getTexture(std::string filePath);

private:
	std::map<std::string, GLTexture> _textureMap;

};

}

