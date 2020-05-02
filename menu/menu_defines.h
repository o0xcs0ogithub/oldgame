/*  RetroArch - A frontend for libretro.
 *  Copyright (C) 2010-2014 - Hans-Kristian Arntzen
 *  Copyright (C) 2011-2017 - Daniel De Matteis
 *
 *  RetroArch is free software: you can redistribute it and/or modify it under the terms
 *  of the GNU General Public License as published by the Free Software Found-
 *  ation, either version 3 of the License, or (at your option) any later version.
 *
 *  RetroArch is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *  PURPOSE.  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along with RetroArch.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __MENU_DEFINES__H
#define __MENU_DEFINES__H

#include <retro_common_api.h>

#include "../audio/audio_defines.h"

RETRO_BEGIN_DECLS

#define MENU_SETTINGS_AUDIO_MIXER_MAX_STREAMS        (AUDIO_MIXER_MAX_SYSTEM_STREAMS-1)

enum menu_image_type
{
   MENU_IMAGE_NONE = 0,
   MENU_IMAGE_WALLPAPER,
   MENU_IMAGE_THUMBNAIL,
   MENU_IMAGE_LEFT_THUMBNAIL,
   MENU_IMAGE_SAVESTATE_THUMBNAIL
};

enum menu_environ_cb
{
   MENU_ENVIRON_NONE = 0,
   MENU_ENVIRON_RESET_HORIZONTAL_LIST,
   MENU_ENVIRON_ENABLE_MOUSE_CURSOR,
   MENU_ENVIRON_DISABLE_MOUSE_CURSOR,
   MENU_ENVIRON_LAST
};

enum menu_state_changes
{
   MENU_STATE_RENDER_FRAMEBUFFER = 0,
   MENU_STATE_RENDER_MESSAGEBOX,
   MENU_STATE_BLIT,
   MENU_STATE_POP_STACK,
   MENU_STATE_POST_ITERATE
};

enum rarch_menu_ctl_state
{
   RARCH_MENU_CTL_NONE = 0,
   RARCH_MENU_CTL_SET_PENDING_QUICK_MENU,
   RARCH_MENU_CTL_DEINIT,
   RARCH_MENU_CTL_SET_PREVENT_POPULATE,
   RARCH_MENU_CTL_UNSET_PREVENT_POPULATE,
   RARCH_MENU_CTL_IS_PREVENT_POPULATE,
   RARCH_MENU_CTL_SET_OWN_DRIVER,
   RARCH_MENU_CTL_UNSET_OWN_DRIVER,
   RARCH_MENU_CTL_OWNS_DRIVER,
   RARCH_MENU_CTL_FIND_DRIVER,
   RARCH_MENU_CTL_LIST_FREE,
   RARCH_MENU_CTL_ENVIRONMENT,
   RARCH_MENU_CTL_POINTER_DOWN,
   RARCH_MENU_CTL_POINTER_UP,
   RARCH_MENU_CTL_OSK_PTR_AT_POS,
   RARCH_MENU_CTL_BIND_INIT,
   RARCH_MENU_CTL_UPDATE_THUMBNAIL_PATH,
   RARCH_MENU_CTL_UPDATE_THUMBNAIL_IMAGE,
   RARCH_MENU_CTL_REFRESH_THUMBNAIL_IMAGE,
   RARCH_MENU_CTL_UPDATE_SAVESTATE_THUMBNAIL_PATH,
   RARCH_MENU_CTL_UPDATE_SAVESTATE_THUMBNAIL_IMAGE,
   MENU_NAVIGATION_CTL_CLEAR,
   MENU_NAVIGATION_CTL_INCREMENT,
   MENU_NAVIGATION_CTL_DECREMENT,
   MENU_NAVIGATION_CTL_SET_LAST,
   MENU_NAVIGATION_CTL_DESCEND_ALPHABET,
   MENU_NAVIGATION_CTL_ASCEND_ALPHABET,
   MENU_NAVIGATION_CTL_SET_SCROLL_ACCEL,
   MENU_NAVIGATION_CTL_GET_SCROLL_ACCEL
};

enum menu_timedate_style_type
{
   MENU_TIMEDATE_STYLE_YMD_HMS = 0,
   MENU_TIMEDATE_STYLE_YMD_HM,
   MENU_TIMEDATE_STYLE_YMD,
   MENU_TIMEDATE_STYLE_YM,
   MENU_TIMEDATE_STYLE_MDYYYY_HMS,
   MENU_TIMEDATE_STYLE_MDYYYY_HM,
   MENU_TIMEDATE_STYLE_MD_HM,
   MENU_TIMEDATE_STYLE_MDYYYY,
   MENU_TIMEDATE_STYLE_MD,
   MENU_TIMEDATE_STYLE_DDMMYYYY_HMS,
   MENU_TIMEDATE_STYLE_DDMMYYYY_HM,
   MENU_TIMEDATE_STYLE_DDMM_HM,
   MENU_TIMEDATE_STYLE_DDMMYYYY,
   MENU_TIMEDATE_STYLE_DDMM,
   MENU_TIMEDATE_STYLE_HMS,
   MENU_TIMEDATE_STYLE_HM,
   MENU_TIMEDATE_STYLE_YMD_HMS_AM_PM,
   MENU_TIMEDATE_STYLE_YMD_HM_AM_PM,
   MENU_TIMEDATE_STYLE_MDYYYY_HMS_AM_PM,
   MENU_TIMEDATE_STYLE_MDYYYY_HM_AM_PM,
   MENU_TIMEDATE_STYLE_MD_HM_AM_PM,
   MENU_TIMEDATE_STYLE_DDMMYYYY_HMS_AM_PM,
   MENU_TIMEDATE_STYLE_DDMMYYYY_HM_AM_PM,
   MENU_TIMEDATE_STYLE_DDMM_HM_AM_PM,
   MENU_TIMEDATE_STYLE_HMS_AM_PM,
   MENU_TIMEDATE_STYLE_HM_AM_PM,
   MENU_TIMEDATE_STYLE_LAST
};

enum rgui_color_theme
{
   RGUI_THEME_CUSTOM = 0,
   RGUI_THEME_CLASSIC_RED,
   RGUI_THEME_CLASSIC_ORANGE,
   RGUI_THEME_CLASSIC_YELLOW,
   RGUI_THEME_CLASSIC_GREEN,
   RGUI_THEME_CLASSIC_BLUE,
   RGUI_THEME_CLASSIC_VIOLET,
   RGUI_THEME_CLASSIC_GREY,
   RGUI_THEME_LEGACY_RED,
   RGUI_THEME_DARK_PURPLE,
   RGUI_THEME_MIDNIGHT_BLUE,
   RGUI_THEME_GOLDEN,
   RGUI_THEME_ELECTRIC_BLUE,
   RGUI_THEME_APPLE_GREEN,
   RGUI_THEME_VOLCANIC_RED,
   RGUI_THEME_LAGOON,
   RGUI_THEME_BROGRAMMER,
   RGUI_THEME_DRACULA,
   RGUI_THEME_FAIRYFLOSS,
   RGUI_THEME_FLATUI,
   RGUI_THEME_GRUVBOX_DARK,
   RGUI_THEME_GRUVBOX_LIGHT,
   RGUI_THEME_HACKING_THE_KERNEL,
   RGUI_THEME_NORD,
   RGUI_THEME_NOVA,
   RGUI_THEME_ONE_DARK,
   RGUI_THEME_PALENIGHT,
   RGUI_THEME_SOLARIZED_DARK,
   RGUI_THEME_SOLARIZED_LIGHT,
   RGUI_THEME_TANGO_DARK,
   RGUI_THEME_TANGO_LIGHT,
   RGUI_THEME_ZENBURN,
   RGUI_THEME_ANTI_ZENBURN,
   RGUI_THEME_FLUX,
   RGUI_THEME_LAST
};

enum materialui_color_theme
{
   MATERIALUI_THEME_BLUE = 0,
   MATERIALUI_THEME_BLUE_GREY,
   MATERIALUI_THEME_DARK_BLUE,
   MATERIALUI_THEME_GREEN,
   MATERIALUI_THEME_RED,
   MATERIALUI_THEME_YELLOW,
   MATERIALUI_THEME_NVIDIA_SHIELD,
   MATERIALUI_THEME_MATERIALUI,
   MATERIALUI_THEME_MATERIALUI_DARK,
   MATERIALUI_THEME_OZONE_DARK,
   MATERIALUI_THEME_NORD,
   MATERIALUI_THEME_GRUVBOX_DARK,
   MATERIALUI_THEME_SOLARIZED_DARK,
   MATERIALUI_THEME_CUTIE_BLUE,
   MATERIALUI_THEME_CUTIE_CYAN,
   MATERIALUI_THEME_CUTIE_GREEN,
   MATERIALUI_THEME_CUTIE_ORANGE,
   MATERIALUI_THEME_CUTIE_PINK,
   MATERIALUI_THEME_CUTIE_PURPLE,
   MATERIALUI_THEME_CUTIE_RED,
   MATERIALUI_THEME_VIRTUAL_BOY,
   MATERIALUI_THEME_LAST
};

enum materialui_transition_animation
{
   MATERIALUI_TRANSITION_ANIM_AUTO = 0,
   MATERIALUI_TRANSITION_ANIM_FADE,
   MATERIALUI_TRANSITION_ANIM_SLIDE,
   MATERIALUI_TRANSITION_ANIM_NONE,
   MATERIALUI_TRANSITION_ANIM_LAST
};

enum materialui_thumbnail_view_portrait
{
   MATERIALUI_THUMBNAIL_VIEW_PORTRAIT_DISABLED = 0,
   MATERIALUI_THUMBNAIL_VIEW_PORTRAIT_LIST_SMALL,
   MATERIALUI_THUMBNAIL_VIEW_PORTRAIT_LIST_MEDIUM,
   MATERIALUI_THUMBNAIL_VIEW_PORTRAIT_DUAL_ICON,
   MATERIALUI_THUMBNAIL_VIEW_PORTRAIT_LAST
};

enum materialui_thumbnail_view_landscape
{
   MATERIALUI_THUMBNAIL_VIEW_LANDSCAPE_DISABLED = 0,
   MATERIALUI_THUMBNAIL_VIEW_LANDSCAPE_LIST_SMALL,
   MATERIALUI_THUMBNAIL_VIEW_LANDSCAPE_LIST_MEDIUM,
   MATERIALUI_THUMBNAIL_VIEW_LANDSCAPE_LIST_LARGE,
   MATERIALUI_THUMBNAIL_VIEW_LANDSCAPE_LAST
};

enum materialui_landscape_layout_optimization_type
{
   MATERIALUI_LANDSCAPE_LAYOUT_OPTIMIZATION_DISABLED = 0,
   MATERIALUI_LANDSCAPE_LAYOUT_OPTIMIZATION_ALWAYS,
   MATERIALUI_LANDSCAPE_LAYOUT_OPTIMIZATION_EXCLUDE_THUMBNAIL_VIEWS,
   MATERIALUI_LANDSCAPE_LAYOUT_OPTIMIZATION_LAST
};

enum xmb_color_theme
{
   XMB_THEME_LEGACY_RED  = 0,
   XMB_THEME_DARK_PURPLE,
   XMB_THEME_MIDNIGHT_BLUE,
   XMB_THEME_GOLDEN,
   XMB_THEME_ELECTRIC_BLUE,
   XMB_THEME_APPLE_GREEN,
   XMB_THEME_UNDERSEA,
   XMB_THEME_VOLCANIC_RED,
   XMB_THEME_DARK,
   XMB_THEME_LIGHT,
   XMB_THEME_WALLPAPER,
   XMB_THEME_MORNING_BLUE,
   XMB_THEME_SUNBEAM,
   XMB_THEME_LIME,
   XMB_THEME_PIKACHU_YELLOW,
   XMB_THEME_GAMECUBE_PURPLE,
   XMB_THEME_FAMICOM_RED,
   XMB_THEME_FLAMING_HOT,
   XMB_THEME_ICE_COLD,
   XMB_THEME_MIDGAR,
   XMB_THEME_LAST
};

enum xmb_icon_theme
{
   XMB_ICON_THEME_MONOCHROME = 0,
   XMB_ICON_THEME_FLATUI,
   XMB_ICON_THEME_RETROACTIVE,
   XMB_ICON_THEME_PIXEL,
   XMB_ICON_THEME_NEOACTIVE,
   XMB_ICON_THEME_SYSTEMATIC,
   XMB_ICON_THEME_DOTART,
   XMB_ICON_THEME_CUSTOM,
   XMB_ICON_THEME_RETROSYSTEM,
   XMB_ICON_THEME_MONOCHROME_INVERTED,
   XMB_ICON_THEME_AUTOMATIC,
   XMB_ICON_THEME_AUTOMATIC_INVERTED,
   XMB_ICON_THEME_LAST
};

enum xmb_shader_pipeline
{
   XMB_SHADER_PIPELINE_WALLPAPER = 0,
   XMB_SHADER_PIPELINE_SIMPLE_RIBBON,
   XMB_SHADER_PIPELINE_RIBBON,
   XMB_SHADER_PIPELINE_SIMPLE_SNOW,
   XMB_SHADER_PIPELINE_SNOW,
   XMB_SHADER_PIPELINE_BOKEH,
   XMB_SHADER_PIPELINE_SNOWFLAKE,
   XMB_SHADER_PIPELINE_LAST
};

enum menu_display_prim_type
{
   MENU_DISPLAY_PRIM_NONE = 0,
   MENU_DISPLAY_PRIM_TRIANGLESTRIP,
   MENU_DISPLAY_PRIM_TRIANGLES
};

enum menu_display_driver_type
{
   MENU_VIDEO_DRIVER_GENERIC = 0,
   MENU_VIDEO_DRIVER_OPENGL,
   MENU_VIDEO_DRIVER_OPENGL1,
   MENU_VIDEO_DRIVER_OPENGL_CORE,
   MENU_VIDEO_DRIVER_VULKAN,
   MENU_VIDEO_DRIVER_METAL,
   MENU_VIDEO_DRIVER_DIRECT3D8,
   MENU_VIDEO_DRIVER_DIRECT3D9,
   MENU_VIDEO_DRIVER_DIRECT3D10,
   MENU_VIDEO_DRIVER_DIRECT3D11,
   MENU_VIDEO_DRIVER_DIRECT3D12,
   MENU_VIDEO_DRIVER_VITA2D,
   MENU_VIDEO_DRIVER_CTR,
   MENU_VIDEO_DRIVER_WIIU,
   MENU_VIDEO_DRIVER_CACA,
   MENU_VIDEO_DRIVER_SIXEL,
   MENU_VIDEO_DRIVER_GDI,
   MENU_VIDEO_DRIVER_SWITCH,
   MENU_VIDEO_DRIVER_VGA,
   MENU_VIDEO_DRIVER_FPGA
};

enum rgui_thumbnail_scaler
{
   RGUI_THUMB_SCALE_POINT = 0,
   RGUI_THUMB_SCALE_BILINEAR,
   RGUI_THUMB_SCALE_SINC,
   RGUI_THUMB_SCALE_LAST
};

enum rgui_upscale_level
{
   RGUI_UPSCALE_NONE = 0,
   RGUI_UPSCALE_AUTO,
   RGUI_UPSCALE_X2,
   RGUI_UPSCALE_X3,
   RGUI_UPSCALE_X4,
   RGUI_UPSCALE_X5,
   RGUI_UPSCALE_X6,
   RGUI_UPSCALE_X7,
   RGUI_UPSCALE_X8,
   RGUI_UPSCALE_X9, /* All the way to 4k */
   RGUI_UPSCALE_LAST
};

enum rgui_aspect_ratio
{
   RGUI_ASPECT_RATIO_4_3 = 0,
   RGUI_ASPECT_RATIO_16_9,
   RGUI_ASPECT_RATIO_16_9_CENTRE,
   RGUI_ASPECT_RATIO_16_10,
   RGUI_ASPECT_RATIO_16_10_CENTRE,
   RGUI_ASPECT_RATIO_LAST
};

enum rgui_aspect_ratio_lock
{
   RGUI_ASPECT_RATIO_LOCK_NONE = 0,
   RGUI_ASPECT_RATIO_LOCK_FIT_SCREEN,
   RGUI_ASPECT_RATIO_LOCK_INTEGER,
   RGUI_ASPECT_RATIO_LOCK_LAST
};

enum rgui_particle_animation_effect
{
   RGUI_PARTICLE_EFFECT_NONE = 0,
   RGUI_PARTICLE_EFFECT_SNOW,
   RGUI_PARTICLE_EFFECT_SNOW_ALT,
   RGUI_PARTICLE_EFFECT_RAIN,
   RGUI_PARTICLE_EFFECT_VORTEX,
   RGUI_PARTICLE_EFFECT_STARFIELD,
   RGUI_PARTICLE_EFFECT_LAST
};

enum menu_action
{
   MENU_ACTION_NOOP = 0,
   MENU_ACTION_UP,
   MENU_ACTION_DOWN,
   MENU_ACTION_LEFT,
   MENU_ACTION_RIGHT,
   MENU_ACTION_OK,
   MENU_ACTION_SEARCH,
   MENU_ACTION_SCAN,
   MENU_ACTION_CANCEL,
   MENU_ACTION_INFO,
   MENU_ACTION_SELECT,
   MENU_ACTION_START,
   MENU_ACTION_SCROLL_DOWN,
   MENU_ACTION_SCROLL_UP,
   MENU_ACTION_TOGGLE,
   MENU_ACTION_POINTER_MOVED,
   MENU_ACTION_POINTER_PRESSED
};

enum playlist_sublabel_runtime
{
   PLAYLIST_RUNTIME_PER_CORE = 0,
   PLAYLIST_RUNTIME_AGGREGATE,
   PLAYLIST_RUNTIME_LAST
};

enum playlist_sublabel_last_played_style_type
{
   PLAYLIST_LAST_PLAYED_STYLE_YMD_HMS = 0,
   PLAYLIST_LAST_PLAYED_STYLE_YMD_HM,
   PLAYLIST_LAST_PLAYED_STYLE_MDYYYY,
   PLAYLIST_LAST_PLAYED_STYLE_DM_HM,
   PLAYLIST_LAST_PLAYED_STYLE_MD_HM,
   PLAYLIST_LAST_PLAYED_STYLE_YMD_HMS_AM_PM,
   PLAYLIST_LAST_PLAYED_STYLE_YMD_HM_AM_PM,
   PLAYLIST_LAST_PLAYED_STYLE_MDYYYY_AM_PM,
   PLAYLIST_LAST_PLAYED_STYLE_DM_HM_AM_PM,
   PLAYLIST_LAST_PLAYED_STYLE_MD_HM_AM_PM,
   PLAYLIST_LAST_PLAYED_STYLE_LAST
};

enum playlist_inline_core_display_type
{
   PLAYLIST_INLINE_CORE_DISPLAY_HIST_FAV = 0,
   PLAYLIST_INLINE_CORE_DISPLAY_ALWAYS,
   PLAYLIST_INLINE_CORE_DISPLAY_NEVER,
   PLAYLIST_INLINE_CORE_DISPLAY_LAST
};

enum playlist_entry_remove_enable_type
{
   PLAYLIST_ENTRY_REMOVE_ENABLE_HIST_FAV = 0,
   PLAYLIST_ENTRY_REMOVE_ENABLE_ALL,
   PLAYLIST_ENTRY_REMOVE_ENABLE_NONE,
   PLAYLIST_ENTRY_REMOVE_ENABLE_LAST
};

RETRO_END_DECLS

#endif
