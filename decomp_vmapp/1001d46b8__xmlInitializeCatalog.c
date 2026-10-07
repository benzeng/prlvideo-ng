
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _xmlInitializeCatalog(void)

{
  char *pcVar1;
  long lVar2;
  xmlChar *pxVar3;
  long lVar4;
  xmlChar *local_38;
  xmlChar *local_28;
  long *local_10;
  
  if (DAT_1011b7f20 == 0) {
    FUN_1001d4677();
    _xmlRMutexLock(DAT_1011b7f18);
    pcVar1 = _getenv("XML_DEBUG_CATALOG");
    if (pcVar1 != (char *)0x0) {
      DAT_1011b7f00 = 1;
    }
    lVar4 = DAT_1011b7f10;
    if (DAT_1011b7f10 == 0) {
      local_38 = (xmlChar *)_getenv("XML_CATALOG_FILES");
      if (local_38 == (xmlChar *)0x0) {
        local_38 = "file:///etc/xml/catalog";
      }
      lVar2 = FUN_1001cf2fc(1,DAT_101111310);
      lVar4 = DAT_1011b7f10;
      if (lVar2 != 0) {
        local_28 = local_38;
        local_10 = (long *)(lVar2 + 0x70);
        while (lVar4 = lVar2, *local_28 != '\0') {
          for (; (pxVar3 = local_28, *local_28 == ' ' ||
                 ((('\b' < (char)*local_28 && ((char)*local_28 < '\v')) || (*local_28 == '\r'))));
              local_28 = local_28 + 1) {
          }
          if (*local_28 != '\0') {
            for (; (((*local_28 != '\0' && (*local_28 != ' ')) &&
                    (((char)*local_28 < '\t' || ('\n' < (char)*local_28)))) && (*local_28 != '\r'));
                local_28 = local_28 + 1) {
            }
            pxVar3 = _xmlStrndup(pxVar3,(int)local_28 - (int)pxVar3);
            if (pxVar3 != (xmlChar *)0x0) {
              lVar4 = FUN_1001cef6b(1,0,0,pxVar3,DAT_101111310,0);
              *local_10 = lVar4;
              if (*local_10 != 0) {
                local_10 = (long *)*local_10;
              }
              (*(code *)_xmlFree)(pxVar3);
            }
          }
        }
      }
    }
    DAT_1011b7f10 = lVar4;
    _xmlRMutexUnlock(DAT_1011b7f18);
  }
  return;
}

