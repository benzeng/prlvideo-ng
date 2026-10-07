
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _xmlRegisterDefaultInputCallbacks(void)

{
  if (DAT_1011b7724 == 0) {
    _xmlRegisterInputCallbacks(_xmlFileMatch,_xmlFileOpen,_xmlFileRead,_xmlFileClose);
    _xmlRegisterInputCallbacks(FUN_1001787b7,FUN_1001788b7,FUN_100178a0c,FUN_100178a90);
    _xmlRegisterInputCallbacks(_xmlIOHTTPMatch,_xmlIOHTTPOpen,_xmlIOHTTPRead,_xmlIOHTTPClose);
    _xmlRegisterInputCallbacks(_xmlIOFTPMatch,_xmlIOFTPOpen,_xmlIOFTPRead,_xmlIOFTPClose);
    DAT_1011b7724 = 1;
  }
  return;
}

