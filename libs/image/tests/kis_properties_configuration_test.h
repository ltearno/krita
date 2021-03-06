/*
 *  Copyright (c) 2007 Cyrille Berger <cberger@cberger.net>
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

#ifndef KIS_SERIALIZABLE_CONFIGURATION_TEST_H
#define KIS_SERIALIZABLE_CONFIGURATION_TEST_H

#include <QtTest>

#include "kis_cubic_curve.h"
#include "kis_properties_configuration.h"

class KisPropertiesConfigurationTest : public QObject
{
    Q_OBJECT
public:
    KisPropertiesConfigurationTest();
private Q_SLOTS:
    void testSetGet();
    void testSerialization();
    void testDefaultValues();
    void testNotSavedValues();
    void testCopy();
    void testGetColor();
    void testLists();

private:
    KisPropertiesConfigurationSP createConfig();
    void testConfig(KisPropertiesConfigurationSP config);
private:
    int v1;
    QString v2;
    double v3;
    bool v4;
    KisCubicCurve v5;
};

#endif

