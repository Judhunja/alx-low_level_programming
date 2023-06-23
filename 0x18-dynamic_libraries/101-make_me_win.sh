#!/bin/bash
wget -qO /tmp/libatoi.so https://github.com/Judhunja/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libatoi.so
LD_PRELOAD=/tmp/libatoi.so
