/*
 *  Copyright (c) 2015 Dmitry Kazakov <dimula73@gmail.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#include "kis_time_range.h"

#include <QDebug>


struct KisTimeRangeStaticRegistrar {
    KisTimeRangeStaticRegistrar() {
        qRegisterMetaType<KisTimeRange>("KisTimeRange");
    }
};

static KisTimeRangeStaticRegistrar __registrar;

QDebug operator<<(QDebug dbg, const KisTimeRange &r)
{
    dbg.nospace() << "KisTimeRange(" << r.start() << ", " << r.end() << ")";

    return dbg.space();
}
