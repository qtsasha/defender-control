#pragma once
#include <Windows.h>
#include <d3d11.h>
#include <tchar.h>
#include <imgui.h>

namespace gui::dx11
{
  bool create_device(HWND hwnd);
  void cleanup();
  void setup(HWND hwnd);
  void start();
  void end();

  // resize here:

  void resize();
}
