
#include <string>

struct color_style {
    std::string red;
    std::string green;
    std::string yellow;
    std::string blue;
    std::string magenta;
    std::string cyan;
    std::string white;
    std::string reset;
    std::string bold;
    std::string underline;
    std::string reversed;
    std::string black;
    std::string red_bg;
    std::string green_bg;
    std::string yellow_bg;
    std::string blue_bg;
    std::string magenta_bg;
    std::string cyan_bg;
    std::string white_bg;
    std::string black_bg;
    std::string light_red;
    std::string light_green;
    std::string light_yellow;
    std::string light_blue;
    std::string light_magenta;
    std::string light_cyan;
    std::string light_white;
    std::string light_black;
    std::string light_red_bg;
    std::string light_green_bg;
    std::string light_yellow_bg;
    std::string light_blue_bg;
    std::string light_magenta_bg;
    std::string light_cyan_bg;
    std::string light_white_bg;
    std::string light_black_bg;
    std::string bold_red;
    std::string bold_green;
    std::string bold_yellow;
    std::string bold_blue;
    std::string bold_magenta;
    std::string bold_cyan;
    std::string bold_white;
    std::string bold_black;
    std::string bold_red_bg;
    std::string bold_green_bg;
    std::string bold_yellow_bg;
    std::string bold_blue_bg;
    std::string bold_magenta_bg;
    std::string bold_cyan_bg;
    std::string bold_white_bg;
    std::string bold_black_bg;
    std::string italic;
    std::string bold_italic;
    std::string bold_underline;
    std::string italic_underline;
    std::string bold_italic_underline;
};

extern color_style Colors;



#include "colors.h"

color_style Colors = {
    "\033[31m", // red
    "\033[32m", // green
    "\033[33m", // yellow
    "\033[34m", // blue
    "\033[35m", // magenta
    "\033[36m", // cyan
    "\033[37m", // white
    "\033[0m",  // reset
    "\033[1m",  // bold
    "\033[4m",  // underline
    "\033[7m",  // reversed
    "\033[30m", // black
    "\033[41m", // red_bg
    "\033[42m", // green_bg
    "\033[43m", // yellow_bg
    "\033[44m", // blue_bg
    "\033[45m", // magenta_bg
    "\033[46m", // cyan_bg
    "\033[47m", // white_bg
    "\033[40m", // black_bg
    "\033[91m", // light_red
    "\033[92m", // light_green
    "\033[93m", // light_yellow
    "\033[94m", // light_blue
    "\033[95m", // light_magenta
    "\033[96m", // light_cyan
    "\033[97m", // light_white
    "\033[90m", // light_black
    "\033[101m",// light_red_bg
    "\033[102m",// light_green_bg
    "\033[103m",// light_yellow_bg
    "\033[104m",// light_blue_bg
    "\033[105m",// light_magenta_bg
    "\033[106m",// light_cyan_bg
    "\033[107m",// light_white_bg
    "\033[100m",// light_black_bg
    "\033[1;31m",// bold_red
    "\033[1;32m",// bold_green
    "\033[1;33m",// bold_yellow
    "\033[1;34m",// bold_blue
    "\033[1;35m",// bold_magenta
    "\033[1;36m",// bold_cyan
    "\033[1;37m",// bold_white
    "\033[1;30m",// bold_black
    "\033[1;41m",// bold_red_bg
    "\033[1;42m",// bold_green_bg
    "\033[1;43m",// bold_yellow_bg
    "\033[1;44m",// bold_blue_bg
    "\033[1;45m",// bold_magenta_bg
    "\033[1;46m",// bold_cyan_bg
    "\033[1;47m",// bold_white_bg
    "\033[1;40m",// bold_black_bg
    "\033[3m",  // italic
    "\033[1;3m",// bold_italic
    "\033[1;4m",// bold_underline
    "\033[3;4m",// italic_underline
    "\033[1;3;4m"// bold_italic_underline
};

