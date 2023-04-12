@echo off
rmdir /Q /S build
mkdir build
cd build

cmake -G "Visual Studio 16 2019" -A Win32 -S .. -DSMTG_CREATE_VST2_VERSION=ON -DVST3_SDK_ROOT=%VST3_SDK_ROOT_32BIT%
cmake --build . --config Release

rename VST3\Release\AudioTunnel.vst3\Contents\x86-win\AudioTunnel.vst3 AudioTunnel.dll

cd ..
