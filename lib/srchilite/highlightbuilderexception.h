//
// Author: Lorenzo Bettini <http://www.lorenzobettini.it>, (C) 2004-2008
//
// Copyright: See COPYING file that comes with this distribution
//

#ifndef HIGHLIGHTBUILDEREXCEPTION_H_
#define HIGHLIGHTBUILDEREXCEPTION_H_

#include <ostream>
#include <regex>
#include <string>

namespace srchilite {

struct ParserInfo;

struct HighlightBuilderException : public std::exception {
    /// detailed message for this exception
    std::string message;

    /// possible exception that caused this one
    std::regex_error causedBy;

    /// filename of the element that caused this exception
    std::string filename;

    /// line of the element that caused this exception
    unsigned int line;

    HighlightBuilderException(const std::string &_message,
            const ParserInfo *parserinfo,
            const std::regex_error &e = std::regex_error(std::regex_constants::error_badbrace));
    HighlightBuilderException(const std::string &_message,
            const std::string &filename = "", unsigned int line = 0,
            const std::regex_error &e = std::regex_error(std::regex_constants::error_badbrace));
    virtual ~HighlightBuilderException() throw();

    virtual const char* what ( ) const throw () ;
};

std::ostream& operator<<(std::ostream& os, const HighlightBuilderException &entry);

}

#endif /*HIGHLIGHTBUILDEREXCEPTION_H_*/
