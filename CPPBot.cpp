// CPPBot.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <fstream>
#include <future>
#include <thread>
#include <chrono>
#include "corefunc.h"
#include "userfunc.h"
#include <string>
#include <unistd.h>
#include <stdint.h>
#include "json.hpp"
#define byte uint8_t
#define BYTE uint8_t
//#include <curses.h>
//#include <conio.h>
//#include <windows.h>

string user1 = "";
string pass1 = "";
string vers = "3.78";
string wn = "";
int prot = 0;

using json = nlohmann::json;
using namespace std;
vector<GrowtopiaBot> bots;

GrowtopiaBot bot1 = {"", "", "", -1};
void BroadCastGoWorld(string name) {
	bot1.gotow(name);
}
void BroadCastPacket(int typ, string text) {
	bot1.packetPeer(typ, text);
}
string getBotPos() {
	string datas = "";
	if (bot1.getPeer()) datas += "BOT 1: x:" + to_string(bot1.localX) + " y: " + to_string(bot1.localY) + "\n";
	return datas;
}
void input() {
	int c = 0;
	while (1) {
		string data;
		getline(cin, data);
		if (data == "/bot") {
			if (bot1.getPeer()) cout << bot1.uname << " At " << bot1.world->name << endl;
		}
		else if (data.find("/say ") != std::string::npos) BroadCastPacket(2, "action|input\n|text|" + data.substr(5));
		else if (data == "/status") {
			string status = "";
			if (bot1.getPeer()); status += "BOT 1: ON\n";
			cout << status << endl;
		}
		else if (data=="/pos") getBotPos();
		else if (data=="/help") cout << "Console Command: /clear, go <name>, /status, /bot (print bot world), /say <text>,/pos" << endl;
		else if (data.find("/go ") != std::string::npos) {
			string wr = data.substr(4);
			BroadCastGoWorld(wr);
			cout << "Going to: " << wr << endl;
		}
		else if (data=="/clear") system("clear");
	}
}

GrowtopiaBot makeBot(string user, string pass, string host, int port, string vers, string wname) {
	GrowtopiaBot bot = {user, pass, host, port};
	bot.gameVersion = vers;
	bot.currentWorld = wname;
	bot.userInit();
	bots.push_back(bot);
	return bot;
}
void botSetup() {
	system("clear");
	bot1 = makeBot(user1, pass1,"213.179.209.168", prot, vers, wn);
	while (true) {
		bot1.eventLoop();
	}
}
int main() {
	system("clear");
	cout << "=========================================\n";
	cout << "User: Ricky\n";
	cout << "VIP Type: Bronze\n";
	cout << "©TayaGabutz\n";
	cout << "========================================\n";
	cout << "⚠It Is Strictly Forbidden To Sell This Script⚠\n";
	cout << "If You Are Caught Reselling This Script\n";
	cout << "You Will Be Fined 5x The Price Of The Script\n";
	cout << "©TayaGabutz\n";
	cout << "========================================\n";
	cout << "Input Port : ";
	cin >> prot;
	system("clear");
	cout << "Login To Taya's Script Successfully!\n";
	cout << "========================================\n";
	cout << "1. Straight ( Sequentially Number )\n";
	cout << "2. Per Limit ( GrowId Limit And Password Limit )\n";
	cout << "Input : ";
	cin >> pitur;
	system("clear");
	if (pitur == "1") return 1;
	if (pitur == "2")
	{
	cout << "Input Limit : ";
	cin >> Limit_Growid;
	system("clear");
	}
	cout << "Input Growid : ";
	cin >> prozvishche;
	cout << "Input Pass : ";
	cin >> gaghtnabarry;
	cout << "Please Enter Email Without Domain!!!\n";
	cout << "Input Email : ";
	cin >> Scrisoare_moderna;
	jadinya = Scrisoare_moderna;
    cout << "Start Number From (ACC) : ";
	cin >> Apee_Luu;
	cout << "Start Number From (GMAIL) : ";
	cin >> Apee_Luuu;
	cout << "Key-Lock : ";
	cin >> keylog;
	if (keylog == "R1c1"){
	}else{
		cout << "Key-Lock Was Invalid!\n";
		cout << "Please Try Again!\n";
		cout << "Type ./cid To Repeat!\n";
		return true;
	}
    std::thread thr(input);
    thr.detach();
    botSetup();
}
