# coding: utf-8
lib = File.expand_path('../lib', __FILE__)
$LOAD_PATH.unshift(lib) unless $LOAD_PATH.include?(lib)
require 'rubyconf/version'

Gem::Specification.new do |spec|
  spec.name          = "rubyconf"
  spec.version       = Rubyconf::VERSION
  spec.authors       = ["Andre Medeiros"]
  spec.email         = ["me@andremedeiros.info"]
  spec.summary       = %q{Test gem for the RubyConf AU workshop}
  spec.description   = <<-EOS
    This is a simple dummy gem that will make sure your computer is setup
    properly for the Building C Extensions workshop.
  EOS
  spec.homepage      = "http://www.rubyconf.org.au/"
  spec.license       = "MIT"

  spec.files         = `git ls-files -z`.split("\x0")
  spec.executables   = spec.files.grep(%r{^bin/}) { |f| File.basename(f) }
  spec.test_files    = spec.files.grep(%r{^(test|spec|features)/})
  spec.require_paths = ["lib"]

  spec.add_development_dependency "bundler", "~> 1.5"
  spec.add_development_dependency "rake"
  spec.add_development_dependency "rake-compiler"
  spec.add_development_dependency "rspec", "~> 2.14.1"
end
