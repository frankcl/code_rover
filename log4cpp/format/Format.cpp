#include <stdio.h>
#include "log4cpp/format/Format.h"

using namespace std;

namespace fccw {
namespace log4cpp {

Format::Format() : mAppender(NULL) {
}

Format::~Format() {
    delete mAppender;
    mAppender = NULL;
}

}
}