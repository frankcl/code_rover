#ifndef FCCW_LOG4CPP_FORMAT_FORMAT_H
#define FCCW_LOG4CPP_FORMAT_FORMAT_H

#include "log4cpp/appender/Appender.h"

namespace fccw {
namespace log4cpp {

class Format {
public:
    Format();
    virtual ~Format();

private:
    Format(const Format&);
    Format& operator=(const Format&);

public:
    virtual void DoFormat(const char* format, ...) = 0;

    void SetAppender(Appender* appender) {
        delete mAppender;
        mAppender = appender;
    };

protected:
    Appender* mAppender;
};

}
}

#endif // FCCW_LOG4CPP_FORMAT_FORMAT_H