## Project Euler

![](https://projecteuler.net/profile/kiliankoe.png)

These are my solutions for the problems from [Project Euler](http://projecteuler.net/). Judge me on the implementations if you feel like it, but please regard the timestamp of the commit. Not sure if I'll fix old and smelly code. I usually touch these problems to get familiar with a language or its specific features (or in the case of C, programming in general).

There's also a few similar problems on [4Clojure](http://www.4clojure.com/user/kiliankoe) specifically for... well... Clojure.

### C

Should compile with probably any C compiler out there and the most standard flags and whatnot. Simple stuff.
This is also old and stupid code.

### Swift

Will obviously only run on a Mac (for now). Just throw it into a playground or compile it directly, whatever you prefer.

Everything should also run on the commandline with `xcrun swift file.swift` or `xcrun swiftc file.swift` (to compile it). You might need to select the correct version of Xcode though first via `sudo xcode-select -switch /Applications/Xcode(6/7/whatever-Beta).app/Contents/Developer`.

These files will probably contain outdated Swift syntax, so forgive me if it doesn't run with the most current version of the swift runtime/compiler.

### Clojure

Just playing around here. If you're an experienced functional programmer, please be easy on my code. I've never *really* done purely functional stuff before this.

Code should be able to execute with `lein exec file.clj`. The [exec plugin](https://github.com/kumarshantanu/lein-exec) for leiningen is needed though.
