
undefined4 FUN_1008f61e6(xmlChar *param_1,long *param_2,int *param_3,long *param_4,int *param_5)

{
  xmlChar val;
  int iVar1;
  int iVar2;
  xmlChar *pxVar3;
  undefined4 local_54;
  long local_28;
  int local_14;
  
  if (param_1 == (xmlChar *)0x0) {
    local_54 = 0xffffffff;
  }
  else if ((param_2 == (long *)0x0) || (param_3 == (int *)0x0)) {
    local_54 = 0xffffffff;
  }
  else if ((param_4 == (long *)0x0) || (param_5 == (int *)0x0)) {
    local_54 = 0xffffffff;
  }
  else {
    local_28 = *param_2;
    if (local_28 == 0) {
      local_54 = 0xffffffff;
    }
    else {
      local_14 = *param_3 + -1;
      val = *param_1;
      while (local_28 != 0) {
        if ((*(int *)(local_28 + 8) != 1) && (*(long *)(local_28 + 0x50) != 0)) {
          iVar1 = _xmlStrlen(*(xmlChar **)(local_28 + 0x50));
          while (local_14 <= iVar1) {
            if (val == '\0') {
              *param_2 = local_28;
              *param_3 = local_14 + 1;
              *param_4 = local_28;
              *param_5 = local_14 + 1;
              return 1;
            }
            pxVar3 = _xmlStrchr((xmlChar *)(*(long *)(local_28 + 0x50) + (long)local_14),val);
            if (pxVar3 == (xmlChar *)0x0) {
              local_14 = iVar1 + 1;
            }
            else {
              local_14 = (int)pxVar3 - (int)*(undefined8 *)(local_28 + 0x50);
              iVar2 = FUN_1008f5ff6(param_1,local_28,local_14 + 1,param_4,param_5);
              if (iVar2 != 0) {
                *param_2 = local_28;
                *param_3 = local_14 + 1;
                return 1;
              }
              local_14 = local_14 + 1;
            }
          }
        }
        if ((*param_4 == local_28) && (*param_5 <= local_14)) {
          return 0;
        }
        local_28 = _xmlXPtrAdvanceNode(local_28,0);
        if (local_28 == 0) {
          return 0;
        }
        local_14 = 1;
      }
      local_54 = 0;
    }
  }
  return local_54;
}

