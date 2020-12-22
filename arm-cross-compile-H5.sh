#!/bin/bash
make distclean
source /home/joshua/TBOX_SDK/H5/LinuxT/ql-ol-crosstool/ql-ol-crosstool-env-init
./configure --target=arm-oe-linux-gnueabi --host=arm-oe-linux-gnueabi --build=x86_64-linux
make -j4 
