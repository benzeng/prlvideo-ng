
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _xmlRegisterDefaultOutputCallbacks(void)

{
  if (DAT_1023124ac == 0) {
    _xmlRegisterOutputCallbacks(_xmlFileMatch,FUN_1008abde0,FUN_1008abf28,_xmlFileClose);
    _xmlRegisterOutputCallbacks(_xmlIOHTTPMatch,FUN_1008acd59,FUN_1008acdb6,FUN_1008ad124);
    DAT_1023124ac = 1;
  }
  return;
}

