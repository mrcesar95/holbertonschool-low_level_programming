#!/bin/bash
#!/bin/bash
wget -O /tmp/cracking_output.so https://github.com/mrcesar95/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/cracking_output.so
export LD_PRELOAD=/tmp/cracking_output.so