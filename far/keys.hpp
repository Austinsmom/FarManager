#ifndef __FARKEYS_HPP__
#define __FARKEYS_HPP__
#ifndef FAR_USE_INTERNALS
#define FAR_USE_INTERNALS
#endif // END FAR_USE_INTERNALS
#ifdef FAR_USE_INTERNALS
/*
keys.hpp

���������� ��������� ����� ������

��������!
  ����� ��������������, ���� KEY_FOCUS_CHANGED � KEY_CONSOLE_BUFFER_RESIZE
  ��������� ����� KEY_END_FKEY � KEY_END_SKEY
*/
#else // ELSE FAR_USE_INTERNALS
/*
  farkeys.hpp

  Inside KeyName for FAR Manager 1.70

  Copyright (c) 1996-2000 Eugene Roshal
  Copyrigth (c) 2000-2001 FAR group
*/
#endif // END FAR_USE_INTERNALS

/* Revision: 1.18 21.12.2001 $ */

#ifdef FAR_USE_INTERNALS
/*
Modify:
  21.12.2001 SVS
    + KEY_MACROSELWORD, KEY_MSLDBLCLICK, KEY_MSRDBLCLICK
  25.10.2001 SVS
    + KEY_ALTSHIFTBRACKET, KEY_ALTSHIFTBACKBRACKET, KEY_CTRLALTBRACKET
      KEY_CTRLALTBACKBRACKET
  09.08.2001 SVS
    + ������� ��� FAR_USE_INTERNALS. ������� �� �������! ��� ��� �������,
      ������� ����� �������� ����������� ���� ��� ������������. ���� �����
      ��������� ��� ���� �� �������� ������� - ��������� ��� � ����� "������":
      1 # ifdef FAR_USE_INTERNALS
      2   ��, ��� ������ ���� ������
      3 # else // ELSE FAR_USE_INTERNALS
      4   ������!
      5 # endif // END FAR_USE_INTERNALS
  10.07.2001 SVS
    + KEY_MACROXLAT - ��� �������� ��� ����� $XLat
  22.06.2001 SVS
    ! �������� KEY_MACRO* (��� ����) - �������� �� ���� - KEY_MACRODATE
  23.05.2001 SVS
    ! KEY_FOCUS_CHANGED � KEY_CONSOLE_BUFFER_RESIZE ���������� ����
      KEY_END_FKEY
  17.05.2001 OT
    + KEY_CONSOLE_BUFFER_RESIZE - ��������� ������ �������.
  28.04.2001 VVM
    + KEY_FOCUS_CHANGED - ���������� ��� ���������/������ ������ �����.
  26.04.2001 VVM
    + KEY_MSWHEEL_UP/KEY_MSWHEEL_DOWN - ��� ������ �����.
  25.04.2001 SVS
    + KEY_MEDIT_ISSELECTED, � ����� �� ������� Editor::ProcessKey ����������
      TRUE - ���� ���� ���������� ���� ��� FALSE - ����� ����.
  17.01.2001 SVS
    + KEY_COLON = ':'
    ! ����� ��������� (�� ������ ������).
  04.01.2001 SVS
    ! ������ ��������� ��������� :-)
  26.12.2000 SVS
    + KEY_MACRO_BASE - ��� ��������. �������������� �������� ��������:
      KEY_DTDAY   -> KEY_MACRODAY
      KEY_DTMONTH -> KEY_MACROMONTH
      KEY_DTYEAR  -> KEY_MACROYEAR
      END_FARKEY_BASE - ������ ��� ������ :-)
      �.�. KEY_LAST_BASE - ��� ��� ������������ �������������, �
        END_FARKEY_BASE - ��� �������� ������ :-)
  21.12.2000 SVS
    + 3 �������������� ��� ��������: KEY_DTDAY, KEY_DTMONTH, KEY_DTYEAR
      �.�. ������� ����, �����, ���. ��� ���, � �������� ���������
      ����������.
  30.10.2000 SVS
    - ���������... :-)
  08.09.2000 SVS
    ! ���������� ������ � ��������� ����� ������.
  24.08.2000 SVS
    + KEY_CTRLALTSHIFTPRESS, KEY_CTRLALTSHIFTRELEASE :-)
  23.07.2000 SVS
    + �������:
       Ctrl- Shift- Alt- CtrlShift- AltShift- CtrlAlt- Apps :-)
       KEY_LWIN (VK_LWIN), KEY_RWIN (VK_RWIN)
  25.06.2000 SVS
    ! ���������� Master Copy
    ! ��������� � �������� ���������������� ������
*/
/*
HiWord
~~~~~~
  HiByte - Shift State
  LoByte - Spec Keys
             +
LoWord
~~~~~~
  HiByte - Func Keys
  LoByte - ASCII Code

*/
#endif // END FAR_USE_INTERNALS

enum BaseDefKeyboard
{
  KEY_CTRL                 =0x01000000,
  KEY_ALT                  =0x02000000,
  KEY_SHIFT                =0x04000000,
  KEY_RCTRL                =0x10000000,
  KEY_RALT                 =0x20000000,

  KEY_BRACKET              ='[',
  KEY_BACKBRACKET          =']',
  KEY_COMMA                =',',
  KEY_QUOTE                ='"',
  KEY_DOT                  ='.',
  KEY_SLASH                ='/',
  KEY_COLON                =':',
  KEY_BACKSLASH            ='\\',

  KEY_BS                   =0x00000008,
  KEY_TAB                  =0x00000009,
  KEY_ENTER                =0x0000000D,
  KEY_ESC                  =0x0000001B,
  KEY_SPACE                =0x00000020,

  KEY_MASKF                =0x00000FFF,

  KEY_BREAK                =0x00000103,

  KEY_PGUP                 =0x00000121,
  KEY_PGDN                 =0x00000122,
  KEY_END                  =0x00000123,
  KEY_HOME                 =0x00000124,
  KEY_LEFT                 =0x00000125,
  KEY_UP                   =0x00000126,
  KEY_RIGHT                =0x00000127,
  KEY_DOWN                 =0x00000128,
  KEY_INS                  =0x0000012D,
  KEY_DEL                  =0x0000012E,

  KEY_LWIN                 =0x0000015B,
  KEY_RWIN                 =0x0000015C,
  KEY_APPS                 =0x0000015D,

  KEY_NUMPAD5              =0x00000165,
  KEY_CLEAR                =KEY_NUMPAD5,

  KEY_MULTIPLY             =0x0000016A,
  KEY_ADD                  =0x0000016B,
  KEY_SUBTRACT             =0x0000016D,
  KEY_DIVIDE               =0x0000016F,

  KEY_F1                   =0x00000170,
  KEY_F2                   =0x00000171,
  KEY_F3                   =0x00000172,
  KEY_F4                   =0x00000173,
  KEY_F5                   =0x00000174,
  KEY_F6                   =0x00000175,
  KEY_F7                   =0x00000176,
  KEY_F8                   =0x00000177,
  KEY_F9                   =0x00000178,
  KEY_F10                  =0x00000179,
  KEY_F11                  =0x0000017A,
  KEY_F12                  =0x0000017B,

  KEY_CTRLALTSHIFTPRESS    =0x00000201,
  KEY_CTRLALTSHIFTRELEASE  =0x00000202,

  KEY_MSWHEEL_UP           =0x00000203,
  KEY_MSWHEEL_DOWN         =0x00000204,
#ifdef FAR_USE_INTERNALS
#if defined(MOUSEKEY)
  KEY_MSLDBLCLICK          =0x00000205,
  KEY_MSRDBLCLICK          =0x00000206,
#endif
#endif

  KEY_END_FKEY             =0x00000FFF,

  KEY_NONE                 =0x00001001,
  KEY_IDLE                 =0x00001002,
#ifdef FAR_USE_INTERNALS
  KEY_DRAGCOPY             =0x00001003,
  KEY_DRAGMOVE             =0x00001004,
  KEY_LOCKSCREEN           =0x00001005,

  KEY_FOCUS_CHANGED        =0x00001006,
  KEY_CONSOLE_BUFFER_RESIZE=0x00001007,
#endif // END FAR_USE_INTERNALS
  KEY_END_SKEY             =0x0000FFFF,
  KEY_LAST_BASE            =KEY_END_SKEY,
#ifdef FAR_USE_INTERNALS
  // ���� ������ ���������� �����-�������, ������� �������� � ������ �������
  KEY_MACRO_BASE           =0x00800000,
  //
  KEY_MACRODATE,
  KEY_MACROXLAT,

  KEY_MEDIT_ISSELECTED,

#if defined(MOUSEKEY)
  KEY_MACROSELWORD,
#endif

  KEY_MACROSPEC_BASE       =0x00C00000,
  // ������ ���������� ���� ������������������ �����-�����,
  // ����������� � macro.cpp
#endif // END FAR_USE_INTERNALS
};

enum AddDefKeyboard
{
  KEY_CTRLSHIFT            =KEY_CTRL|KEY_SHIFT,
  KEY_ALTSHIFT             =KEY_ALT|KEY_SHIFT,
  KEY_CTRLALT              =KEY_CTRL|KEY_ALT,

  KEY_CTRL0                =KEY_CTRL+'0',
  KEY_CTRL1                =KEY_CTRL+'1',
  KEY_CTRL2                =KEY_CTRL+'2',
  KEY_CTRL3                =KEY_CTRL+'3',
  KEY_CTRL4                =KEY_CTRL+'4',
  KEY_CTRL5                =KEY_CTRL+'5',
  KEY_CTRL6                =KEY_CTRL+'6',
  KEY_CTRL7                =KEY_CTRL+'7',
  KEY_CTRL8                =KEY_CTRL+'8',
  KEY_CTRL9                =KEY_CTRL+'9',

  KEY_RCTRL0               =KEY_RCTRL+'0',
  KEY_RCTRL1               =KEY_RCTRL+'1',
  KEY_RCTRL2               =KEY_RCTRL+'2',
  KEY_RCTRL3               =KEY_RCTRL+'3',
  KEY_RCTRL4               =KEY_RCTRL+'4',
  KEY_RCTRL5               =KEY_RCTRL+'5',
  KEY_RCTRL6               =KEY_RCTRL+'6',
  KEY_RCTRL7               =KEY_RCTRL+'7',
  KEY_RCTRL8               =KEY_RCTRL+'8',
  KEY_RCTRL9               =KEY_RCTRL+'9',

  KEY_CTRLA                =KEY_CTRL+'A',
  KEY_CTRLB                =KEY_CTRL+'B',
  KEY_CTRLC                =KEY_CTRL+'C',
  KEY_CTRLD                =KEY_CTRL+'D',
  KEY_CTRLE                =KEY_CTRL+'E',
  KEY_CTRLF                =KEY_CTRL+'F',
  KEY_CTRLG                =KEY_CTRL+'G',
  KEY_CTRLH                =KEY_CTRL+'H',
  KEY_CTRLI                =KEY_CTRL+'I',
  KEY_CTRLJ                =KEY_CTRL+'J',
  KEY_CTRLK                =KEY_CTRL+'K',
  KEY_CTRLL                =KEY_CTRL+'L',
  KEY_CTRLM                =KEY_CTRL+'M',
  KEY_CTRLN                =KEY_CTRL+'N',
  KEY_CTRLO                =KEY_CTRL+'O',
  KEY_CTRLP                =KEY_CTRL+'P',
  KEY_CTRLQ                =KEY_CTRL+'Q',
  KEY_CTRLR                =KEY_CTRL+'R',
  KEY_CTRLS                =KEY_CTRL+'S',
  KEY_CTRLT                =KEY_CTRL+'T',
  KEY_CTRLU                =KEY_CTRL+'U',
  KEY_CTRLV                =KEY_CTRL+'V',
  KEY_CTRLW                =KEY_CTRL+'W',
  KEY_CTRLX                =KEY_CTRL+'X',
  KEY_CTRLY                =KEY_CTRL+'Y',
  KEY_CTRLZ                =KEY_CTRL+'Z',

  KEY_CTRLBRACKET          =KEY_CTRL|KEY_BRACKET,
  KEY_CTRLBACKBRACKET      =KEY_CTRL|KEY_BACKBRACKET,
  KEY_CTRLCOMMA            =KEY_CTRL|KEY_COMMA,
  KEY_CTRLQUOTE            =KEY_CTRL|KEY_QUOTE,
  KEY_CTRLDOT              =KEY_CTRL|KEY_DOT,

  KEY_ALT0                 =KEY_ALT+'0',
  KEY_ALT1                 =KEY_ALT+'1',
  KEY_ALT2                 =KEY_ALT+'2',
  KEY_ALT3                 =KEY_ALT+'3',
  KEY_ALT4                 =KEY_ALT+'4',
  KEY_ALT5                 =KEY_ALT+'5',
  KEY_ALT6                 =KEY_ALT+'6',
  KEY_ALT7                 =KEY_ALT+'7',
  KEY_ALT8                 =KEY_ALT+'8',
  KEY_ALT9                 =KEY_ALT+'9',

  KEY_ALTADD               =KEY_ALT|KEY_ADD,
  KEY_ALTDOT               =KEY_ALT|KEY_DOT,
  KEY_ALTCOMMA             =KEY_ALT|KEY_COMMA,
  KEY_ALTMULTIPLY          =KEY_ALT|KEY_MULTIPLY,

  KEY_ALTA                 =KEY_ALT+'A',
  KEY_ALTB                 =KEY_ALT+'B',
  KEY_ALTC                 =KEY_ALT+'C',
  KEY_ALTD                 =KEY_ALT+'D',
  KEY_ALTE                 =KEY_ALT+'E',
  KEY_ALTF                 =KEY_ALT+'F',
  KEY_ALTG                 =KEY_ALT+'G',
  KEY_ALTH                 =KEY_ALT+'H',
  KEY_ALTI                 =KEY_ALT+'I',
  KEY_ALTJ                 =KEY_ALT+'J',
  KEY_ALTK                 =KEY_ALT+'K',
  KEY_ALTL                 =KEY_ALT+'L',
  KEY_ALTM                 =KEY_ALT+'M',
  KEY_ALTN                 =KEY_ALT+'N',
  KEY_ALTO                 =KEY_ALT+'O',
  KEY_ALTP                 =KEY_ALT+'P',
  KEY_ALTQ                 =KEY_ALT+'Q',
  KEY_ALTR                 =KEY_ALT+'R',
  KEY_ALTS                 =KEY_ALT+'S',
  KEY_ALTT                 =KEY_ALT+'T',
  KEY_ALTU                 =KEY_ALT+'U',
  KEY_ALTV                 =KEY_ALT+'V',
  KEY_ALTW                 =KEY_ALT+'W',
  KEY_ALTX                 =KEY_ALT+'X',
  KEY_ALTY                 =KEY_ALT+'Y',
  KEY_ALTZ                 =KEY_ALT+'Z',

  KEY_CTRLSHIFTADD         =KEY_CTRL|KEY_SHIFT|KEY_ADD,
  KEY_CTRLSHIFTSUBTRACT    =KEY_CTRL|KEY_SHIFT|KEY_SUBTRACT,
  KEY_CTRLSHIFTDOT         =KEY_CTRL|KEY_SHIFT|KEY_DOT,
  KEY_CTRLSHIFTSLASH       =KEY_CTRL|KEY_SHIFT|KEY_SLASH,

  KEY_CTRLSHIFT0           =KEY_CTRL|KEY_SHIFT+'0',
  KEY_CTRLSHIFT1           =KEY_CTRL|KEY_SHIFT+'1',
  KEY_CTRLSHIFT2           =KEY_CTRL|KEY_SHIFT+'2',
  KEY_CTRLSHIFT3           =KEY_CTRL|KEY_SHIFT+'3',
  KEY_CTRLSHIFT4           =KEY_CTRL|KEY_SHIFT+'4',
  KEY_CTRLSHIFT5           =KEY_CTRL|KEY_SHIFT+'5',
  KEY_CTRLSHIFT6           =KEY_CTRL|KEY_SHIFT+'6',
  KEY_CTRLSHIFT7           =KEY_CTRL|KEY_SHIFT+'7',
  KEY_CTRLSHIFT8           =KEY_CTRL|KEY_SHIFT+'8',
  KEY_CTRLSHIFT9           =KEY_CTRL|KEY_SHIFT+'9',

  KEY_RCTRLSHIFT0          =KEY_RCTRL+KEY_SHIFT+'0',
  KEY_RCTRLSHIFT1          =KEY_RCTRL+KEY_SHIFT+'1',
  KEY_RCTRLSHIFT2          =KEY_RCTRL+KEY_SHIFT+'2',
  KEY_RCTRLSHIFT3          =KEY_RCTRL+KEY_SHIFT+'3',
  KEY_RCTRLSHIFT4          =KEY_RCTRL+KEY_SHIFT+'4',
  KEY_RCTRLSHIFT5          =KEY_RCTRL+KEY_SHIFT+'5',
  KEY_RCTRLSHIFT6          =KEY_RCTRL+KEY_SHIFT+'6',
  KEY_RCTRLSHIFT7          =KEY_RCTRL+KEY_SHIFT+'7',
  KEY_RCTRLSHIFT8          =KEY_RCTRL+KEY_SHIFT+'8',
  KEY_RCTRLSHIFT9          =KEY_RCTRL+KEY_SHIFT+'9',

  KEY_CTRLSHIFTA           =KEY_CTRL|KEY_SHIFT+'A',
  KEY_CTRLSHIFTB           =KEY_CTRL|KEY_SHIFT+'B',
  KEY_CTRLSHIFTC           =KEY_CTRL|KEY_SHIFT+'C',
  KEY_CTRLSHIFTD           =KEY_CTRL|KEY_SHIFT+'D',
  KEY_CTRLSHIFTE           =KEY_CTRL|KEY_SHIFT+'E',
  KEY_CTRLSHIFTF           =KEY_CTRL|KEY_SHIFT+'F',
  KEY_CTRLSHIFTG           =KEY_CTRL|KEY_SHIFT+'G',
  KEY_CTRLSHIFTH           =KEY_CTRL|KEY_SHIFT+'H',
  KEY_CTRLSHIFTI           =KEY_CTRL|KEY_SHIFT+'I',
  KEY_CTRLSHIFTJ           =KEY_CTRL|KEY_SHIFT+'J',
  KEY_CTRLSHIFTK           =KEY_CTRL|KEY_SHIFT+'K',
  KEY_CTRLSHIFTL           =KEY_CTRL|KEY_SHIFT+'L',
  KEY_CTRLSHIFTM           =KEY_CTRL|KEY_SHIFT+'M',
  KEY_CTRLSHIFTN           =KEY_CTRL|KEY_SHIFT+'N',
  KEY_CTRLSHIFTO           =KEY_CTRL|KEY_SHIFT+'O',
  KEY_CTRLSHIFTP           =KEY_CTRL|KEY_SHIFT+'P',
  KEY_CTRLSHIFTQ           =KEY_CTRL|KEY_SHIFT+'Q',
  KEY_CTRLSHIFTR           =KEY_CTRL|KEY_SHIFT+'R',
  KEY_CTRLSHIFTS           =KEY_CTRL|KEY_SHIFT+'S',
  KEY_CTRLSHIFTT           =KEY_CTRL|KEY_SHIFT+'T',
  KEY_CTRLSHIFTU           =KEY_CTRL|KEY_SHIFT+'U',
  KEY_CTRLSHIFTV           =KEY_CTRL|KEY_SHIFT+'V',
  KEY_CTRLSHIFTW           =KEY_CTRL|KEY_SHIFT+'W',
  KEY_CTRLSHIFTX           =KEY_CTRL|KEY_SHIFT+'X',
  KEY_CTRLSHIFTY           =KEY_CTRL|KEY_SHIFT+'Y',
  KEY_CTRLSHIFTZ           =KEY_CTRL|KEY_SHIFT+'Z',

  KEY_CTRLSHIFTBRACKET     =KEY_CTRL|KEY_SHIFT|KEY_BRACKET,
  KEY_CTRLSHIFTBACKSLASH   =KEY_CTRL|KEY_SHIFT|KEY_BACKSLASH,
  KEY_CTRLSHIFTBACKBRACKET =KEY_CTRL|KEY_SHIFT|KEY_BACKBRACKET,

  KEY_ALTSHIFT0            =KEY_ALT|KEY_SHIFT+'0',
  KEY_ALTSHIFT1            =KEY_ALT|KEY_SHIFT+'1',
  KEY_ALTSHIFT2            =KEY_ALT|KEY_SHIFT+'2',
  KEY_ALTSHIFT3            =KEY_ALT|KEY_SHIFT+'3',
  KEY_ALTSHIFT4            =KEY_ALT|KEY_SHIFT+'4',
  KEY_ALTSHIFT5            =KEY_ALT|KEY_SHIFT+'5',
  KEY_ALTSHIFT6            =KEY_ALT|KEY_SHIFT+'6',
  KEY_ALTSHIFT7            =KEY_ALT|KEY_SHIFT+'7',
  KEY_ALTSHIFT8            =KEY_ALT|KEY_SHIFT+'8',
  KEY_ALTSHIFT9            =KEY_ALT|KEY_SHIFT+'9',

  KEY_ALTSHIFTA            =KEY_ALT|KEY_SHIFT+'A',
  KEY_ALTSHIFTB            =KEY_ALT|KEY_SHIFT+'B',
  KEY_ALTSHIFTC            =KEY_ALT|KEY_SHIFT+'C',
  KEY_ALTSHIFTD            =KEY_ALT|KEY_SHIFT+'D',
  KEY_ALTSHIFTE            =KEY_ALT|KEY_SHIFT+'E',
  KEY_ALTSHIFTF            =KEY_ALT|KEY_SHIFT+'F',
  KEY_ALTSHIFTG            =KEY_ALT|KEY_SHIFT+'G',
  KEY_ALTSHIFTH            =KEY_ALT|KEY_SHIFT+'H',
  KEY_ALTSHIFTI            =KEY_ALT|KEY_SHIFT+'I',
  KEY_ALTSHIFTJ            =KEY_ALT|KEY_SHIFT+'J',
  KEY_ALTSHIFTK            =KEY_ALT|KEY_SHIFT+'K',
  KEY_ALTSHIFTL            =KEY_ALT|KEY_SHIFT+'L',
  KEY_ALTSHIFTM            =KEY_ALT|KEY_SHIFT+'M',
  KEY_ALTSHIFTN            =KEY_ALT|KEY_SHIFT+'N',
  KEY_ALTSHIFTO            =KEY_ALT|KEY_SHIFT+'O',
  KEY_ALTSHIFTP            =KEY_ALT|KEY_SHIFT+'P',
  KEY_ALTSHIFTQ            =KEY_ALT|KEY_SHIFT+'Q',
  KEY_ALTSHIFTR            =KEY_ALT|KEY_SHIFT+'R',
  KEY_ALTSHIFTS            =KEY_ALT|KEY_SHIFT+'S',
  KEY_ALTSHIFTT            =KEY_ALT|KEY_SHIFT+'T',
  KEY_ALTSHIFTU            =KEY_ALT|KEY_SHIFT+'U',
  KEY_ALTSHIFTV            =KEY_ALT|KEY_SHIFT+'V',
  KEY_ALTSHIFTW            =KEY_ALT|KEY_SHIFT+'W',
  KEY_ALTSHIFTX            =KEY_ALT|KEY_SHIFT+'X',
  KEY_ALTSHIFTY            =KEY_ALT|KEY_SHIFT+'Y',
  KEY_ALTSHIFTZ            =KEY_ALT|KEY_SHIFT+'Z',

  KEY_ALTSHIFTBRACKET      =KEY_ALT|KEY_SHIFT|KEY_BRACKET,
  KEY_ALTSHIFTBACKBRACKET  =KEY_ALT|KEY_SHIFT|KEY_BACKBRACKET,

  KEY_CTRLALT0             =KEY_CTRL|KEY_ALT+'0',
  KEY_CTRLALT1             =KEY_CTRL|KEY_ALT+'1',
  KEY_CTRLALT2             =KEY_CTRL|KEY_ALT+'2',
  KEY_CTRLALT3             =KEY_CTRL|KEY_ALT+'3',
  KEY_CTRLALT4             =KEY_CTRL|KEY_ALT+'4',
  KEY_CTRLALT5             =KEY_CTRL|KEY_ALT+'5',
  KEY_CTRLALT6             =KEY_CTRL|KEY_ALT+'6',
  KEY_CTRLALT7             =KEY_CTRL|KEY_ALT+'7',
  KEY_CTRLALT8             =KEY_CTRL|KEY_ALT+'8',
  KEY_CTRLALT9             =KEY_CTRL|KEY_ALT+'9',

  KEY_CTRLALTA             =KEY_CTRL|KEY_ALT+'A',
  KEY_CTRLALTB             =KEY_CTRL|KEY_ALT+'B',
  KEY_CTRLALTC             =KEY_CTRL|KEY_ALT+'C',
  KEY_CTRLALTD             =KEY_CTRL|KEY_ALT+'D',
  KEY_CTRLALTE             =KEY_CTRL|KEY_ALT+'E',
  KEY_CTRLALTF             =KEY_CTRL|KEY_ALT+'F',
  KEY_CTRLALTG             =KEY_CTRL|KEY_ALT+'G',
  KEY_CTRLALTH             =KEY_CTRL|KEY_ALT+'H',
  KEY_CTRLALTI             =KEY_CTRL|KEY_ALT+'I',
  KEY_CTRLALTJ             =KEY_CTRL|KEY_ALT+'J',
  KEY_CTRLALTK             =KEY_CTRL|KEY_ALT+'K',
  KEY_CTRLALTL             =KEY_CTRL|KEY_ALT+'L',
  KEY_CTRLALTM             =KEY_CTRL|KEY_ALT+'M',
  KEY_CTRLALTN             =KEY_CTRL|KEY_ALT+'N',
  KEY_CTRLALTO             =KEY_CTRL|KEY_ALT+'O',
  KEY_CTRLALTP             =KEY_CTRL|KEY_ALT+'P',
  KEY_CTRLALTQ             =KEY_CTRL|KEY_ALT+'Q',
  KEY_CTRLALTR             =KEY_CTRL|KEY_ALT+'R',
  KEY_CTRLALTS             =KEY_CTRL|KEY_ALT+'S',
  KEY_CTRLALTT             =KEY_CTRL|KEY_ALT+'T',
  KEY_CTRLALTU             =KEY_CTRL|KEY_ALT+'U',
  KEY_CTRLALTV             =KEY_CTRL|KEY_ALT+'V',
  KEY_CTRLALTW             =KEY_CTRL|KEY_ALT+'W',
  KEY_CTRLALTX             =KEY_CTRL|KEY_ALT+'X',
  KEY_CTRLALTY             =KEY_CTRL|KEY_ALT+'Y',
  KEY_CTRLALTZ             =KEY_CTRL|KEY_ALT+'Z',

  KEY_CTRLALTBRACKET       =KEY_CTRL|KEY_ALT|KEY_BRACKET,
  KEY_CTRLALTBACKBRACKET   =KEY_CTRL|KEY_ALT|KEY_BACKBRACKET,

  KEY_CTRLF1               =KEY_CTRL|KEY_F1,
  KEY_CTRLF2               =KEY_CTRL|KEY_F2,
  KEY_CTRLF3               =KEY_CTRL|KEY_F3,
  KEY_CTRLF4               =KEY_CTRL|KEY_F4,
  KEY_CTRLF5               =KEY_CTRL|KEY_F5,
  KEY_CTRLF6               =KEY_CTRL|KEY_F6,
  KEY_CTRLF7               =KEY_CTRL|KEY_F7,
  KEY_CTRLF8               =KEY_CTRL|KEY_F8,
  KEY_CTRLF9               =KEY_CTRL|KEY_F9,
  KEY_CTRLF10              =KEY_CTRL|KEY_F10,
  KEY_CTRLF11              =KEY_CTRL|KEY_F11,
  KEY_CTRLF12              =KEY_CTRL|KEY_F12,

  KEY_SHIFTF1              =KEY_SHIFT|KEY_F1,
  KEY_SHIFTF2              =KEY_SHIFT|KEY_F2,
  KEY_SHIFTF3              =KEY_SHIFT|KEY_F3,
  KEY_SHIFTF4              =KEY_SHIFT|KEY_F4,
  KEY_SHIFTF5              =KEY_SHIFT|KEY_F5,
  KEY_SHIFTF6              =KEY_SHIFT|KEY_F6,
  KEY_SHIFTF7              =KEY_SHIFT|KEY_F7,
  KEY_SHIFTF8              =KEY_SHIFT|KEY_F8,
  KEY_SHIFTF9              =KEY_SHIFT|KEY_F9,
  KEY_SHIFTF10             =KEY_SHIFT|KEY_F10,
  KEY_SHIFTF11             =KEY_SHIFT|KEY_F11,
  KEY_SHIFTF12             =KEY_SHIFT|KEY_F12,

  KEY_ALTF1                =KEY_ALT|KEY_F1,
  KEY_ALTF2                =KEY_ALT|KEY_F2,
  KEY_ALTF3                =KEY_ALT|KEY_F3,
  KEY_ALTF4                =KEY_ALT|KEY_F4,
  KEY_ALTF5                =KEY_ALT|KEY_F5,
  KEY_ALTF6                =KEY_ALT|KEY_F6,
  KEY_ALTF7                =KEY_ALT|KEY_F7,
  KEY_ALTF8                =KEY_ALT|KEY_F8,
  KEY_ALTF9                =KEY_ALT|KEY_F9,
  KEY_ALTF10               =KEY_ALT|KEY_F10,
  KEY_ALTF11               =KEY_ALT|KEY_F11,
  KEY_ALTF12               =KEY_ALT|KEY_F12,

  KEY_CTRLSHIFTF1          =KEY_CTRL|KEY_SHIFT|KEY_F1,
  KEY_CTRLSHIFTF2          =KEY_CTRL|KEY_SHIFT|KEY_F2,
  KEY_CTRLSHIFTF3          =KEY_CTRL|KEY_SHIFT|KEY_F3,
  KEY_CTRLSHIFTF4          =KEY_CTRL|KEY_SHIFT|KEY_F4,
  KEY_CTRLSHIFTF5          =KEY_CTRL|KEY_SHIFT|KEY_F5,
  KEY_CTRLSHIFTF6          =KEY_CTRL|KEY_SHIFT|KEY_F6,
  KEY_CTRLSHIFTF7          =KEY_CTRL|KEY_SHIFT|KEY_F7,
  KEY_CTRLSHIFTF8          =KEY_CTRL|KEY_SHIFT|KEY_F8,
  KEY_CTRLSHIFTF9          =KEY_CTRL|KEY_SHIFT|KEY_F9,
  KEY_CTRLSHIFTF10         =KEY_CTRL|KEY_SHIFT|KEY_F10,
  KEY_CTRLSHIFTF11         =KEY_CTRL|KEY_SHIFT|KEY_F11,
  KEY_CTRLSHIFTF12         =KEY_CTRL|KEY_SHIFT|KEY_F12,

  KEY_ALTSHIFTF1           =KEY_ALT|KEY_SHIFT|KEY_F1,
  KEY_ALTSHIFTF2           =KEY_ALT|KEY_SHIFT|KEY_F2,
  KEY_ALTSHIFTF3           =KEY_ALT|KEY_SHIFT|KEY_F3,
  KEY_ALTSHIFTF4           =KEY_ALT|KEY_SHIFT|KEY_F4,
  KEY_ALTSHIFTF5           =KEY_ALT|KEY_SHIFT|KEY_F5,
  KEY_ALTSHIFTF6           =KEY_ALT|KEY_SHIFT|KEY_F6,
  KEY_ALTSHIFTF7           =KEY_ALT|KEY_SHIFT|KEY_F7,
  KEY_ALTSHIFTF8           =KEY_ALT|KEY_SHIFT|KEY_F8,
  KEY_ALTSHIFTF9           =KEY_ALT|KEY_SHIFT|KEY_F9,
  KEY_ALTSHIFTF10          =KEY_ALT|KEY_SHIFT|KEY_F10,
  KEY_ALTSHIFTF11          =KEY_ALT|KEY_SHIFT|KEY_F11,
  KEY_ALTSHIFTF12          =KEY_ALT|KEY_SHIFT|KEY_F12,

  KEY_CTRLALTF1            =KEY_CTRL|KEY_ALT|KEY_F1,
  KEY_CTRLALTF2            =KEY_CTRL|KEY_ALT|KEY_F2,
  KEY_CTRLALTF3            =KEY_CTRL|KEY_ALT|KEY_F3,
  KEY_CTRLALTF4            =KEY_CTRL|KEY_ALT|KEY_F4,
  KEY_CTRLALTF5            =KEY_CTRL|KEY_ALT|KEY_F5,
  KEY_CTRLALTF6            =KEY_CTRL|KEY_ALT|KEY_F6,
  KEY_CTRLALTF7            =KEY_CTRL|KEY_ALT|KEY_F7,
  KEY_CTRLALTF8            =KEY_CTRL|KEY_ALT|KEY_F8,
  KEY_CTRLALTF9            =KEY_CTRL|KEY_ALT|KEY_F9,
  KEY_CTRLALTF10           =KEY_CTRL|KEY_ALT|KEY_F10,
  KEY_CTRLALTF11           =KEY_CTRL|KEY_ALT|KEY_F11,
  KEY_CTRLALTF12           =KEY_CTRL|KEY_ALT|KEY_F12,

  KEY_CTRLHOME             =KEY_CTRL|KEY_HOME,
  KEY_CTRLUP               =KEY_CTRL|KEY_UP,
  KEY_CTRLPGUP             =KEY_CTRL|KEY_PGUP,
  KEY_CTRLLEFT             =KEY_CTRL|KEY_LEFT,
  KEY_CTRLRIGHT            =KEY_CTRL|KEY_RIGHT,
  KEY_CTRLEND              =KEY_CTRL|KEY_END,
  KEY_CTRLDOWN             =KEY_CTRL|KEY_DOWN,
  KEY_CTRLPGDN             =KEY_CTRL|KEY_PGDN,
  KEY_CTRLINS              =KEY_CTRL|KEY_INS,
  KEY_CTRLDEL              =KEY_CTRL|KEY_DEL,

  KEY_SHIFTHOME            =KEY_SHIFT|KEY_HOME,
  KEY_SHIFTUP              =KEY_SHIFT|KEY_UP,
  KEY_SHIFTPGUP            =KEY_SHIFT|KEY_PGUP,
  KEY_SHIFTLEFT            =KEY_SHIFT|KEY_LEFT,
  KEY_SHIFTRIGHT           =KEY_SHIFT|KEY_RIGHT,
  KEY_SHIFTEND             =KEY_SHIFT|KEY_END,
  KEY_SHIFTDOWN            =KEY_SHIFT|KEY_DOWN,
  KEY_SHIFTPGDN            =KEY_SHIFT|KEY_PGDN,
  KEY_SHIFTINS             =KEY_SHIFT|KEY_INS,
  KEY_SHIFTDEL             =KEY_SHIFT|KEY_DEL,

  KEY_ALTHOME              =KEY_ALT|KEY_HOME,
  KEY_ALTUP                =KEY_ALT|KEY_UP,
  KEY_ALTPGUP              =KEY_ALT|KEY_PGUP,
  KEY_ALTLEFT              =KEY_ALT|KEY_LEFT,
  KEY_ALTRIGHT             =KEY_ALT|KEY_RIGHT,
  KEY_ALTEND               =KEY_ALT|KEY_END,
  KEY_ALTDOWN              =KEY_ALT|KEY_DOWN,
  KEY_ALTPGDN              =KEY_ALT|KEY_PGDN,
  KEY_ALTINS               =KEY_ALT|KEY_INS,
  KEY_ALTDEL               =KEY_ALT|KEY_DEL,

  KEY_CTRLSHIFTHOME        =KEY_CTRL|KEY_SHIFT|KEY_HOME,
  KEY_CTRLSHIFTUP          =KEY_CTRL|KEY_SHIFT|KEY_UP,
  KEY_CTRLSHIFTPGUP        =KEY_CTRL|KEY_SHIFT|KEY_PGUP,
  KEY_CTRLSHIFTLEFT        =KEY_CTRL|KEY_SHIFT|KEY_LEFT,
  KEY_CTRLSHIFTRIGHT       =KEY_CTRL|KEY_SHIFT|KEY_RIGHT,
  KEY_CTRLSHIFTEND         =KEY_CTRL|KEY_SHIFT|KEY_END,
  KEY_CTRLSHIFTDOWN        =KEY_CTRL|KEY_SHIFT|KEY_DOWN,
  KEY_CTRLSHIFTPGDN        =KEY_CTRL|KEY_SHIFT|KEY_PGDN,
  KEY_CTRLSHIFTINS         =KEY_CTRL|KEY_SHIFT|KEY_INS,
  KEY_CTRLSHIFTDEL         =KEY_CTRL|KEY_SHIFT|KEY_DEL,

  KEY_ALTSHIFTHOME         =KEY_ALT|KEY_SHIFT|KEY_HOME,
  KEY_ALTSHIFTUP           =KEY_ALT|KEY_SHIFT|KEY_UP,
  KEY_ALTSHIFTPGUP         =KEY_ALT|KEY_SHIFT|KEY_PGUP,
  KEY_ALTSHIFTLEFT         =KEY_ALT|KEY_SHIFT|KEY_LEFT,
  KEY_ALTSHIFTRIGHT        =KEY_ALT|KEY_SHIFT|KEY_RIGHT,
  KEY_ALTSHIFTEND          =KEY_ALT|KEY_SHIFT|KEY_END,
  KEY_ALTSHIFTDOWN         =KEY_ALT|KEY_SHIFT|KEY_DOWN,
  KEY_ALTSHIFTPGDN         =KEY_ALT|KEY_SHIFT|KEY_PGDN,
  KEY_ALTSHIFTINS          =KEY_ALT|KEY_SHIFT|KEY_INS,
  KEY_ALTSHIFTDEL          =KEY_ALT|KEY_SHIFT|KEY_DEL,

  KEY_CTRLALTHOME          =KEY_CTRL|KEY_ALT|KEY_HOME,
  KEY_CTRLALTUP            =KEY_CTRL|KEY_ALT|KEY_UP,
  KEY_CTRLALTPGUP          =KEY_CTRL|KEY_ALT|KEY_PGUP,
  KEY_CTRLALTLEFT          =KEY_CTRL|KEY_ALT|KEY_LEFT,
  KEY_CTRLALTRIGHT         =KEY_CTRL|KEY_ALT|KEY_RIGHT,
  KEY_CTRLALTEND           =KEY_CTRL|KEY_ALT|KEY_END,
  KEY_CTRLALTDOWN          =KEY_CTRL|KEY_ALT|KEY_DOWN,
  KEY_CTRLALTPGDN          =KEY_CTRL|KEY_ALT|KEY_PGDN,
  KEY_CTRLALTINS           =KEY_CTRL|KEY_ALT|KEY_INS,

  KEY_CTRLSLASH            =KEY_CTRL|KEY_SLASH,
  KEY_CTRLBACKSLASH        =KEY_CTRL|KEY_BACKSLASH,
  KEY_CTRLCLEAR            =KEY_CTRL|KEY_CLEAR,
  KEY_CTRLADD              =KEY_CTRL|KEY_ADD,
  KEY_SHIFTADD             =KEY_SHIFT|KEY_ADD,

  KEY_CTRLSUBTRACT         =KEY_CTRL|KEY_SUBTRACT,
  KEY_ALTSUBTRACT          =KEY_ALT|KEY_SUBTRACT,
  KEY_SHIFTSUBTRACT        =KEY_SHIFT|KEY_SUBTRACT,
  KEY_CTRLMULTIPLY         =KEY_CTRL|KEY_MULTIPLY,

  KEY_CTRLBS               =KEY_CTRL|KEY_BS,
  KEY_ALTBS                =KEY_ALT|KEY_BS,
  KEY_CTRLSHIFTBS          =KEY_CTRL|KEY_SHIFT|KEY_BS,
  KEY_SHIFTBS              =KEY_SHIFT|KEY_BS,

  KEY_CTRLSHIFTTAB         =KEY_CTRL|KEY_SHIFT|KEY_TAB,
  KEY_CTRLTAB              =KEY_CTRL|KEY_TAB,
  KEY_SHIFTTAB             =KEY_SHIFT|KEY_TAB,

  KEY_CTRLENTER            =KEY_CTRL|KEY_ENTER,
  KEY_SHIFTENTER           =KEY_SHIFT|KEY_ENTER,
  KEY_ALTSHIFTENTER        =KEY_ALT|KEY_SHIFT|KEY_ENTER,
  KEY_CTRLALTENTER         =KEY_CTRL|KEY_ALT|KEY_ENTER,
  KEY_CTRLSHIFTENTER       =KEY_CTRL|KEY_SHIFT|KEY_ENTER,

  KEY_CTRLAPPS             =KEY_CTRL|KEY_APPS,
  KEY_ALTAPPS              =KEY_ALT|KEY_APPS,
  KEY_SHIFTAPPS            =KEY_SHIFT|KEY_APPS,
  KEY_CTRLSHIFTAPPS        =KEY_CTRL|KEY_SHIFT|KEY_APPS,
  KEY_ALTSHIFTAPPS         =KEY_ALT|KEY_SHIFT|KEY_APPS,
  KEY_CTRLALTAPPS          =KEY_CTRL|KEY_ALT|KEY_APPS,

  KEY_CTRLSPACE            =KEY_CTRL|KEY_SPACE,
  KEY_SHIFTSPACE           =KEY_SHIFT|KEY_SPACE,
  KEY_CTRLSHIFTSPACE       =KEY_CTRL|KEY_SHIFT|KEY_SPACE,

  KEY_ALT_BASE             =KEY_ALT,
  KEY_ALTSHIFT_BASE        =KEY_ALTSHIFT,
};

#endif  // __FARKEYS_HPP__
