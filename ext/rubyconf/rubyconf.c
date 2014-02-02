#include "rubyconf.h"

VALUE RubyConfClass = Qnil;

void
Init_rubyconf()
{
  RubyConfClass = rb_define_class("RubyConf", rb_cObject);
  rb_define_method(RubyConfClass, "say_hi", rubyconf_say_hi, 1);
  rb_define_method(RubyConfClass, "array", rubyconf_get_array, 0);
  rb_define_method(RubyConfClass, "hash", rubyconf_get_hash, 0);
}

VALUE
rubyconf_say_hi(VALUE self, VALUE name)
{
  // Get the value of the variable as a C string.
  char *c_name = StringValueCStr(name);

  // Create the ruby string with the prefix.
  VALUE phrase = rb_str_new2("Hello, ");

  // Append the name to the string we now have.
  rb_str_cat(phrase, c_name, strlen(c_name));

  // and add an exclamation mark in the end for excitement!
  rb_str_cat(phrase, "!", sizeof(char));

  return phrase;
}

VALUE
rubyconf_get_array(VALUE self)
{
  VALUE array = rb_ary_new();

  rb_ary_push(array, rb_str_new2("On the First day of Christmas my true love sent to me a Partridge in a Pear Tree."));
  rb_ary_push(array, rb_str_new2("On the Second day of Christmas my true love sent to me Two Turtle Doves"));
  rb_ary_push(array, rb_str_new2("On the Third day of Christmas my true love sent to me Three French Hens"));

  return array;
}

VALUE
rubyconf_get_hash(VALUE self)
{
  // Instanciate a new ruby hash.
  VALUE hash = rb_hash_new();

  // Add the value 42 with key :universal_answer to the hash.
  rb_hash_aset(
    hash,
    ID2SYM(rb_intern("universal_answer")),
    INT2NUM(42)
  );

  return hash;
}
