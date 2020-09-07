#!/bin/bash
wget -P /tmp/ https://github.com/oimoralest/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/make_me_win.so
export LD_PRELOAD=/tmp/make_me_win.so
