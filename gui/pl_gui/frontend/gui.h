/*
 * Copyright (c) 2018-2019 CTCaer
 * Copyright (c) 2020 Storm
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _GUI_H_
#define _GUI_H_

#include <libs/lvgl/lvgl.h>

typedef struct _emmc_tool_gui_t
{
	lv_obj_t* label_log;
	lv_obj_t* label_info;
	lv_obj_t* label_pct;
	lv_obj_t* label_finish;
	lv_obj_t* bar;
	lv_style_t* bar_teal_bg;
	lv_style_t* bar_teal_ind;
	lv_style_t* bar_white_ind;
	char* txt_buf;
	char* base_path;
	bool raw_emummc;
} emmc_tool_gui_t;



extern lv_obj_t* payload_list;
extern lv_obj_t* autorcm_btn;
extern lv_obj_t* close_btn;//Close Button in anderen Dateien

extern lv_img_dsc_t* icon_switch;
extern lv_img_dsc_t* icon_payload;
extern lv_img_dsc_t* icon_lakka;

extern lv_img_dsc_t* hekate_bg;

//nyx default styles
//lv_style_t mbox_darken;
//lv_style_t hint_small_style;
//lv_style_t hint_small_style_white;
//lv_style_t monospace_text;
//lv_style_t btn_transp_rel, btn_transp_pr, btn_transp_tgl_rel, btn_transp_tgl_pr;
//lv_style_t ddlist_transp_bg, ddlist_transp_sel;
//lv_style_t tabview_btn_pr, tabview_btn_tgl_pr;

extern char* text_color;

void reload_nyx();
lv_img_dsc_t* bmp_to_lvimg_obj(const char* path);
lv_res_t mbox_action(lv_obj_t* btns, const char* txt);
bool nyx_emmc_check_battery_enough();
void nyx_window_toggle_buttons(lv_obj_t* win, bool disable);
lv_obj_t* nyx_create_standard_window(const char* win_title);
lv_obj_t* nyx_create_window_custom_close_btn(const char* win_title, lv_action_t rel_action);
void nyx_create_onoff_button(lv_theme_t* th, lv_obj_t* parent, lv_obj_t* btn, const char* btn_name, lv_action_t action, bool transparent);
lv_res_t nyx_generic_onoff_toggle(lv_obj_t* btn);
void manual_system_maintenance(bool refresh);

//Zus�tzliche Funktionen
lv_obj_t* gui_create_standard_window(const char* win_title);
void gui_load_and_run();
extern lv_obj_t* close_firstwin;//Close Button in anderen Dateien
lv_res_t lv_win_close_action_firstwin(lv_obj_t* btn);//Close Action f�r erstes Fenster

//Statische default Styles
extern lv_style_t mbox_darken;
extern lv_style_t hint_small_style;
extern lv_style_t hint_small_style_white;
extern lv_style_t monospace_text;

extern lv_style_t btn_transp_rel, btn_transp_pr;
extern lv_style_t tabview_btn_pr, tabview_btn_tgl_pr;

extern lv_style_t header_style;
extern lv_style_t win_bg_style;
extern lv_style_t style_kb_rel;
extern lv_style_t style_kb_pr;

extern lv_style_t font20_style;
extern lv_style_t font20red_style;
extern lv_style_t font20green_style;
extern lv_style_t labels_style;
extern lv_style_t inv_label;

//extern lv_style_t img_btn_color;//Test Symbolfarbe list

#endif
