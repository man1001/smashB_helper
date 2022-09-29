#include <stdio.h>
#include <stdlib.h>

int main() {

int max;
int zaeler = 0;
char eingabe1[255];
char eingabe2[255];
int eingabe3 = 0;
int eingabe4 = 0;
char ja[255] = "Ja";
char supermario[255] = "SuperMario";
char tlozelda[255] = "TheLegendOfZelda";
char fireE[255] = "FireEmblem";
char starFox[255] = "StarFox";
char castle[255] = "Castlevania";
char pokeM[255] = "Pokemon";
char kirb[255] = "Kirby";
char earth[255] = "EarthBound";
char primeMetroid[255] = "Metroid";
char kidI[255] = "KidIcarus";
char street[255] = "StreetFighter";
char aCrossing[255] = "AnimalCrossing";
char dk[255] = "DonkeyKong";
char bliat[255] = "Egal";
int mario = 1;
int dong = 1;
int link = 1;
int samus = 1;
int darkSamus = 1;
int yoshi = 1;
int kirby = 1;
int fox = 1;
int pikachu = 1;
int luigi = 1;
int ness = 1;
int captainFalcon = 1;
int pummeluff = 1;
int peach = 1;
int daisy = 1;
int bowser = 1;
int iceClimbers = 1;
int sheik = 1;
int zelda = 1;
int drMario = 1;
int pichu = 1;
int falco = 1;
int marth = 1;
int lucina = 1;
int youngLink = 1;
int ganondorf = 1;
int mewtu = 1;
int roy = 1;
int chrom = 1;
int mrGamenWatch = 1;
int metaKnight = 1;
int pit = 1;
int darkPit = 1;
int zeroSuitSamus = 1;
int wario = 1;
int snake = 1;
int ike = 1;
int pokemonTrainer = 1;
int diddyKong = 1;
int lucas = 1;
int sonic = 1;
int kingDedede = 1;
int olimar = 1;
int lucario = 1;
int rob = 1;
int toonLink = 1;
int wolf = 1;
int bewohner = 1;
int megaMan = 1;
int wiiFitTrainer = 1;
int rosalina = 1;
int littleMac = 1;
int quajutsu = 1;
int palutena = 1;
int pacMan = 1;
int daraen = 1;
int shulk = 1;
int bowserJr = 1;
int duckHunt = 1;
int ryu = 1;
int ken = 1;
int cloud = 1;
int corrin = 1;
int bayonetta = 1;
int inkling = 1;
int ridley = 1;
int simon = 1;
int richter = 1;
int kingKRool = 1;
int melinda = 1;
int fuegro = 1;
int piranhaPlant = 1;

printf("Bevorzugen sie ein bestimmtes Franchise (Ja/Nein)? \n");
gets(eingabe1);
zaeler = zaeler + 1;

if (strcmp(eingabe1,ja)==0) {
	printf("Aus welchem Franchise soll ihr Charakter sein? (SuperMario; TheLegendOfZelda; FireEmblem; StarFox; Castlevania; Metroid; Pokemon; Kirby, EarthBound; StreetFighter; KidIcarus; AnimalCrossing; DonkeyKong; Egal) \n");
	gets(eingabe2);
	zaeler = zaeler + 1;
	}
if (strcmp(eingabe2,supermario)==0) {
	printf("Its a me \n");
	eingabe3 = eingabe3 + 1;
}
if (strcmp(eingabe2,tlozelda)==0) {
	printf("zeldaasHell \n");
	eingabe3 = eingabe3 + 2;
}

if (strcmp(eingabe2,fireE)==0) {
	printf("FireEmblem is Dope \n");
	eingabe3 = eingabe3 + 3;
}

if (strcmp(eingabe2,starFox)==0) {
	printf("FoxMcCroud \n");
	eingabe3 = eingabe3 + 4;
}

if (strcmp(eingabe2,castle)==0) {
	printf("You dont belong to this world, Monster! \n");
	eingabe3 = eingabe3 + 5;
}

if (strcmp(eingabe2,pokeM)==0) {
	printf("gotta catch em all! \n");
	eingabe3 = eingabe3 + 6;
}

if (strcmp(eingabe2,kirb)==0) {
	printf("itsKirby \n");
	eingabe3 = eingabe3 + 7;
}

if (strcmp(eingabe2,earth)==0) {
	printf("PK-Fire!!!!! \n");
	eingabe3 = eingabe3 + 8;
}

if (strcmp(eingabe2,primeMetroid)==0) {
	printf("Metroid is live \n");
	eingabe3 = eingabe3 + 9;
}

if (strcmp(eingabe2,kidI)==0) {
	printf("KidIkarussss \n");
	eingabe3 = eingabe3 + 10;
}

if (strcmp(eingabe2,street)==0) {
	printf("Hadouken oder wie man das schreibt \n");
	eingabe3 = eingabe3 + 11;
}

if (strcmp(eingabe2,aCrossing)==0) {
	printf("Melind is best Melinda \n");
	eingabe3 = eingabe3 + 12;
}

if (strcmp(eingabe2,dk)==0) {
	printf("DK!!! Donkey Kong is here! \n");
	eingabe3 = eingabe3 + 13;
}

if (strcmp(eingabe2,bliat)==0) {
	printf("say wuuuuuut!? \n");
	eingabe3 = eingabe3 + 14;
}

	if (eingabe3 == 1) {
	
		mario = mario + 5;
		yoshi = yoshi + 5;
		luigi = luigi + 5;
		peach = peach + 5;
		daisy = daisy + 5;
		bowser = bowser + 5;
		drMario = drMario + 5;
		wario = wario + 5;
		rosalina = rosalina + 5;
		bowserJr = bowserJr + 5;
		piranhaPlant = piranhaPlant + 5;
		zaeler = zaeler + 1;
}
	if (eingabe3 == 2) {	

		link = link + 5;
		zelda = zelda + 5;
		sheik = sheik + 5;
		ganondorf = ganondorf + 5;
		youngLink = youngLink + 5;
		toonLink = toonLink + 5;
		zaeler = zaeler + 1;
}
	if (eingabe3 == 3) {	

		marth = marth + 5;
		roy = roy + 5;
		chrom = chrom + 5;
		ike = ike + 5;
		daraen = daraen + 5;
		corrin = corrin + 5;
		zaeler = zaeler + 1;
}
	if (eingabe3 == 4) {	
	
		fox = fox + 5;
		falco = falco + 5;
		wolf = wolf + 5;
		zaeler = zaeler + 1;
}
	if (eingabe3 == 5) {	

		simon = simon + 5;
		richter = richter + 5;
		zaeler = zaeler + 1;
}
	if (eingabe3 == 6) {	

		pikachu = pikachu + 5;
		pummeluff = pummeluff + 5;
		pichu = pichu + 5;
		mewtu = mewtu + 5;
		pokemonTrainer = pokemonTrainer + 5;
		lucario = lucario + 5;
		quajutsu = quajutsu + 5;
		fuegro = fuegro + 5;
		zaeler = zaeler + 1;
}
	if (eingabe3 == 7) {	

		kirby = kirby + 5;
		metaKnight = metaKnight + 5;
		kingDedede = kingDedede + 5;
		zaeler = zaeler + 1;
}
	if (eingabe3 == 8) {	
		ness = ness + 5;
		lucas = lucas + 5;
		zaeler = zaeler + 1;
}
	if (eingabe3 == 9) {	
	
		samus = samus + 5;
		darkSamus = darkSamus + 5;
		zeroSuitSamus = zeroSuitSamus +5;
		ridley = ridley + 5;
		zaeler = zaeler + 1;
}
	if (eingabe3 == 10) {	

		pit = pit + 5;
		darkPit = darkPit + 5;
		palutena = palutena + 5;
		zaeler = zaeler + 1;
}
	if (eingabe3 == 11) {	

		ken = ken + 5;
		ryu = ryu + 5;
}
	if (eingabe3 == 12) {	

		bewohner = bewohner + 5;
		melinda = melinda + 5;
		zaeler = zaeler + 1;
}
	if (eingabe3 == 13) {	
		dong = dong + 5;
		diddyKong = diddyKong + 5;
		kingKRool = kingKRool + 5;
		zaeler = zaeler + 1;
}
	if (eingabe3 == 14){	
		printf("xyecoc\n");
		zaeler = zaeler + 1;
		
		}
printf("Bewerten sie die folgenden Aussagen nach ihren Wahrheitsgehalt auf einer Skala von -5 (trifft überhaupt nicht zu) bis 5 (trifft voll und ganz zu).)\n");
//Frage Spike	
printf("Wer mich ausserhalb der Stage trifft, hat schon verloren!(-5 -4 -3 -2 -1 0 1 2 3 4 5) \n");
scanf("%d", &eingabe4);

mario = mario + eingabe4;
 dong = dong + eingabe4;
 link = link + eingabe4;
samus = samus + eingabe4;
darkSamus = darkSamus + eingabe4;
kirby = kirby + eingabe4;
pikachu = pikachu + eingabe4;
yoshi = yoshi + eingabe4;
luigi = luigi + eingabe4;
ness = ness + eingabe4;
captainFalcon = captainFalcon + eingabe4;
bowser = bowser + eingabe4;
sheik = sheik + eingabe4;
zelda =  zelda + eingabe4;
drMario = drMario + eingabe4;
pichu = pichu + eingabe4;
falco = falco + eingabe4;
marth = marth + eingabe4;
lucina = lucina + eingabe4;
ganondorf = ganondorf + eingabe4;
 mewtu = mewtu + eingabe4;
 roy = roy + eingabe4;
 chrom = chrom + eingabe4;
 mrGamenWatch = mrGamenWatch + eingabe4;
 pit = pit + eingabe4;
 darkPit = darkPit + eingabe4;
 zeroSuitSamus = zeroSuitSamus + eingabe4;
 snake = snake + eingabe4;
 ike = ike + eingabe4;
 pokemonTrainer = pokemonTrainer + eingabe4;
 diddyKong = diddyKong + eingabe4;
 lucas = lucas +  eingabe4;
 sonic = sonic + eingabe4;
 kingDedede = kingDedede + eingabe4;
 olimar = olimar + eingabe4;
 rob = rob + eingabe4;
 toonLink = toonLink + eingabe4;
 wolf = wolf + eingabe4;
 bewohner = bewohner + eingabe4;
 megaMan = megaMan + eingabe4;
 wiiFitTrainer = wiiFitTrainer + eingabe4;
 littleMac = littleMac + eingabe4;
 quajutsu = quajutsu + eingabe4;
 palutena = palutena + eingabe4;
 daraen = daraen + eingabe4;
 shulk = shulk + eingabe4;
 duckHunt = duckHunt + eingabe4;
 ryu = ryu + eingabe4;
 ken = ken + eingabe4;
 cloud = cloud + eingabe4;
 corrin = corrin + eingabe4;
 bayonetta = bayonetta + eingabe4;
 inkling = inkling + eingabe4;
 ridley = ridley + eingabe4;
 simon = simon + eingabe4;
 richter = richter + eingabe4;
 kingKRool = kingKRool + eingabe4;
 melinda = melinda  + eingabe4;
 fuegro = fuegro + eingabe4;
 piranhaPlant = piranhaPlant + eingabe4;

//Frage Schnelligkeit

printf("Ich bin schnell wie der Blitz(-5 -4 -3 -2 -1 0 1 2 3 4 5)\n");
scanf("%d", &eingabe4);

 	fox = fox + eingabe4;
 	pikachu = pikachu + eingabe4;
 	captainFalcon = captainFalcon + eingabe4;
 	sheik = sheik + eingabe4;
 	pichu = pichu + eingabe4;
 	marth = marth + eingabe4;
	lucina = lucina + eingabe4;
	roy = roy + eingabe4;
 	chrom = chrom + eingabe4;
 	metaKnight = metaKnight + eingabe4;
 	zeroSuitSamus = zeroSuitSamus + eingabe4;
 	pokemonTrainer = pokemonTrainer + eingabe4;
 	diddyKong = diddyKong + eingabe4;
 	sonic = sonic + eingabe4;
 	toonLink = toonLink + eingabe4;
 	littleMac = littleMac + eingabe4;
 	quajutsu = quajutsu + eingabe4;
 	shulk = shulk + eingabe4;
 	inkling = inkling + eingabe4;
 	
 	zaeler = zaeler + 1;
 	
//frage Heavy
	printf("Ich halte viel aus! (-5 -4 -3 -2 -1 0 1 2 3 4 5)\n");
	scanf("%d", &eingabe4);
	
	dong = dong + eingabe4;
	bowser = bowser + eingabe4;
	ganondorf = ganondorf + eingabe4;
	kingDedede = kingDedede + eingabe4;
	kingKRool = kingKRool + eingabe4;
	fuegro = fuegro + eingabe4;
 	
//Frage Konter
 	printf("Ich sagte in der Schule immer 'Hoer auf dich zu schlagen'! (-5 -4 -3 -2 -1 0 1 2 3 4 5) \n");
	scanf("%d", &eingabe4);
	
	mario = mario + eingabe4;
	fox = fox + eingabe4;
	zelda =  zelda + eingabe4;
	drMario = drMario + eingabe4;
	falco = falco + eingabe4;
	marth = marth + eingabe4;
	lucina = lucina + eingabe4;
	roy = roy + eingabe4;
 	chrom = chrom + eingabe4;
 	mrGamenWatch = mrGamenWatch + eingabe4;
	pit = pit + eingabe4;
 	darkPit = darkPit + eingabe4;
	ike = ike + eingabe4;	
	lucario = lucario + eingabe4;
 	rob = rob + eingabe4;
 	wolf = wolf + eingabe4;
 	bewohner = bewohner + eingabe4;
 	quajutsu = quajutsu + eingabe4;
 	shulk = shulk + eingabe4;
 	 corrin = corrin + eingabe4;
	 bayonetta = bayonetta + eingabe4;
	
	zaeler = zaeler + 1;

//Frage Heldentum
	printf("Ich bin der Retter der Welt! (-5 -4 -3 -2 -1 0 1 2 3 4 5)\n");
	scanf("%d", &eingabe4);
	mario = mario + eingabe4;
	dong = dong + eingabe4;
	link = link + eingabe4;
	samus = samus + eingabe4;
	yoshi = yoshi + eingabe4;
	kirby = kirby + eingabe4;
	fox = fox + eingabe4;
	luigi = luigi + eingabe4;
	ness = ness + eingabe4;
	captainFalcon = captainFalcon + eingabe4;
	peach = peach + eingabe4;
	falco = falco + eingabe4;
	marth = marth + eingabe4;
	lucina = lucina + eingabe4;
	youngLink = youngLink + eingabe4;
	roy = roy + eingabe4;
	chrom = chrom + eingabe4;
	mrGamenWatch = mrGamenWatch + eingabe4;
	pit = pit + eingabe4;
	zeroSuitSamus = zeroSuitSamus + eingabe4;
	snake = snake + eingabe4;
	ike = ike + eingabe4;
	diddyKong = diddyKong + eingabe4;
	lucas = lucas + eingabe4;
	sonic = sonic + eingabe4;
	toonLink = toonLink + eingabe4;
	megaMan = megaMan + eingabe4;
	palutena = palutena + eingabe4;
	daraen = daraen + eingabe4;
	shulk = shulk + eingabe4;
	cloud = cloud + eingabe4;
	corrin = corrin + eingabe4;
	bayonetta = bayonetta + eingabe4;
	simon = simon + eingabe4;
	richter = richter + eingabe4;
	
	
//Frage Boeshaftigkeit
	printf("Ich bin der Meister des Boesen (-5 -4 -3 -2 -1 0 1 2 3 4 5) \n");
	scanf("%d", &eingabe4);
	
	kingDedede = kingDedede + eingabe4;
	wolf = wolf + eingabe4;
	bowserJr = bowserJr + eingabe4;
	ridley = ridley + eingabe4;
	kingKRool = kingKRool + eingabe4;
	piranhaPlant = piranhaPlant + eingabe4;
	darkSamus = darkSamus + eingabe4;
	bowser = bowser + eingabe4;
	metaKnight = metaKnight + eingabe4;
	ganondorf = ganondorf + eingabe4;
	darkPit = darkPit + eingabe4;
	wario = wario + eingabe4;
	zaeler = zaeler + 1;

//Frage Orginal
	
	printf("Ich bevorzuge das Orginal! (-5 -4 -3 -2 -1 0 1 2 3 4 5)\n");
	scanf("%d", &eingabe4);
	mario = mario + eingabe4;
 dong = dong + eingabe4;
 link = link + eingabe4;
samus = samus + eingabe4;
kirby = kirby + eingabe4;
fox = fox + eingabe4;
yoshi = yoshi + eingabe4;
pikachu = pikachu + eingabe4;
pummeluff = pummeluff + eingabe4;
luigi = luigi + eingabe4;
peach = peach + eingabe4;
ness = ness + eingabe4;
captainFalcon = captainFalcon + eingabe4;
bowser = bowser + eingabe4;
sheik = sheik + eingabe4;
zelda =  zelda + eingabe4;
iceClimbers = iceClimbers + eingabe4;
falco = falco + eingabe4;
marth = marth + eingabe4;
ganondorf = ganondorf + eingabe4;
 mewtu = mewtu + eingabe4;
 roy = roy + eingabe4;
 chrom = chrom + eingabe4;
 mrGamenWatch = mrGamenWatch + eingabe4;
 pit = pit + eingabe4;
 zeroSuitSamus = zeroSuitSamus + eingabe4;
 snake = snake + eingabe4;
 metaKnight = metaKnight + eingabe4;
 ike = ike + eingabe4;
 pokemonTrainer = pokemonTrainer + eingabe4;
 wario = wario + eingabe4;
 diddyKong = diddyKong + eingabe4;
 sonic = sonic + eingabe4;
 kingDedede = kingDedede + eingabe4;
 olimar = olimar + eingabe4;
 lucario = lucario + eingabe4;
 rob = rob + eingabe4;
 wolf = wolf + eingabe4;
 bewohner = bewohner + eingabe4;
 megaMan = megaMan + eingabe4;
 wiiFitTrainer = wiiFitTrainer + eingabe4;
 rosalina = rosalina + eingabe4;
 littleMac = littleMac + eingabe4;
 quajutsu = quajutsu + eingabe4;
 palutena = palutena + eingabe4;
 pacMan = pacMan + eingabe4;
 daraen = daraen + eingabe4;
 bowserJr = bowserJr + eingabe4;
 shulk = shulk + eingabe4;
 duckHunt = duckHunt + eingabe4;
 ryu = ryu + eingabe4;
 cloud = cloud + eingabe4;
 corrin = corrin + eingabe4;
 bayonetta = bayonetta + eingabe4;
 inkling = inkling + eingabe4;
 ridley = ridley + eingabe4;
 simon = simon + eingabe4;
 kingKRool = kingKRool + eingabe4;
 melinda = melinda  + eingabe4;
 fuegro = fuegro + eingabe4;
 piranhaPlant = piranhaPlant + eingabe4;

//Frage Echo-Fighter
	printf("Ich bevorzuge das Remake! (-5 -4 -3 -2 -1 0 1 2 3 4 5) \n");
	scanf("%d", &eingabe4);
	
	darkSamus = darkSamus +eingabe4;
	daisy = daisy + eingabe4;
	drMario = drMario + eingabe4;
	pichu = pichu + eingabe4;
	lucina = lucina + eingabe4;
	youngLink = youngLink + eingabe4;
	chrom = chrom + eingabe4;
	darkPit = darkPit + eingabe4;
	lucas = lucas +  eingabe4;
	toonLink = toonLink + eingabe4;
	ken = ken + eingabe4;
	richter = richter + eingabe4;
	
	
//Frage Fernkampf
	printf("Ich kaempfe aus der Ferne! (-5 -4 -3 -2 -1 0 1 2 3 4 5) \n");
	scanf("%d", &eingabe4);
	
mario = mario + eingabe4;
link = link + eingabe4;
samus = samus +eingabe4;
darkSamus = darkSamus +eingabe4;
yoshi = yoshi + eingabe4;
kirby = kirby + eingabe4;
fox = fox + eingabe4;
pikachu = pikachu + eingabe4;
luigi = luigi + eingabe4;
ness = ness + eingabe4;
peach = peach + eingabe4;
daisy = daisy + eingabe4;
bowser = bowser + eingabe4;
iceClimbers = iceClimbers + eingabe4;
sheik = sheik + eingabe4;
zelda =  zelda + eingabe4;
drMario = drMario + eingabe4;
pichu = pichu + eingabe4;
falco = falco + eingabe4;
youngLink = youngLink + eingabe4;
 mewtu = mewtu + eingabe4;
 mrGamenWatch = mrGamenWatch + eingabe4;
 pit = pit + eingabe4;
 darkPit = darkPit + eingabe4;
 zeroSuitSamus = zeroSuitSamus + eingabe4;
 wario = wario + eingabe4;
 snake = snake + eingabe4;
 pokemonTrainer = pokemonTrainer + eingabe4;
 diddyKong = diddyKong + eingabe4;
 lucas = lucas +  eingabe4;
 kingDedede = kingDedede + eingabe4;
 olimar = olimar + eingabe4;
 lucario = lucario + eingabe4;
 rob = rob + eingabe4;
 toonLink = toonLink + eingabe4;
 wolf = wolf + eingabe4;
 bewohner = bewohner + eingabe4;
 megaMan = megaMan + eingabe4;
 wiiFitTrainer = wiiFitTrainer + eingabe4;
 rosalina = rosalina + eingabe4;
 quajutsu = quajutsu + eingabe4;
 palutena = palutena + eingabe4;
 pacMan = pacMan + eingabe4;
 daraen = daraen + eingabe4;
 bowserJr = bowserJr + eingabe4;
 duckHunt = duckHunt + eingabe4;
 ryu = ryu + eingabe4;
 ken = ken + eingabe4;
 cloud = cloud + eingabe4;
 corrin = corrin + eingabe4;
 bayonetta = bayonetta + eingabe4;
 inkling = inkling + eingabe4;
 ridley = ridley + eingabe4;
 simon = simon + eingabe4;
 richter = richter + eingabe4;
 kingKRool = kingKRool + eingabe4;
 melinda = melinda  + eingabe4;
 piranhaPlant = piranhaPlant + eingabe4;
 
 //Frage Elementar-Attacke
 
 	printf("Ich bin der Herr der Elemente! (-5 -4 -3 -2 -1 0 1 2 3 4 5) \n");
	scanf("%d", &eingabe4);
	
mario = mario + eingabe4;
link = link + eingabe4;
samus = samus + eingabe4;
darkSamus = darkSamus + eingabe4;
kirby = kirby + eingabe4;
fox = fox + eingabe4;
pikachu = pikachu + eingabe4;
luigi = luigi + eingabe4;
ness = ness + eingabe4;
captainFalcon = captainFalcon + eingabe4;
bowser = bowser + eingabe4;
iceClimbers = iceClimbers + eingabe4;
sheik = sheik + eingabe4;
zelda =  zelda + eingabe4;
drMario = drMario + eingabe4;
pichu = pichu + eingabe4;
falco = falco + eingabe4;
youngLink = youngLink + eingabe4;
ganondorf = ganondorf + eingabe4;
 mewtu = mewtu + eingabe4;
 roy = roy + eingabe4;
 mrGamenWatch = mrGamenWatch + eingabe4;
 darkPit = darkPit + eingabe4;
 zeroSuitSamus = zeroSuitSamus + eingabe4;
 snake = snake + eingabe4;
 ike = ike + eingabe4;
 pokemonTrainer = pokemonTrainer + eingabe4;
 diddyKong = diddyKong + eingabe4;
 lucas = lucas +  eingabe4;
 olimar = olimar + eingabe4;
 lucario = lucario + eingabe4;
 rob = rob + eingabe4;
 toonLink = toonLink + eingabe4;
 bewohner = bewohner + eingabe4;
 megaMan = megaMan + eingabe4;
 quajutsu = quajutsu + eingabe4;
 daraen = daraen + eingabe4;
 bowserJr = bowserJr + eingabe4;
 cloud = cloud + eingabe4;
 corrin = corrin + eingabe4;
 bayonetta = bayonetta + eingabe4;
 inkling = inkling + eingabe4;
 ridley = ridley + eingabe4;
 simon = simon + eingabe4;
 richter = richter + eingabe4;
 melinda = melinda  + eingabe4;
 fuegro = fuegro + eingabe4;
 piranhaPlant = piranhaPlant + eingabe4;
 
 //Frage Schwertkaempfer
 
  	printf("Ich bin Eins mit meiner Klinge! (-5 -4 -3 -2 -1 0 1 2 3 4 5) \n");
	scanf("%d", &eingabe4);
	
link = link + eingabe4;
kirby = kirby + eingabe4;
marth = marth + eingabe4;
lucina = lucina + eingabe4;
youngLink = youngLink + eingabe4;
ganondorf = ganondorf + eingabe4;
roy = roy + eingabe4;
chrom = chrom + eingabe4;
metaKnight = metaKnight + eingabe4;
ike = ike + eingabe4;
toonLink = toonLink + eingabe4;
daraen = daraen + eingabe4;
shulk = shulk + eingabe4;
cloud = cloud + eingabe4;
corrin = corrin + eingabe4;
 
max = (mario > dong? mario : dong);  
max = (link > samus? (link > max? link : max) : (samus > max? samus : max));
max = (darkSamus > yoshi? (darkSamus > max? darkSamus : max) : (yoshi > max? yoshi : max));
max = (kirby > fox? (kirby > max? kirby : max) : (fox > max? fox : max));
max = (pikachu > luigi? (pikachu > max? pikachu : max) : (luigi > max? luigi : max));
max = (ness > captainFalcon? (ness > max? ness : max) : (captainFalcon > max? captainFalcon : max));
max = (pummeluff > peach? (pummeluff > max? pummeluff : max) : (peach > max? peach : max));
max = (daisy > bowser? (daisy > max? daisy: max) : (bowser > max? bowser : max));
max = (iceClimbers > sheik? (iceClimbers > max? iceClimbers : max) : (sheik > max? sheik : max));
max = (zelda > drMario? (zelda > max? zelda : max) : (drMario > max? drMario : max));
max = (pichu > falco? (pichu > max? pichu : max) : (falco > max? falco : max));
max = (marth > lucina? (marth > max? marth : max) : (lucina > max? lucina : max));
max = (youngLink > ganondorf? (youngLink > max? youngLink : max) : (ganondorf > max? ganondorf : max));
max = (mewtu > roy? (mewtu > max? mewtu : max) : (roy > max? roy : max));
max = (chrom > mrGamenWatch? (chrom > max? chrom : max) : (mrGamenWatch > max? mrGamenWatch : max));
max = (metaKnight > pit? (metaKnight > max? metaKnight : max) : (pit > max? pit : max));
max = (darkPit > zeroSuitSamus? (darkPit > max? darkPit : max) : (zeroSuitSamus > max? zeroSuitSamus : max));
max = (wario > snake? (wario > max? wario : max) : (snake > max? snake : max));
max = (ike > pokemonTrainer? (ike > max? ike : max) : (pokemonTrainer > max? pokemonTrainer : max));
max = (diddyKong > lucas? (diddyKong > max? diddyKong : max) : (lucas > max? lucas : max));
max = (sonic > kingDedede? (sonic > max? sonic : max) : (kingDedede > max? kingDedede : max));
max = (olimar > lucario? (olimar > max? olimar : max) : (lucario > max? lucario : max));
max = (rob > toonLink? (rob > max? rob : max) : (toonLink > max? toonLink : max));
max = (wolf > bewohner? (wolf > max? wolf : max) : (bewohner > max? bewohner : max));
max = (megaMan > wiiFitTrainer? (megaMan > max? megaMan : max) : (wiiFitTrainer > max? wiiFitTrainer : max));
max = (rosalina > littleMac? (rosalina > max? rosalina : max) : (littleMac > max? littleMac : max));
max = (quajutsu > palutena? (quajutsu > max? quajutsu : max) : (palutena > max? palutena : max));
max = (pacMan > daraen? (pacMan > max? pacMan : max) : (daraen > max? daraen : max));
max = (shulk > bowserJr? (shulk > max? shulk : max) : (bowserJr > max? bowserJr : max));
max = (duckHunt > ryu? (duckHunt > max? duckHunt : max) : (ryu > max? ryu : max));
max = (ken > cloud? (ken > max? ken : max) : (cloud > max? cloud : max));
max = (corrin > bayonetta? (corrin > max? corrin : max) : (bayonetta > max? bayonetta : max));
max = (inkling > ridley? (inkling > max? inkling : max) : (ridley > max? ridley : max));
max = (simon > richter? (simon > max? simon : max) : (richter > max? richter : max));
max = (kingKRool > melinda? (kingKRool > max? kingKRool : max) : (melinda > max? melinda : max));
max = (fuegro > piranhaPlant? (fuegro > max? fuegro : max) : (piranhaPlant > max? piranhaPlant : max));

if (mario == max) {
	printf("Ihr perfekter Main ist: Mario\n!");
}

if (dong == max) {
	printf("Ihr perfekter Main ist: Donkey Kong\n!");
}

if (link == max) {
	printf("Ihr perfekter Main ist: Link!\n");
}

if (samus == max) {
	printf("Ihr perfekter Main ist: Samus!\n");
}

if (darkSamus == max) {
	printf("Ihr perfekter Main ist: Dark Samus!\n");
}

if (yoshi == max) {
	printf("Ihr perfekter Main ist: Yoshi!\n");
}

if (kirby == max) {
	printf("Ihr perfekter Main ist: Kirby!\n");
}

if (fox == max) {
	printf("Ihr perfekter Main ist: Fox!\n");
}

if (pikachu == max) {
	printf("Ihr perfekter Main ist: Pikachu!\n");
}

if (luigi == max) {
	printf("Ihr perfekter Main ist: Luigi!\n");
}

if (ness == max) {
	printf("Ihr perfekter Main ist: Ness!\n");
}

if (captainFalcon == max) {
	printf("Ihr perfekter Main ist: Captain Falcon!\n");
}

if (pummeluff == max) {
	printf("Ihr perfekter Main ist: Pummeluff!\n");
}

if (peach == max) {
	printf("Ihr perfekter Main ist: Peach!\n");
}

if (daisy == max) {
	printf("Ihr perfekter Main ist: Daisy!\n");
}

if (bowser == max) {
	printf("Ihr perfekter Main ist: Bowser!\n");
}

if (iceClimbers == max) {
	printf("Ihr perfekter Main ist: Ice Climbers!\n");
}

if (sheik == max) {
	printf("Ihr perfekter Main ist: Sheik!\n");
}

if (zelda == max) {
	printf("Ihr perfekter Main ist: Zelda!\n");
}

if (drMario == max) {
	printf("Ihr perfekter Main ist: Dr. Mario!\n");
}

if (pichu == max) {
	printf("Ihr perfekter Main ist: Pichu!\n");
}

if (falco == max) {
	printf("Ihr perfekter Main ist: Falco!\n");
}

if (marth == max) {
	printf("Ihr perfekter Main ist: Marth!\n");
}

if (lucina == max) {
	printf("Ihr perfekter Main ist: Lucina!\n");
}

if (youngLink == max) {
	printf("Ihr perfekter Main ist: Young Link!\n");
}

if (ganondorf == max) {
	printf("Ihr perfekter Main ist: Ganondorf!\n");
}

if (mewtu == max) {
	printf("Ihr perfekter Main ist: Mewtu!\n");
}

if (roy == max) {
	printf("Ihr perfekter Main ist: Roy!\n");
}

if (chrom == max) {
	printf("Ihr perfekter Main ist: Chrom!\n");
}

if (mrGamenWatch == max) {
	printf("Ihr perfekter Main ist: Mr. Game & Watch!\n");
}

if (metaKnight == max) {
	printf("Ihr perfekter Main ist: Meta Knight!\n");
}

if (pit == max) {
	printf("Ihr perfekter Main ist: Pit!\n");
}

if (darkPit == max) {
	printf("Ihr perfekter Main ist: Dark Pit!\n");
}

if (zeroSuitSamus == max) {
	printf("Ihr perfekter Main ist: Zero Suit Samus!\n");
}

if (wario == max) {
	printf("Ihr perfekter Main ist: Wario!\n");
}

if (snake == max) {
	printf("Ihr perfekter Main ist: Snake!\n");
}

if (ike == max) {
	printf("Ihr perfekter Main ist: Ike!\n");
}

if (pokemonTrainer == max) {
	printf("Ihr perfekter Main ist: Pokemon Trainer!\n");
}

if (diddyKong == max) {
	printf("Ihr perfekter Main ist: Diddy Kong!\n");
}

if (lucas == max) {
	printf("Ihr perfekter Main ist: Lucas!\n");
}

if (sonic == max) {
	printf("Ihr perfekter Main ist: Sonic!\n");
}
if (kingDedede == max) {
	printf("Ihr perfekter Main ist: König Dedede!\n");
}

if (olimar == max) {
	printf("Ihr perfekter Main ist: Olimar!\n");
}

if (lucario == max) {
	printf("Ihr perfekter Main ist: Lucario!\n");
}

if (rob == max) {
	printf("Ihr perfekter Main ist: R.O.B.!\n");
}

if (toonLink == max) {
	printf("Ihr perfekter Main ist: Toon Link!\n");
}

if (wolf == max) {
	printf("Ihr perfekter Main ist: Wolf!\n");
}

if (bewohner == max) {
	printf("Ihr perfekter Main ist: Bewohner!\n");
}

if (megaMan == max) {
	printf("Ihr perfekter Main ist: Mega Man!\n");
}

if (wiiFitTrainer == max) {
	printf("Ihr perfekter Main ist: Wii Fit Trainer!\n");
}

if (rosalina == max) {
	printf("Ihr perfekter Main ist: Rosalina!\n");
}

if (littleMac == max) {
	printf("Ihr perfekter Main ist: Little Mac!\n");
}

if (quajutsu == max) {
	printf("Ihr perfekter Main ist: Quajutsu!\n");
}

if (palutena == max) {
	printf("Ihr perfekter Main ist: Palutena!\n");
}

if (pacMan == max) {
	printf("Ihr perfekter Main ist: Pac-Man!\n");
}

if (daraen == max) {
	printf("Ihr perfekter Main ist: Daraen!\n");
}

if (shulk == max) {
	printf("Ihr perfekter Main ist: Shulk!\n");
}

if (bowserJr == max) {
	printf("Ihr perfekter Main ist: Bowser Jr.!\n");
}

if (duckHunt == max) {
	printf("Ihr perfekter Main ist: Duck Hunt Duo!\n");
}

if (ryu == max) {
	printf("Ihr perfekter Main ist: Ryu!\n");
}

if (ken == max) {
	printf("Ihr perfekter Main ist: Ken!\n");
}

if (cloud == max) {
	printf("Ihr perfekter Main ist: Cloud!\n");
}

if (corrin == max) {
	printf("Ihr perfekter Main ist: Corrin!\n");
}

if (bayonetta == max) {
	printf("Ihr perfekter Main ist: Bayonetta!\n");
}

if (inkling == max) {
	printf("Ihr perfekter Main ist: Inkling!\n");
}

if (ridley == max) {
	printf("Ihr perfekter Main ist: Ridley!\n");
}

if (simon == max) {
	printf("Ihr perfekter Main ist: Simon!\n");
}

if (richter == max) {
	printf("Ihr perfekter Main ist: Richter!\n");
}

if (kingKRool == max) {
	printf("Ihr perfekter Main ist: King K. Rool!\n");
}

if (melinda == max) {
	printf("Ihr perfekter Main ist: Melinda!\n");
}

if (fuegro == max) {
	printf("Ihr perfekter Main ist: Fuegro!\n");
}

if (piranhaPlant == max) {
	printf("Ihr perfekter Main ist: Piranha Pflanze!\n");
}
	return 0;
}



