
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _xmlRegisterHTTPPostCallbacks(void)

{
  if (DAT_1011b772c == 0) {
    _xmlRegisterDefaultOutputCallbacks();
  }
  _xmlRegisterOutputCallbacks(_xmlIOHTTPMatch,FUN_100179431,FUN_10017948e,FUN_10017981a);
  return;
}

