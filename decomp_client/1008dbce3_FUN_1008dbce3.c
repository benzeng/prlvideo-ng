
long * FUN_1008dbce3(long param_1,long *param_2)

{
  xmlChar *pxVar1;
  long *local_30;
  
  if ((param_2 == (long *)0x0) || ((int)param_2[1] != 0x12)) {
    local_30 = (long *)0x0;
  }
  else {
    local_30 = param_2;
    if ((param_1 != 0) && (*(int *)(param_1 + 8) != 0x12)) {
      local_30 = (long *)(*(code *)_xmlMalloc)(0x28);
      if (local_30 == (long *)0x0) {
        FUN_1008d87c3(0,"duplicating namespace\n");
        local_30 = (long *)0x0;
      }
      else {
        *local_30 = 0;
        local_30[1] = 0;
        local_30[2] = 0;
        local_30[3] = 0;
        local_30[4] = 0;
        *(undefined4 *)(local_30 + 1) = 0x12;
        if (param_2[2] != 0) {
          pxVar1 = _xmlStrdup((xmlChar *)param_2[2]);
          local_30[2] = (long)pxVar1;
        }
        if (param_2[3] != 0) {
          pxVar1 = _xmlStrdup((xmlChar *)param_2[3]);
          local_30[3] = (long)pxVar1;
        }
        *local_30 = param_1;
      }
    }
  }
  return local_30;
}

