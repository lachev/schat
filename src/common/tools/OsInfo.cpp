/* Simple Chat
 * Copyright (c) 2008-2014 Alexander Sedov <imp@schat.me>
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "sglobal.h"
#include "tools/OsInfo.h"

int OsInfo::m_type = -1;
QByteArray OsInfo::m_ua;
QVariantMap OsInfo::m_json;

int OsInfo::type()
{
  if (m_type == -1)
    init();

  return m_type;
}


QString OsInfo::os()
{
  if (m_type == -1)
    init();

  return m_json.value(LS("os")).toString();
}


QVariantMap OsInfo::json()
{
  if (m_type == -1)
    init();

  return m_json;
}
