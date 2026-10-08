
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _xmlXPathInit(void)

{
  if (DAT_102312c20 == 0) {
    _xmlXPathPINF = FUN_1008d84ff();
    _xmlXPathNINF = FUN_1008d8543();
    _xmlXPathNAN = FUN_1008d858c();
    DAT_102312c18 = FUN_1008d84d7();
    DAT_102312c20 = 1;
  }
  return;
}

