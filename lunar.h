/*----------------------------------------------------------------------------
# Copyright (C) 1988,1989,1991,1992,2001 Fung F. Lee and Ricky Yeung
# 
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License
# as published by the Free Software Foundation; either version 2
# of the License, or any later version.
# 
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# 
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software Foundation,
# Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
# 
----------------------------------------------------------------------------*/
#ifndef _LUNAR_H_
#define _LUNAR_H_

/* "Bitmap" constants */
#define BMRow 7 /* number of rows for each bitmap */
#define BMCol 11 /* number of columns for each bitmap */
#define NBM 26 /* number of bitmaps */
#define NianBM 0
#define YueBM 1
#define RiBM 2
#define ShiBM 3
#define GanBM 4
#define ZhiBM 14

typedef struct {
	int year, month, day, hour, weekday;
	int leap; /* the lunar month is a leap month */
} Date;

typedef char byte;

static int daysInSolarMonth[13] = {
	0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

static int moon[2] = {29,30}; /* a short (long) lunar month has 29 (30) days */

static char *Gan[] = {
	"Jia3", "Yi3", "Bing3", "Ding1", "Wu4",
	"Ji3", "Geng1", "Xin1",  "Ren2",  "Gui3"
};

static char *Zhi[] = {
	"Zi3", "Chou3", "Yin2",  "Mao3",  "Chen2", "Si4",
	"Wu3", "Wei4",  "Shen1", "You3",  "Xu1",   "Hai4"
};

static char *ShengXiao[] = {
	"Mouse", "Ox", "Tiger", "Rabbit", "Dragon", "Snake",
	"Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig"
};

static char *weekday[] = {
	"Sunday", "Monday", "Tuesday", "Wednesday",
	"Thursday", "Friday", "Saturday"
};


static char *GanUTF8[] = {
	"甲", "乙", "丙", "丁", "戊",
	"己", "庚", "辛", "壬", "癸"
};

static char *ZhiUTF8[] = {
	"子", "丑", "寅", "卯", "辰", "巳",
	"午", "未", "申", "酉", "戌", "亥"
};

static char   *ShengXiaoUTF8[] = {
	"鼠", "牛", "虎", "兔", "龙", "蛇",
	"马", "羊", "猴", "鸡", "狗", "猪"
};

static char *weekdayUTF8[] = {
	"日", "一", "二", "三",
	"四", "五", "六"
};

void Solar2Lunar(), Lunar2Solar();
long Solar2Day(), Solar2Day1(), Lunar2Day();
void Day2Lunar(), Day2Solar();
int make_yday(), make_mday(), GZcycle();
void CalGZ();
int CmpDate(), JieDate();
void readBM(), display3();
void Report(), ReportE(), ReportBM(), ReportUTF8();
void ReportMonth();
void usage(), Error();

#endif /* _LUNAR_H_ */

