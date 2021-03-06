/*
    This file is part of QuickQanava library.

    Copyright (C) 2008-2017 Benoit AUTHEMAN

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
*/

//-----------------------------------------------------------------------------
// This file is a part of the QuickQanava software library.
//
// \file	qanStyle.cpp
// \author	benoit@destrat.io
// \date	2015 06 05
//-----------------------------------------------------------------------------

// Qt headers
#include <QFont>

// QuickQanava headers
#include "./qanStyle.h"
#include "./qanGraph.h"

namespace qan { // ::qan

/* Style Object Management *///------------------------------------------------
Style::Style( QString name, QObject* parent ) :
    QObject{ parent },
    _name{ name }
{

}
//-----------------------------------------------------------------------------

/* Style Management *///-------------------------------------------------------
Style* Style::duplicate( QString duplicatedStyleName, QObject* dstParent )
{
 /*   Style* dst = nullptr;
    if ( getMetaTarget() == QStringLiteral("qan::Node") )
        dst = new qan::NodeStyle( duplicatedStyleName, getTarget(), dstParent  );
    else if ( getMetaTarget() == QStringLiteral("qan::Edge") )
        dst = new qan::EdgeStyle( duplicatedStyleName, getTarget(), dstParent  );
    else
        dst = new Style( duplicatedStyleName, getTarget(), getMetaTarget( ), dstParent );
    if ( dst != nullptr ) {
        // FIXME QPS
        //duplicateTo( dst );
        dst->setName( duplicatedStyleName );    // Name has probably be set to this style name during copy, reset it...
        dst->setProperty( "name", duplicatedStyleName );
    }
    return dst;*/
    // FIXME QAN3
    return nullptr;
}
//-----------------------------------------------------------------------------


/* Node Style Object Management *///-------------------------------------------
NodeStyle::NodeStyle( QString name, QObject* parent ) :
    qan::Style( name, parent )
{
}
//-----------------------------------------------------------------------------


/* Edge Style Object Management *///-------------------------------------------
EdgeStyle::EdgeStyle( QString name, QObject* parent ) :
    qan::Style( name, parent )
{
}
//-----------------------------------------------------------------------------

} // ::qan

