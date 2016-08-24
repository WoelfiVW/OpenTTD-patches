/* $Id$ */

/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <http://www.gnu.org/licenses/>.
 */

/** @file settings_gui.h Functions for setting GUIs. */

#ifndef SETTING_GUI_H
#define SETTING_GUI_H

#include "gfx_func.h"

/** Width of setting buttons */
#define SETTING_BUTTON_WIDTH  ((int)NWidgetScrollbar::GetHorizontalDimension().width * 2)
/** Height of setting buttons */
#define SETTING_BUTTON_HEIGHT ((int)NWidgetScrollbar::GetHorizontalDimension().height)

void DrawArrowButtons (BlitArea *dpi, int x, int y, Colours button_colour,
	byte state, bool clickable_left, bool clickable_right);

void DrawDropDownButton (BlitArea *dpi, int x, int y, Colours button_colour,
	bool state, bool clickable);

void DrawBoolButton(int x, int y, bool state, bool clickable);

#endif /* SETTING_GUI_H */

