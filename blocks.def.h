//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
    {" ⌨️ ", "~/.local/bin/scripts/layout",		    1,	    	        2},

    {" 🐧 ", "~/.local/bin/scripts/kernel",		    360,		        2},

	{" 🔺 ", "~/.local/bin/scripts/upt",		        60,		            2},

	{" 📦 ", "~/.local/bin/scripts/pacupdate",		360,		        9},
	
	{" 💻 ", "~/.local/bin/scripts/memory",	        5,		            1},

	{" 🔊 ", "~/.local/bin/scripts/volume",			1,		            10},

	{" 🕑 ", "~/.local/bin/scripts/clock",			5,		            0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
