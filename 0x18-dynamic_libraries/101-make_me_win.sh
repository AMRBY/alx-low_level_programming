#!/bin/bash
wget -P . https://github.com/AMRBY/alx-low_level_programming/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD=libtest.so
