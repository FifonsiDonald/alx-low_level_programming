#!/bin/bash
wget -P .. https://raw.githubusercontent.com/FifonsiDonald/alx-low_level_programming/c4cc0101607d5c7f7577274c5a27fef88b98343d/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD="$PWD/../libgiga.so"
