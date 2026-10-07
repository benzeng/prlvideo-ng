
xmlChar * _xmlBuildQName(xmlChar *ncname,xmlChar *prefix,xmlChar *memory,int len)

{
  xmlChar xVar1;
  int iVar2;
  int iVar3;
  xmlChar *pxVar4;
  long lVar5;
  xmlChar *local_40;
  xmlChar *local_10;
  
  if (ncname == (xmlChar *)0x0) {
    local_40 = (xmlChar *)0x0;
  }
  else {
    local_40 = ncname;
    if (prefix != (xmlChar *)0x0) {
      lVar5 = -1;
      pxVar4 = ncname;
      do {
        if (lVar5 == 0) break;
        lVar5 = lVar5 + -1;
        xVar1 = *pxVar4;
        pxVar4 = pxVar4 + 1;
      } while (xVar1 != '\0');
      iVar2 = ~(uint)lVar5 - 1;
      lVar5 = -1;
      pxVar4 = prefix;
      do {
        if (lVar5 == 0) break;
        lVar5 = lVar5 + -1;
        xVar1 = *pxVar4;
        pxVar4 = pxVar4 + 1;
      } while (xVar1 != '\0');
      iVar3 = ~(uint)lVar5 - 1;
      if (((memory == (xmlChar *)0x0) || (local_10 = memory, len < iVar3 + iVar2 + 2)) &&
         (local_10 = (xmlChar *)(*(code *)_xmlMallocAtomic)((long)(iVar3 + iVar2 + 2)),
         local_10 == (xmlChar *)0x0)) {
        FUN_1001658b8("building QName");
        local_40 = (xmlChar *)0x0;
      }
      else {
        pxVar4 = local_10;
        for (lVar5 = (long)iVar3; lVar5 != 0; lVar5 = lVar5 + -1) {
          *pxVar4 = *prefix;
          prefix = prefix + 1;
          pxVar4 = pxVar4 + 1;
        }
        local_10[iVar3] = ':';
        pxVar4 = local_10 + iVar3;
        for (lVar5 = (long)iVar2; pxVar4 = pxVar4 + 1, lVar5 != 0; lVar5 = lVar5 + -1) {
          *pxVar4 = *ncname;
          ncname = ncname + 1;
        }
        local_10[(long)(iVar3 + iVar2) + 1] = '\0';
        local_40 = local_10;
      }
    }
  }
  return local_40;
}

