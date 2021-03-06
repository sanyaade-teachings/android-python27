/*
 * Module code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:49 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtSvg.h"

#line 44 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qgraphicsitem.sip"
#include <qgraphicsitem.h>
#line 39 "sipQtSvgcmodule.cpp"
#line 39 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 42 "sipQtSvgcmodule.cpp"

/* Define the strings used by this module. */
const char sipStrings_QtSvg[] = {
    'w', 'i', 'n', 'd', 'o', 'w', 'A', 'c', 't', 'i', 'v', 'a', 't', 'i', 'o', 'n', 'C', 'h', 'a', 'n', 'g', 'e', 0,
    'p', 'r', 'e', 'p', 'a', 'r', 'e', 'G', 'e', 'o', 'm', 'e', 't', 'r', 'y', 'C', 'h', 'a', 'n', 'g', 'e', 0,
    'm', 'o', 'u', 's', 'e', 'D', 'o', 'u', 'b', 'l', 'e', 'C', 'l', 'i', 'c', 'k', 'E', 'v', 'e', 'n', 't', 0,
    's', 'e', 't', 'M', 'a', 'x', 'i', 'm', 'u', 'm', 'C', 'a', 'c', 'h', 'e', 'S', 'i', 'z', 'e', 0,
    'd', 'e', 'f', 'a', 'u', 'l', 't', 'B', 'u', 't', 't', 'o', 'n', 'N', 'u', 'm', 'b', 'e', 'r', 0,
    's', 'e', 't', 'F', 'r', 'a', 'm', 'e', 's', 'P', 'e', 'r', 'S', 'e', 'c', 'o', 'n', 'd', 0,
    'f', 'o', 'c', 'u', 's', 'P', 'r', 'e', 'v', 'i', 'o', 'u', 's', 'C', 'h', 'i', 'l', 'd', 0,
    'e', 's', 'c', 'a', 'p', 'e', 'B', 'u', 't', 't', 'o', 'n', 'N', 'u', 'm', 'b', 'e', 'r', 0,
    'f', 'o', 'c', 'u', 's', 'N', 'e', 'x', 't', 'P', 'r', 'e', 'v', 'C', 'h', 'i', 'l', 'd', 0,
    'a', 'n', 'i', 'm', 'a', 't', 'i', 'o', 'n', 'D', 'u', 'r', 'a', 't', 'i', 'o', 'n', 0,
    's', 'e', 't', 'C', 'a', 'c', 'h', 'i', 'n', 'g', 'E', 'n', 'a', 'b', 'l', 'e', 'd', 0,
    's', 'e', 't', 'S', 'h', 'a', 'r', 'e', 'd', 'R', 'e', 'n', 'd', 'e', 'r', 'e', 'r', 0,
    'd', 'e', 's', 't', 'r', 'o', 'y', 'S', 'u', 'b', 'W', 'i', 'n', 'd', 'o', 'w', 's', 0,
    'r', 'e', 's', 'e', 't', 'I', 'n', 'p', 'u', 't', 'C', 'o', 'n', 't', 'e', 'x', 't', 0,
    'd', 'e', 'f', 'a', 'u', 'l', 't', 'D', 'r', 'o', 'p', 'A', 'c', 't', 'i', 'o', 'n', 0,
    'm', 'o', 'u', 's', 'e', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'm', 'a', 't', 'r', 'i', 'x', 'F', 'o', 'r', 'E', 'l', 'e', 'm', 'e', 'n', 't', 0,
    'm', 'a', 'x', 'i', 'm', 'u', 'm', 'C', 'a', 'c', 'h', 'e', 'S', 'i', 'z', 'e', 0,
    'i', 's', 'C', 'a', 'c', 'h', 'i', 'n', 'g', 'E', 'n', 'a', 'b', 'l', 'e', 'd', 0,
    'Q', 'G', 'r', 'a', 'p', 'h', 'i', 'c', 's', 'S', 'v', 'g', 'I', 't', 'e', 'm', 0,
    'd', 'e', 's', 't', 'r', 'o', 'y', 'O', 'l', 'd', 'W', 'i', 'n', 'd', 'o', 'w', 0,
    'i', 'n', 'i', 't', 'i', 'a', 'l', 'i', 'z', 'e', 'W', 'i', 'n', 'd', 'o', 'w', 0,
    'u', 'p', 'd', 'a', 't', 'e', 'M', 'i', 'c', 'r', 'o', 'F', 'o', 'c', 'u', 's', 0,
    'l', 'o', 'g', 'i', 'c', 'a', 'l', 'C', 'a', 'c', 'h', 'e', 'S', 'i', 'z', 'e', 0,
    's', 'c', 'e', 'n', 'e', 'E', 'v', 'e', 'n', 't', 'F', 'i', 'l', 't', 'e', 'r', 0,
    'c', 'o', 'l', 'l', 'i', 'd', 'e', 's', 'W', 'i', 't', 'h', 'P', 'a', 't', 'h', 0,
    'c', 'o', 'l', 'l', 'i', 'd', 'e', 's', 'W', 'i', 't', 'h', 'I', 't', 'e', 'm', 0,
    't', 'o', 'u', 'c', 'h', 'P', 'o', 'i', 'n', 't', 'S', 't', 'a', 't', 'e', 's', 0,
    's', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd', 'A', 'c', 't', 'i', 'o', 'n', 's', 0,
    'c', 'o', 'n', 't', 'e', 'x', 't', 'M', 'e', 'n', 'u', 'E', 'v', 'e', 'n', 't', 0,
    'i', 'n', 'p', 'u', 't', 'M', 'e', 't', 'h', 'o', 'd', 'E', 'v', 'e', 'n', 't', 0,
    'i', 'n', 'p', 'u', 't', 'M', 'e', 't', 'h', 'o', 'd', 'Q', 'u', 'e', 'r', 'y', 0,
    's', 'e', 'a', 'r', 'c', 'h', 'D', 'e', 'l', 'i', 'm', 'i', 't', 'e', 'r', 's', 0,
    'c', 'o', 'm', 'p', 'r', 'e', 's', 's', 'i', 'o', 'n', 'L', 'e', 'v', 'e', 'l', 0,
    'd', 'i', 's', 'c', 'o', 'n', 'n', 'e', 'c', 't', 'N', 'o', 't', 'i', 'f', 'y', 0,
    's', 'e', 't', 'C', 'u', 'r', 'r', 'e', 'n', 't', 'F', 'r', 'a', 'm', 'e', 0,
    'f', 'r', 'a', 'm', 'e', 's', 'P', 'e', 'r', 'S', 'e', 'c', 'o', 'n', 'd', 0,
    'b', 'o', 'u', 'n', 'd', 's', 'O', 'n', 'E', 'l', 'e', 'm', 'e', 'n', 't', 0,
    's', 'e', 't', 'O', 'u', 't', 'p', 'u', 't', 'D', 'e', 'v', 'i', 'c', 'e', 0,
    'p', 'e', 'r', 'f', 'o', 'r', 'm', 'a', 'n', 'c', 'e', 'H', 'i', 'n', 't', 0,
    'a', 'm', 'b', 'i', 'g', 'u', 'o', 'u', 's', 'M', 'e', 'm', 'b', 'e', 'r', 0,
    't', 'o', 'p', 'L', 'e', 'f', 't', 'P', 'o', 's', 'i', 't', 'i', 'o', 'n', 0,
    'a', 's', 'p', 'e', 'c', 't', 'R', 'a', 't', 'i', 'o', 'M', 'o', 'd', 'e', 0,
    'd', 'e', 'v', 'i', 'c', 'e', 'T', 'r', 'a', 'n', 's', 'f', 'o', 'r', 'm', 0,
    'h', 'o', 'v', 'e', 'r', 'L', 'e', 'a', 'v', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'h', 'o', 'v', 'e', 'r', 'E', 'n', 't', 'e', 'r', 'E', 'v', 'e', 'n', 't', 0,
    'm', 'i', 'n', 'i', 'm', 'u', 'm', 'S', 'i', 'z', 'e', 'H', 'i', 'n', 't', 0,
    'm', 'o', 'u', 's', 'e', 'P', 'r', 'e', 's', 's', 'E', 'v', 'e', 'n', 't', 0,
    'k', 'e', 'y', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'l', 'a', 'n', 'g', 'u', 'a', 'g', 'e', 'C', 'h', 'a', 'n', 'g', 'e', 0,
    'f', 'o', 'c', 'u', 's', 'N', 'e', 'x', 't', 'C', 'h', 'i', 'l', 'd', 0,
    'h', 'o', 'v', 'e', 'r', 'M', 'o', 'v', 'e', 'E', 'v', 'e', 'n', 't', 0,
    's', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'F', 'i', 'l', 't', 'e', 'r', 0,
    's', 'e', 't', 'D', 'e', 's', 'c', 'r', 'i', 'p', 't', 'i', 'o', 'n', 0,
    'h', 'e', 'i', 'g', 'h', 't', 'F', 'o', 'r', 'W', 'i', 'd', 't', 'h', 0,
    'd', 'r', 'a', 'g', 'L', 'e', 'a', 'v', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'd', 'r', 'a', 'g', 'E', 'n', 't', 'e', 'r', 'E', 'v', 'e', 'n', 't', 0,
    'm', 'o', 'u', 's', 'e', 'M', 'o', 'v', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'd', 'i', 's', 'a', 'm', 'b', 'i', 'g', 'u', 'a', 't', 'i', 'o', 'n', 0,
    'r', 'e', 'p', 'a', 'i', 'n', 't', 'N', 'e', 'e', 'd', 'e', 'd', 0,
    'e', 'l', 'e', 'm', 'e', 'n', 't', 'E', 'x', 'i', 's', 't', 's', 0,
    'Q', 'S', 'v', 'g', 'G', 'e', 'n', 'e', 'r', 'a', 't', 'o', 'r', 0,
    'c', 'h', 'a', 'n', 'g', 'e', 'd', 'S', 'i', 'g', 'n', 'a', 'l', 0,
    'p', 'a', 'l', 'e', 't', 't', 'e', 'C', 'h', 'a', 'n', 'g', 'e', 0,
    'e', 'n', 'a', 'b', 'l', 'e', 'd', 'C', 'h', 'a', 'n', 'g', 'e', 0,
    'd', 'e', 's', 't', 'r', 'o', 'y', 'W', 'i', 'n', 'd', 'o', 'w', 0,
    's', 'e', 't', 'R', 'e', 's', 'o', 'l', 'u', 't', 'i', 'o', 'n', 0,
    'f', 'o', 'r', 'm', 'a', 't', 'V', 'e', 'r', 's', 'i', 'o', 'n', 0,
    'd', 'e', 'f', 'a', 'u', 'l', 't', 'B', 'u', 't', 't', 'o', 'n', 0,
    't', 'r', 'a', 'n', 's', 'f', 'o', 'r', 'm', 'M', 'o', 'd', 'e', 0,
    'b', 'l', 'o', 'c', 'k', 'i', 'n', 'g', 'P', 'a', 'n', 'e', 'l', 0,
    'w', 'r', 'i', 't', 'i', 'n', 'g', 'S', 'y', 's', 't', 'e', 'm', 0,
    'i', 'n', 'i', 't', 'i', 'a', 'l', 'F', 'i', 'l', 't', 'e', 'r', 0,
    't', 'h', 'r', 'e', 's', 'h', 'o', 'l', 'd', 'T', 'i', 'm', 'e', 0,
    'd', 'r', 'a', 'g', 'M', 'o', 'v', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'f', 'o', 'c', 'u', 's', 'O', 'u', 't', 'E', 'v', 'e', 'n', 't', 0,
    'k', 'e', 'y', 'P', 'r', 'e', 's', 's', 'E', 'v', 'e', 'n', 't', 0,
    'Q', 'S', 'v', 'g', 'R', 'e', 'n', 'd', 'e', 'r', 'e', 'r', 0,
    'o', 'u', 't', 'p', 'u', 't', 'D', 'e', 'v', 'i', 'c', 'e', 0,
    's', 'e', 't', 'E', 'l', 'e', 'm', 'e', 'n', 't', 'I', 'd', 0,
    's', 'o', 'u', 'r', 'c', 'e', 'R', 'e', 'g', 'i', 'o', 'n', 0,
    't', 'a', 'r', 'g', 'e', 't', 'O', 'f', 'f', 's', 'e', 't', 0,
    'i', 's', 'O', 'b', 's', 'c', 'u', 'r', 'e', 'd', 'B', 'y', 0,
    'o', 'r', 'i', 'e', 'n', 't', 'a', 't', 'i', 'o', 'n', 's', 0,
    'b', 'o', 'u', 'n', 'd', 'i', 'n', 'g', 'R', 'e', 'c', 't', 0,
    'm', 'i', 'd', 'L', 'i', 'n', 'e', 'W', 'i', 'd', 't', 'h', 0,
    'f', 'o', 'c', 'u', 's', 'I', 'n', 'E', 'v', 'e', 'n', 't', 0,
    'c', 'u', 'r', 'r', 'e', 'n', 't', 'F', 'r', 'a', 'm', 'e', 0,
    'i', 'n', 'i', 't', 'i', 'a', 'l', 'V', 'a', 'l', 'u', 'e', 0,
    'd', 'e', 'f', 'a', 'u', 'l', 't', 'V', 'a', 'l', 'u', 'e', 0,
    'd', 'e', 'f', 'a', 'u', 'l', 't', 'S', 'i', 'z', 'e', 0,
    't', 'a', 'b', 'l', 'e', 't', 'E', 'v', 'e', 'n', 't', 0,
    'i', 'm', 'a', 'g', 'e', 'R', 'e', 'a', 'd', 'e', 'r', 0,
    'b', 'u', 't', 't', 'o', 'n', '2', 'T', 'e', 'x', 't', 0,
    'b', 'u', 't', 't', 'o', 'n', '1', 'T', 'e', 'x', 't', 0,
    'a', 'c', 't', 'i', 'o', 'n', 'E', 'v', 'e', 'n', 't', 0,
    'p', 'a', 'i', 'n', 't', 'E', 'n', 'g', 'i', 'n', 'e', 0,
    'c', 'o', 'n', 't', 'r', 'o', 'l', 'T', 'y', 'p', 'e', 0,
    'f', 'o', 'c', 'u', 's', 'R', 'e', 'a', 's', 'o', 'n', 0,
    't', 'o', 'u', 'c', 'h', 'P', 'o', 'i', 'n', 't', 's', 0,
    'd', 'e', 's', 'c', 'r', 'i', 'p', 't', 'i', 'o', 'n', 0,
    'p', 'a', 'i', 'n', 't', 'D', 'e', 'v', 'i', 'c', 'e', 0,
    'o', 'r', 'i', 'e', 'n', 't', 'a', 't', 'i', 'o', 'n', 0,
    'r', 'e', 's', 'i', 'z', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'c', 'h', 'a', 'n', 'g', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'a', 'p', 'p', 'l', 'i', 'c', 'a', 't', 'i', 'o', 'n', 0,
    'c', 'u', 's', 't', 'o', 'm', 'E', 'v', 'e', 'n', 't', 0,
    'e', 'v', 'e', 'n', 't', 'F', 'i', 'l', 't', 'e', 'r', 0,
    's', 'o', 'u', 'r', 'c', 'e', 'S', 't', 'a', 't', 'e', 0,
    's', 'e', 't', 'F', 'i', 'l', 'e', 'N', 'a', 'm', 'e', 0,
    'P', 'y', 'Q', 't', '4', '.', 'Q', 't', 'S', 'v', 'g', 0,
    'Q', 'S', 'v', 'g', 'W', 'i', 'd', 'g', 'e', 't', 0,
    's', 'e', 't', 'V', 'i', 'e', 'w', 'B', 'o', 'x', 0,
    'f', 'o', 'n', 't', 'C', 'h', 'a', 'n', 'g', 'e', 0,
    'u', 'p', 's', 'i', 'd', 'e', 'D', 'o', 'w', 'n', 0,
    'r', 'e', 't', 'u', 'r', 'n', 'D', 'a', 't', 'a', 0,
    't', 'e', 'x', 't', 'O', 'p', 't', 'i', 'o', 'n', 0,
    'r', 'e', 's', 'o', 'l', 'u', 't', 'i', 'o', 'n', 0,
    's', 't', 'a', 't', 'i', 'c', 'T', 'e', 'x', 't', 0,
    'e', 'n', 't', 'e', 'r', 'E', 'v', 'e', 'n', 't', 0,
    'l', 'e', 'a', 'v', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'i', 'n', 'v', 'e', 'r', 't', 'i', 'b', 'l', 'e', 0,
    't', 'e', 'x', 't', 'F', 'o', 'r', 'm', 'a', 't', 0,
    'h', 'o', 'r', 'i', 'z', 'o', 'n', 't', 'a', 'l', 0,
    'c', 'o', 'l', 'u', 'm', 'n', 'S', 'p', 'a', 'n', 0,
    's', 'c', 'e', 'n', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'i', 't', 'e', 'm', 'C', 'h', 'a', 'n', 'g', 'e', 0,
    'o', 'p', 'a', 'q', 'u', 'e', 'A', 'r', 'e', 'a', 0,
    'c', 'o', 'n', 's', 't', 'r', 'a', 'i', 'n', 't', 0,
    'd', 'e', 'v', 'i', 'c', 'e', 'T', 'y', 'p', 'e', 0,
    'G', 'U', 'I', 'e', 'n', 'a', 'b', 'l', 'e', 'd', 0,
    's', 'e', 't', 'V', 'i', 's', 'i', 'b', 'l', 'e', 0,
    's', 'e', 'l', 'e', 'c', 't', 'i', 'o', 'n', 's', 0,
    'r', 'e', 'p', 'e', 'a', 't', 'T', 'i', 'm', 'e', 0,
    'c', 'l', 'o', 's', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'w', 'h', 'e', 'e', 'l', 'E', 'v', 'e', 'n', 't', 0,
    'p', 'a', 'i', 'n', 't', 'E', 'v', 'e', 'n', 't', 0,
    'f', 'i', 'e', 'l', 'd', 'W', 'i', 'd', 't', 'h', 0,
    'c', 'h', 'i', 'l', 'd', 'E', 'v', 'e', 'n', 't', 0,
    't', 'i', 'm', 'e', 'r', 'E', 'v', 'e', 'n', 't', 0,
    's', 'o', 'u', 'r', 'c', 'e', 'T', 'e', 'x', 't', 0,
    'y', 'e', 'a', 'r', 'N', 'u', 'm', 'b', 'e', 'r', 0,
    'r', 'e', 't', 'u', 'r', 'n', 'C', 'o', 'd', 'e', 0,
    'e', 'l', 'e', 'm', 'e', 'n', 't', 'I', 'd', 0,
    'f', 'r', 'a', 'g', 'm', 'e', 'n', 't', 's', 0,
    'p', 'o', 'i', 'n', 't', 'P', 'a', 'i', 'r', 0,
    'o', 'p', 'e', 'r', 'a', 't', 'i', 'o', 'n', 0,
    's', 'e', 'l', 'e', 'c', 't', 'i', 'o', 'n', 0,
    'c', 'l', 'i', 'p', 'T', 'i', 'g', 'h', 't', 0,
    'm', 'o', 'v', 'e', 'E', 'v', 'e', 'n', 't', 0,
    't', 'e', 'x', 't', 'W', 'i', 'd', 't', 'h', 0,
    'p', 'o', 'i', 'n', 't', 'S', 'i', 'z', 'e', 0,
    'a', 'm', 'b', 'i', 'g', 'u', 'o', 'u', 's', 0,
    'm', 'o', 'd', 'i', 'f', 'i', 'e', 'r', 's', 0,
    'l', 'i', 'n', 'e', 'W', 'i', 'd', 't', 'h', 0,
    's', 'h', 'o', 'w', 'E', 'v', 'e', 'n', 't', 0,
    'h', 'i', 'd', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'a', 'l', 'i', 'g', 'n', 'm', 'e', 'n', 't', 0,
    'd', 'r', 'o', 'p', 'E', 'v', 'e', 'n', 't', 0,
    'd', 'i', 'r', 'e', 'c', 't', 'o', 'r', 'y', 0,
    'm', 'a', 'x', 'L', 'e', 'n', 'g', 't', 'h', 0,
    'c', 'a', 'r', 'e', 't', 'M', 'o', 'd', 'e', 0,
    'c', 'l', 'a', 's', 's', 'N', 'a', 'm', 'e', 0,
    'r', 'e', 'c', 'e', 'i', 'v', 'e', 'r', 's', 0,
    't', 'r', 'a', 'c', 'e', 'b', 'a', 'c', 'k', 0,
    's', 'i', 'g', 'n', 'a', 't', 'u', 'r', 'e', 0,
    'p', 'r', 'e', 'c', 'i', 's', 'i', 'o', 'n', 0,
    'a', 'n', 'i', 'm', 'a', 't', 'e', 'd', 0,
    'v', 'i', 'e', 'w', 'B', 'o', 'x', 'F', 0,
    'r', 'e', 'n', 'd', 'e', 'r', 'e', 'r', 0,
    't', 'e', 'x', 't', 'R', 'o', 'l', 'e', 0,
    'e', 'd', 'i', 't', 'a', 'b', 'l', 'e', 0,
    'd', 'e', 'c', 'i', 'm', 'a', 'l', 's', 0,
    'v', 'e', 'r', 't', 'i', 'c', 'a', 'l', 0,
    'f', 'a', 'l', 'l', 'b', 'a', 'c', 'k', 0,
    's', 'e', 't', 'T', 'i', 't', 'l', 'e', 0,
    'i', 's', 'L', 'a', 'y', 'o', 'u', 't', 0,
    'f', 'i', 'l', 'l', 'R', 'u', 'l', 'e', 0,
    't', 'a', 'b', 'A', 'r', 'r', 'a', 'y', 0,
    't', 'a', 'b', 'S', 't', 'o', 'p', 's', 0,
    's', 't', 'r', 'a', 't', 'e', 'g', 'y', 0,
    'r', 'o', 't', 'a', 't', 'i', 'o', 'n', 0,
    'f', 'e', 'a', 't', 'u', 'r', 'e', 's', 0,
    'u', 's', 'e', 'r', 'D', 'a', 't', 'a', 0,
    's', 'i', 'z', 'e', 'H', 'i', 'n', 't', 0,
    's', 'h', 'o', 'r', 't', 'c', 'u', 't', 0,
    'p', 'o', 's', 'i', 't', 'i', 'o', 'n', 0,
    'b', 'e', 'h', 'a', 'v', 'i', 'o', 'r', 0,
    'f', 'i', 'l', 'l', 'C', 'h', 'a', 'r', 0,
    'p', 'r', 'i', 'o', 'r', 'i', 't', 'y', 0,
    'p', 'r', 'o', 'p', 'e', 'r', 't', 'y', 0,
    't', 'i', 'm', 'e', 'S', 'p', 'e', 'c', 0,
    'q', 'v', 'a', 'r', 'h', 'a', 's', 'h', 0,
    'e', 'n', 'c', 'o', 'd', 'i', 'n', 'g', 0,
    'c', 'o', 'n', 't', 'a', 'i', 'n', 's', 0,
    't', 'r', 'u', 'n', 'c', 'a', 't', 'e', 0,
    'f', 'i', 'l', 'e', 'N', 'a', 'm', 'e', 0,
    'd', 'u', 'r', 'a', 't', 'i', 'o', 'n', 0,
    'v', 'i', 'e', 'w', 'B', 'o', 'x', 0,
    'd', 'e', 's', 't', 'r', 'o', 'y', 0,
    't', 'a', 'b', 'T', 'y', 'p', 'e', 0,
    'c', 'o', 'l', 'u', 'm', 'n', 's', 0,
    'e', 'x', 'p', 'o', 's', 'e', 'd', 0,
    'b', 'u', 't', 't', 'o', 'n', '2', 0,
    'b', 'u', 't', 't', 'o', 'n', '1', 0,
    'v', 'P', 'o', 'l', 'i', 'c', 'y', 0,
    'h', 'P', 'o', 'l', 'i', 'c', 'y', 0,
    'q', 'u', 'a', 'l', 'i', 't', 'y', 0,
    'd', 'e', 'v', 'T', 'y', 'p', 'e', 0,
    'r', 'o', 'w', 'S', 'p', 'a', 'n', 0,
    'c', 'o', 'n', 't', 'e', 'x', 't', 0,
    'p', 'a', 'i', 'n', 't', 'e', 'r', 0,
    'a', 'd', 'v', 'a', 'n', 'c', 'e', 0,
    'c', 'o', 'm', 'b', 'i', 'n', 'e', 0,
    'y', 'M', 'a', 'r', 'g', 'i', 'n', 0,
    'x', 'M', 'a', 'r', 'g', 'i', 'n', 0,
    'o', 'p', 'a', 'c', 'i', 't', 'y', 0,
    'c', 'a', 'p', 't', 'i', 'o', 'n', 0,
    'a', 'u', 't', 'o', 'r', 'e', 'p', 0,
    'i', 'n', 'i', 't', 'i', 'a', 'l', 0,
    's', 'u', 'b', 't', 'y', 'p', 'e', 0,
    'b', 'u', 't', 't', 'o', 'n', 's', 0,
    's', 't', 'r', 'e', 't', 'c', 'h', 0,
    'p', 'r', 'i', 'n', 't', 'e', 'r', 0,
    'v', 'a', 'r', 'i', 'a', 'n', 't', 0,
    'o', 'p', 't', 'i', 'o', 'n', 's', 0,
    'm', 'a', 'p', 'R', 'o', 'o', 't', 0,
    'c', 'o', 'u', 'n', 't', 'r', 'y', 0,
    't', 'i', 'm', 'e', 'o', 'u', 't', 0,
    'c', 'u', 'r', 'r', 'e', 'n', 't', 0,
    'q', 'v', 'a', 'r', 'm', 'a', 'p', 0,
    'q', 'v', 'a', 'r', 'l', 's', 't', 0,
    'q', 's', 't', 'r', 'l', 's', 't', 0,
    'v', 'e', 'r', 's', 'i', 'o', 'n', 0,
    'm', 'e', 's', 's', 'a', 'g', 'e', 0,
    'p', 'e', 'r', 'c', 'e', 'n', 't', 0,
    'i', 'n', 'c', 'l', 'u', 'd', 'e', 0,
    'e', 'x', 'c', 'l', 'u', 'd', 'e', 0,
    'i', 's', 'V', 'a', 'l', 'i', 'd', 0,
    'f', 'i', 'l', 't', 'e', 'r', 's', 0,
    's', 'e', 't', 'S', 'i', 'z', 'e', 0,
    'b', 'o', 'u', 'n', 'd', 's', 0,
    'a', 'c', 't', 'i', 'v', 'e', 0,
    's', 't', 'a', 'c', 'k', 's', 0,
    'o', 'p', 'a', 'q', 'u', 'e', 0,
    'f', 'i', 'r', 's', 't', 'y', 0,
    'f', 'i', 'r', 's', 't', 'x', 0,
    'p', 'o', 'i', 'n', 't', 's', 0,
    'c', 'l', 'o', 's', 'e', 'd', 0,
    's', 'c', 'a', 'l', 'e', 'Y', 0,
    's', 'c', 'a', 'l', 'e', 'X', 0,
    'y', 'R', 'o', 'u', 'n', 'd', 0,
    'x', 'R', 'o', 'u', 'n', 'd', 0,
    'c', 'o', 'r', 'n', 'e', 'r', 0,
    'o', 'p', 't', 'i', 'o', 'n', 0,
    'm', 'e', 't', 'r', 'i', 'c', 0,
    'l', 'a', 'y', 'e', 'r', 's', 0,
    'r', 'e', 'n', 'd', 'e', 'r', 0,
    'w', 'i', 'n', 'd', 'o', 'w', 0,
    'v', 'a', 'l', 'u', 'e', 's', 0,
    'i', 't', 'a', 'l', 'i', 'c', 0,
    'w', 'e', 'i', 'g', 'h', 't', 0,
    'a', 'c', 't', 'i', 'o', 'n', 0,
    'b', 'e', 'f', 'o', 'r', 'e', 0,
    'r', 'e', 'a', 's', 'o', 'n', 0,
    's', 'u', 'n', 'k', 'e', 'n', 0,
    's', 'o', 'u', 'r', 'c', 'e', 0,
    's', 'c', 'r', 'e', 'e', 'n', 0,
    'p', 'i', 'x', 'm', 'a', 'p', 0,
    'm', 'a', 't', 'r', 'i', 'x', 0,
    'f', 'a', 'c', 't', 'o', 'r', 0,
    'w', 'i', 'd', 'g', 'e', 't', 0,
    'p', 'r', 'e', 'f', 'i', 'x', 0,
    's', 'c', 'h', 'e', 'm', 'e', 0,
    'm', 'e', 'm', 'b', 'e', 'r', 0,
    't', 'a', 'r', 'g', 'e', 't', 0,
    's', 'i', 'g', 'n', 'a', 'l', 0,
    'l', 'o', 'c', 'a', 'l', 'e', 0,
    's', 'y', 'n', 't', 'a', 'x', 0,
    'h', 'e', 'i', 'g', 'h', 't', 0,
    'p', 'r', 'o', 'p', 'e', 'r', 0,
    'm', 'e', 't', 'h', 'o', 'd', 0,
    's', 'e', 'n', 'd', 'e', 'r', 0,
    'r', 'e', 'g', 'E', 'x', 'p', 0,
    'v', 'a', 'l', 'u', 'e', '9', 0,
    'v', 'a', 'l', 'u', 'e', '8', 0,
    'v', 'a', 'l', 'u', 'e', '7', 0,
    'v', 'a', 'l', 'u', 'e', '6', 0,
    'v', 'a', 'l', 'u', 'e', '5', 0,
    'v', 'a', 'l', 'u', 'e', '4', 0,
    'v', 'a', 'l', 'u', 'e', '3', 0,
    'v', 'a', 'l', 'u', 'e', '2', 0,
    'v', 'a', 'l', 'u', 'e', '1', 0,
    'v', 'a', 'l', 'u', 'e', '0', 0,
    's', 'y', 's', 't', 'e', 'm', 0,
    's', 'u', 'f', 'f', 'i', 'x', 0,
    'f', 'i', 'l', 't', 'e', 'r', 0,
    's', 'e', 'c', 'o', 'n', 'd', 0,
    'r', 'e', 's', 'u', 'l', 't', 0,
    'f', 'o', 'r', 'm', 'a', 't', 0,
    'l', 'e', 'n', 'g', 't', 'h', 0,
    'o', 'b', 'j', 'e', 'c', 't', 0,
    'c', 'o', 'l', 'u', 'm', 'n', 0,
    'o', 'f', 'f', 's', 'e', 't', 0,
    'c', 'r', 'e', 'a', 't', 'e', 0,
    'm', 'a', 'x', 'l', 'e', 'n', 0,
    't', 'h', 'r', 'e', 'a', 'd', 0,
    'p', 'o', 'l', 'i', 'c', 'y', 0,
    'p', 'a', 'r', 'e', 'n', 't', 0,
    'd', 'e', 'l', 'i', 'm', 0,
    'h', 'i', 'n', 't', 's', 0,
    'p', 'o', 'i', 'n', 't', 0,
    's', 't', 'e', 'p', 's', 0,
    'r', 'a', 'n', 'g', 'e', 0,
    't', 'i', 't', 'l', 'e', 0,
    'i', 't', 'e', 'm', 's', 0,
    'b', 'r', 'u', 's', 'h', 0,
    's', 'c', 'e', 'n', 'e', 0,
    's', 'h', 'a', 'p', 'e', 0,
    'c', 'o', 'l', 'o', 'r', 0,
    'a', 'l', 'p', 'h', 'a', 0,
    's', 't', 'y', 'l', 'e', 0,
    'i', 'n', 'p', 'u', 't', 0,
    'p', 'a', 'i', 'n', 't', 0,
    'c', 'o', 'd', 'e', 'c', 0,
    'w', 'i', 'd', 't', 'h', 0,
    'o', 't', 'h', 'e', 'r', 0,
    'm', 's', 'e', 'c', 's', 0,
    'c', 'o', 'u', 'n', 't', 0,
    'v', 'a', 'l', 'u', 'e', 0,
    'o', 'r', 'd', 'e', 'r', 0,
    'i', 'n', 'd', 'e', 'x', 0,
    'f', 'l', 'a', 'g', 's', 0,
    'e', 'v', 'e', 'n', 't', 0,
    's', 't', 'a', 't', 'e', 0,
    'e', 'd', 'g', 'e', 0,
    'a', 'r', 'e', 'a', 0,
    'k', 'e', 'y', '4', 0,
    'k', 'e', 'y', '3', 0,
    'k', 'e', 'y', '2', 0,
    's', 't', 'e', 'p', 0,
    'a', 'x', 'i', 's', 0,
    'l', 'i', 'n', 'e', 0,
    'h', 'o', 't', 'Y', 0,
    'h', 'o', 't', 'X', 0,
    'f', 'o', 'n', 't', 0,
    'r', 'e', 'c', 't', 0,
    'c', 'l', 'i', 'p', 0,
    'i', 'c', 'o', 'n', 0,
    'l', 'i', 's', 't', 0,
    'j', 'o', 'i', 'n', 0,
    'm', 'o', 'd', 'e', 0,
    'n', 'a', 'm', 'e', 0,
    'l', 'o', 'a', 'd', 0,
    'm', 's', 'e', 'c', 0,
    'q', 'v', 'a', 'r', 0,
    'q', 's', 't', 'r', 0,
    'h', 'i', 'n', 't', 0,
    'a', 'r', 'g', 'v', 0,
    'u', 'c', 's', '4', 0,
    'b', 'a', 's', 'e', 0,
    'f', 'r', 'o', 'm', 0,
    'f', 'i', 'l', 'l', 0,
    'h', 'i', 't', 's', 0,
    's', 'o', 'r', 't', 0,
    'r', 'o', 'l', 'e', 0,
    'p', 'a', 't', 'h', 0,
    'd', 'a', 't', 'a', 0,
    'f', 'i', 'l', 'e', 0,
    's', 'i', 'z', 'e', 0,
    'c', 'o', 'd', 'e', 0,
    'm', '3', '3', 0,
    'i', 'm', 'g', 0,
    'm', 'a', 'x', 0,
    'm', 'i', 'n', 0,
    'x', 'p', 'm', 0,
    'p', 'e', 'n', 0,
    'e', 'n', 'd', 0,
    'c', 'a', 'p', 0,
    'n', 't', 'h', 0,
    'p', 'i', 'd', 0,
    'k', 'e', 'y', 0,
    'r', 'o', 'w', 0,
    'p', 'o', 's', 0,
    'm', 's', 'g', 0,
    's', 'w', 0,
    's', 'y', 0,
    's', 'x', 0,
    't', 'o', 0,
    'o', 'k', 0,
    'z', 0,
    'b', 0,
    'j', 0,
    'i', 0,
    'f', 0,
};


/* Convert to a sub-class if possible. */
extern "C" {static const sipTypeDef *sipSubClass_QGraphicsSvgItem(void **);}
static const sipTypeDef *sipSubClass_QGraphicsSvgItem(void **sipCppRet)
{
    QGraphicsItem *sipCpp = reinterpret_cast<QGraphicsItem *>(*sipCppRet);
    const sipTypeDef *sipType;

#line 81 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtSvg/qgraphicssvgitem.sip"
    if (sipCpp->type() == 13)
    {
        // We need to explicitly cast because of the multiple inheritance.
        *sipCppRet = static_cast<QGraphicsSvgItem *>(sipCpp);
        sipType = sipType_QGraphicsSvgItem;
    }
    else
        sipType = 0;
#line 460 "sipQtSvgcmodule.cpp"

    return sipType;
}


/* Convert to a sub-class if possible. */
extern "C" {static const sipTypeDef *sipSubClass_QSvgRenderer(void **);}
static const sipTypeDef *sipSubClass_QSvgRenderer(void **sipCppRet)
{
    QObject *sipCpp = reinterpret_cast<QObject *>(*sipCppRet);
    const sipTypeDef *sipType;

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtSvg/qsvgrenderer.sip"
    static struct class_graph {
            const char *name;
            sipTypeDef **type;
            int yes, no;
        } graph[] = {
            {sipName_QSvgWidget,	&sipType_QSvgWidget,	-1, 1},
    #if QT_VERSION >= 0x040200
            {sipName_QGraphicsSvgItem,	&sipType_QGraphicsSvgItem,	-1, 2},
    #else
            {0,	0, -1, 2},
    #endif
            {sipName_QSvgRenderer,	&sipType_QSvgRenderer,	-1, -1},
        };
    
        int i = 0;
    
        sipType = 0;
    
        do
        {
            struct class_graph *cg = &graph[i];
    
            if (cg->name != NULL && sipCpp->inherits(cg->name))
            {
                sipType = *cg->type;
                i = cg->yes;
            }
            else
                i = cg->no;
        }
        while (i >= 0);
#line 505 "sipQtSvgcmodule.cpp"

    return sipType;
}


/*
 * This defines each type in this module.
 */
static sipTypeDef *typesTable[] = {
    &sipTypeDef_QtSvg_QGraphicsSvgItem.super.ctd_base,
    &sipTypeDef_QtSvg_QSvgGenerator.super.ctd_base,
    &sipTypeDef_QtSvg_QSvgRenderer.super.ctd_base,
    &sipTypeDef_QtSvg_QSvgWidget.super.ctd_base,
};


/* This defines the modules that this module needs to import. */
static sipImportedModuleDef importsTable[] = {
    {"PyQt4.QtCore", 0, NULL},
    {"PyQt4.QtGui", 0, NULL},
    {NULL, -1, NULL}
};


/* This defines the class sub-convertors that this module defines. */
static sipSubClassConvertorDef convertorsTable[] = {
    {sipSubClass_QGraphicsSvgItem, {167, 1, 0}, NULL},
    {sipSubClass_QSvgRenderer, {133, 0, 0}, NULL},
    {NULL, {0, 0, 0}, NULL}
};


/* This defines this module. */
sipExportedModuleDef sipModuleAPI_QtSvg = {
    0,
    SIP_API_MINOR_NR,
    sipNameNr_PyQt4_QtSvg,
    0,
    0,
    sipStrings_QtSvg,
    importsTable,
    NULL,
    4,
    typesTable,
    NULL,
    0,
    NULL,
    0,
    NULL,
    NULL,
    convertorsTable,
    {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL},
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL
};


/* The SIP API and the APIs of any imported modules. */
const sipAPIDef *sipAPI_QtSvg;
const sipExportedModuleDef *sipModuleAPI_QtSvg_QtCore;
const sipExportedModuleDef *sipModuleAPI_QtSvg_QtGui;

sip_qt_metaobject_func sip_QtSvg_qt_metaobject;
sip_qt_metacall_func sip_QtSvg_qt_metacall;
sip_qt_metacast_func sip_QtSvg_qt_metacast;


/* The Python module initialisation function. */
#if PY_MAJOR_VERSION >= 3
#define SIP_MODULE_ENTRY        PyInit_QtSvg
#define SIP_MODULE_TYPE         PyObject *
#define SIP_MODULE_DISCARD(r)   Py_DECREF(r)
#define SIP_MODULE_RETURN(r)    return (r)
#else
#define SIP_MODULE_ENTRY        initQtSvg
#define SIP_MODULE_TYPE         void
#define SIP_MODULE_DISCARD(r)
#define SIP_MODULE_RETURN(r)    return
#endif

#if defined(SIP_STATIC_MODULE)
extern "C" SIP_MODULE_TYPE SIP_MODULE_ENTRY()
#else
PyMODINIT_FUNC SIP_MODULE_ENTRY()
#endif
{
    static PyMethodDef sip_methods[] = {
        {0, 0, 0, 0}
    };

#if PY_MAJOR_VERSION >= 3
    static PyModuleDef sip_module_def = {
        PyModuleDef_HEAD_INIT,
        "PyQt4.QtSvg",
        NULL,
        -1,
        sip_methods,
        NULL,
        NULL,
        NULL,
        NULL
    };
#endif

    PyObject *sipModule, *sipModuleDict;
#if !defined(SIP_USE_PYCAPSULE)
    PyObject *sip_sipmod, *sip_capiobj;
#endif

    /* Initialise the module and get it's dictionary. */
#if PY_MAJOR_VERSION >= 3
    sipModule = PyModule_Create(&sip_module_def);
#elif PY_VERSION_HEX >= 0x02050000
    sipModule = Py_InitModule(sipName_PyQt4_QtSvg, sip_methods);
#else
    sipModule = Py_InitModule(const_cast<char *>(sipName_PyQt4_QtSvg), sip_methods);
#endif

    if (sipModule == NULL)
        SIP_MODULE_RETURN(NULL);

    sipModuleDict = PyModule_GetDict(sipModule);

    /* Get the SIP module's API. */
#if defined(SIP_USE_PYCAPSULE)

    sipAPI_QtSvg = reinterpret_cast<const sipAPIDef *>(PyCapsule_Import("sip._C_API", 0));

    if (sipAPI_QtSvg == NULL)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }

#else

#if PY_VERSION_HEX >= 0x02050000
    sip_sipmod = PyImport_ImportModule("sip");
#else
    sip_sipmod = PyImport_ImportModule(const_cast<char *>("sip"));
#endif

    if (sip_sipmod == NULL)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }

    sip_capiobj = PyDict_GetItemString(PyModule_GetDict(sip_sipmod), "_C_API");

    if (sip_capiobj == NULL || !PyCObject_Check(sip_capiobj))
    {
        Py_DECREF(sip_sipmod);
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }

    sipAPI_QtSvg = reinterpret_cast<const sipAPIDef *>(PyCObject_AsVoidPtr(sip_capiobj));

#endif

    /* Export the module and publish it's API. */
    if (sipExportModule(&sipModuleAPI_QtSvg,SIP_API_MAJOR_NR,SIP_API_MINOR_NR,0) < 0)
    {
#if !defined(SIP_USE_PYCAPSULE)
        Py_DECREF(sip_sipmod);
#endif
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(0);
    }

    sip_QtSvg_qt_metaobject = (sip_qt_metaobject_func)sipImportSymbol("qtcore_qt_metaobject");
    sip_QtSvg_qt_metacall = (sip_qt_metacall_func)sipImportSymbol("qtcore_qt_metacall");
    sip_QtSvg_qt_metacast = (sip_qt_metacast_func)sipImportSymbol("qtcore_qt_metacast");

    /* Initialise the module now all its dependencies have been set up. */
    if (sipInitModule(&sipModuleAPI_QtSvg,sipModuleDict) < 0)
    {
#if !defined(SIP_USE_PYCAPSULE)
        Py_DECREF(sip_sipmod);
#endif
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(0);
    }

    /* Get the APIs of the modules that this one is dependent on. */
    sipModuleAPI_QtSvg_QtCore = sipModuleAPI_QtSvg.em_imports[0].im_module;
    sipModuleAPI_QtSvg_QtGui = sipModuleAPI_QtSvg.em_imports[1].im_module;

    SIP_MODULE_RETURN(sipModule);
}
