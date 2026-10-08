
void * FUN_100982536(xmlChar *param_1,uint param_2)

{
  xmlCharEncodingHandlerPtr pxVar1;
  xmlChar *pxVar2;
  void *local_30;
  uint local_24;
  
  local_30 = (void *)(*(code *)_xmlMalloc)(0xa0);
  if (local_30 == (void *)0x0) {
    FUN_100981a88("creating saving context");
    local_30 = (void *)0x0;
  }
  else {
    _memset(local_30,0,0xa0);
    if (param_1 != (xmlChar *)0x0) {
      pxVar1 = _xmlFindCharEncodingHandler((char *)param_1);
      *(xmlCharEncodingHandlerPtr *)((long)local_30 + 0x20) = pxVar1;
      if (*(long *)((long)local_30 + 0x20) == 0) {
        FUN_100981ab6(0x57b,0,param_1);
        FUN_1009824d3(local_30);
        return (void *)0x0;
      }
      pxVar2 = _xmlStrdup(param_1);
      *(xmlChar **)((long)local_30 + 0x18) = pxVar2;
      *(code **)((long)local_30 + 0x90) = FUN_100981dee;
    }
    FUN_100982376(local_30);
    local_24 = param_2;
    if (((*(uint *)((long)local_30 + 0x38) >> 2 & 1) != 0) && ((param_2 >> 2 & 1) == 0)) {
      local_24 = param_2 | 4;
    }
    *(uint *)((long)local_30 + 0x38) = local_24;
    if ((local_24 & 1) != 0) {
      *(undefined4 *)((long)local_30 + 0x40) = 1;
    }
  }
  return local_30;
}

