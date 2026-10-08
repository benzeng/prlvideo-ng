
void FUN_100907f9f(void)

{
  char *pcVar1;
  
  if (DAT_102312ca0 == 0) {
    pcVar1 = _getenv("XML_DEBUG_CATALOG");
    if (pcVar1 != (char *)0x0) {
      DAT_102312c80 = 1;
    }
    DAT_102312c98 = _xmlNewRMutex();
    DAT_102312ca0 = 1;
  }
  return;
}

