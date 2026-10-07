
xmlChar * _xmlCharStrndup(char *cur,int len)

{
  xmlChar *local_30;
  int local_14;
  
  if ((cur == (char *)0x0) || (len < 0)) {
    local_30 = (xmlChar *)0x0;
  }
  else {
    local_30 = (xmlChar *)(*(code *)_xmlMallocAtomic)((long)(len + 1));
    if (local_30 == (xmlChar *)0x0) {
      _xmlErrMemory(0,0);
      local_30 = (xmlChar *)0x0;
    }
    else {
      for (local_14 = 0; local_14 < len; local_14 = local_14 + 1) {
        local_30[local_14] = cur[local_14];
        if (local_30[local_14] == '\0') {
          return local_30;
        }
      }
      local_30[len] = '\0';
    }
  }
  return local_30;
}

