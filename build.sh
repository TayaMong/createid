sudo apt-get install clang
clang++ CPPBot.cpp enet/callbacks.c enet/compress.c enet/host.c enet/list.c enet/packet.c enet/peer.c enet/protocol.c enet/unix.c -pthread -std=c++11 -fpermissive -o cid -w #Build source code into executable
sudo apt-get install
echo "Tool Successfully Builded,"
echo "You Can Start Customing & Creating Account By Typing ./cid"
echo "©Taya"