/* gdict-version.h - convenience version header for libgdict
 *
 * Copyright (C) 2005  Emmanuele Bassi <ebassi@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 */

#ifndef __GDICT_VERSION_H__
#define __GDICT_VERSION_H__

#define GDICT_MAJOR_VERSION	0
#define GDICT_MINOR_VERSION	3
#define GDICT_MICRO_VERSION	3

#define GDICT_CHECK_VERSION(major,minor,micro)	(((major) >= GDICT_MAJOR_VERSION) || \
						 (((major) == GDICT_MAJOR_VERSION) && \
						  ((minor) >= GDICT_MINOR_VERSION)) || \
						 (((major) == GDICT_MAJOR_VERSION) && \
						  ((minor) == GDICT_MINOR_VERSION) && \
						  ((micro) >= GDICT_MICRO_VERSION)))

#endif /* __GDICT_VERSION_H__ */
