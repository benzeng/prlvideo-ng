
void FUN_1001d4677(void)

{
  char *pcVar1;
  
  if (DAT_1011b7f20 == 0) {
    pcVar1 = _getenv("XML_DEBUG_CATALOG");
    if (pcVar1 != (char *)0x0) {
      DAT_1011b7f00 = 1;
    }
    DAT_1011b7f18 = _xmlNewRMutex();
    DAT_1011b7f20 = 1;
  }
  return;
}

