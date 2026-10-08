
xmlChar * _xmlStrndup(xmlChar *cur,int len)

{
  long lVar1;
  xmlChar *pxVar2;
  xmlChar *local_30;
  
  if ((cur == (xmlChar *)0x0) || (len < 0)) {
    local_30 = (xmlChar *)0x0;
  }
  else {
    local_30 = (xmlChar *)(*(code *)_xmlMallocAtomic)((long)(len + 1));
    if (local_30 == (xmlChar *)0x0) {
      _xmlErrMemory(0,0);
      local_30 = (xmlChar *)0x0;
    }
    else {
      pxVar2 = local_30;
      for (lVar1 = (long)len; lVar1 != 0; lVar1 = lVar1 + -1) {
        *pxVar2 = *cur;
        cur = cur + 1;
        pxVar2 = pxVar2 + 1;
      }
      local_30[len] = '\0';
    }
  }
  return local_30;
}

