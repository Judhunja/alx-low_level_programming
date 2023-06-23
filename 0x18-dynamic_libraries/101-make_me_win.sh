#!/bin/bash
wget -qO ../libatoi.so https://github.com/Judhunja/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libatoi.so
export LD_PRELOAD="../libatoi.so""
