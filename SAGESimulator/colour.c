/*
** William Rigby Copyright (C) 2019
** Version 1.0
** modified 4/8/19
** 
**
** This program is free software; you can redistribute it and/or
** modify it under the terms of the GNU General Public License
** as published by the Free Software Foundation; either version 2
** of the License, or (at your option) any later version.
** 
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
** 
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
********************************************************************/

#include "colour.h"

/* Set Terminal Red */
void set_terminal_color_red(void){
    printf(ANSI_COLOR_RED);
}

/* Set Terminal Green */
void set_terminal_color_green(void){
    printf(ANSI_COLOR_GREEN);
}

/* Set Terminal Yellow */
void set_terminal_color_yellow(void){
    printf(ANSI_COLOR_YELLOW);
}

/* Set Terminal Blue */
void set_terminal_color_blue(void){
    printf(ANSI_COLOR_BLUE);
}

/* Set Terminal Magenta */
void set_terminal_color_magenta(void){
    printf(ANSI_COLOR_MAGENTA);
}

/* Set Terminal Cyan */
void set_terminal_color_cyan(void){
    printf(ANSI_COLOR_CYAN);
}

/* Reset Terminal Color */
void set_terminal_color_reset(void){
    printf(ANSI_COLOR_RESET);
}