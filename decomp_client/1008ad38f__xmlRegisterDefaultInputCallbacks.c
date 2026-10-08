
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _xmlRegisterDefaultInputCallbacks(void)

{
  if (DAT_1023124a4 == 0) {
    _xmlRegisterInputCallbacks(_xmlFileMatch,_xmlFileOpen,_xmlFileRead,_xmlFileClose);
    _xmlRegisterInputCallbacks(FUN_1008ac0df,FUN_1008ac1df,FUN_1008ac334,FUN_1008ac3b8);
    _xmlRegisterInputCallbacks(_xmlIOHTTPMatch,_xmlIOHTTPOpen,_xmlIOHTTPRead,_xmlIOHTTPClose);
    _xmlRegisterInputCallbacks(_xmlIOFTPMatch,_xmlIOFTPOpen,_xmlIOFTPRead,_xmlIOFTPClose);
    DAT_1023124a4 = 1;
  }
  return;
}

