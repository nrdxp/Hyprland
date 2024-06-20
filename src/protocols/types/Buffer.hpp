#pragma once

#include "../../defines.hpp"
#include "../../render/Texture.hpp"
#include "./WLBuffer.hpp"

#include <aquamarine/buffer/Buffer.hpp>

class IHLBuffer : public Aquamarine::IBuffer {
  public:
    SP<CTexture>          texture;
    bool                  opaque = false;
    SP<CWLBufferResource> resource;
};
