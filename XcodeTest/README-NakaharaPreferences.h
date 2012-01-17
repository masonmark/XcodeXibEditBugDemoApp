/*
	NakaharaPreferences - Tue, Mar 11, 2008
 
	We want a SIMPLE, MODERN prefs pane API, which lets us reuse panes across apps. This is it.
 
    HOW TO USE:
 
	1. Make one or more NakaharaPreferencePane objects. (It's simple. See that class for details.)
 
	2. Before your app uses the prefs window, set the paneIdentifiers property 
       of [NakaharaPreferencesWindowController sharedController].
 
	3. Then just send it -showWindow.
 

/*