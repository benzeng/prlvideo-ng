
undefined4 FUN_1001c26ce(xmlChar *param_1,long param_2,int param_3,long *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 local_54;
  xmlChar *local_30;
  long local_28;
  int local_1c;
  int local_14;
  
  if (param_1 == (xmlChar *)0x0) {
    local_54 = 0xffffffff;
  }
  else if (param_2 == 0) {
    local_54 = 0xffffffff;
  }
  else if ((param_4 == (long *)0x0) || (param_5 == (int *)0x0)) {
    local_54 = 0xffffffff;
  }
  else if (param_2 == 0) {
    local_54 = 0xffffffff;
  }
  else {
    local_1c = param_3 + -1;
    local_14 = _xmlStrlen(param_1);
    local_30 = param_1;
    local_28 = param_2;
    while (0 < local_14) {
      if ((*param_4 == local_28) && (*param_5 < local_1c + local_14)) {
        return 0;
      }
      if ((*(int *)(local_28 + 8) != 1) && (*(long *)(local_28 + 0x50) != 0)) {
        iVar1 = _xmlStrlen(*(xmlChar **)(local_28 + 0x50));
        if (local_14 + local_1c <= iVar1) {
          iVar1 = _xmlStrncmp((xmlChar *)(*(long *)(local_28 + 0x50) + (long)local_1c),local_30,
                              local_14);
          if (iVar1 == 0) {
            *param_4 = local_28;
            *param_5 = local_1c + local_14;
            return 1;
          }
          return 0;
        }
        iVar1 = iVar1 - local_1c;
        iVar2 = _xmlStrncmp((xmlChar *)(*(long *)(local_28 + 0x50) + (long)local_1c),local_30,iVar1)
        ;
        if (iVar2 != 0) {
          return 0;
        }
        local_30 = local_30 + iVar1;
        local_14 = local_14 - iVar1;
      }
      local_28 = _xmlXPtrAdvanceNode(local_28,0);
      if (local_28 == 0) {
        return 0;
      }
      local_1c = 0;
    }
    local_54 = 1;
  }
  return local_54;
}

