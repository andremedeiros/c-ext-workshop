require "rake/extensiontask"

Rake::ExtensionTask.new("rubyconf") do |extension|
  extension.lib_dir = "lib/rubyconf"
end
