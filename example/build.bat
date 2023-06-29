@echo off
cls
cmake -G "MinGW Makefiles" ./

mingw32-make

echo "Build complete"
echo ""

example.exe

pause

del cmake_install.cmake
del CMakeCache.txt
rd /s /q "CMakeFiles"