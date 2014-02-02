#ifndef _RUBYCONF_H
#define _RUBYCONF_H

#include <string.h>

#include "ruby.h"

// Class methods
VALUE rubyconf_say_hi(int argc, VALUE *argv, VALUE self);
VALUE rubyconf_get_array(VALUE self);
VALUE rubyconf_get_hash(VALUE self);

// Extension initialization
void Init_rubyconf();

#endif // _RUBY_CONF_H
