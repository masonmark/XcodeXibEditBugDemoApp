/*
    
    THIS MALFORMED HEADER WILL COMPLETELY BREAK XCODE'S .XIB EDITING
 
    This is a bug report demo app for Apple Problem ID: 10698256 
    
    If this header is included in your project the .xib editor will
    stop seeing newly added outlets. For this demo app, follow these
    steps:
 
    1. Quit and re-launch Xcode.
    2. Navigate to XcodeBugViewController.h and add an outlet, like
       "IBOutlet NSView *foo1" and save the header file.
    3. Navigate to XcodeBugViewController.xib and right click the "File's.
       Owner" icon to pop up the list of outlets.
    4. Note whether or not the outlet appears in the list.
    5. Repeat steps 3 and 4 five times. 

    You should see that outlets are no longer showing up in Xcode.

    If you delete this header, the problem will go away.

    BONUS BUG: Editing this header within Xcode will cause it to crash or freeze.
/*