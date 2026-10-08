
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
  
  if (DAT_102312ca0 == 0) {
    FUN_100907f9f();
    _xmlRMutexLock(DAT_102312c98);
    pcVar1 = _getenv("XML_DEBUG_CATALOG");
    if (pcVar1 != (char *)0x0) {
      DAT_102312c80 = 1;
    }
    lVar4 = DAT_102312c90;
    if (DAT_102312c90 == 0) {
      local_38 = (xmlChar *)_getenv("XML_CATALOG_FILES");
      if (local_38 == (xmlChar *)0x0) {
        local_38 = "file:///etc/xml/catalog";
      }
      lVar2 = FUN_100902c24(1,DAT_102279410);
      lVar4 = DAT_102312c90;
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
              lVar4 = FUN_100902893(1,0,0,pxVar3,DAT_102279410,0);
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
    DAT_102312c90 = lVar4;
    _xmlRMutexUnlock(DAT_102312c98);
  }
  return;
}

