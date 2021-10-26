#!/bin/bash

BASEDIR=$(pwd)

cd deps/libressl/portable || exit
./autogen.sh
cd $BASEDIR || exit
mkdir build
cd build || exit
cmake -DCMAKE_BUILD_TYPE=Debug -DCMAKE_INSTALL_PREFIX:PATH="$BASEDIR/install" ../.github/ 
cmake --build .
cd SampleServer-build || exit
ctest