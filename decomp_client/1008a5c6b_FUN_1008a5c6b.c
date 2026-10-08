
long * FUN_1008a5c6b(long param_1,xmlChar *param_2,xmlChar *param_3)

{
  int iVar1;
  xmlNsPtr pxVar2;
  long *local_38;
  long *local_10;
  
  if (param_1 == 0) {
    local_38 = (long *)0x0;
  }
  else {
    local_10 = (long *)FUN_1008a5b7d(param_1);
    if (local_10 == (long *)0x0) {
      local_38 = (long *)0x0;
    }
    else {
      if (*local_10 != 0) {
        for (local_10 = (long *)*local_10; local_10 != (long *)0x0; local_10 = (long *)*local_10) {
          if ((((xmlChar *)local_10[3] == param_3) ||
              (iVar1 = _xmlStrEqual((xmlChar *)local_10[3],param_3), iVar1 != 0)) &&
             (iVar1 = _xmlStrEqual((xmlChar *)local_10[2],param_2), iVar1 != 0)) {
            return local_10;
          }
          if (*local_10 == 0) break;
        }
      }
      pxVar2 = _xmlNewNs((xmlNodePtr)0x0,param_2,param_3);
      *local_10 = (long)pxVar2;
      local_38 = (long *)*local_10;
    }
  }
  return local_38;
}

