#pragma once
#ifdef __APPLE__
#  define GL_SILENCE_DEPRECATION
#  include <GL/glew.h>
#  include <GLFW/glfw3.h>
#endif
#include <vector>

#include "Block.h"

enum class BlocksID { I, L, T, Z, O };

struct BlocksType {
  BlocksID             id;
  vector<vector<char>> blocks_map;
};

class Blocks
{
 public:
  GLfloat     w;
  GLfloat     h;
  int         x;
  int         y;
  BlocksType& blocks_type;
  Blocks(int _x, int _y, int blocks_types_idx);
};
