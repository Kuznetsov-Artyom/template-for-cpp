# Repository template for C/C++
[![CI](https://github.com/Kuznetsov-Artyom/template-for-cpp/actions/workflows/ci.yml/badge.svg?branch=master)](https://github.com/Kuznetsov-Artyom/template-for-cpp/actions/workflows/ci.yml)

## Clone repository
```bash
git clone https://github.com/Kuznetsov-Artyom/template-for-cpp.git
```

## Download submodules
```bash
git submodule update --init --recursive
```

## Configure & Build
```bash
cmake -S . -B build -DENABLE_TESTS=ON -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release --parallel
```

## Run tests
1) For Linux and MacOS
```bash
sh scripts/run_tests.sh
```
2) For Windows
```bash
.\scripts\run_tests.bat
```