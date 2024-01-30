#!/bin/bash
# chmod +x env.sh
sudo apt update
sudo apt-get install flex bison
sudo apt-get install libboost-dev libboost-system-dev libboost-filesystem-dev
cd erpcgen
make -j8
sudo make install 
cd ..