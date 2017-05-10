/**
 * C++ function: substfun.h
 *
 * Description: substitutes a string to a $var into a text.
 *
 * Author: Lorenzo Bettini <http://www.lorenzobettini.it>, (C) 2005
 * Copyright: See COPYING file that comes with this distribution
 */

#ifndef _SUBSTFUN_H_
#define _SUBSTFUN_H_

#include <regex>
#include <string>

namespace srchilite {

std::string subst(const std::regex &e, const std::string &s, const std::string &sub);

}

#endif /*_SUBSTFUN_H_*/
