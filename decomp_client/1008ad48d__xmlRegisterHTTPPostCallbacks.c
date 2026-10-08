
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _xmlRegisterHTTPPostCallbacks(void)

{
  if (DAT_1023124ac == 0) {
    _xmlRegisterDefaultOutputCallbacks();
  }
  _xmlRegisterOutputCallbacks(_xmlIOHTTPMatch,FUN_1008acd59,FUN_1008acdb6,FUN_1008ad142);
  return;
}

