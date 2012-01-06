# Makefile of LUNAR

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


# CFLAGS= -O

OBJS = lunar.o display.o

lunar: $(OBJS)
	gcc -o lunar $(OBJS)

lunar.o: lunar.c
	gcc -c -o $@ $<

display.o: display.c
	gcc -c -o $@ $<

clean:
	rm -rf *.o lunar

