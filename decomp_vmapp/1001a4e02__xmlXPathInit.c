
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _xmlXPathInit(void)

{
  if (DAT_1011b7ea0 == 0) {
    _xmlXPathPINF = FUN_1001a4bd7();
    _xmlXPathNINF = FUN_1001a4c1b();
    _xmlXPathNAN = FUN_1001a4c64();
    DAT_1011b7e98 = FUN_1001a4baf();
    DAT_1011b7ea0 = 1;
  }
  return;
}

