/*************************************************** 
    Copyright (C) 2020  Martin Koerner

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    
    HISTORY: Please refer Github History
    
 ****************************************************/
#pragma once

extern const uint8_t css_app_css_start[] asm("_binary_webui_dist_css_app_css_gz_start");
extern const size_t css_app_css_size asm("_binary_webui_dist_css_app_css_gz_size");

extern const uint8_t img_logo_nano_svg_start[] asm("_binary_webui_dist_img_logo_nano_svg_gz_start");
extern const size_t img_logo_nano_svg_size asm("_binary_webui_dist_img_logo_nano_svg_gz_size");

extern const uint8_t js_app_js_start[] asm("_binary_webui_dist_js_app_js_gz_start");
extern const size_t js_app_js_size asm("_binary_webui_dist_js_app_js_gz_size");

extern const uint8_t js_app_js_map_start[] asm("_binary_webui_dist_js_app_js_map_gz_start");
extern const size_t js_app_js_map_size asm("_binary_webui_dist_js_app_js_map_gz_size");

extern const uint8_t js_chunk_vendors_js_start[] asm("_binary_webui_dist_js_chunk_vendors_js_gz_start");
extern const size_t js_chunk_vendors_js_size asm("_binary_webui_dist_js_chunk_vendors_js_gz_size");

extern const uint8_t js_chunk_vendors_js_map_start[] asm("_binary_webui_dist_js_chunk_vendors_js_map_gz_start");
extern const size_t js_chunk_vendors_js_map_size asm("_binary_webui_dist_js_chunk_vendors_js_map_gz_size");

extern const uint8_t index_html_start[] asm("_binary_webui_dist_index_html_gz_start");
extern const size_t index_html_size asm("_binary_webui_dist_index_html_gz_size");
