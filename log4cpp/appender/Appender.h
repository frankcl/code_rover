#ifndef FCCW_LOG4CPP_APPENDER_APPENDER_H
#define FCCW_LOG4CPP_APPENDER_APPENDER_H

namespace fccw {
namespace log4cpp {

class Appender {
public:
    Appender();
    virtual ~Appender();

private:
    Appender(const Appender&);
    Appender& operator=(const Appender&);

public:
    virtual void AppendMessage(const char* format, ...) = 0;
};

}
}

#endif // FCCW_LOG4CPP_APPENDER_APPENDER_H