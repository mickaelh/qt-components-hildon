/*
 * Copyright (C) 2014 Stuart Howarth <showarth@marxoft.co.uk>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU Lesser General Public License,
 * version 3, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
 * more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St - Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef CHECKBOXSTYLE_P_P_H
#define CHECKBOXSTYLE_P_P_H

#include "checkboxstyle_p.h"
#include "buttonstyle_p_p.h"

class CheckBoxStylePrivate : public ButtonStylePrivate
{

public:
    CheckBoxStylePrivate(CheckBoxStyle *parent);
    
    virtual QString mainBody() const;
    
    int spacing;
    
    Q_DECLARE_PUBLIC(CheckBoxStyle)
};

#endif // CHECKBOXSTYLE_P_P_H

