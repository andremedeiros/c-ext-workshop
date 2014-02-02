# Building C Extensions Workshop

## Goal

The goal of this workshop is to learn how to bind C libraries into Ruby land. At the workshop, we will create an image processing library.

## Requirements

* A UNIX based System (Linux or OS X)
* A compiler:
  * On OS X, install Xcode and the Command Line Interface (see [this guide](http://railsapps.github.io/xcode-command-line-tools.html))
  * On Linux, use your package manager to install `build-essentials`.
* Ruby installed from source (you're good if you use `RVM` or `rbenv`)
* GraphicsMagick
  * On OS X, use [Homebrew](http://brew.sh/) to install it: `brew install graphicsmagick`
  * On Linux, use your package manager to install graphicsmagick. Don't forget the development libraries too.

## How to know if you're ready

### Ruby

    git clone git@github.com:andremedeiros/rubyconf.git
    cd rubyconf
    bundle
    rake

### GraphicsMagick

    pkg-config GraphicsMagickWand --libs

If you get no errors running these commands you're ready to go. If not, get in touch with me before the conference at [@superdealloc](https://twitter.com/superdealloc) so that we can get you ready to go!

## Other prerequisites

None whatsoever. We'll cover some C basics for those who don't know the language along the way.
