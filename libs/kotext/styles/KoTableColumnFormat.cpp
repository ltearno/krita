/* This file is part of the KDE project
 * Copyright (C) 2009 Elvis Stansvik <elvstone@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; version 2.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#include "KoTableColumnFormat.h"

KoTableColumnFormat::KoTableColumnFormat() : KoTableFormat(ColumnFormat)
{
}

void KoTableColumnFormat::setBreakAfter(bool breakAfter)
{
    setProperty(BreakAfter, breakAfter);
}

bool KoTableColumnFormat::breakAfter() const
{
    return boolProperty(BreakAfter);
}

void KoTableColumnFormat::setBreakBefore(bool breakBefore)
{
    setProperty(BreakBefore, breakBefore);
}

bool KoTableColumnFormat::breakBefore() const
{
    return boolProperty(BreakBefore);
}

void KoTableColumnFormat::setColumnWidth(qreal columnWidth)
{
    setProperty(ColumnWidth, columnWidth);
}

qreal KoTableColumnFormat::columnWidth() const
{
    return doubleProperty(ColumnWidth);
}

void KoTableColumnFormat::setRelativeColumnWidth(qreal relativeColumnWidth)
{
    setProperty(RelativeColumnWidth, relativeColumnWidth);
}

qreal KoTableColumnFormat::relativeColumnWidth() const
{
    return doubleProperty(RelativeColumnWidth);
}

bool KoTableColumnFormat::isValid() const
{
    return isColumnFormat();
}

