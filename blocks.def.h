//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
    {" ⌨️ ", "/home/stn29a/.local/bin/scripts/layout",		    1,	    	        2},

    {" 🐧 ", "/home/stn29a/.local/bin/scripts/kernel",		    360,		        2},

	{" 🔺 ", "/home/stn29a/.local/bin/scripts/upt",		        60,		            2},

	{" 📦 ", "/home/stn29a/.local/bin/scripts/pacupdate",		360,		        9},
	
	{" 💻 ", "/home/stn29a/.local/bin/scripts/memory",	        5,		            1},

	{" 🔊 ", "/home/stn29a/.local/bin/scripts/volume",			1,		            10},

	{" 🕑 ", "/home/stn29a/.local/bin/scripts/clock",			5,		            0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
