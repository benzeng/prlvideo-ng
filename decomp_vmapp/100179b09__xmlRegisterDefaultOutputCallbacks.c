
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _xmlRegisterDefaultOutputCallbacks(void)

{
  if (DAT_1011b772c == 0) {
    _xmlRegisterOutputCallbacks(_xmlFileMatch,FUN_1001784b8,FUN_100178600,_xmlFileClose);
    _xmlRegisterOutputCallbacks(_xmlIOHTTPMatch,FUN_100179431,FUN_10017948e,FUN_1001797fc);
    DAT_1011b772c = 1;
  }
  return;
}

