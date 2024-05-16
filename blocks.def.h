//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    // {"",        "/home/azmain/bin/dwmbar_scripts/dwm_nettraf",	  2,	                0},
    {"",        "/home/azmain/bin/dwmbar_scripts/dwm_volume",	      1,	                10},
    {"",        "/home/azmain/bin/dwmbar_scripts/dwm_brightness",	  0,	                15},
    {"",        "/home/azmain/bin/dwmbar_scripts/dwm_battery",	  60,	                0},
    {"",        "/home/azmain/bin/dwmbar_scripts/dwm_wifi",	      2,	                4},
	{"",        "/home/azmain/bin/dwmbar_scripts/dwm_date",	     30,	                0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = "|";
static unsigned int delimLen = 5;
