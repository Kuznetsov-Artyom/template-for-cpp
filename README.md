# Repository template for C/C++
[![CI](https://github.com/Kuznetsov-Artyom/TestCI/actions/workflows/main.yml/badge.svg)](https://github.com/Kuznetsov-Artyom/TestCI/actions/workflows/main.yml)

## Download submodules
```
git submodule update --init --recursive
```

## Configure & Build
```
cmake -S . -B build -DENABLE_TESTS=ON -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release --parallel
```

## Run tests
1) For Linux and MacOS
```
sh scripts/run_tests.sh
```
2) For Windows
```
.\scripts\run_tests.bat
```