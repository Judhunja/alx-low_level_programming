#!/bin/bash
wget https://raw.githubusercontent.com/Judhunja/alx-low_level_programming/main/0x18-dynamic_libraries/libatoi.so -O ../libatoi.so
export LD_PRELOAD="../libatoi.so"
