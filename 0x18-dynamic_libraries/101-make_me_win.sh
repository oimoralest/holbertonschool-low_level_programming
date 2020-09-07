#!/bin/bash
wget -P /tmp/ https://github.com/gedafu/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/raffle.so
export LD_PRELOAD=/tmp/make_me_win.so
