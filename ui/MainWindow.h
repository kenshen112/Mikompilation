#pragma once

#include "FileSelector.h"
#include "MemoryViewer.h"
#include "TopMenuBar.h"
#include "ConsoleLogger.h"
#include "imgui_render.h"

class MainWindow
{
 private:
  MemoryViewer *memoryViewer;
  GLFWwindow *window;
  FileSelector * filePicker;
  ConsoleLogger* consoleLogger;
  TopMenuBar* topMenuBar;

  bool *open = new bool(true);


 public:
  MainWindow(GLFWwindow *window);
  bool Init();
  void Update();
};