XcodeXibEditBugDemoApp
======================

A bug reproduction demo app for another serious Xcode bug that cost me some hours.

### TL;DR
Xcode 4.2.1 (and I think maybe all previous 4.x versions) will shit all over itself and become unable to edit .xib files, if there is header file that exists somewhere in your source tree (even one not actually included in your project), that contains an unterminated comment in it.

The Pulitzer Prize-winning biography of this historical bug may be found at: http://masonmark.com/more-xcode4-fuckery
