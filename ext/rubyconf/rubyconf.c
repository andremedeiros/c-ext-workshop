#include "rubyconf.h"

VALUE RubyConfClass = Qnil;

void
Init_rubyconf()
{
  RubyConfClass = rb_define_class("RubyConf", rb_cObject);
  rb_define_method(RubyConfClass, "say_hi", rubyconf_say_hi, -1);
  rb_define_method(RubyConfClass, "array", rubyconf_get_array, 0);
  rb_define_method(RubyConfClass, "hash", rubyconf_get_hash, 0);
}

VALUE
rubyconf_say_hi(int argc, VALUE *argv, VALUE self)
{
  VALUE phrase = rb_str_new2("Hello, ");
  VALUE subject;
  rb_scan_args(argc, argv, "01", &subject);

  // Append the name to the string we now have, or "World" if we weren't
  // passed a string.
  if(RTEST(subject))
    rb_str_append(phrase, subject);
  else
    rb_str_cat2(phrase, "World");

  // Add an exclamation mark for excitement!
  rb_str_cat2(phrase, "!");
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
