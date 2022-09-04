#include <iostream>
#include <string>

#include "stats.h"

void printUserInfo(Stats player);

int main(int argc, char const *argv[])
{
	Stats player;
	player.userName = "userNameTest";
	player.style = "Normal";
	player.membership = true;
	player.attack = 23977290;
	player.strength = 23822214;
	player.defence =  20285467;
	player.ranged = 24642887;
	player.prayer = 13121012;
	player.magic =  16708791;
	player.runecrafting = 14207163;
	player.hitpoints =  35795258;
	player.crafting = 15044325;
	player.mining = 13279449;
	player.smithing = 13182084;
	player.fishing =  13267892;
	player.cooking =  24014167;
	player.firemaking = 13176057;
	player.woodcutting =  14830180;
	player.agility =  16201158;
	player.herblore = 13298235;
	player.thieving = 13866745;
	player.fletching =  13452412;
	player.slayer = 17053400;
	player.farming =  17097317;
	player.construction = 13192089;
	player.hunter = 14981882;

	printUserInfo(player);

	std::cout << "Hello Old School Runescape!" << std::endl;
	return 0;
}

void printUserInfo(Stats player){
	std::cout << "userName: " << player.userName << "\n"
			  << "style: " << player.style << "\n"
			  << "membership: " << player.membership << "\n"
			  << "attack: " << player.attack << "\n"
			  << "strength: " << player.strength << "\n"
			  << "defence: " << player.defence << "\n"
			  << "ranged: " << player.ranged << "\n"
			  << "prayer: " << player.prayer << "\n"
			  << "magic: " << player.magic << "\n"
			  << "runecraft: " << player.runecrafting << "\n"
			  << "hitpoints: " << player.hitpoints << "\n"
			  << "crafting: " << player.crafting << "\n"
			  << "mining: " << player.mining << "\n"
			  << "smithing: " << player.smithing << "\n"
			  << "fishing: " << player.fishing << "\n"
			  << "cooking: " << player.cooking << "\n"
			  << "firemaking: " << player.firemaking << "\n"
			  << "woodcutting: " << player.woodcutting << "\n"
			  << "agility: " << player.agility << "\n"
			  << "herblore: " << player.herblore << "\n"
			  << "thieving: " << player.thieving << "\n"
			  << "fletching: " << player.fletching << "\n"
			  << "slayer: " << player.slayer << "\n"
			  << "farming: " << player.farming << "\n"
			  << "construct: " << player.construction << "\n"
			  << "hunter: " << player.hunter << "\n"
			  << std::endl;
}