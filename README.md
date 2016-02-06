<p align="center"><img src="https://raw.githubusercontent.com/caryll/design/master/caryll-logo-libs-githubreadme.png" width=200></p><h1 align="center">otfcc</h1>

The `otfcc` is a C library and utility used for parsing and writing OpenType font files.

## Key features

* Read a OpenType font; (TrueType is supported as well)
* Write a OpenType font;

## `otfcc` command line tool

Usage:

``` bash
otfcc dump input.otf -o output.json
otfcc build input.json -o output.otf
otfcc patch input.otf -p patch.json -o output.otf
```