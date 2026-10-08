
xmlChar * _xmlStrncat(xmlChar *cur,xmlChar *add,int len)

{
  int iVar1;
  long lVar2;
  xmlChar *pxVar3;
  xmlChar *local_38;
  
  local_38 = cur;
  if ((add != (xmlChar *)0x0) && (len != 0)) {
    if (cur == (xmlChar *)0x0) {
      local_38 = _xmlStrndup(add,len);
    }
    else {
      iVar1 = _xmlStrlen(cur);
      local_38 = (xmlChar *)(*(code *)_xmlRealloc)(cur,(long)(len + iVar1 + 1));
      if (local_38 == (xmlChar *)0x0) {
        _xmlErrMemory(0,0);
        local_38 = cur;
      }
      else {
        pxVar3 = local_38 + iVar1;
        for (lVar2 = (long)len; lVar2 != 0; lVar2 = lVar2 + -1) {
          *pxVar3 = *add;
          add = add + 1;
          pxVar3 = pxVar3 + 1;
        }
        local_38[len + iVar1] = '\0';
      }
    }
  }
  return local_38;
}

