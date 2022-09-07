#include <iostream>
#include <string>

#include "stats.h"
#include "quest.h"
#include "music.h"
#include "pets.h"

void printUserInfo(Stats playerStats, Quest playerQuest, Music playerMusic, Pets playerPets);

int main(int argc, char const *argv[])
{
	Stats playerStats;
	Quest playerQuest;
	Music playerMusic;
	Pets playerPets;

	playerStats.userName = "userNameTest";
	playerStats.style = "Normal";
	playerStats.membership = true;
	playerStats.attack = 23977290;
	playerStats.strength = 23822214;
	playerStats.defence =  20285467;
	playerStats.ranged = 24642887;
	playerStats.prayer = 13121012;
	playerStats.magic =  16708791;
	playerStats.runecrafting = 14207163;
	playerStats.hitpoints =  35795258;
	playerStats.crafting = 15044325;
	playerStats.mining = 13279449;
	playerStats.smithing = 13182084;
	playerStats.fishing =  13267892;
	playerStats.cooking =  24014167;
	playerStats.firemaking = 13176057;
	playerStats.woodcutting =  14830180;
	playerStats.agility =  16201158;
	playerStats.herblore = 13298235;
	playerStats.thieving = 13866745;
	playerStats.fletching =  13452412;
	playerStats.slayer = 17053400;
	playerStats.farming =  17097317;
	playerStats.construction = 13192089;
	playerStats.hunter = 14981882;

	playerQuest.Cooks_Assistant = true;
	playerQuest.Demon_Slayer = true;
	playerQuest.The_Restless_Ghost = true;
	playerQuest.Romeo_and_Juliet = true;
	playerQuest.Sheep_Shearer = true;
	playerQuest.Shield_of_Arrav = true;
	playerQuest.Ernest_the_Chicken = true;
	playerQuest.Vampyre_Slayer = true;
	playerQuest.Imp_Catcher = true;
	playerQuest.Prince_Ali_Rescue = true;
	playerQuest.Dorics_Quest = true;
	playerQuest.Black_Knights_Fortress = true;
	playerQuest.Witchs_Potion = true;
	playerQuest.The_Knights_Sword = true;
	playerQuest.Goblin_Diplomacy = true;
	playerQuest.Pirates_Treasure = true;
	playerQuest.Dragon_Slayer_I = true;
	playerQuest.Rune_Mysteries = true;
	playerQuest.Misthalin_Mystery = true;
	playerQuest.The_Corsair_Curse = true;
	playerQuest.X_Marks_the_Spot = true;
	playerQuest.Below_Ice_Mountain = true;
	playerQuest.Druidic_Ritual = true;
	playerQuest.Lost_City = true;
	playerQuest.Witchs_House = true;
	playerQuest.Merlins_Crystal = true;
	playerQuest.Heroes_Quest = true;
	playerQuest.Scorpion_Catcher = true;
	playerQuest.Family_Crest = true;
	playerQuest.Tribal_Totem = true;
	playerQuest.Fishing_Contest = true;
	playerQuest.Monks_Friend = true;
	playerQuest.Temple_of_Ikov = true;
	playerQuest.Clock_Tower = true;
	playerQuest.Holy_Grail = true;
	playerQuest.Tree_Gnome_Village = true;
	playerQuest.Fight_Arena = true;
	playerQuest.Hazeel_Cult = true;
	playerQuest.Sheep_Herder = true;
	playerQuest.Plague_City = true;
	playerQuest.Sea_Slug = true;
	playerQuest.Waterfall_Quest_Biohazard = true;
	playerQuest.Jungle_Potion = true;
	playerQuest.The_Grand_Tree = true;
	playerQuest.Shilo_Village = true;
	playerQuest.Underground_Pass = true;
	playerQuest.Observatory_Quest = true;
	playerQuest.The_Tourist_Trap = true;
	playerQuest.Watchtower = true;
	playerQuest.Dwarf_Cannon = true;
	playerQuest.Murder_Mystery = true;
	playerQuest.The_Dig_Site = true;
	playerQuest.Gertrudes_Cat = true;
	playerQuest.Legends_Quest = true;
	playerQuest.Big_Chompy_Bird_Hunting = true;
	playerQuest.Elemental_Workshop_I = true;
	playerQuest.Priest_in_Peril = true;
	playerQuest.Nature_Spirit = true;
	playerQuest.Death_Plateau = true;
	playerQuest.Troll_Stronghold = true;
	playerQuest.Tai_Bwo_Wannai_Trio = true;
	playerQuest.Regicide = true;
	playerQuest.Eadgars_Ruse = true;
	playerQuest.Shades_of_Mortton = true;
	playerQuest.The_Fremennik_Trials = true;
	playerQuest.Horror_from_the_Deep = true;
	playerQuest.Throne_of_Miscellania = true;
	playerQuest.Monkey_Madness_I = true;
	playerQuest.Haunted_Mine = true;
	playerQuest.Troll_Romance = true;
	playerQuest.In_Search_of_the_Myreque = true;
	playerQuest.Creature_of_Fenkenstrain = true;
	playerQuest.Roving_Elves = true;
	playerQuest.Ghosts_Ahoy = true;
	playerQuest.One_Small_Favour = true;
	playerQuest.Mountain_Daughter = true;
	playerQuest.Between_a_Rock = true;
	playerQuest.The_Feud = true;
	playerQuest.The_Golem = true;
	playerQuest.Desert_Treasure = true;
	playerQuest.Icthlarins_Little_Helper = true;
	playerQuest.Tears_of_Guthix = true;
	playerQuest.Zogre_Flesh_Eaters = true;
	playerQuest.The_Lost_Tribe = true;
	playerQuest.The_Giant_Dwarf = true;
	playerQuest.Recruitment_Drive = true;
	playerQuest.Mournings_End_Part_I = true;
	playerQuest.Forgettable_Tale = true;
	playerQuest.Garden_of_Tranquillity = true;
	playerQuest.A_Tail_of_Two_Cats = true;
	playerQuest.Wanted = true;
	playerQuest.Mournings_End_Part_II = true;
	playerQuest.Rum_Deal = true;
	playerQuest.Shadow_of_the_Storm = true;
	playerQuest.Making_History = true;
	playerQuest.Ratcatchers = true;
	playerQuest.Spirits_of_the_Elid = true;
	playerQuest.Devious_Minds = true;
	playerQuest.The_Hand_in_the_Sand = true;
	playerQuest.Enakhras_Lament = true;
	playerQuest.Cabin_Fever = true;
	playerQuest.Fairytale_I_Growing_Pains = true;
	playerQuest.Recipe_for_Disaster_Another_Cooks_Quest = true;
	playerQuest.Recipe_for_Disaster_Defeating_the_Culinaromancer = true;
	playerQuest.Recipe_for_Disaster_Freeing_the_Mountain_Dwarf = true;
	playerQuest.Recipe_for_Disaster_Freeing_the_Goblin_generals = true;
	playerQuest.Recipe_for_Disaster_Freeing_Pirate_Pete = true;
	playerQuest.Recipe_for_Disaster_Freeing_the_Lumbridge_Guide = true;
	playerQuest.Recipe_for_Disaster_Freeing_Evil_Dave = true;
	playerQuest.Recipe_for_Disaster_Freeing_King_Awowogei = true;
	playerQuest.Recipe_for_Disaster_Freeing_Sir_Amik_Varze = true;
	playerQuest.Recipe_for_Disaster_Freeing_Skrach_Uglogwee = true;
	playerQuest.In_Aid_of_the_Myreque = true;
	playerQuest.A_Souls_Bane = true;
	playerQuest.Rag_and_Bone_Man_I = true;
	playerQuest.Swan_Song = true;
	playerQuest.Royal_Trouble = true;
	playerQuest.Death_to_the_Dorgeshuun = true;
	playerQuest.Fairytale_II_Cure_a_Queen = true;
	playerQuest.Lunar_Diplomacy = true;
	playerQuest.The_Eyes_of_Glouphrie = true;
	playerQuest.Darkness_of_Hallowvale = true;
	playerQuest.The_Slug_Menace = true;
	playerQuest.Elemental_Workshop_II = true;
	playerQuest.My_Arms_Big_Adventure = true;
	playerQuest.Enlightened_Journey = true;
	playerQuest.Eagles_Peak = true;
	playerQuest.Animal_Magnetism = true;
	playerQuest.Contact = true;
	playerQuest.Cold_War = true;
	playerQuest.The_Fremennik_Isles = true;
	playerQuest.Tower_of_Life = true;
	playerQuest.The_Great_Brain_Robbery = true;
	playerQuest.What_Lies_Below = true;
	playerQuest.Olafs_Quest = true;
	playerQuest.Another_Slice_of_HAM = true;
	playerQuest.Dream_Mentor = true;
	playerQuest.Grim_Tales = true;
	playerQuest.Kings_Ransom = true;
	playerQuest.Client_of_Kourend = true;
	playerQuest.Rag_and_Bone_Man_II = true;
	playerQuest.Bone_Voyage = true;
	playerQuest.The_Queen_of_Thieves = true;
	playerQuest.The_Depths_of_Despair = true;
	playerQuest.Tale_of_the_Righteous = true;
	playerQuest.A_Taste_of_Hope = true;
	playerQuest.Making_Friends_with_My_Arm = true;
	playerQuest.The_Forsaken_Tower = true;
	playerQuest.The_Ascent_of_Arceuus = true;
	playerQuest.Song_of_the_Elve = true;
	playerQuest.The_Fremennik_Exiles = true;
	playerQuest.Sins_of_the_Father = true;
	playerQuest.A_Porcine_of_Interest = true;
	playerQuest.Getting_Ahead = true;
	playerQuest.A_Night_at_the_Theatre = true;
	playerQuest.A_Kingdom_Divided = true;
	playerQuest.Land_of_the_Goblins = true;
	playerQuest.Temple_of_the_Eye = true;

	playerMusic.Seventh_Realm = true;
	playerMusic.A_Festive_Party = true;
	playerMusic.Adventure = true;
	playerMusic.Al_Kharid = true;
	playerMusic.Alchemical_Attack = true;
	playerMusic.Alls_Fairy_in_Love_and_War = true;
	playerMusic.Alone = true;
	playerMusic.Altar_Ego = true;
	playerMusic.Alternative_Root = true;
	playerMusic.Ambient_Jungle = true;
	playerMusic.The_Ancient_Prison = true;
	playerMusic.The_Angels_Fury = true;
	playerMusic.Anywhere = true;
	playerMusic.Arabian = true;
	playerMusic.Arabian_2 = true;
	playerMusic.Arabian_3 = true;
	playerMusic.Arabique = true;
	playerMusic.Arachnids_of_Vampyrium = true;
	playerMusic.Arboretum = true;
	playerMusic.Arcane = true;
	playerMusic.Architects_of_Prifddinas = true;
	playerMusic.Armadyl_Alliance = true;
	playerMusic.Armageddon = true;
	playerMusic.Army_of_Darkness = true;
	playerMusic.Arrival = true;
	playerMusic.Artistry = true;
	playerMusic.Ascent = true;
	playerMusic.Assault_and_Battery = true;
	playerMusic.Attack_1 = true;
	playerMusic.Attack_2 = true;
	playerMusic.Attack_3 = true;
	playerMusic.Attack_4 = true;
	playerMusic.Attack_5 = true;
	playerMusic.Attack_6 = true;
	playerMusic.Attention = true;
	playerMusic.Autumn_Voyage = true;
	playerMusic.Aye_Car_Rum_Ba = true;
	playerMusic.Aztec = true;
	playerMusic.Back_to_Life = true;
	playerMusic.Background = true;
	playerMusic.Bait = true;
	playerMusic.Ballad_of_Enchantment = true;
	playerMusic.Ballad_of_the_Basilisk = true;
	playerMusic.Bandit_Camp = true;
	playerMusic.Bandos_Battalion = true;
	playerMusic.Bane = true;
	playerMusic.The_Bane_of_Ashihama = true;
	playerMusic.Barb_Wire = true;
	playerMusic.Barbarian_Workout = true;
	playerMusic.Barbarianism = true;
	playerMusic.Barking_Mad = true;
	playerMusic.Baroque = true;
	playerMusic.Barren_Land = true;
	playerMusic.Beetle_Juice = true;
	playerMusic.Beneath_the_Kingdom = true;
	playerMusic.Beneath_the_Stronghold = true;
	playerMusic.Beyond = true;
	playerMusic.Beyond_the_Meadow = true;
	playerMusic.Big_Chords = true;
	playerMusic.Blistering_Barnacles = true;
	playerMusic.Bloodbath = true;
	playerMusic.Body_Parts = true;
	playerMusic.Bone_Dance = true;
	playerMusic.Bone_Dry = true;
	playerMusic.Book_of_Spells = true;
	playerMusic.Borderland = true;
	playerMusic.Box_of_Delights = true;
	playerMusic.Breeze = true;
	playerMusic.Brew_Hoo_Hoo = true;
	playerMusic.Brimstails_Scales = true;
	playerMusic.Bubble_and_Squeak = true;
	playerMusic.Bunnys_Sugar_Rush = true;
	playerMusic.Burning_Desire = true;
	playerMusic.Cabin_Fever = true;
	playerMusic.Camelot = true;
	playerMusic.Castle_Wars = true;
	playerMusic.Catacombs_and_Tombs = true;
	playerMusic.Catch_Me_If_You_Can = true;
	playerMusic.Cave_Background = true;
	playerMusic.Cave_of_Beasts = true;
	playerMusic.Cave_of_the_Goblins = true;
	playerMusic.Cavern = true;
	playerMusic.The_Cellar_Dwellers = true;
	playerMusic.Cellar_Song = true;
	playerMusic.Chain_of_Command = true;
	playerMusic.Chamber = true;
	playerMusic.Chef_Surprise = true;
	playerMusic.Chickened_Out = true;
	playerMusic.Chompy_Hunt = true;
	playerMusic.The_Chosen = true;
	playerMusic.City_of_the_Dead = true;
	playerMusic.Clan_Wars = true;
	playerMusic.Clanliness = true;
	playerMusic.Claustrophobia = true;
	playerMusic.Close_Quarters = true;
	playerMusic.Coil = true;
	playerMusic.Competition = true;
	playerMusic.Complication = true;
	playerMusic.Confrontation = true;
	playerMusic.Conspiracy = true;
	playerMusic.Contest = true;
	playerMusic.Corporal_Punishment = true;
	playerMusic.Corridors_of_Power = true;
	playerMusic.Country_Jig = true;
	playerMusic.Courage = true;
	playerMusic.Creature_Cruelty = true;
	playerMusic.Creeping_Vines = true;
	playerMusic.Crystal_Castle = true;
	playerMusic.Crystal_Cave = true;
	playerMusic.Crystal_Sword = true;
	playerMusic.Cursed = true;
	playerMusic.The_Curtain_Closes = true;
	playerMusic.Dagannoth_Dawn = true;
	playerMusic.Dance_of_Death = true;
	playerMusic.Dance_of_the_Meilyr = true;
	playerMusic.Dance_of_the_Nylocas = true;
	playerMusic.Dance_of_the_Undead = true;
	playerMusic.Dangerous = true;
	playerMusic.A_Dangerous_Game = true;
	playerMusic.Dangerous_Road = true;
	playerMusic.Dangerous_Way = true;
	playerMusic.Dark = true;
	playerMusic.The_Dark_Beast_Sotetseg = true;
	playerMusic.Darkly_Altared = true;
	playerMusic.Darkmeyer = true;
	playerMusic.Darkness_in_the_Depths = true;
	playerMusic.Davy_Jones_Locker = true;
	playerMusic.Dead_Can_Dance = true;
	playerMusic.Dead_Quiet = true;
	playerMusic.Deadlands = true;
	playerMusic.Deep_Down = true;
	playerMusic.Deep_Wildy = true;
	playerMusic.The_Depths = true;
	playerMusic.Desert_Heat = true;
	playerMusic.Desert_Voyage = true;
	playerMusic.The_Desert = true;
	playerMusic.The_Desolate_Isle = true;
	playerMusic.The_Desolate_Mage = true;
	playerMusic.Devils_May_Care = true;
	playerMusic.Diangos_Little_Helpers = true;
	playerMusic.Dies_Irae = true;
	playerMusic.Dimension_X = true;
	playerMusic.Distant_Land = true;
	playerMusic.Distillery_Hilarity = true;
	playerMusic.Dogs_of_War = true;
	playerMusic.Domain_of_the_Vampyres = true;
	playerMusic.Dont_Panic_Zanik = true;
	playerMusic.The_Doors_of_Dinh = true;
	playerMusic.Doorways = true;
	playerMusic.Dorgeshuun_City = true;
	playerMusic.Dorgeshuun_Deep = true;
	playerMusic.Down_and_Out = true;
	playerMusic.Down_Below = true;
	playerMusic.Down_by_the_Docks = true;
	playerMusic.Down_to_Earth = true;
	playerMusic.The_Dragon_Slayer = true;
	playerMusic.Dragontooth_Island = true;
	playerMusic.Dream = true;
	playerMusic.Dreamstate = true;
	playerMusic.Duel_Arena = true;
	playerMusic.Dunjun = true;
	playerMusic.Dusk_in_Yubiusk = true;
	playerMusic.Dwarf_Theme = true;
	playerMusic.Dwarven_Domain = true;
	playerMusic.Dynasty = true;
	playerMusic.Eagles_Peak = true;
	playerMusic.Easter_Jig = true;
	playerMusic.Egypt = true;
	playerMusic.Elven_Guardians = true;
	playerMusic.Elven_Mist = true;
	playerMusic.Elven_Seed = true;
	playerMusic.Emotion = true;
	playerMusic.Emperor = true;
	playerMusic.The_Enchanter = true;
	playerMusic.The_Enclave = true;
	playerMusic.Escape = true;
	playerMusic.Espionage = true;
	playerMusic.Etceteria = true;
	playerMusic.Eves_Epinette = true;
	playerMusic.Everlasting = true;
	playerMusic.Everlasting_Fire = true;
	playerMusic.The_Everlasting_Slumber = true;
	playerMusic.Everywhere = true;
	playerMusic.Evil_Bobs_Island = true;
	playerMusic.Expanse = true;
	playerMusic.Expecting = true;
	playerMusic.Expedition = true;
	playerMusic.Exposed = true;
	playerMusic.Faerie = true;
	playerMusic.Faith_of_the_Hefin = true;
	playerMusic.Faithless = true;
	playerMusic.Fanfare = true;
	playerMusic.Fanfare_2 = true;
	playerMusic.Fanfare_3 = true;
	playerMusic.Fangs_for_the_Memory = true;
	playerMusic.Far_Away = true;
	playerMusic.The_Far_Side = true;
	playerMusic.A_Farmers_Grind = true;
	playerMusic.The_Fat_Lady_Sings = true;
	playerMusic.Fe_Fi_Fo_Fum = true;
	playerMusic.Fear_and_Loathing = true;
	playerMusic.Fenkenstrains_Refrain = true;
	playerMusic.Fight_of_the_Basilisk = true;
	playerMusic.Fight_or_Flight = true;
	playerMusic.Find_My_Way = true;
	playerMusic.Fire_and_Brimstone = true;
	playerMusic.Fire_in_the_Deep = true;
	playerMusic.The_Fires_of_Lletya = true;
	playerMusic.Fishing = true;
	playerMusic.Floating_Free = true;
	playerMusic.Flute_Salad = true;
	playerMusic.Food_for_Thought = true;
	playerMusic.Forbidden = true;
	playerMusic.Forest = true;
	playerMusic.The_Forests_of_Shayzien = true;
	playerMusic.Forever = true;
	playerMusic.Forgettable_Melody = true;
	playerMusic.Forgotten = true;
	playerMusic.A_Forgotten_Religion = true;
	playerMusic.The_Forlorn_Homestead = true;
	playerMusic.The_Forsaken_Tower = true;
	playerMusic.The_Forsaken = true;
	playerMusic.Fossilised = true;
	playerMusic.The_Fragment = true;
	playerMusic.Frogland = true;
	playerMusic.Frostbite = true;
	playerMusic.Fruits_de_Mer = true;
	playerMusic.Ful_to_the_Brim = true;
	playerMusic.Funny_Bunnies = true;
	playerMusic.The_Galleon = true;
	playerMusic.Gaol = true;
	playerMusic.Garden = true;
	playerMusic.Garden_of_Autumn = true;
	playerMusic.Garden_of_Spring = true;
	playerMusic.Garden_of_Summer = true;
	playerMusic.Garden_of_Winter = true;
	playerMusic.The_Gauntlet = true;
	playerMusic.The_Genie = true;
	playerMusic.Getting_Down_to_Business = true;
	playerMusic.Gill_Bill = true;
	playerMusic.Gnome_King = true;
	playerMusic.Gnome_Village = true;
	playerMusic.Gnome_Village_2 = true;
	playerMusic.Gnome_Village_Party = true;
	playerMusic.Gnomeball = true;
	playerMusic.Goblin_Game = true;
	playerMusic.Goblin_Village = true;
	playerMusic.Golden_Touch = true;
	playerMusic.The_Golem = true;
	playerMusic.Greatness = true;
	playerMusic.Grimly_Fiendish = true;
	playerMusic.Grip_of_the_Talon = true;
	playerMusic.Grotto = true;
	playerMusic.Grow_Grow_Grow = true;
	playerMusic.Grumpy = true;
	playerMusic.Guardians_of_the_Rift = true;
	playerMusic.The_Guardians_Prepare = true;
	playerMusic.HAM_and_Seek = true;
	playerMusic.HAM_Attack = true;
	playerMusic.HAM_Fisted = true;
	playerMusic.Harmony = true;
	playerMusic.Harmony_2 = true;
	playerMusic.Haunted_Mine = true;
	playerMusic.Have_a_Blast = true;
	playerMusic.Have_an_Ice_Day = true;
	playerMusic.Head_to_Head = true;
	playerMusic.Heart_and_Mind = true;
	playerMusic.Hells_Bells = true;
	playerMusic.Hermit = true;
	playerMusic.High_Seas = true;
	playerMusic.High_Spirits = true;
	playerMusic.Hoe_Down = true;
	playerMusic.Home_Sweet_Home = true;
	playerMusic.Horizon = true;
	playerMusic.The_Houses_of_Kourend = true;
	playerMusic.Hypnotized = true;
	playerMusic.Iban = true;
	playerMusic.Ice_and_Fire = true;
	playerMusic.Ice_Melody = true;
	playerMusic.Illusive = true;
	playerMusic.Impetuous = true;
	playerMusic.In_Between = true;
	playerMusic.In_the_Brine = true;
	playerMusic.In_the_Clink = true;
	playerMusic.In_the_Manor = true;
	playerMusic.In_the_Pits = true;
	playerMusic.Inadequacy = true;
	playerMusic.Incantation = true;
	playerMusic.Inferno = true;
	playerMusic.Insect_Queen = true;
	playerMusic.Inspiration = true;
	playerMusic.Into_the_Abyss = true;
	playerMusic.Intrepid = true;
	playerMusic.Invader = true;
	playerMusic.Iorwerths_Lament = true;
	playerMusic.Island_Life = true;
	playerMusic.Island_of_the_Trolls = true;
	playerMusic.Isle_of_Everywhere = true;
	playerMusic.Its_not_over_til = true;
	playerMusic.Itsy_Bitsy = true;
	playerMusic.Jaws_of_the_Basilisk = true;
	playerMusic.Jester_Minute = true;
	playerMusic.Jolly_R = true;
	playerMusic.Joy_of_the_Hunt = true;
	playerMusic.Judgement_of_the_Depths = true;
	playerMusic.Jungle_Bells = true;
	playerMusic.Jungle_Hunt = true;
	playerMusic.Jungle_Island = true;
	playerMusic.Jungle_Island_Xmas = true;
	playerMusic.Jungle_Troubles = true;
	playerMusic.Jungly_1 = true;
	playerMusic.Jungly_2 = true;
	playerMusic.Jungly_3 = true;
	playerMusic.Kanon_of_Kahlith = true;
	playerMusic.Karamja_Jam = true;
	playerMusic.Kingdom = true;
	playerMusic.Knightly = true;
	playerMusic.Knightmare = true;
	playerMusic.Kourend_the_Magnificent = true;
	playerMusic.La_Mort = true;
	playerMusic.Labyrinth = true;
	playerMusic.Lagoon = true;
	playerMusic.Lair = true;
	playerMusic.Lair_of_the_Basilisk = true;
	playerMusic.Lament = true;
	playerMusic.Lament_for_the_Hallowed = true;
	playerMusic.Lament_of_Meiyerditch = true;
	playerMusic.Land_Down_Under = true;
	playerMusic.Land_of_Snow = true;
	playerMusic.Land_of_the_Dwarves = true;
	playerMusic.Landlubber = true;
	playerMusic.Last_King_of_the_Yarasa = true;
	playerMusic.Last_Man_Standing = true;
	playerMusic.The_Last_Shanty = true;
	playerMusic.Last_Stand = true;
	playerMusic.Lasting = true;
	playerMusic.Lava_is_Mine = true;
	playerMusic.Legend = true;
	playerMusic.Legion = true;
	playerMusic.Lifes_a_Beach = true;
	playerMusic.Lighthouse = true;
	playerMusic.Lightness = true;
	playerMusic.Lightwalk = true;
	playerMusic.Little_Cave_of_Horrors = true;
	playerMusic.Lonesome = true;
	playerMusic.Long_Ago = true;
	playerMusic.Long_Way_Home = true;
	playerMusic.Looking_Back = true;
	playerMusic.Lore_and_Order = true;
	playerMusic.The_Lost_Melody = true;
	playerMusic.Lost_Soul = true;
	playerMusic.The_Lost_Tribe = true;
	playerMusic.Lower_Depths = true;
	playerMusic.Lucid_Dream = true;
	playerMusic.Lucid_Nightmare = true;
	playerMusic.Lullaby = true;
	playerMusic.Lumbering = true;
	playerMusic.The_Lunar_Isle = true;
	playerMusic.Mad_Eadgar = true;
	playerMusic.The_Mad_Mole = true;
	playerMusic.Mage_Arena = true;
	playerMusic.Magic_Dance = true;
	playerMusic.Magic_Magic_Magic = true;
	playerMusic.Magical_Journey = true;
	playerMusic.The_Maidens_Anger = true;
	playerMusic.The_Maidens_Sorrow = true;
	playerMusic.Major_Miner = true;
	playerMusic.Making_Waves = true;
	playerMusic.Malady = true;
	playerMusic.March = true;
	playerMusic.March_of_the_Shayzien = true;
	playerMusic.Marooned = true;
	playerMusic.Marzipan = true;
	playerMusic.Masquerade = true;
	playerMusic.Mastermindless = true;
	playerMusic.Mausoleum = true;
	playerMusic.Maws_Jaws_and_Claws = true;
	playerMusic.The_Maze = true;
	playerMusic.Meddling_Kids = true;
	playerMusic.Medieval = true;
	playerMusic.Mellow = true;
	playerMusic.Melodrama = true;
	playerMusic.Meridian = true;
	playerMusic.Method_of_Madness = true;
	playerMusic.Miles_Away = true;
	playerMusic.Military_Life = true;
	playerMusic.The_Militia = true;
	playerMusic.Mind_over_Matter = true;
	playerMusic.Miracle_Dance = true;
	playerMusic.Mirage = true;
	playerMusic.Miscellania = true;
	playerMusic.The_Mollusc_Menace = true;
	playerMusic.Monarch_Waltz = true;
	playerMusic.Monkey_Badness = true;
	playerMusic.Monkey_Business = true;
	playerMusic.Monkey_Madness = true;
	playerMusic.Monkey_Sadness = true;
	playerMusic.Monkey_Trouble = true;
	playerMusic.Monster_Melee = true;
	playerMusic.The_Monsters_Below = true;
	playerMusic.Moody = true;
	playerMusic.Mor_Ul_Rek = true;
	playerMusic.Morytania = true;
	playerMusic.Morytanian_Mystery = true;
	playerMusic.Mother_Ruckus = true;
	playerMusic.Mouse_Trap = true;
	playerMusic.Mudskipper_Melody = true;
	playerMusic.Museum_Medley = true;
	playerMusic.Mutant_Medley = true;
	playerMusic.My_Arms_Journey = true;
	playerMusic.Mystics_of_Nature = true;
	playerMusic.Mythical = true;
	playerMusic.Narnodes_Theme = true;
	playerMusic.Natural = true;
	playerMusic.The_Navigator = true;
	playerMusic.Nether_Realm = true;
	playerMusic.Neverland = true;
	playerMusic.Newbie_Farming = true;
	playerMusic.Newbie_Melody = true;
	playerMusic.Night_of_the_Vampyre = true;
	playerMusic.Nightfall = true;
	playerMusic.The_Nightmare_Continues = true;
	playerMusic.No_Pasaran = true;
	playerMusic.No_Way_Out = true;
	playerMusic.The_Noble_Rodent = true;
	playerMusic.Nomad = true;
	playerMusic.Norse_Code = true;
	playerMusic.Not_a_Moment_of_Relief = true;
	playerMusic.Nox_Irae = true;
	playerMusic.Null_and_Void = true;
	playerMusic.Ogre_the_Top = true;
	playerMusic.On_the_Frontline = true;
	playerMusic.On_the_Shore = true;
	playerMusic.On_the_Up = true;
	playerMusic.On_the_Wing = true;
	playerMusic.On_Thin_Ice = true;
	playerMusic.Oncoming_Foe = true;
	playerMusic.Organ_Music_1 = true;
	playerMusic.Organ_Music_2 = true;
	playerMusic.Oriental = true;
	playerMusic.The_Other_Side = true;
	playerMusic.Out_at_the_Mines = true;
	playerMusic.Out_of_the_Deep = true;
	playerMusic.Over_to_Nardah = true;
	playerMusic.Overpass = true;
	playerMusic.Overture = true;
	playerMusic.Parade = true;
	playerMusic.The_Part_Where_You_Die = true;
	playerMusic.Path_of_Peril = true;
	playerMusic.Pathways = true;
	playerMusic.Pest_Control = true;
	playerMusic.Pharaohs_Tomb = true;
	playerMusic.Phasmatys = true;
	playerMusic.Pheasant_Peasant = true;
	playerMusic.Pick_and_Shovel = true;
	playerMusic.Pinball_Wizard = true;
	playerMusic.Pirates_of_Penance = true;
	playerMusic.Pirates_of_Peril = true;
	playerMusic.Poles_Apart = true;
	playerMusic.The_Power_of_Tears = true;
	playerMusic.Power_of_the_Shadow_Realm = true;
	playerMusic.Predator_Xarpus = true;
	playerMusic.Preservation = true;
	playerMusic.Preserved = true;
	playerMusic.Prime_Time = true;
	playerMusic.Principality = true;
	playerMusic.Quest = true;
	playerMusic.The_Quizmaster = true;
	playerMusic.Race_Against_the_Clock = true;
	playerMusic.Rat_a_Tat_Tat = true;
	playerMusic.Rat_Hunt = true;
	playerMusic.Ready_for_Battle = true;
	playerMusic.Regal = true;
	playerMusic.Regal_Pomp = true;
	playerMusic.Reggae = true;
	playerMusic.Reggae_2 = true;
	playerMusic.Reign_of_the_Basilisk = true;
	playerMusic.Relics = true;
	playerMusic.Rellekka = true;
	playerMusic.Rest_in_Peace = true;
	playerMusic.Revenants = true;
	playerMusic.Rhapsody = true;
	playerMusic.Right_on_Track = true;
	playerMusic.Righteousness = true;
	playerMusic.Rising_Damp = true;
	playerMusic.Riverside = true;
	playerMusic.Roc_and_Roll = true;
	playerMusic.The_Rogues_Den = true;
	playerMusic.Roll_the_Bones = true;
	playerMusic.Romancing_the_Crone = true;
	playerMusic.Romper_Chomper = true;
	playerMusic.Roots_and_Flutes = true;
	playerMusic.Rose = true;
	playerMusic.Royale = true;
	playerMusic.Rugged_Terrain = true;
	playerMusic.The_Ruins_of_Camdozaal = true;
	playerMusic.Rune_Essence = true;
	playerMusic.Sad_Meadow = true;
	playerMusic.Safety_in_Numbers = true;
	playerMusic.Saga = true;
	playerMusic.Sarachnis = true;
	playerMusic.Sarcophagus = true;
	playerMusic.Sarims_Vermin = true;
	playerMusic.Scape_Ape = true;
	playerMusic.Scape_Cave = true;
	playerMusic.Scape_Crystal = true;
	playerMusic.Scape_Five = true;
	playerMusic.Scape_Ground = true;
	playerMusic.Scape_Home = true;
	playerMusic.Scape_Hunter = true;
	playerMusic.Scape_Main = true;
	playerMusic.Scape_Original = true;
	playerMusic.Scape_Sad = true;
	playerMusic.Scape_Santa = true;
	playerMusic.Scape_Scared = true;
	playerMusic.Scape_Soft = true;
	playerMusic.Scape_Wild = true;
	playerMusic.Scarab = true;
	playerMusic.Schools_Out = true;
	playerMusic.Scorpia_Dances = true;
	playerMusic.Scrubfoots_Descent = true;
	playerMusic.Sea_Minor_Shanty = true;
	playerMusic.Sea_Shanty = true;
	playerMusic.Sea_Shanty_2 = true;
	playerMusic.Sea_Shanty_Xmas = true;
	playerMusic.The_Seed_of_Crwys = true;
	playerMusic.Serenade = true;
	playerMusic.Serene = true;
	playerMusic.Servants_of_Strife = true;
	playerMusic.Settlement = true;
	playerMusic.The_Shadow = true;
	playerMusic.Shadowland = true;
	playerMusic.Sharp_End_of_the_Crystal = true;
	playerMusic.Shine = true;
	playerMusic.Shining = true;
	playerMusic.Shining_Spirit = true;
	playerMusic.Shipwrecked = true;
	playerMusic.Showdown = true;
	playerMusic.Sigmunds_Showdown = true;
	playerMusic.The_Slayer = true;
	playerMusic.Slice_of_Silent_Movie = true;
	playerMusic.Slice_of_Station = true;
	playerMusic.Slither_and_Thither = true;
	playerMusic.Slug_a_Bug_Ball = true;
	playerMusic.Snowflake_and_My_Arm = true;
	playerMusic.Sojourn = true;
	playerMusic.Song_of_the_Elves = true;
	playerMusic.Soul_Fall = true;
	playerMusic.Soul_Wars = true;
	playerMusic.Soundscape = true;
	playerMusic.Sphinx = true;
	playerMusic.Spirit = true;
	playerMusic.Spirits_of_the_Elid = true;
	playerMusic.Splendour = true;
	playerMusic.Spooky = true;
	playerMusic.Spooky_2 = true;
	playerMusic.Spooky_Jungle = true;
	playerMusic.The_Spurned_Demon = true;
	playerMusic.Stagnant = true;
	playerMusic.Stand_Up_and_Be_Counted = true;
	playerMusic.Starlight = true;
	playerMusic.Start = true;
	playerMusic.Still_Night = true;
	playerMusic.Stillness = true;
	playerMusic.Storm_Brew = true;
	playerMusic.Stranded = true;
	playerMusic.Strange_Place = true;
	playerMusic.Stratosphere = true;
	playerMusic.Strength_of_Saradomin = true;
	playerMusic.Stuck_in_the_Mire = true;
	playerMusic.Subterranea = true;
	playerMusic.Sunburn = true;
	playerMusic.Superstition = true;
	playerMusic.Suspicious = true;
	playerMusic.Tale_of_Keldagrim = true;
	playerMusic.Talking_Forest = true;
	playerMusic.A_Taste_of_Hope = true;
	playerMusic.Tears_of_Guthix = true;
	playerMusic.Technology = true;
	playerMusic.Tempest = true;
	playerMusic.Temple = true;
	playerMusic.Temple_of_Light = true;
	playerMusic.Temple_of_the_Eye = true;
	playerMusic.Temple_of_Tribes = true;
	playerMusic.Tempor_of_the_Storm = true;
	playerMusic.The_Terrible_Caverns = true;
	playerMusic.The_Terrible_Tower = true;
	playerMusic.The_Terrible_Tunnels = true;
	playerMusic.That_Sullen_Hall = true;
	playerMusic.Theme = true;
	playerMusic.A_Thorn_in_My_Side = true;
	playerMusic.Thrall_of_the_Serpent = true;
	playerMusic.Throne_of_the_Demon = true;
	playerMusic.Time_Out = true;
	playerMusic.Time_to_Mine = true;
	playerMusic.Tiptoe = true;
	playerMusic.Title_Fight = true;
	playerMusic.Tomb_Raider = true;
	playerMusic.Tomorrow = true;
	playerMusic.Too_Many_Cooks = true;
	playerMusic.The_Tower_of_Voices = true;
	playerMusic.The_Tower = true;
	playerMusic.The_Trade_Parade = true;
	playerMusic.Trahaearn_Toil = true;
	playerMusic.Trawler = true;
	playerMusic.Trawler_Minor = true;
	playerMusic.Tree_Spirits = true;
	playerMusic.Tremble = true;
	playerMusic.Tribal = true;
	playerMusic.Tribal_2 = true;
	playerMusic.Tribal_Background = true;
	playerMusic.Trinity = true;
	playerMusic.Troll_Shuffle = true;
	playerMusic.Trouble_Brewing = true;
	playerMusic.Troubled = true;
	playerMusic.Troubled_Waters = true;
	playerMusic.Twilight = true;
	playerMusic.TzHaar = true;
	playerMusic.Undead_Dungeon = true;
	playerMusic.Undercurrent = true;
	playerMusic.Underground = true;
	playerMusic.Underground_Pass = true;
	playerMusic.Understanding = true;
	playerMusic.Unknown_Land = true;
	playerMusic.Untouchable = true;
	playerMusic.Upcoming = true;
	playerMusic.Upir_Likhyi = true;
	playerMusic.Upper_Depths = true;
	playerMusic.Vampyre_Assault = true;
	playerMusic.Vanescula = true;
	playerMusic.Venture = true;
	playerMusic.Venture_2 = true;
	playerMusic.Victory_is_Mine = true;
	playerMusic.Village = true;
	playerMusic.Vision = true;
	playerMusic.Volcanic_Vikings = true;
	playerMusic.Voodoo_Cult = true;
	playerMusic.Voyage = true;
	playerMusic.The_Waiting_Game = true;
	playerMusic.Waking_Dream = true;
	playerMusic.A_Walk_in_the_Woods = true;
	playerMusic.The_Walking_Dead = true;
	playerMusic.Wander = true;
	playerMusic.Warpath = true;
	playerMusic.Warrior = true;
	playerMusic.Warriors_Guild = true;
	playerMusic.Watch_Your_Step = true;
	playerMusic.Waterfall = true;
	playerMusic.Waterlogged = true;
	playerMusic.Way_of_the_Enchanter = true;
	playerMusic.Way_of_the_Wyrm = true;
	playerMusic.Wayward = true;
	playerMusic.We_are_the_Fairies = true;
	playerMusic.Welcome_to_my_Nightmare = true;
	playerMusic.Welcome_to_the_Theatre = true;
	playerMusic.Well_Hallowed_Air = true;
	playerMusic.Well_of_Voyage = true;
	playerMusic.What_Happens_Below = true;
	playerMusic.Where_Eagles_Lair = true;
	playerMusic.Wild_Isle = true;
	playerMusic.Wild_Side = true;
	playerMusic.Wilderness = true;
	playerMusic.Wilderness_2 = true;
	playerMusic.Wilderness_3 = true;
	playerMusic.Wildwood = true;
	playerMusic.Winter_Funfair = true;
	playerMusic.Witching = true;
	playerMusic.Woe_of_the_Wyvern = true;
	playerMusic.Wonder = true;
	playerMusic.Wonderous = true;
	playerMusic.Woodland = true;
	playerMusic.Work_Work_Work = true;
	playerMusic.Workshop = true;
	playerMusic.Wrath_and_Ruin = true;
	playerMusic.Xenophobe = true;
	playerMusic.Yesteryear = true;
	playerMusic.You_Have_My_Attention = true;
	playerMusic.Zamorak_Zoo = true;
	playerMusic.Zaniks_Theme = true;
	playerMusic.Zaros_Zeitgeist = true;
	playerMusic.Zealot = true;
	playerMusic.Zogre_Dance = true;
	playerMusic.Zombiism = true;

	playerPets.Abyssal_Orphan = 0;
	playerPets.Baby_Mole = 0;
	playerPets.Callisto_Cub = 0;
	playerPets.Hellpuppy = 0;
	playerPets.Ikkle_Hydra = 0;
	playerPets.Jal_Nib_Rek = 0;
	playerPets.Kalphite_Princess = 0;
	playerPets.Lil_Zik = 0;
	playerPets.Little_Nightmare = 0;
	playerPets.Nexling = 0;
	playerPets.Noon = 0;
	playerPets.Olmet = 0;
	playerPets.Pet_Chaos_Elemental = 0;
	playerPets.Pet_Dagannoth_Prime = 0;
	playerPets.Pet_Dagannoth_Rex = 0;
	playerPets.Pet_Dagannoth_Supreme = 0;
	playerPets.Pet_Dark_Core = 0;
	playerPets.Pet_General_Graardor = 0;
	playerPets.Pet_Kirl_Tsutsaroth = 0;
	playerPets.Pet_Kraken = 1;
	playerPets.Pet_Kreeaara = 0;
	playerPets.Pet_Smoke_Devil = 1;
	playerPets.Pet_Snakeling = 1;
	playerPets.Pet_Zilyana = 0;
	playerPets.Prince_Black_Dragon = 0;
	playerPets.Scorpias_Offspring = 0;
	playerPets.Skotos = 1;
	playerPets.Sraracha = 0;
	playerPets.Tzrek_Jad = 0;
	playerPets.Venenatis_Spiderling = 0;
	playerPets.Vetion_Jr = 0;
	playerPets.Vorki = 0;
	playerPets.Baby_Chinchompa = 0;
	playerPets.Beaver = 0;
	playerPets.Giant_Squirrel = 1;
	playerPets.Heron = 1;
	playerPets.Rift_Guardian = 0;
 	playerPets.Rocky = 0;
	playerPets.Tangleroot = 0;
	playerPets.Bloodhound = 0;
	playerPets.Chompy_Chick = 1;
	playerPets.Herbi = 0;
	playerPets.Lil_Creator = 0;
	playerPets.Pet_Penance_Queen = 0;
	playerPets.Phoenix = 0;
	playerPets.Tiny_Tempor = 0;
	playerPets.Youngllef = 0;
	playerPets.Smolcano = 0;
	playerPets.Abyssal_Protector = 0;

	printUserInfo(playerStats, playerQuest, playerMusic, playerPets);

	std::cout << "Hello Old School Runescape" << std::endl;
	return 0;
}

void printUserInfo(Stats playerStats, Quest playerQuest, Music playerMusic, Pets playerPets){
	std::cout << "userName: " << playerStats.userName << "\n"
			  << "style: " << playerStats.style << "\n"
			  << "membership: " << playerStats.membership << "\n"
			  << "attack: " << playerStats.attack << "\n"
			  << "strength: " << playerStats.strength << "\n"
			  << "defence: " << playerStats.defence << "\n"
			  << "ranged: " << playerStats.ranged << "\n"
			  << "prayer: " << playerStats.prayer << "\n"
			  << "magic: " << playerStats.magic << "\n"
			  << "runecraft: " << playerStats.runecrafting << "\n"
			  << "hitpoints: " << playerStats.hitpoints << "\n"
			  << "crafting: " << playerStats.crafting << "\n"
			  << "mining: " << playerStats.mining << "\n"
			  << "smithing: " << playerStats.smithing << "\n"
			  << "fishing: " << playerStats.fishing << "\n"
			  << "cooking: " << playerStats.cooking << "\n"
			  << "firemaking: " << playerStats.firemaking << "\n"
			  << "woodcutting: " << playerStats.woodcutting << "\n"
			  << "agility: " << playerStats.agility << "\n"
			  << "herblore: " << playerStats.herblore << "\n"
			  << "thieving: " << playerStats.thieving << "\n"
			  << "fletching: " << playerStats.fletching << "\n"
			  << "slayer: " << playerStats.slayer << "\n"
			  << "farming: " << playerStats.farming << "\n"
			  << "construct: " << playerStats.construction << "\n"
			  << "hunter: " << playerStats.hunter << "\n"
			  << "Cooks_Assistant:" << playerQuest.Cooks_Assistant << "\n"
			  << "Demon_Slayer:" << playerQuest.Demon_Slayer << "\n"
			  << "The_Restless_Ghost:" << playerQuest.The_Restless_Ghost << "\n"
			  << "Romeo_and_Juliet:" << playerQuest.Romeo_and_Juliet << "\n"
			  << "Sheep_Shearer:" << playerQuest.Sheep_Shearer << "\n"
			  << "Shield_of_Arrav:" << playerQuest.Shield_of_Arrav << "\n"
			  << "Ernest_the_Chicken:" << playerQuest.Ernest_the_Chicken << "\n"
			  << "Vampyre_Slayer:" << playerQuest.Vampyre_Slayer << "\n"
			  << "Imp_Catcher:" << playerQuest.Imp_Catcher << "\n"
			  << "Prince_Ali_Rescue:" << playerQuest.Prince_Ali_Rescue << "\n"
			  << "Dorics_Quest:" << playerQuest.Dorics_Quest << "\n"
			  << "Black_Knights_Fortress:" << playerQuest.Black_Knights_Fortress << "\n"
			  << "Witchs_Potion:" << playerQuest.Witchs_Potion << "\n"
			  << "The_Knights_Sword:" << playerQuest.The_Knights_Sword << "\n"
			  << "Goblin_Diplomacy:" << playerQuest.Goblin_Diplomacy << "\n"
			  << "Pirates_Treasure:" << playerQuest.Pirates_Treasure << "\n"
			  << "Dragon_Slayer_I:" << playerQuest.Dragon_Slayer_I << "\n"
			  << "Rune_Mysteries:" << playerQuest.Rune_Mysteries << "\n"
			  << "Misthalin_Mystery:" << playerQuest.Misthalin_Mystery << "\n"
			  << "The_Corsair_Curse:" << playerQuest.The_Corsair_Curse << "\n"
			  << "X_Marks_the_Spot:" << playerQuest.X_Marks_the_Spot << "\n"
			  << "Below_Ice_Mountain:" << playerQuest.Below_Ice_Mountain << "\n"
			  << "Druidic_Ritual:" << playerQuest.Druidic_Ritual << "\n"
			  << "Lost_City:" << playerQuest.Lost_City << "\n"
			  << "Witchs_House:" << playerQuest.Witchs_House << "\n"
			  << "Merlins_Crystal:" << playerQuest.Merlins_Crystal << "\n"
			  << "Heroes_Quest:" << playerQuest.Heroes_Quest << "\n"
			  << "Scorpion_Catcher:" << playerQuest.Scorpion_Catcher << "\n"
			  << "Family_Crest:" << playerQuest.Family_Crest << "\n"
			  << "Tribal_Totem:" << playerQuest.Tribal_Totem << "\n"
			  << "Fishing_Contest:" << playerQuest.Fishing_Contest << "\n"
			  << "Monks_Friend:" << playerQuest.Monks_Friend << "\n"
			  << "Temple_of_Ikov:" << playerQuest.Temple_of_Ikov << "\n"
			  << "Clock_Tower:" << playerQuest.Clock_Tower << "\n"
			  << "Holy_Grail:" << playerQuest.Holy_Grail << "\n"
			  << "Tree_Gnome_Village:" << playerQuest.Tree_Gnome_Village << "\n"
			  << "Fight_Arena:" << playerQuest.Fight_Arena << "\n"
			  << "Hazeel_Cult:" << playerQuest.Hazeel_Cult << "\n"
			  << "Sheep_Herder:" << playerQuest.Sheep_Herder << "\n"
			  << "Plague_City:" << playerQuest.Plague_City << "\n"
			  << "Sea_Slug:" << playerQuest.Sea_Slug << "\n"
			  << "Waterfall_Quest_Biohazard:" << playerQuest.Waterfall_Quest_Biohazard << "\n"
			  << "Jungle_Potion:" << playerQuest.Jungle_Potion << "\n"
			  << "The_Grand_Tree:" << playerQuest.The_Grand_Tree << "\n"
			  << "Shilo_Village:" << playerQuest.Shilo_Village << "\n"
			  << "Underground_Pass:" << playerQuest.Underground_Pass << "\n"
			  << "Observatory_Quest:" << playerQuest.Observatory_Quest << "\n"
			  << "The_Tourist_Trap:" << playerQuest.The_Tourist_Trap << "\n"
			  << "Watchtower:" << playerQuest.Watchtower << "\n"
			  << "Dwarf_Cannon:" << playerQuest.Dwarf_Cannon << "\n"
			  << "Murder_Mystery:" << playerQuest.Murder_Mystery << "\n"
			  << "The_Dig_Site:" << playerQuest.The_Dig_Site << "\n"
			  << "Gertrudes_Cat:" << playerQuest.Gertrudes_Cat << "\n"
			  << "Legends_Quest:" << playerQuest.Legends_Quest << "\n"
			  << "Big_Chompy_Bird_Hunting:" << playerQuest.Big_Chompy_Bird_Hunting << "\n"
			  << "Elemental_Workshop_I:" << playerQuest.Elemental_Workshop_I << "\n"
			  << "Priest_in_Peril:" << playerQuest.Priest_in_Peril << "\n"
			  << "Nature_Spirit:" << playerQuest.Nature_Spirit << "\n"
			  << "Death_Plateau:" << playerQuest.Death_Plateau << "\n"
			  << "Troll_Stronghold:" << playerQuest.Troll_Stronghold << "\n"
			  << "Tai_Bwo_Wannai_Trio:" << playerQuest.Tai_Bwo_Wannai_Trio << "\n"
			  << "Regicide:" << playerQuest.Regicide << "\n"
			  << "Eadgars_Ruse:" << playerQuest.Eadgars_Ruse << "\n"
			  << "Shades_of_Mortton:" << playerQuest.Shades_of_Mortton << "\n"
			  << "The_Fremennik_Trials:" << playerQuest.The_Fremennik_Trials << "\n"
			  << "Horror_from_the_Deep:" << playerQuest.Horror_from_the_Deep << "\n"
			  << "Throne_of_Miscellania:" << playerQuest.Throne_of_Miscellania << "\n"
			  << "Monkey_Madness_I:" << playerQuest.Monkey_Madness_I << "\n"
			  << "Haunted_Mine:" << playerQuest.Haunted_Mine << "\n"
			  << "Troll_Romance:" << playerQuest.Troll_Romance << "\n"
			  << "In_Search_of_the_Myreque:" << playerQuest.In_Search_of_the_Myreque << "\n"
			  << "Creature_of_Fenkenstrain:" << playerQuest.Creature_of_Fenkenstrain << "\n"
			  << "Roving_Elves:" << playerQuest.Roving_Elves << "\n"
			  << "Ghosts_Ahoy:" << playerQuest.Ghosts_Ahoy << "\n"
			  << "One_Small_Favour:" << playerQuest.One_Small_Favour << "\n"
			  << "Mountain_Daughter:" << playerQuest.Mountain_Daughter << "\n"
			  << "Between_a_Rock:" << playerQuest.Between_a_Rock << "\n"
			  << "The_Feud:" << playerQuest.The_Feud << "\n"
			  << "The_Golem:" << playerQuest.The_Golem << "\n"
			  << "Desert_Treasure:" << playerQuest.Desert_Treasure << "\n"
			  << "Icthlarins_Little_Helper:" << playerQuest.Icthlarins_Little_Helper << "\n"
			  << "Tears_of_Guthix:" << playerQuest.Tears_of_Guthix << "\n"
			  << "Zogre_Flesh_Eaters:" << playerQuest.Zogre_Flesh_Eaters << "\n"
			  << "The_Lost_Tribe:" << playerQuest.The_Lost_Tribe << "\n"
			  << "The_Giant_Dwarf:" << playerQuest.The_Giant_Dwarf << "\n"
			  << "Recruitment_Drive:" << playerQuest.Recruitment_Drive << "\n"
			  << "Mournings_End_Part_I:" << playerQuest.Mournings_End_Part_I << "\n"
			  << "Forgettable_Tale:" << playerQuest.Forgettable_Tale << "\n"
			  << "Garden_of_Tranquillity:" << playerQuest.Garden_of_Tranquillity << "\n"
			  << "A_Tail_of_Two_Cats:" << playerQuest.A_Tail_of_Two_Cats << "\n"
			  << "Wanted:" << playerQuest.Wanted << "\n"
			  << "Mournings_End_Part_II:" << playerQuest.Mournings_End_Part_II << "\n"
			  << "Rum_Deal:" << playerQuest.Rum_Deal << "\n"
			  << "Shadow_of_the_Storm:" << playerQuest.Shadow_of_the_Storm << "\n"
			  << "Making_History:" << playerQuest.Making_History << "\n"
			  << "Ratcatchers:" << playerQuest.Ratcatchers << "\n"
			  << "Spirits_of_the_Elid:" << playerQuest.Spirits_of_the_Elid << "\n"
			  << "Devious_Minds:" << playerQuest.Devious_Minds << "\n"
			  << "The_Hand_in_the_Sand:" << playerQuest.The_Hand_in_the_Sand << "\n"
			  << "Enakhras_Lament:" << playerQuest.Enakhras_Lament << "\n"
			  << "Cabin_Fever:" << playerQuest.Cabin_Fever << "\n"
			  << "Fairytale_I_Growing_Pains:" << playerQuest.Fairytale_I_Growing_Pains << "\n"
			  << "Recipe_for_Disaster_Another_Cooks_Quest:" << playerQuest.Recipe_for_Disaster_Another_Cooks_Quest << "\n"
			  << "Recipe_for_Disaster_Defeating_the_Culinaromancer:" << playerQuest.Recipe_for_Disaster_Defeating_the_Culinaromancer << "\n"
			  << "Recipe_for_Disaster_Freeing_the_Mountain_Dwarf:" << playerQuest.Recipe_for_Disaster_Freeing_the_Mountain_Dwarf << "\n"
			  << "Recipe_for_Disaster_Freeing_the_Goblin_generals:" << playerQuest.Recipe_for_Disaster_Freeing_the_Goblin_generals << "\n"
			  << "Recipe_for_Disaster_Freeing_Pirate_Pete:" << playerQuest.Recipe_for_Disaster_Freeing_Pirate_Pete << "\n"
			  << "Recipe_for_Disaster_Freeing_the_Lumbridge_Guide:" << playerQuest.Recipe_for_Disaster_Freeing_the_Lumbridge_Guide << "\n"
			  << "Recipe_for_Disaster_Freeing_Evil_Dave:" << playerQuest.Recipe_for_Disaster_Freeing_Evil_Dave << "\n"
			  << "Recipe_for_Disaster_Freeing_King_Awowogei:" << playerQuest.Recipe_for_Disaster_Freeing_King_Awowogei << "\n"
			  << "Recipe_for_Disaster_Freeing_Sir_Amik_Varze:" << playerQuest.Recipe_for_Disaster_Freeing_Sir_Amik_Varze << "\n"
			  << "Recipe_for_Disaster_Freeing_Skrach_Uglogwee:" << playerQuest.Recipe_for_Disaster_Freeing_Skrach_Uglogwee << "\n"
			  << "In_Aid_of_the_Myreque:" << playerQuest.In_Aid_of_the_Myreque << "\n"
			  << "A_Souls_Bane:" << playerQuest.A_Souls_Bane << "\n"
			  << "Rag_and_Bone_Man_I:" << playerQuest.Rag_and_Bone_Man_I << "\n"
			  << "Swan_Song:" << playerQuest.Swan_Song << "\n"
			  << "Royal_Trouble:" << playerQuest.Royal_Trouble << "\n"
			  << "Death_to_the_Dorgeshuun:" << playerQuest.Death_to_the_Dorgeshuun << "\n"
			  << "Fairytale_II_Cure_a_Queen:" << playerQuest.Fairytale_II_Cure_a_Queen << "\n"
			  << "Lunar_Diplomacy:" << playerQuest.Lunar_Diplomacy << "\n"
			  << "The_Eyes_of_Glouphrie:" << playerQuest.The_Eyes_of_Glouphrie << "\n"
			  << "Darkness_of_Hallowvale:" << playerQuest.Darkness_of_Hallowvale << "\n"
			  << "The_Slug_Menace:" << playerQuest.The_Slug_Menace << "\n"
			  << "Elemental_Workshop_II:" << playerQuest.Elemental_Workshop_II << "\n"
			  << "My_Arms_Big_Adventure:" << playerQuest.My_Arms_Big_Adventure << "\n"
			  << "Enlightened_Journey:" << playerQuest.Enlightened_Journey << "\n"
			  << "Eagles_Peak:" << playerQuest.Eagles_Peak << "\n"
			  << "Animal_Magnetism:" << playerQuest.Animal_Magnetism << "\n"
			  << "Contact:" << playerQuest.Contact << "\n"
			  << "Cold_War:" << playerQuest.Cold_War << "\n"
			  << "The_Fremennik_Isles:" << playerQuest.The_Fremennik_Isles << "\n"
			  << "Tower_of_Life:" << playerQuest.Tower_of_Life << "\n"
			  << "The_Great_Brain_Robbery:" << playerQuest.The_Great_Brain_Robbery << "\n"
			  << "What_Lies_Below:" << playerQuest.What_Lies_Below << "\n"
			  << "Olafs_Quest:" << playerQuest.Olafs_Quest << "\n"
			  << "Another_Slice_of_HAM:" << playerQuest.Another_Slice_of_HAM << "\n"
			  << "Dream_Mentor:" << playerQuest.Dream_Mentor << "\n"
			  << "Grim_Tales:" << playerQuest.Grim_Tales << "\n"
			  << "Kings_Ransom:" << playerQuest.Kings_Ransom << "\n"
			  << "Client_of_Kourend:" << playerQuest.Client_of_Kourend << "\n"
			  << "Rag_and_Bone_Man_II:" << playerQuest.Rag_and_Bone_Man_II << "\n"
			  << "Bone_Voyage:" << playerQuest.Bone_Voyage << "\n"
			  << "The_Queen_of_Thieves:" << playerQuest.The_Queen_of_Thieves << "\n"
			  << "The_Depths_of_Despair:" << playerQuest.The_Depths_of_Despair << "\n"
			  << "Dragon_Slayer_I:" << playerQuest.Dragon_Slayer_I << "\n"
			  << "Tale_of_the_Righteous:" << playerQuest.Tale_of_the_Righteous << "\n"
			  << "A_Taste_of_Hope:" << playerQuest.A_Taste_of_Hope << "\n"
			  << "Making_Friends_with_My_Arm:" << playerQuest.Making_Friends_with_My_Arm << "\n"
			  << "The_Forsaken_Tower:" << playerQuest.The_Forsaken_Tower << "\n"
			  << "The_Ascent_of_Arceuus:" << playerQuest.The_Ascent_of_Arceuus << "\n"
			  << "Song_of_the_Elve:" << playerQuest.Song_of_the_Elve << "\n"
			  << "The_Fremennik_Exiles:" << playerQuest.The_Fremennik_Exiles << "\n"
			  << "Sins_of_the_Father:" << playerQuest.Sins_of_the_Father << "\n"
			  << "A_Porcine_of_Interest:" << playerQuest.A_Porcine_of_Interest << "\n"
			  << "Getting_Ahead:" << playerQuest.Getting_Ahead << "\n"
			  << "A_Night_at_the_Theatre:" << playerQuest.A_Night_at_the_Theatre << "\n"
			  << "A_Kingdom_Divided:" << playerQuest.A_Kingdom_Divided << "\n"
			  << "Land_of_the_Goblins:" << playerQuest.Land_of_the_Goblins << "\n"
			  << "Temple_of_the_Eye:" << playerQuest.Temple_of_the_Eye << "\n"
			  << "Seventh_Realm: " << playerMusic.Seventh_Realm << "\n"
			  << "A_Festive_Party: " << playerMusic.A_Festive_Party << "\n"
			  << "Adventure: " << playerMusic.Adventure << "\n"
			  << "Al_Kharid: " << playerMusic.Al_Kharid << "\n"
			  << "Alchemical_Attack: " << playerMusic.Alchemical_Attack << "\n"
			  << "Alls_Fairy_in_Love_and_War: " << playerMusic.Alls_Fairy_in_Love_and_War << "\n"
			  << "Alone: " << playerMusic.Alone << "\n"
			  << "Altar_Ego: " << playerMusic.Altar_Ego << "\n"
			  << "Alternative_Root: " << playerMusic.Alternative_Root << "\n"
			  << "Ambient_Jungle: " << playerMusic.Ambient_Jungle << "\n"
			  << "The_Ancient_Prison: " << playerMusic.The_Ancient_Prison << "\n"
			  << "The_Angels_Fury: " << playerMusic.The_Angels_Fury << "\n"
			  << "Anywhere: " << playerMusic.Anywhere << "\n"
			  << "Arabian: " << playerMusic.Arabian << "\n"
			  << "Arabian_2: " << playerMusic.Arabian_2 << "\n"
			  << "Arabian_3: " << playerMusic.Arabian_3 << "\n"
			  << "Arabique: " << playerMusic.Arabique << "\n"
			  << "Arachnids_of_Vampyrium: " << playerMusic.Arachnids_of_Vampyrium << "\n"
			  << "Arboretum: " << playerMusic.Arboretum << "\n"
			  << "Arcane: " << playerMusic.Arcane << "\n"
			  << "Architects_of_Prifddinas: " << playerMusic.Architects_of_Prifddinas << "\n"
			  << "Armadyl_Alliance: " << playerMusic.Armadyl_Alliance << "\n"
			  << "Armageddon: " << playerMusic.Armageddon << "\n"
			  << "Army_of_Darkness: " << playerMusic.Army_of_Darkness << "\n"
			  << "Arrival: " << playerMusic.Arrival << "\n"
			  << "Artistry: " << playerMusic.Artistry << "\n"
			  << "Ascent: " << playerMusic.Ascent << "\n"
			  << "Assault_and_Battery: " << playerMusic.Assault_and_Battery << "\n"
			  << "Attack_1: " << playerMusic.Attack_1 << "\n"
			  << "Attack_2: " << playerMusic.Attack_2 << "\n"
			  << "Attack_3: " << playerMusic.Attack_3 << "\n"
			  << "Attack_4: " << playerMusic.Attack_4 << "\n"
			  << "Attack_5: " << playerMusic.Attack_5 << "\n"
			  << "Attack_6: " << playerMusic.Attack_6 << "\n"
			  << "Attention: " << playerMusic.Attention << "\n"
			  << "Autumn_Voyage: " << playerMusic.Autumn_Voyage << "\n"
			  << "Aye_Car_Rum_Ba: " << playerMusic.Aye_Car_Rum_Ba << "\n"
			  << "Aztec: " << playerMusic.Aztec << "\n"
			  << "Back_to_Life: " << playerMusic.Back_to_Life << "\n"
			  << "Background: " << playerMusic.Background << "\n"
			  << "Bait: " << playerMusic.Bait << "\n"
			  << "Ballad_of_Enchantment: " << playerMusic.Ballad_of_Enchantment << "\n"
			  << "Ballad_of_the_Basilisk: " << playerMusic.Ballad_of_the_Basilisk << "\n"
			  << "Bandit_Camp: " << playerMusic.Bandit_Camp << "\n"
			  << "Bandos_Battalion: " << playerMusic.Bandos_Battalion << "\n"
			  << "Bane: " << playerMusic.Bane << "\n"
			  << "The_Bane_of_Ashihama: " << playerMusic.The_Bane_of_Ashihama << "\n"
			  << "Barb_Wire: " << playerMusic.Barb_Wire << "\n"
			  << "Barbarian_Workout: " << playerMusic.Barbarian_Workout << "\n"
			  << "Barbarianism: " << playerMusic.Barbarianism << "\n"
			  << "Barking_Mad: " << playerMusic.Barking_Mad << "\n"
			  << "Baroque: " << playerMusic.Baroque << "\n"
			  << "Barren_Land: " << playerMusic.Barren_Land << "\n"
			  << "Beetle_Juice: " << playerMusic.Beetle_Juice << "\n"
			  << "Beneath_the_Kingdom: " << playerMusic.Beneath_the_Kingdom << "\n"
			  << "Beneath_the_Stronghold: " << playerMusic.Beneath_the_Stronghold << "\n"
			  << "Beyond: " << playerMusic.Beyond << "\n"
			  << "Beyond_the_Meadow: " << playerMusic.Beyond_the_Meadow << "\n"
			  << "Big_Chords: " << playerMusic.Big_Chords << "\n"
			  << "Blistering_Barnacles: " << playerMusic.Blistering_Barnacles << "\n"
			  << "Bloodbath: " << playerMusic.Bloodbath << "\n"
			  << "Body_Parts: " << playerMusic.Body_Parts << "\n"
			  << "Bone_Dance: " << playerMusic.Bone_Dance << "\n"
			  << "Bone_Dry: " << playerMusic.Bone_Dry << "\n"
			  << "Book_of_Spells: " << playerMusic.Book_of_Spells << "\n"
			  << "Borderland: " << playerMusic.Borderland << "\n"
			  << "Box_of_Delights: " << playerMusic.Box_of_Delights << "\n"
			  << "Breeze: " << playerMusic.Breeze << "\n"
			  << "Brew_Hoo_Hoo: " << playerMusic.Brew_Hoo_Hoo << "\n"
			  << "Brimstails_Scales: " << playerMusic.Brimstails_Scales << "\n"
			  << "Bubble_and_Squeak: " << playerMusic.Bubble_and_Squeak << "\n"
			  << "Bunnys_Sugar_Rush: " << playerMusic.Bunnys_Sugar_Rush << "\n"
			  << "Burning_Desire: " << playerMusic.Burning_Desire << "\n"
			  << "Cabin_Fever: " << playerMusic.Cabin_Fever << "\n"
			  << "Camelot: " << playerMusic.Camelot << "\n"
			  << "Castle_Wars: " << playerMusic.Castle_Wars << "\n"
			  << "Catacombs_and_Tombs: " << playerMusic.Catacombs_and_Tombs << "\n"
			  << "Catch_Me_If_You_Can: " << playerMusic.Catch_Me_If_You_Can << "\n"
			  << "Cave_Background: " << playerMusic.Cave_Background << "\n"
			  << "Cave_of_Beasts: " << playerMusic.Cave_of_Beasts << "\n"
			  << "Cave_of_the_Goblins: " << playerMusic.Cave_of_the_Goblins << "\n"
			  << "Cavern: " << playerMusic.Cavern << "\n"
			  << "The_Cellar_Dwellers: " << playerMusic.The_Cellar_Dwellers << "\n"
			  << "Cellar_Song: " << playerMusic.Cellar_Song << "\n"
			  << "Chain_of_Command: " << playerMusic.Chain_of_Command << "\n"
			  << "Chamber: " << playerMusic.Chamber << "\n"
			  << "Chef_Surprise: " << playerMusic.Chef_Surprise << "\n"
			  << "Chickened_Out: " << playerMusic.Chickened_Out << "\n"
			  << "Chompy_Hunt: " << playerMusic.Chompy_Hunt << "\n"
			  << "The_Chosen: " << playerMusic.The_Chosen << "\n"
			  << "City_of_the_Dead: " << playerMusic.City_of_the_Dead << "\n"
			  << "Clan_Wars: " << playerMusic.Clan_Wars << "\n"
			  << "Clanliness: " << playerMusic.Clanliness << "\n"
			  << "Claustrophobia: " << playerMusic.Claustrophobia << "\n"
			  << "Close_Quarters: " << playerMusic.Close_Quarters << "\n"
			  << "Coil: " << playerMusic.Coil << "\n"
			  << "Competition: " << playerMusic.Competition << "\n"
			  << "Complication: " << playerMusic.Complication << "\n"
			  << "Confrontation: " << playerMusic.Confrontation << "\n"
			  << "Conspiracy: " << playerMusic.Conspiracy << "\n"
			  << "Contest: " << playerMusic.Contest << "\n"
			  << "Corporal_Punishment: " << playerMusic.Corporal_Punishment << "\n"
			  << "Corridors_of_Power: " << playerMusic.Corridors_of_Power << "\n"
			  << "Country_Jig: " << playerMusic.Country_Jig << "\n"
			  << "Courage: " << playerMusic.Courage << "\n"
			  << "Creature_Cruelty: " << playerMusic.Creature_Cruelty << "\n"
			  << "Creeping_Vines: " << playerMusic.Creeping_Vines << "\n"
			  << "Crystal_Castle: " << playerMusic.Crystal_Castle << "\n"
			  << "Crystal_Cave: " << playerMusic.Crystal_Cave << "\n"
			  << "Crystal_Sword: " << playerMusic.Crystal_Sword << "\n"
			  << "Cursed: " << playerMusic.Cursed << "\n"
			  << "The_Curtain_Closes: " << playerMusic.The_Curtain_Closes << "\n"
			  << "Dagannoth_Dawn: " << playerMusic.Dagannoth_Dawn << "\n"
			  << "Dance_of_Death: " << playerMusic.Dance_of_Death << "\n"
			  << "Dance_of_the_Meilyr: " << playerMusic.Dance_of_the_Meilyr << "\n"
			  << "Dance_of_the_Nylocas: " << playerMusic.Dance_of_the_Nylocas << "\n"
			  << "Dance_of_the_Undead: " << playerMusic.Dance_of_the_Undead << "\n"
			  << "Dangerous: " << playerMusic.Dangerous << "\n"
			  << "A_Dangerous_Game: " << playerMusic.A_Dangerous_Game << "\n"
			  << "Dangerous_Road: " << playerMusic.Dangerous_Road << "\n"
			  << "Dangerous_Way: " << playerMusic.Dangerous_Way << "\n"
			  << "Dark: " << playerMusic.Dark << "\n"
			  << "The_Dark_Beast_Sotetseg: " << playerMusic.The_Dark_Beast_Sotetseg << "\n"
			  << "Darkly_Altared: " << playerMusic.Darkly_Altared << "\n"
			  << "Darkmeyer: " << playerMusic.Darkmeyer << "\n"
			  << "Darkness_in_the_Depths: " << playerMusic.Darkness_in_the_Depths << "\n"
			  << "Davy_Jones_Locker: " << playerMusic.Davy_Jones_Locker << "\n"
			  << "Dead_Can_Dance: " << playerMusic.Dead_Can_Dance << "\n"
			  << "Dead_Quiet: " << playerMusic.Dead_Quiet << "\n"
			  << "Deadlands: " << playerMusic.Deadlands << "\n"
			  << "Deep_Down: " << playerMusic.Deep_Down << "\n"
			  << "Deep_Wildy: " << playerMusic.Deep_Wildy << "\n"
			  << "The_Depths: " << playerMusic.The_Depths << "\n"
			  << "Desert_Heat: " << playerMusic.Desert_Heat << "\n"
			  << "Desert_Voyage: " << playerMusic.Desert_Voyage << "\n"
			  << "The_Desert: " << playerMusic.The_Desert << "\n"
			  << "The_Desolate_Isle: " << playerMusic.The_Desolate_Isle << "\n"
			  << "The_Desolate_Mage: " << playerMusic.The_Desolate_Mage << "\n"
			  << "Devils_May_Care: " << playerMusic.Devils_May_Care << "\n"
			  << "Diangos_Little_Helpers: " << playerMusic.Diangos_Little_Helpers << "\n"
			  << "Dies_Irae: " << playerMusic.Dies_Irae << "\n"
			  << "Dimension_X: " << playerMusic.Dimension_X << "\n"
			  << "Distant_Land: " << playerMusic.Distant_Land << "\n"
			  << "Distillery_Hilarity: " << playerMusic.Distillery_Hilarity << "\n"
			  << "Dogs_of_War: " << playerMusic.Dogs_of_War << "\n"
			  << "Domain_of_the_Vampyres: " << playerMusic.Domain_of_the_Vampyres << "\n"
			  << "Dont_Panic_Zanik: " << playerMusic.Dont_Panic_Zanik << "\n"
			  << "The_Doors_of_Dinh: " << playerMusic.The_Doors_of_Dinh << "\n"
			  << "Doorways: " << playerMusic.Doorways << "\n"
			  << "Dorgeshuun_City: " << playerMusic.Dorgeshuun_City << "\n"
			  << "Dorgeshuun_Deep: " << playerMusic.Dorgeshuun_Deep << "\n"
			  << "Down_and_Out: " << playerMusic.Down_and_Out << "\n"
			  << "Down_Below: " << playerMusic.Down_Below << "\n"
			  << "Down_by_the_Docks: " << playerMusic.Down_by_the_Docks << "\n"
			  << "Down_to_Earth: " << playerMusic.Down_to_Earth << "\n"
			  << "The_Dragon_Slayer: " << playerMusic.The_Dragon_Slayer << "\n"
			  << "Dragontooth_Island: " << playerMusic.Dragontooth_Island << "\n"
			  << "Dream: " << playerMusic.Dream << "\n"
			  << "Dreamstate: " << playerMusic.Dreamstate << "\n"
			  << "Duel_Arena: " << playerMusic.Duel_Arena << "\n"
			  << "Dunjun: " << playerMusic.Dunjun << "\n"
			  << "Dusk_in_Yubiusk: " << playerMusic.Dusk_in_Yubiusk << "\n"
			  << "Dwarf_Theme: " << playerMusic.Dwarf_Theme << "\n"
			  << "Dwarven_Domain: " << playerMusic.Dwarven_Domain << "\n"
			  << "Dynasty: " << playerMusic.Dynasty << "\n"
			  << "Eagles_Peak: " << playerMusic.Eagles_Peak << "\n"
			  << "Easter_Jig: " << playerMusic.Easter_Jig << "\n"
			  << "Egypt: " << playerMusic.Egypt << "\n"
			  << "Elven_Guardians: " << playerMusic.Elven_Guardians << "\n"
			  << "Elven_Mist: " << playerMusic.Elven_Mist << "\n"
			  << "Elven_Seed: " << playerMusic.Elven_Seed << "\n"
			  << "Emotion: " << playerMusic.Emotion << "\n"
			  << "Emperor: " << playerMusic.Emperor << "\n"
			  << "The_Enchanter: " << playerMusic.The_Enchanter << "\n"
			  << "The_Enclave: " << playerMusic.The_Enclave << "\n"
			  << "Escape: " << playerMusic.Escape << "\n"
			  << "Espionage: " << playerMusic.Espionage << "\n"
			  << "Etceteria: " << playerMusic.Etceteria << "\n"
			  << "Eves_Epinette: " << playerMusic.Eves_Epinette << "\n"
			  << "Everlasting: " << playerMusic.Everlasting << "\n"
			  << "Everlasting_Fire: " << playerMusic.Everlasting_Fire << "\n"
			  << "The_Everlasting_Slumber: " << playerMusic.The_Everlasting_Slumber << "\n"
			  << "Everywhere: " << playerMusic.Everywhere << "\n"
			  << "Evil_Bobs_Island: " << playerMusic.Evil_Bobs_Island << "\n"
			  << "Expanse: " << playerMusic.Expanse << "\n"
			  << "Expecting: " << playerMusic.Expecting << "\n"
			  << "Expedition: " << playerMusic.Expedition << "\n"
			  << "Exposed: " << playerMusic.Exposed << "\n"
			  << "Faerie: " << playerMusic.Faerie << "\n"
			  << "Faith_of_the_Hefin: " << playerMusic.Faith_of_the_Hefin << "\n"
			  << "Faithless: " << playerMusic.Faithless << "\n"
			  << "Fanfare: " << playerMusic.Fanfare << "\n"
			  << "Fanfare_2: " << playerMusic.Fanfare_2 << "\n"
			  << "Fanfare_3: " << playerMusic.Fanfare_3 << "\n"
			  << "Fangs_for_the_Memory: " << playerMusic.Fangs_for_the_Memory << "\n"
			  << "Far_Away: " << playerMusic.Far_Away << "\n"
			  << "The_Far_Side: " << playerMusic.The_Far_Side << "\n"
			  << "A_Farmers_Grind: " << playerMusic.A_Farmers_Grind << "\n"
			  << "The_Fat_Lady_Sings: " << playerMusic.The_Fat_Lady_Sings << "\n"
			  << "Fe_Fi_Fo_Fum: " << playerMusic.Fe_Fi_Fo_Fum << "\n"
			  << "Fear_and_Loathing: " << playerMusic.Fear_and_Loathing << "\n"
			  << "Fenkenstrains_Refrain: " << playerMusic.Fenkenstrains_Refrain << "\n"
			  << "Fight_of_the_Basilisk: " << playerMusic.Fight_of_the_Basilisk << "\n"
			  << "Fight_or_Flight: " << playerMusic.Fight_or_Flight << "\n"
			  << "Find_My_Way: " << playerMusic.Find_My_Way << "\n"
			  << "Fire_and_Brimstone: " << playerMusic.Fire_and_Brimstone << "\n"
			  << "Fire_in_the_Deep: " << playerMusic.Fire_in_the_Deep << "\n"
			  << "The_Fires_of_Lletya: " << playerMusic.The_Fires_of_Lletya << "\n"
			  << "Fishing: " << playerMusic.Fishing << "\n"
			  << "Floating_Free: " << playerMusic.Floating_Free << "\n"
			  << "Flute_Salad: " << playerMusic.Flute_Salad << "\n"
			  << "Food_for_Thought: " << playerMusic.Food_for_Thought << "\n"
			  << "Forbidden: " << playerMusic.Forbidden << "\n"
			  << "Forest: " << playerMusic.Forest << "\n"
			  << "The_Forests_of_Shayzien: " << playerMusic.The_Forests_of_Shayzien << "\n"
			  << "Forever: " << playerMusic.Forever << "\n"
			  << "Forgettable_Melody: " << playerMusic.Forgettable_Melody << "\n"
			  << "Forgotten: " << playerMusic.Forgotten << "\n"
			  << "A_Forgotten_Religion: " << playerMusic.A_Forgotten_Religion << "\n"
			  << "The_Forlorn_Homestead: " << playerMusic.The_Forlorn_Homestead << "\n"
			  << "The_Forsaken_Tower: " << playerMusic.The_Forsaken_Tower << "\n"
			  << "The_Forsaken: " << playerMusic.The_Forsaken << "\n"
			  << "Fossilised: " << playerMusic.Fossilised << "\n"
			  << "The_Fragment: " << playerMusic.The_Fragment << "\n"
			  << "Frogland: " << playerMusic.Frogland << "\n"
			  << "Frostbite: " << playerMusic.Frostbite << "\n"
			  << "Fruits_de_Mer: " << playerMusic.Fruits_de_Mer << "\n"
			  << "Ful_to_the_Brim: " << playerMusic.Ful_to_the_Brim << "\n"
			  << "Funny_Bunnies: " << playerMusic.Funny_Bunnies << "\n"
			  << "The_Galleon: " << playerMusic.The_Galleon << "\n"
			  << "Gaol: " << playerMusic.Gaol << "\n"
			  << "Garden: " << playerMusic.Garden << "\n"
			  << "Garden_of_Autumn: " << playerMusic.Garden_of_Autumn << "\n"
			  << "Garden_of_Spring: " << playerMusic.Garden_of_Spring << "\n"
			  << "Garden_of_Summer: " << playerMusic.Garden_of_Summer << "\n"
			  << "Garden_of_Winter: " << playerMusic.Garden_of_Winter << "\n"
			  << "The_Gauntlet: " << playerMusic.The_Gauntlet << "\n"
			  << "The_Genie: " << playerMusic.The_Genie << "\n"
			  << "Getting_Down_to_Business: " << playerMusic.Getting_Down_to_Business << "\n"
			  << "Gill_Bill: " << playerMusic.Gill_Bill << "\n"
			  << "Gnome_King: " << playerMusic.Gnome_King << "\n"
			  << "Gnome_Village: " << playerMusic.Gnome_Village << "\n"
			  << "Gnome_Village_2: " << playerMusic.Gnome_Village_2 << "\n"
			  << "Gnome_Village_Party: " << playerMusic.Gnome_Village_Party << "\n"
			  << "Gnomeball: " << playerMusic.Gnomeball << "\n"
			  << "Goblin_Game: " << playerMusic.Goblin_Game << "\n"
			  << "Goblin_Village: " << playerMusic.Goblin_Village << "\n"
			  << "Golden_Touch: " << playerMusic.Golden_Touch << "\n"
			  << "The_Golem: " << playerMusic.The_Golem << "\n"
			  << "Greatness: " << playerMusic.Greatness << "\n"
			  << "Grimly_Fiendish: " << playerMusic.Grimly_Fiendish << "\n"
			  << "Grip_of_the_Talon: " << playerMusic.Grip_of_the_Talon << "\n"
			  << "Grotto: " << playerMusic.Grotto << "\n"
			  << "Grow_Grow_Grow: " << playerMusic.Grow_Grow_Grow << "\n"
			  << "Grumpy: " << playerMusic.Grumpy << "\n"
			  << "Guardians_of_the_Rift: " << playerMusic.Guardians_of_the_Rift << "\n"
			  << "The_Guardians_Prepare: " << playerMusic.The_Guardians_Prepare << "\n"
			  << "HAM_and_Seek: " << playerMusic.HAM_and_Seek << "\n"
			  << "HAM_Attack: " << playerMusic.HAM_Attack << "\n"
			  << "HAM_Fisted: " << playerMusic.HAM_Fisted << "\n"
			  << "Harmony: " << playerMusic.Harmony << "\n"
			  << "Harmony_2: " << playerMusic.Harmony_2 << "\n"
			  << "Haunted_Mine: " << playerMusic.Haunted_Mine << "\n"
			  << "Have_a_Blast: " << playerMusic.Have_a_Blast << "\n"
			  << "Have_an_Ice_Day: " << playerMusic.Have_an_Ice_Day << "\n"
			  << "Head_to_Head: " << playerMusic.Head_to_Head << "\n"
			  << "Heart_and_Mind: " << playerMusic.Heart_and_Mind << "\n"
			  << "Hells_Bells: " << playerMusic.Hells_Bells << "\n"
			  << "Hermit: " << playerMusic.Hermit << "\n"
			  << "High_Seas: " << playerMusic.High_Seas << "\n"
			  << "High_Spirits: " << playerMusic.High_Spirits << "\n"
			  << "Hoe_Down: " << playerMusic.Hoe_Down << "\n"
			  << "Home_Sweet_Home: " << playerMusic.Home_Sweet_Home << "\n"
			  << "Horizon: " << playerMusic.Horizon << "\n"
			  << "The_Houses_of_Kourend: " << playerMusic.The_Houses_of_Kourend << "\n"
			  << "Hypnotized: " << playerMusic.Hypnotized << "\n"
			  << "Iban: " << playerMusic.Iban << "\n"
			  << "Ice_and_Fire: " << playerMusic.Ice_and_Fire << "\n"
			  << "Ice_Melody: " << playerMusic.Ice_Melody << "\n"
			  << "Illusive: " << playerMusic.Illusive << "\n"
			  << "Impetuous: " << playerMusic.Impetuous << "\n"
			  << "In_Between: " << playerMusic.In_Between << "\n"
			  << "In_the_Brine: " << playerMusic.In_the_Brine << "\n"
			  << "In_the_Clink: " << playerMusic.In_the_Clink << "\n"
			  << "In_the_Manor: " << playerMusic.In_the_Manor << "\n"
			  << "In_the_Pits: " << playerMusic.In_the_Pits << "\n"
			  << "Inadequacy: " << playerMusic.Inadequacy << "\n"
			  << "Incantation: " << playerMusic.Incantation << "\n"
			  << "Inferno: " << playerMusic.Inferno << "\n"
			  << "Insect_Queen: " << playerMusic.Insect_Queen << "\n"
			  << "Inspiration: " << playerMusic.Inspiration << "\n"
			  << "Into_the_Abyss: " << playerMusic.Into_the_Abyss << "\n"
			  << "Intrepid: " << playerMusic.Intrepid << "\n"
			  << "Invader: " << playerMusic.Invader << "\n"
			  << "Iorwerths_Lament: " << playerMusic.Iorwerths_Lament << "\n"
			  << "Island_Life: " << playerMusic.Island_Life << "\n"
			  << "Island_of_the_Trolls: " << playerMusic.Island_of_the_Trolls << "\n"
			  << "Isle_of_Everywhere: " << playerMusic.Isle_of_Everywhere << "\n"
			  << "Its_not_over_til: " << playerMusic.Its_not_over_til << "\n"
			  << "Itsy_Bitsy: " << playerMusic.Itsy_Bitsy << "\n"
			  << "Jaws_of_the_Basilisk: " << playerMusic.Jaws_of_the_Basilisk << "\n"
			  << "Jester_Minute: " << playerMusic.Jester_Minute << "\n"
			  << "Jolly_R: " << playerMusic.Jolly_R << "\n"
			  << "Joy_of_the_Hunt: " << playerMusic.Joy_of_the_Hunt << "\n"
			  << "Judgement_of_the_Depths: " << playerMusic.Judgement_of_the_Depths << "\n"
			  << "Jungle_Bells: " << playerMusic.Jungle_Bells << "\n"
			  << "Jungle_Hunt: " << playerMusic.Jungle_Hunt << "\n"
			  << "Jungle_Island: " << playerMusic.Jungle_Island << "\n"
			  << "Jungle_Island_Xmas: " << playerMusic.Jungle_Island_Xmas << "\n"
			  << "Jungle_Troubles: " << playerMusic.Jungle_Troubles << "\n"
			  << "Jungly_1: " << playerMusic.Jungly_1 << "\n"
			  << "Jungly_2: " << playerMusic.Jungly_2 << "\n"
			  << "Jungly_3: " << playerMusic.Jungly_3 << "\n"
			  << "Kanon_of_Kahlith: " << playerMusic.Kanon_of_Kahlith << "\n"
			  << "Karamja_Jam: " << playerMusic.Karamja_Jam << "\n"
			  << "Kingdom: " << playerMusic.Kingdom << "\n"
			  << "Knightly: " << playerMusic.Knightly << "\n"
			  << "Knightmare: " << playerMusic.Knightmare << "\n"
			  << "Kourend_the_Magnificent: " << playerMusic.Kourend_the_Magnificent << "\n"
			  << "La_Mort: " << playerMusic.La_Mort << "\n"
			  << "Labyrinth: " << playerMusic.Labyrinth << "\n"
			  << "Lagoon: " << playerMusic.Lagoon << "\n"
			  << "Lair: " << playerMusic.Lair << "\n"
			  << "Lair_of_the_Basilisk: " << playerMusic.Lair_of_the_Basilisk << "\n"
			  << "Lament: " << playerMusic.Lament << "\n"
			  << "Lament_for_the_Hallowed: " << playerMusic.Lament_for_the_Hallowed << "\n"
			  << "Lament_of_Meiyerditch: " << playerMusic.Lament_of_Meiyerditch << "\n"
			  << "Land_Down_Under: " << playerMusic.Land_Down_Under << "\n"
			  << "Land_of_Snow: " << playerMusic.Land_of_Snow << "\n"
			  << "Land_of_the_Dwarves: " << playerMusic.Land_of_the_Dwarves << "\n"
			  << "Landlubber: " << playerMusic.Landlubber << "\n"
			  << "Last_King_of_the_Yarasa: " << playerMusic.Last_King_of_the_Yarasa << "\n"
			  << "Last_Man_Standing: " << playerMusic.Last_Man_Standing << "\n"
			  << "The_Last_Shanty: " << playerMusic.The_Last_Shanty << "\n"
			  << "Last_Stand: " << playerMusic.Last_Stand << "\n"
			  << "Lasting: " << playerMusic.Lasting << "\n"
			  << "Lava_is_Mine: " << playerMusic.Lava_is_Mine << "\n"
			  << "Legend: " << playerMusic.Legend << "\n"
			  << "Legion: " << playerMusic.Legion << "\n"
			  << "Lifes_a_Beach: " << playerMusic.Lifes_a_Beach << "\n"
			  << "Lighthouse: " << playerMusic.Lighthouse << "\n"
			  << "Lightness: " << playerMusic.Lightness << "\n"
			  << "Lightwalk: " << playerMusic.Lightwalk << "\n"
			  << "Little_Cave_of_Horrors: " << playerMusic.Little_Cave_of_Horrors << "\n"
			  << "Lonesome: " << playerMusic.Lonesome << "\n"
			  << "Long_Ago: " << playerMusic.Long_Ago << "\n"
			  << "Long_Way_Home: " << playerMusic.Long_Way_Home << "\n"
			  << "Looking_Back: " << playerMusic.Looking_Back << "\n"
			  << "Lore_and_Order: " << playerMusic.Lore_and_Order << "\n"
			  << "The_Lost_Melody: " << playerMusic.The_Lost_Melody << "\n"
			  << "Lost_Soul: " << playerMusic.Lost_Soul << "\n"
			  << "The_Lost_Tribe: " << playerMusic.The_Lost_Tribe << "\n"
			  << "Lower_Depths: " << playerMusic.Lower_Depths << "\n"
			  << "Lucid_Dream: " << playerMusic.Lucid_Dream << "\n"
			  << "Lucid_Nightmare: " << playerMusic.Lucid_Nightmare << "\n"
			  << "Lullaby: " << playerMusic.Lullaby << "\n"
			  << "Lumbering: " << playerMusic.Lumbering << "\n"
			  << "The_Lunar_Isle: " << playerMusic.The_Lunar_Isle << "\n"
			  << "Mad_Eadgar: " << playerMusic.Mad_Eadgar << "\n"
			  << "The_Mad_Mole: " << playerMusic.The_Mad_Mole << "\n"
			  << "Mage_Arena: " << playerMusic.Mage_Arena << "\n"
			  << "Magic_Dance: " << playerMusic.Magic_Dance << "\n"
			  << "Magic_Magic_Magic: " << playerMusic.Magic_Magic_Magic << "\n"
			  << "Magical_Journey: " << playerMusic.Magical_Journey << "\n"
			  << "The_Maidens_Anger: " << playerMusic.The_Maidens_Anger << "\n"
			  << "The_Maidens_Sorrow: " << playerMusic.The_Maidens_Sorrow << "\n"
			  << "Major_Miner: " << playerMusic.Major_Miner << "\n"
			  << "Making_Waves: " << playerMusic.Making_Waves << "\n"
			  << "Malady: " << playerMusic.Malady << "\n"
			  << "March: " << playerMusic.March << "\n"
			  << "March_of_the_Shayzien: " << playerMusic.March_of_the_Shayzien << "\n"
			  << "Marooned: " << playerMusic.Marooned << "\n"
			  << "Marzipan: " << playerMusic.Marzipan << "\n"
			  << "Masquerade: " << playerMusic.Masquerade << "\n"
			  << "Mastermindless: " << playerMusic.Mastermindless << "\n"
			  << "Mausoleum: " << playerMusic.Mausoleum << "\n"
			  << "Maws_Jaws_and_Claws: " << playerMusic.Maws_Jaws_and_Claws << "\n"
			  << "The_Maze: " << playerMusic.The_Maze << "\n"
			  << "Meddling_Kids: " << playerMusic.Meddling_Kids << "\n"
			  << "Medieval: " << playerMusic.Medieval << "\n"
			  << "Mellow: " << playerMusic.Mellow << "\n"
			  << "Melodrama: " << playerMusic.Melodrama << "\n"
			  << "Meridian: " << playerMusic.Meridian << "\n"
			  << "Method_of_Madness: " << playerMusic.Method_of_Madness << "\n"
			  << "Miles_Away: " << playerMusic.Miles_Away << "\n"
			  << "Military_Life: " << playerMusic.Military_Life << "\n"
			  << "The_Militia: " << playerMusic.The_Militia << "\n"
			  << "Mind_over_Matter: " << playerMusic.Mind_over_Matter << "\n"
			  << "Miracle_Dance: " << playerMusic.Miracle_Dance << "\n"
			  << "Mirage: " << playerMusic.Mirage << "\n"
			  << "Miscellania: " << playerMusic.Miscellania << "\n"
			  << "The_Mollusc_Menace: " << playerMusic.The_Mollusc_Menace << "\n"
			  << "Monarch_Waltz: " << playerMusic.Monarch_Waltz << "\n"
			  << "Monkey_Badness: " << playerMusic.Monkey_Badness << "\n"
			  << "Monkey_Business: " << playerMusic.Monkey_Business << "\n"
			  << "Monkey_Madness: " << playerMusic.Monkey_Madness << "\n"
			  << "Monkey_Sadness: " << playerMusic.Monkey_Sadness << "\n"
			  << "Monkey_Trouble: " << playerMusic.Monkey_Trouble << "\n"
			  << "Monster_Melee: " << playerMusic.Monster_Melee << "\n"
			  << "The_Monsters_Below: " << playerMusic.The_Monsters_Below << "\n"
			  << "Moody: " << playerMusic.Moody << "\n"
			  << "Mor_Ul_Rek: " << playerMusic.Mor_Ul_Rek << "\n"
			  << "Morytania: " << playerMusic.Morytania << "\n"
			  << "Morytanian_Mystery: " << playerMusic.Morytanian_Mystery << "\n"
			  << "Mother_Ruckus: " << playerMusic.Mother_Ruckus << "\n"
			  << "Mouse_Trap: " << playerMusic.Mouse_Trap << "\n"
			  << "Mudskipper_Melody: " << playerMusic.Mudskipper_Melody << "\n"
			  << "Museum_Medley: " << playerMusic.Museum_Medley << "\n"
			  << "Mutant_Medley: " << playerMusic.Mutant_Medley << "\n"
			  << "My_Arms_Journey: " << playerMusic.My_Arms_Journey << "\n"
			  << "Mystics_of_Nature: " << playerMusic.Mystics_of_Nature << "\n"
			  << "Mythical: " << playerMusic.Mythical << "\n"
			  << "Narnodes_Theme: " << playerMusic.Narnodes_Theme << "\n"
			  << "Natural: " << playerMusic.Natural << "\n"
			  << "The_Navigator: " << playerMusic.The_Navigator << "\n"
			  << "Nether_Realm: " << playerMusic.Nether_Realm << "\n"
			  << "Neverland: " << playerMusic.Neverland << "\n"
			  << "Newbie_Farming: " << playerMusic.Newbie_Farming << "\n"
			  << "Newbie_Melody: " << playerMusic.Newbie_Melody << "\n"
			  << "Night_of_the_Vampyre: " << playerMusic.Night_of_the_Vampyre << "\n"
			  << "Nightfall: " << playerMusic.Nightfall << "\n"
			  << "The_Nightmare_Continues: " << playerMusic.The_Nightmare_Continues << "\n"
			  << "No_Pasaran: " << playerMusic.No_Pasaran << "\n"
			  << "No_Way_Out: " << playerMusic.No_Way_Out << "\n"
			  << "The_Noble_Rodent: " << playerMusic.The_Noble_Rodent << "\n"
			  << "Nomad: " << playerMusic.Nomad << "\n"
			  << "Norse_Code: " << playerMusic.Norse_Code << "\n"
			  << "Not_a_Moment_of_Relief: " << playerMusic.Not_a_Moment_of_Relief << "\n"
			  << "Nox_Irae: " << playerMusic.Nox_Irae << "\n"
			  << "Null_and_Void: " << playerMusic.Null_and_Void << "\n"
			  << "Ogre_the_Top: " << playerMusic.Ogre_the_Top << "\n"
			  << "On_the_Frontline: " << playerMusic.On_the_Frontline << "\n"
			  << "On_the_Shore: " << playerMusic.On_the_Shore << "\n"
			  << "On_the_Up: " << playerMusic.On_the_Up << "\n"
			  << "On_the_Wing: " << playerMusic.On_the_Wing << "\n"
			  << "On_Thin_Ice: " << playerMusic.On_Thin_Ice << "\n"
			  << "Oncoming_Foe: " << playerMusic.Oncoming_Foe << "\n"
			  << "Organ_Music_1: " << playerMusic.Organ_Music_1 << "\n"
			  << "Organ_Music_2: " << playerMusic.Organ_Music_2 << "\n"
			  << "Oriental: " << playerMusic.Oriental << "\n"
			  << "The_Other_Side: " << playerMusic.The_Other_Side << "\n"
			  << "Out_at_the_Mines: " << playerMusic.Out_at_the_Mines << "\n"
			  << "Out_of_the_Deep: " << playerMusic.Out_of_the_Deep << "\n"
			  << "Over_to_Nardah: " << playerMusic.Over_to_Nardah << "\n"
			  << "Overpass: " << playerMusic.Overpass << "\n"
			  << "Overture: " << playerMusic.Overture << "\n"
			  << "Parade: " << playerMusic.Parade << "\n"
			  << "The_Part_Where_You_Die: " << playerMusic.The_Part_Where_You_Die << "\n"
			  << "Path_of_Peril: " << playerMusic.Path_of_Peril << "\n"
			  << "Pathways: " << playerMusic.Pathways << "\n"
			  << "Pest_Control: " << playerMusic.Pest_Control << "\n"
			  << "Pharaohs_Tomb: " << playerMusic.Pharaohs_Tomb << "\n"
			  << "Phasmatys: " << playerMusic.Phasmatys << "\n"
			  << "Pheasant_Peasant: " << playerMusic.Pheasant_Peasant << "\n"
			  << "Pick_and_Shovel: " << playerMusic.Pick_and_Shovel << "\n"
			  << "Pinball_Wizard: " << playerMusic.Pinball_Wizard << "\n"
			  << "Pirates_of_Penance: " << playerMusic.Pirates_of_Penance << "\n"
			  << "Pirates_of_Peril: " << playerMusic.Pirates_of_Peril << "\n"
			  << "Poles_Apart: " << playerMusic.Poles_Apart << "\n"
			  << "The_Power_of_Tears: " << playerMusic.The_Power_of_Tears << "\n"
			  << "Power_of_the_Shadow_Realm: " << playerMusic.Power_of_the_Shadow_Realm << "\n"
			  << "Predator_Xarpus: " << playerMusic.Predator_Xarpus << "\n"
			  << "Preservation: " << playerMusic.Preservation << "\n"
			  << "Preserved: " << playerMusic.Preserved << "\n"
			  << "Prime_Time: " << playerMusic.Prime_Time << "\n"
			  << "Principality: " << playerMusic.Principality << "\n"
			  << "Quest: " << playerMusic.Quest << "\n"
			  << "The_Quizmaster: " << playerMusic.The_Quizmaster << "\n"
			  << "Race_Against_the_Clock: " << playerMusic.Race_Against_the_Clock << "\n"
			  << "Rat_a_Tat_Tat: " << playerMusic.Rat_a_Tat_Tat << "\n"
			  << "Rat_Hunt: " << playerMusic.Rat_Hunt << "\n"
			  << "Ready_for_Battle: " << playerMusic.Ready_for_Battle << "\n"
			  << "Regal: " << playerMusic.Regal << "\n"
			  << "Regal_Pomp: " << playerMusic.Regal_Pomp << "\n"
			  << "Reggae: " << playerMusic.Reggae << "\n"
			  << "Reggae_2: " << playerMusic.Reggae_2 << "\n"
			  << "Reign_of_the_Basilisk: " << playerMusic.Reign_of_the_Basilisk << "\n"
			  << "Relics: " << playerMusic.Relics << "\n"
			  << "Rellekka: " << playerMusic.Rellekka << "\n"
			  << "Rest_in_Peace: " << playerMusic.Rest_in_Peace << "\n"
			  << "Revenants: " << playerMusic.Revenants << "\n"
			  << "Rhapsody: " << playerMusic.Rhapsody << "\n"
			  << "Right_on_Track: " << playerMusic.Right_on_Track << "\n"
			  << "Righteousness: " << playerMusic.Righteousness << "\n"
			  << "Rising_Damp: " << playerMusic.Rising_Damp << "\n"
			  << "Riverside: " << playerMusic.Riverside << "\n"
			  << "Roc_and_Roll: " << playerMusic.Roc_and_Roll << "\n"
			  << "The_Rogues_Den: " << playerMusic.The_Rogues_Den << "\n"
			  << "Roll_the_Bones: " << playerMusic.Roll_the_Bones << "\n"
			  << "Romancing_the_Crone: " << playerMusic.Romancing_the_Crone << "\n"
			  << "Romper_Chomper: " << playerMusic.Romper_Chomper << "\n"
			  << "Roots_and_Flutes: " << playerMusic.Roots_and_Flutes << "\n"
			  << "Rose: " << playerMusic.Rose << "\n"
			  << "Royale: " << playerMusic.Royale << "\n"
			  << "Rugged_Terrain: " << playerMusic.Rugged_Terrain << "\n"
			  << "The_Ruins_of_Camdozaal: " << playerMusic.The_Ruins_of_Camdozaal << "\n"
			  << "Rune_Essence: " << playerMusic.Rune_Essence << "\n"
			  << "Sad_Meadow: " << playerMusic.Sad_Meadow << "\n"
			  << "Safety_in_Numbers: " << playerMusic.Safety_in_Numbers << "\n"
			  << "Saga: " << playerMusic.Saga << "\n"
			  << "Sarachnis: " << playerMusic.Sarachnis << "\n"
			  << "Sarcophagus: " << playerMusic.Sarcophagus << "\n"
			  << "Sarims_Vermin: " << playerMusic.Sarims_Vermin << "\n"
			  << "Scape_Ape: " << playerMusic.Scape_Ape << "\n"
			  << "Scape_Cave: " << playerMusic.Scape_Cave << "\n"
			  << "Scape_Crystal: " << playerMusic.Scape_Crystal << "\n"
			  << "Scape_Five: " << playerMusic.Scape_Five << "\n"
			  << "Scape_Ground: " << playerMusic.Scape_Ground << "\n"
			  << "Scape_Home: " << playerMusic.Scape_Home << "\n"
			  << "Scape_Hunter: " << playerMusic.Scape_Hunter << "\n"
			  << "Scape_Main: " << playerMusic.Scape_Main << "\n"
			  << "Scape_Original: " << playerMusic.Scape_Original << "\n"
			  << "Scape_Sad: " << playerMusic.Scape_Sad << "\n"
			  << "Scape_Santa: " << playerMusic.Scape_Santa << "\n"
			  << "Scape_Scared: " << playerMusic.Scape_Scared << "\n"
			  << "Scape_Soft: " << playerMusic.Scape_Soft << "\n"
			  << "Scape_Wild: " << playerMusic.Scape_Wild << "\n"
			  << "Scarab: " << playerMusic.Scarab << "\n"
			  << "Schools_Out: " << playerMusic.Schools_Out << "\n"
			  << "Scorpia_Dances: " << playerMusic.Scorpia_Dances << "\n"
			  << "Scrubfoots_Descent: " << playerMusic.Scrubfoots_Descent << "\n"
			  << "Sea_Minor_Shanty: " << playerMusic.Sea_Minor_Shanty << "\n"
			  << "Sea_Shanty: " << playerMusic.Sea_Shanty << "\n"
			  << "Sea_Shanty_2: " << playerMusic.Sea_Shanty_2 << "\n"
			  << "Sea_Shanty_Xmas: " << playerMusic.Sea_Shanty_Xmas << "\n"
			  << "The_Seed_of_Crwys: " << playerMusic.The_Seed_of_Crwys << "\n"
			  << "Serenade: " << playerMusic.Serenade << "\n"
			  << "Serene: " << playerMusic.Serene << "\n"
			  << "Servants_of_Strife: " << playerMusic.Servants_of_Strife << "\n"
			  << "Settlement: " << playerMusic.Settlement << "\n"
			  << "The_Shadow: " << playerMusic.The_Shadow << "\n"
			  << "Shadowland: " << playerMusic.Shadowland << "\n"
			  << "Sharp_End_of_the_Crystal: " << playerMusic.Sharp_End_of_the_Crystal << "\n"
			  << "Shine: " << playerMusic.Shine << "\n"
			  << "Shining: " << playerMusic.Shining << "\n"
			  << "Shining_Spirit: " << playerMusic.Shining_Spirit << "\n"
			  << "Shipwrecked: " << playerMusic.Shipwrecked << "\n"
			  << "Showdown: " << playerMusic.Showdown << "\n"
			  << "Sigmunds_Showdown: " << playerMusic.Sigmunds_Showdown << "\n"
			  << "The_Slayer: " << playerMusic.The_Slayer << "\n"
			  << "Slice_of_Silent_Movie: " << playerMusic.Slice_of_Silent_Movie << "\n"
			  << "Slice_of_Station: " << playerMusic.Slice_of_Station << "\n"
			  << "Slither_and_Thither: " << playerMusic.Slither_and_Thither << "\n"
			  << "Slug_a_Bug_Ball: " << playerMusic.Slug_a_Bug_Ball << "\n"
			  << "Snowflake_and_My_Arm: " << playerMusic.Snowflake_and_My_Arm << "\n"
			  << "Sojourn: " << playerMusic.Sojourn << "\n"
			  << "Song_of_the_Elves: " << playerMusic.Song_of_the_Elves << "\n"
			  << "Soul_Fall: " << playerMusic.Soul_Fall << "\n"
			  << "Soul_Wars: " << playerMusic.Soul_Wars << "\n"
			  << "Soundscape: " << playerMusic.Soundscape << "\n"
			  << "Sphinx: " << playerMusic.Sphinx << "\n"
			  << "Spirit: " << playerMusic.Spirit << "\n"
			  << "Spirits_of_the_Elid: " << playerMusic.Spirits_of_the_Elid << "\n"
			  << "Splendour: " << playerMusic.Splendour << "\n"
			  << "Spooky: " << playerMusic.Spooky << "\n"
			  << "Spooky_2: " << playerMusic.Spooky_2 << "\n"
			  << "Spooky_Jungle: " << playerMusic.Spooky_Jungle << "\n"
			  << "The_Spurned_Demon: " << playerMusic.The_Spurned_Demon << "\n"
			  << "Stagnant: " << playerMusic.Stagnant << "\n"
			  << "Stand_Up_and_Be_Counted: " << playerMusic.Stand_Up_and_Be_Counted << "\n"
			  << "Starlight: " << playerMusic.Starlight << "\n"
			  << "Start: " << playerMusic.Start << "\n"
			  << "Still_Night: " << playerMusic.Still_Night << "\n"
			  << "Stillness: " << playerMusic.Stillness << "\n"
			  << "Storm_Brew: " << playerMusic.Storm_Brew << "\n"
			  << "Stranded: " << playerMusic.Stranded << "\n"
			  << "Strange_Place: " << playerMusic.Strange_Place << "\n"
			  << "Stratosphere: " << playerMusic.Stratosphere << "\n"
			  << "Strength_of_Saradomin: " << playerMusic.Strength_of_Saradomin << "\n"
			  << "Stuck_in_the_Mire: " << playerMusic.Stuck_in_the_Mire << "\n"
			  << "Subterranea: " << playerMusic.Subterranea << "\n"
			  << "Sunburn: " << playerMusic.Sunburn << "\n"
			  << "Superstition: " << playerMusic.Superstition << "\n"
			  << "Suspicious: " << playerMusic.Suspicious << "\n"
			  << "Tale_of_Keldagrim: " << playerMusic.Tale_of_Keldagrim << "\n"
			  << "Talking_Forest: " << playerMusic.Talking_Forest << "\n"
			  << "A_Taste_of_Hope: " << playerMusic.A_Taste_of_Hope << "\n"
			  << "Tears_of_Guthix: " << playerMusic.Tears_of_Guthix << "\n"
			  << "Technology: " << playerMusic.Technology << "\n"
			  << "Tempest: " << playerMusic.Tempest << "\n"
			  << "Temple: " << playerMusic.Temple << "\n"
			  << "Temple_of_Light: " << playerMusic.Temple_of_Light << "\n"
			  << "Temple_of_the_Eye: " << playerMusic.Temple_of_the_Eye << "\n"
			  << "Temple_of_Tribes: " << playerMusic.Temple_of_Tribes << "\n"
			  << "Tempor_of_the_Storm: " << playerMusic.Tempor_of_the_Storm << "\n"
			  << "The_Terrible_Caverns: " << playerMusic.The_Terrible_Caverns << "\n"
			  << "The_Terrible_Tower: " << playerMusic.The_Terrible_Tower << "\n"
			  << "The_Terrible_Tunnels: " << playerMusic.The_Terrible_Tunnels << "\n"
			  << "That_Sullen_Hall: " << playerMusic.That_Sullen_Hall << "\n"
			  << "Theme: " << playerMusic.Theme << "\n"
			  << "A_Thorn_in_My_Side: " << playerMusic.A_Thorn_in_My_Side << "\n"
			  << "Thrall_of_the_Serpent: " << playerMusic.Thrall_of_the_Serpent << "\n"
			  << "Throne_of_the_Demon: " << playerMusic.Throne_of_the_Demon << "\n"
			  << "Time_Out: " << playerMusic.Time_Out << "\n"
			  << "Time_to_Mine: " << playerMusic.Time_to_Mine << "\n"
			  << "Tiptoe: " << playerMusic.Tiptoe << "\n"
			  << "Title_Fight: " << playerMusic.Title_Fight << "\n"
			  << "Tomb_Raider: " << playerMusic.Tomb_Raider << "\n"
			  << "Tomorrow: " << playerMusic.Tomorrow << "\n"
			  << "Too_Many_Cooks: " << playerMusic.Too_Many_Cooks << "\n"
			  << "The_Tower_of_Voices: " << playerMusic.The_Tower_of_Voices << "\n"
			  << "The_Tower: " << playerMusic.The_Tower << "\n"
			  << "The_Trade_Parade: " << playerMusic.The_Trade_Parade << "\n"
			  << "Trahaearn_Toil: " << playerMusic.Trahaearn_Toil << "\n"
			  << "Trawler: " << playerMusic.Trawler << "\n"
			  << "Trawler_Minor: " << playerMusic.Trawler_Minor << "\n"
			  << "Tree_Spirits: " << playerMusic.Tree_Spirits << "\n"
			  << "Tremble: " << playerMusic.Tremble << "\n"
			  << "Tribal: " << playerMusic.Tribal << "\n"
			  << "Tribal_2: " << playerMusic.Tribal_2 << "\n"
			  << "Tribal_Background: " << playerMusic.Tribal_Background << "\n"
			  << "Trinity: " << playerMusic.Trinity << "\n"
			  << "Troll_Shuffle: " << playerMusic.Troll_Shuffle << "\n"
			  << "Trouble_Brewing: " << playerMusic.Trouble_Brewing << "\n"
			  << "Troubled: " << playerMusic.Troubled << "\n"
			  << "Troubled_Waters: " << playerMusic.Troubled_Waters << "\n"
			  << "Twilight: " << playerMusic.Twilight << "\n"
			  << "TzHaar: " << playerMusic.TzHaar << "\n"
			  << "Undead_Dungeon: " << playerMusic.Undead_Dungeon << "\n"
			  << "Undercurrent: " << playerMusic.Undercurrent << "\n"
			  << "Underground: " << playerMusic.Underground << "\n"
			  << "Underground_Pass: " << playerMusic.Underground_Pass << "\n"
			  << "Understanding: " << playerMusic.Understanding << "\n"
			  << "Unknown_Land: " << playerMusic.Unknown_Land << "\n"
			  << "Untouchable: " << playerMusic.Untouchable << "\n"
			  << "Upcoming: " << playerMusic.Upcoming << "\n"
			  << "Upir_Likhyi: " << playerMusic.Upir_Likhyi << "\n"
			  << "Upper_Depths: " << playerMusic.Upper_Depths << "\n"
			  << "Vampyre_Assault: " << playerMusic.Vampyre_Assault << "\n"
			  << "Vanescula: " << playerMusic.Vanescula << "\n"
			  << "Venture: " << playerMusic.Venture << "\n"
			  << "Venture_2: " << playerMusic.Venture_2 << "\n"
			  << "Victory_is_Mine: " << playerMusic.Victory_is_Mine << "\n"
			  << "Village: " << playerMusic.Village << "\n"
			  << "Vision: " << playerMusic.Vision << "\n"
			  << "Volcanic_Vikings: " << playerMusic.Volcanic_Vikings << "\n"
			  << "Voodoo_Cult: " << playerMusic.Voodoo_Cult << "\n"
			  << "Voyage: " << playerMusic.Voyage << "\n"
			  << "The_Waiting_Game: " << playerMusic.The_Waiting_Game << "\n"
			  << "Waking_Dream: " << playerMusic.Waking_Dream << "\n"
			  << "A_Walk_in_the_Woods: " << playerMusic.A_Walk_in_the_Woods << "\n"
			  << "The_Walking_Dead: " << playerMusic.The_Walking_Dead << "\n"
			  << "Wander: " << playerMusic.Wander << "\n"
			  << "Warpath: " << playerMusic.Warpath << "\n"
			  << "Warrior: " << playerMusic.Warrior << "\n"
			  << "Warriors_Guild: " << playerMusic.Warriors_Guild << "\n"
			  << "Watch_Your_Step: " << playerMusic.Watch_Your_Step << "\n"
			  << "Waterfall: " << playerMusic.Waterfall << "\n"
			  << "Waterlogged: " << playerMusic.Waterlogged << "\n"
			  << "Way_of_the_Enchanter: " << playerMusic.Way_of_the_Enchanter << "\n"
			  << "Way_of_the_Wyrm: " << playerMusic.Way_of_the_Wyrm << "\n"
			  << "Wayward: " << playerMusic.Wayward << "\n"
			  << "We_are_the_Fairies: " << playerMusic.We_are_the_Fairies << "\n"
			  << "Welcome_to_my_Nightmare: " << playerMusic.Welcome_to_my_Nightmare << "\n"
			  << "Welcome_to_the_Theatre: " << playerMusic.Welcome_to_the_Theatre << "\n"
			  << "Well_Hallowed_Air: " << playerMusic.Well_Hallowed_Air << "\n"
			  << "Well_of_Voyage: " << playerMusic.Well_of_Voyage << "\n"
			  << "What_Happens_Below: " << playerMusic.What_Happens_Below << "\n"
			  << "Where_Eagles_Lair: " << playerMusic.Where_Eagles_Lair << "\n"
			  << "Wild_Isle: " << playerMusic.Wild_Isle << "\n"
			  << "Wild_Side: " << playerMusic.Wild_Side << "\n"
			  << "Wilderness: " << playerMusic.Wilderness << "\n"
			  << "Wilderness_2: " << playerMusic.Wilderness_2 << "\n"
			  << "Wilderness_3: " << playerMusic.Wilderness_3 << "\n"
			  << "Wildwood: " << playerMusic.Wildwood << "\n"
			  << "Winter_Funfair: " << playerMusic.Winter_Funfair << "\n"
			  << "Witching: " << playerMusic.Witching << "\n"
			  << "Woe_of_the_Wyvern: " << playerMusic.Woe_of_the_Wyvern << "\n"
			  << "Wonder: " << playerMusic.Wonder << "\n"
			  << "Wonderous: " << playerMusic.Wonderous << "\n"
			  << "Woodland: " << playerMusic.Woodland << "\n"
			  << "Work_Work_Work: " << playerMusic.Work_Work_Work << "\n"
			  << "Workshop: " << playerMusic.Workshop << "\n"
			  << "Wrath_and_Ruin: " << playerMusic.Wrath_and_Ruin << "\n"
			  << "Xenophobe: " << playerMusic.Xenophobe << "\n"
			  << "Yesteryear: " << playerMusic.Yesteryear << "\n"
			  << "You_Have_My_Attention: " << playerMusic.You_Have_My_Attention << "\n"
			  << "Zamorak_Zoo: " << playerMusic.Zamorak_Zoo << "\n"
			  << "Zaniks_Theme: " << playerMusic.Zaniks_Theme << "\n"
			  << "Zaros_Zeitgeist: " << playerMusic.Zaros_Zeitgeist << "\n"
			  << "Zealot: " << playerMusic.Zealot << "\n"
			  << "Zogre_Dance: " << playerMusic.Zogre_Dance << "\n"
			  << "Zombiism: " << playerMusic.Zombiism << "\n"
			  << "Abyssal_Orphan: " << playerPets.Abyssal_Orphan << "\n"
			  << "Baby_Mole: " << playerPets.Baby_Mole << "\n"
			  << "Callisto_Cub: " << playerPets.Callisto_Cub << "\n"
			  << "Hellpuppy: " << playerPets.Hellpuppy << "\n"
			  << "Ikkle_Hydra: " << playerPets.Ikkle_Hydra << "\n"
			  << "Jal_Nib_Rek: " << playerPets.Jal_Nib_Rek << "\n"
			  << "Kalphite_Princess: " << playerPets.Kalphite_Princess << "\n"
			  << "Lil_Zik: " << playerPets.Lil_Zik << "\n"
			  << "Little_Nightmare: " << playerPets.Little_Nightmare << "\n"
			  << "Nexling: " << playerPets.Nexling << "\n"
			  << "Noon: " << playerPets.Noon << "\n"
			  << "Olmet: " << playerPets.Olmet << "\n"
			  << "Pet_Chaos_Elemental: " << playerPets.Pet_Chaos_Elemental << "\n"
			  << "Pet_Dagannoth_Prime: " << playerPets.Pet_Dagannoth_Prime << "\n"
			  << "Pet_Dagannoth_Rex: " << playerPets.Pet_Dagannoth_Rex << "\n"
			  << "Pet_Dagannoth_Supreme: " << playerPets.Pet_Dagannoth_Supreme << "\n"
			  << "Pet_Dark_Core: " << playerPets.Pet_Dark_Core << "\n"
			  << "Pet_General_Graardor: " << playerPets.Pet_General_Graardor << "\n"
			  << "Pet_Kirl_Tsutsaroth: " << playerPets.Pet_Kirl_Tsutsaroth << "\n"
			  << "Pet_Kraken: " << playerPets.Pet_Kraken << "\n"
			  << "Pet_Kreeaara: " << playerPets.Pet_Kreeaara << "\n"
			  << "Pet_Smoke_Devil: " << playerPets.Pet_Smoke_Devil << "\n"
			  << "Pet_Snakeling: " << playerPets.Pet_Snakeling << "\n"
			  << "Pet_Zilyana: " << playerPets.Pet_Zilyana << "\n"
			  << "Prince_Black_Dragon: " << playerPets.Prince_Black_Dragon << "\n"
			  << "Scorpias_Offspring: " << playerPets.Scorpias_Offspring << "\n"
			  << "Skotos: " << playerPets.Skotos << "\n"
			  << "Sraracha: " << playerPets.Sraracha << "\n"
			  << "Tzrek_Jad: " << playerPets.Tzrek_Jad << "\n"
			  << "Venenatis_Spiderling: " << playerPets.Venenatis_Spiderling << "\n"
			  << "Vetion_Jr: " << playerPets.Vetion_Jr << "\n"
			  << "Vorki: " << playerPets.Vorki << "\n"
			  << "Baby_Chinchompa: " << playerPets.Baby_Chinchompa << "\n"
			  << "Beaver: " << playerPets.Beaver << "\n"
			  << "Giant_Squirrel: " << playerPets.Giant_Squirrel << "\n"
			  << "Heron: " << playerPets.Heron << "\n"
			  << "Rift_Guardian: " << playerPets.Rift_Guardian << "\n"
			  << "Rocky: " << playerPets.Rocky << "\n"
			  << "Tangleroot: " << playerPets.Tangleroot << "\n"
			  << "Bloodhound: " << playerPets.Bloodhound << "\n"
			  << "Chompy_Chick: " << playerPets.Chompy_Chick << "\n"
			  << "Herbi: " << playerPets.Herbi << "\n"
			  << "Lil_Creator: " << playerPets.Lil_Creator << "\n"
			  << "Pet_Penance_Queen: " << playerPets.Pet_Penance_Queen << "\n"
			  << "Phoenix: " << playerPets.Phoenix << "\n"
			  << "Tiny_Tempor: " << playerPets.Tiny_Tempor << "\n"
			  << "Youngllef: " << playerPets.Youngllef << "\n"
			  << "Smolcano: " << playerPets.Smolcano << "\n"
			  << "Abyssal_Protector: " << playerPets.Abyssal_Protector << "\n"
			  << std::endl;
}