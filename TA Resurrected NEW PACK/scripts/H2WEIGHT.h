#ifndef __H2TCLASS_H_
#define __H2TCLASSH_

#include "CavedogUnitsHeight.h"

#define ARMDUCK 1916928
#define ARMBWVALK 3294362
#define CORBTRANS 3294362

// Note that currently the weight is the metal cost

#define DEFAULT_WEIGHT (500) // for the unknown units

// Sadly, that line is too long for Scriptor to handle
#define KNOWN_WEIGHT ((h==ARMACSUB)*695+(h==ARMAAS)*1358+(h==ARMACA)*220+(h==ARMACK)*300+(h==ARMATLAS)*107+(h==ARMACV)*481+(h==ARMAH)*120+(h==ARMAMPH)*255+(h==ARMANAC)*272+(h==ARMASER)*73+(h==ARMBRAWL)*314+(h==ARMAWAC)*165+(h==ARMBATS)*4404+(h==ARMBULL)*467+(h==ARMCA)*105+(h==ARMCARRY)*1372+(h==ARMCH)*396+(h==ARMCK)*120+(h==ARMCOM)*29854+(h==ARMCROC)*298+(h==ARMCRUS)*1719+(h==ARMCSA)*115+(h==ARMCS)*255+(h==ARMCV)*185/*+(h==ARMDECOM)*721*/+(h==ARMFARK)*480+(h==ARMFAST)*151+(h==ARMFAV)*37+(h==ARMFIDO)*398+(h==ARMFIG)*99+(h==ARMFLASH)*106+(h==ARMFLEA)*44+(h==ARMHAM)*151+(h==ARMHAWK)*254+(h==ARMJAM)*97+(h==ARMJETH)*128+(h==ARMLANCE)*378+(h==ARMLATNK)*354+(h==ARMMANNI)*2604+(h==ARMMARK)*95+(h==ARMMART)*264+(h==ARMMAV)*492+(h==ARMMERL)*462+(h==ARMMH)*325+(h==ARMMLV)*173+(h==ARMMSHIP)*2348+(h==ARMPEEP)*40.28+(h==ARMPNIX)*209+(h==ARMPT)*100+(h==ARMPW)*53+(h==ARMROCK)*117+(h==ARMROY)*898+(h==ARMSAM)*119+(h==ARMSCAB)*1437+(h==ARMSCORP)*0+(h==ARMSCRAM)*295+(h==ARMSEAP)*557+(h==ARMSEER)*85+(h==ARMSEHAK)*139+(h==ARMSFIG)*187+(h==ARMSH)*76+(h==ARMSJAM)*131+(h==ARMSNIPE)*935+(h==ARMSPID)*230+(h==ARMSPY)*128+(h==ARMSS)*0+(h==ARMSTUMP)*165+(h==ARMSUB)*1151+(h==ARMSUBK)*1448+(h==ARMTHOVR)*665+(h==ARMTHUND)*130+(h==ARMTSHIP)*919+(h==ARMVADER)*61+(h==ARMWAR)*196+(h==ARMYORK)*830+(h==ARMZEUS)*267+(h==CORACA)*231+(h==CORACK)*325+(h==CORACSUB)*690+(h==CORACV)*455+(h==CORAH)*115+(h==CORAK)*56+(h==CORAMPH)*324+(h==CORAPE)*294+(h==CORARCH)*1314+(h==CORAWAC)*169+(h==CORBATS)*4181+(h==CORCA)*110+(h==CORCAN)*420+(h==CORCARRY)*1379+(h==CORCH)*390+(h==CORCK)*130+(h==CORCOM)*23512+(h==CORCRASH)*129+(h==CORCRUS)*1724+(h==CORCSA)*125+(h==CORCS)*260+(h==CORCV)*175/*+(h==CORDECOM)*705*/+(h==CORETER)*100+(h==CORFAST)*175+(h==CORFAV)*38+(h==CORFINK)*36+(h==CORGATOR)*110+(h==CORGOL)*697+(h==CORHRK)*388+(h==CORHUNT)*142+(h==CORHURC)*220+(h==CORKROG)*29489+(h==CORLEVLR)*292+(h==CORMABM)*1508+(h==CORMART)*251+(h==CORMH)*318+(h==CORMIST)*116+(h==CORMLV)*187+(h==CORMORT)*321+(h==CORMSHIP)*2283+(h==CORNECRO)*376+(h==CORPT)*95+(h==CORPYRO)*260+(h==CORRAID)*169+(h==CORREAP)*473+(h==CORROACH)*65+(h==CORROY)*887+(h==CORSCORP)*0+(h==CORSEAL)*295+(h==CORSEAP)*545+(h==CORSENT)*886+(h==CORSFIG)*182+(h==CORSHAD)*131+(h==CORSHARK)*1356+(h==CORSH)*72+(h==CORSJAM)*135+(h==CORSNAP)*280+(h==CORSPEC)*70+(h==CORSPY)*156+(h==CORSS)*0+(h==CORSSUB)*3850+(h==CORSTORM)*118+(h==CORSUB)*1199+(h==CORSUMO)*844+(h==CORTHOVR)*650+(h==CORTHUD)*147+(h==CORTITAN)*364+(h==CORTRUCK)*218+(h==CORTSHIP)*887+(h==CORVALK)*115+(h==CORVAMP)*257+(h==CORVENG)*101+(h==CORVOYR)*93+(h==CORVRAD)*86+(h==CORVROC)*427)

// Cannot Transport, because auto-load ignores cannotbetransported tag in FBI
#define UNTRANSPORTABLE_WEIGHT 1073741823

#define CALC_WEIGHT \
w=0; \
\
/*First, the units that use their metal cost for weight*/\
w=w+(h==ARMACSUB)*695+(h==ARMAAS)*1358+(h==ARMACA)*220+(h==ARMACK)*300+(h==ARMATLAS)*107+(h==ARMACV)*481; \
w=w+(h==ARMAH)*120+(h==ARMAMPH)*255+(h==ARMANAC)*272+(h==ARMASER)*73+(h==ARMBRAWL)*314+(h==ARMAWAC)*165; \
w=w+(h==ARMBATS)*4404+(h==ARMBULL)*467+(h==ARMCA)*105+(h==ARMCARRY)*1372+(h==ARMCH)*396+(h==ARMCK)*120; \
w=w+(h==ARMCOM)*29854+(h==ARMCROC)*298+(h==ARMCRUS)*1719+(h==ARMCSA)*115+(h==ARMCS)*255+(h==ARMCV)*185; \
w=w/*+(h==ARMDECOM)*721*/+(h==ARMFARK)*480+(h==ARMFAST)*151+(h==ARMFAV)*37+(h==ARMFIDO)*398+(h==ARMFIG)*99; \
w=w+(h==ARMFLASH)*106+(h==ARMFLEA)*44+(h==ARMHAM)*151+(h==ARMHAWK)*254+(h==ARMJAM)*97+(h==ARMJETH)*128; \
w=w+(h==ARMLANCE)*378+(h==ARMLATNK)*354+(h==ARMMANNI)*2604+(h==ARMMARK)*95+(h==ARMMART)*264+(h==ARMMAV)*492; \
w=w+(h==ARMMERL)*462+(h==ARMMH)*325+(h==ARMMLV)*173+(h==ARMMSHIP)*2348+(h==ARMPEEP)*40.28+(h==ARMPNIX)*209; \
w=w+(h==ARMPT)*100+(h==ARMPW)*53+(h==ARMROCK)*117+(h==ARMROY)*898+(h==ARMSAM)*119+(h==ARMSCAB)*1437; \
w=w+(h==ARMSCORP)*0+(h==ARMSCRAM)*295+(h==ARMSEAP)*557+(h==ARMSEER)*85+(h==ARMSEHAK)*139+(h==ARMSFIG)*187; \
w=w+(h==ARMSH)*76+(h==ARMSJAM)*131+(h==ARMSNIPE)*935+(h==ARMSPID)*230+(h==ARMSPY)*128+(h==ARMSS)*0; \
w=w+(h==ARMSTUMP)*165+(h==ARMSUB)*1151+(h==ARMSUBK)*1448+(h==ARMTHOVR)*665+(h==ARMTHUND)*130; \
w=w+(h==ARMTSHIP)*919+(h==ARMVADER)*61+(h==ARMWAR)*196+(h==ARMYORK)*830+(h==ARMZEUS)*267+(h==CORACA)*231; \
w=w+(h==CORACK)*325+(h==CORACSUB)*690+(h==CORACV)*455+(h==CORAH)*115+(h==CORAK)*56+(h==CORAMPH)*324; \
w=w+(h==CORAPE)*294+(h==CORARCH)*1314+(h==CORAWAC)*169+(h==CORBATS)*4181+(h==CORCA)*110+(h==CORCAN)*420; \
w=w+(h==CORCARRY)*1379+(h==CORCH)*390+(h==CORCK)*130+(h==CORCOM)*23512+(h==CORCRASH)*129+(h==CORCRUS)*1724; \
w=w+(h==CORCSA)*125+(h==CORCS)*260+(h==CORCV)*175/*+(h==CORDECOM)*705*/+(h==CORETER)*100+(h==CORFAST)*175; \
w=w+(h==CORFAV)*38+(h==CORFINK)*36+(h==CORGATOR)*110+(h==CORGOL)*697+(h==CORHRK)*388+(h==CORHUNT)*142; \
w=w+(h==CORHURC)*220+(h==CORKROG)*29489+(h==CORLEVLR)*292+(h==CORMABM)*1508+(h==CORMART)*251+(h==CORMH)*318; \
w=w+(h==CORMIST)*116+(h==CORMLV)*187+(h==CORMORT)*321+(h==CORMSHIP)*2283+(h==CORNECRO)*376+(h==CORPT)*95; \
w=w+(h==CORPYRO)*260+(h==CORRAID)*169+(h==CORREAP)*473+(h==CORROACH)*65+(h==CORROY)*887+(h==CORSCORP)*0; \
w=w+(h==CORSEAL)*295+(h==CORSEAP)*545+(h==CORSENT)*886+(h==CORSFIG)*182+(h==CORSHAD)*131+(h==CORSHARK)*1356; \
w=w+(h==CORSH)*72+(h==CORSJAM)*135+(h==CORSNAP)*280+(h==CORSPEC)*70+(h==CORSPY)*156+(h==CORSS)*0; \
w=w+(h==CORSSUB)*3850+(h==CORSTORM)*118+(h==CORSUB)*1199+(h==CORSUMO)*844+(h==CORTHOVR)*650; \
w=w+(h==CORTHUD)*147+(h==CORTITAN)*364+(h==CORTRUCK)*218+(h==CORTSHIP)*887+(h==CORVALK)*115; \
w=w+(h==CORVAMP)*257+(h==CORVENG)*101+(h==CORVOYR)*93+(h==CORVRAD)*86+(h==CORVROC)*427; \
\
/*Now, the units that are not transportable (all planes, plus Krogoth)*/\
if((h==ARMACA) || (h==ARMATLAS) || (h==ARMBRAWL) || (h==ARMAWAC) || (h==ARMCA) || (h==ARMCSA) || (h==ARMFIG)) \
	{ \
	w=UNTRANSPORTABLE_WEIGHT; \
	} \
if((h==ARMHAWK) || (h==ARMLANCE) || (h==ARMPEEP) || (h==ARMPNIX) || (h==ARMSEAP) || (h==ARMSEHAK)) \
	{ \
	w=UNTRANSPORTABLE_WEIGHT; \
	} \
if((h==ARMSFIG) || (h==ARMTHUND) || (h==CORACA) || (h==CORAPE) || (h==CORAWAC) || (h==CORCA) || (h==CORCSA)) \
	{ \
	w=UNTRANSPORTABLE_WEIGHT; \
	} \
if((h==CORFINK) || (h==CORHUNT) || (h==CORHURC) || (h==CORSEAP) || (h==CORSFIG) || (h==CORSHAD)) \
	{ \
	w=UNTRANSPORTABLE_WEIGHT; \
	} \
if((h==CORTITAN) || (h==CORVALK) || (h==CORVAMP) || (h==CORVENG))\
	{ \
	w=UNTRANSPORTABLE_WEIGHT; \
	} \
if((h==CORKROG)) \
	{ \
	w=UNTRANSPORTABLE_WEIGHT; \
	} \
if((h==ARMDUCK) || (h==ARMBWVALK) || (h==CORBTRANS)) \
	{ \
	w=UNTRANSPORTABLE_WEIGHT; \
	} \
/*Finally, the unknown units)*/\
if(w==0) \
	{ \
	w=DEFAULT_WEIGHT; \
	}

// Yes, CORKROG and planes appears in both. But the unstransportability will be prioritary and they will be untransportable.
// Also, hope as strongly as you can that there's isn't any two units with the same height but different TCLASS.




// So, from now on,
// all we have to do is
//
// var h,w;
// h=get UNIT_HEIGHT(id);
// CALC_WEIGHT
//
// and automatically w
// will take the value
// of the transportation cost
// of the unit of id id.

#endif


/* For info, here is the perl script used to write the line KNOWN_WEIGHT:

#!/usr/bin/perl -w

#look for the files in the current dir
opendir DIR,"." or die "Current dir does not exist!!! $!";
@allfiles= grep /.(f|F)(b|B)(i|I)$/, readdir DIR; #push in allfile everything not beginning by .
closedir DIR;

for $file (@allfiles)
	{
	#print $file."\n";
	#$newfile=$file.".new";
	#print "$file is renamed $newfile\n";
	open(Tfbif,$file) || die("Impossible d'ouvrir le fichier ".$file."\n");
	@rawstat=<Tfbif>;
	close(Tfbif);
	
	$mobile=1;
	foreach $ligne (@rawstat)
		{
		if ($ligne =~ "Yard")
			{
			$mobile=0;
			}
		}
	
	if($mobile)
		{
		foreach $ligne (@rawstat)
			{
			chomp $ligne;
			chop $ligne;
			chop $ligne;
			if ($ligne =~ "UnitName=")
				{
				print ("(h==".substr($ligne,10,90).")*");
				}
			if ($ligne =~ "BuildCostMetal=")
				{
				print (substr($ligne,16,90)."+");
				}
			}
		}
	
	}

#*/


/* For info, here is the perl script used to write the list of planes:
#!/usr/bin/perl -w

#look for the files in the current dir
opendir DIR,"." or die "Current dir does not exist!!! $!";
@allfiles= grep /.(f|F)(b|B)(i|I)$/, readdir DIR; #push in allfile everything not beginning by .
closedir DIR;

for $file (@allfiles)
	{
	#print $file."\n";
	#$newfile=$file.".new";
	#print "$file is renamed $newfile\n";
	open(Tfbif,$file) || die("Impossible d'ouvrir le fichier ".$file."\n");
	@rawstat=<Tfbif>;
	close(Tfbif);
	
	$plane=0;
	foreach $ligne (@rawstat)
		{
		if ($ligne =~ "anfly=1")
			{
			$plane=1;
			}
		}
	
	if($plane)
		{
		foreach $ligne (@rawstat)
			{
			chomp $ligne;
			chop $ligne;
			chop $ligne;
			if ($ligne =~ "UnitName=")
				{
				print ("(h==".substr($ligne,10,90).") || ");
				}
			}
		}
	
	}
#*/