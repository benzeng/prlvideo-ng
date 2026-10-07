
undefined4 FUN_1001dd9cc(undefined4 *param_1,long param_2,xmlChar *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  xmlChar *pxVar4;
  undefined4 local_3c;
  int local_10;
  
  iVar1 = param_1[0x14];
  if (((param_2 == 0) || (*(long *)(param_2 + 0x40) == 0)) || (*(long *)(param_2 + 0x58) == 0)) {
    local_3c = 0xffffffff;
  }
  else if (param_3 == (xmlChar *)0x0) {
    if (*(int *)(*(long *)(param_2 + 0x40) + (long)((*(int *)(param_2 + 0x50) + 1) * iVar1) * 4) ==
        2) {
      local_3c = 1;
    }
    else {
      local_3c = 0;
    }
  }
  else {
    for (local_10 = 0; local_10 < *(int *)(param_2 + 0x50); local_10 = local_10 + 1) {
      iVar2 = *(int *)(*(long *)(param_2 + 0x40) +
                       (long)((*(int *)(param_2 + 0x50) + 1) * iVar1 + local_10) * 4 + 4);
      if ((0 < iVar2) && (iVar2 <= *(int *)(param_2 + 0x3c))) {
        iVar2 = iVar2 + -1;
        iVar3 = FUN_1001dd8b8(*(undefined8 *)(*(long *)(param_2 + 0x58) + (long)local_10 * 8),
                              param_3);
        if (iVar3 != 0) {
          param_1[0x14] = iVar2;
          if ((*(long *)(param_1 + 4) != 0) && (*(long *)(param_2 + 0x48) != 0)) {
            (**(code **)(param_1 + 4))
                      (*(undefined8 *)(param_1 + 6),param_3,
                       *(undefined8 *)
                        (*(long *)(param_2 + 0x48) +
                        (long)(*(int *)(param_2 + 0x50) * iVar1 + local_10) * 8),param_4);
          }
          if (*(int *)(*(long *)(param_2 + 0x40) +
                      (long)((*(int *)(param_2 + 0x50) + 1) * iVar2) * 4) != 4) {
            if (*(int *)(*(long *)(param_2 + 0x40) +
                        (long)((*(int *)(param_2 + 0x50) + 1) * iVar2) * 4) == 2) {
              return 1;
            }
            return 0;
          }
          break;
        }
      }
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x20));
    }
    pxVar4 = _xmlStrdup(param_3);
    *(xmlChar **)(param_1 + 0x20) = pxVar4;
    param_1[0x1c] = iVar1;
    *param_1 = 0xffffffff;
    local_3c = 0xffffffff;
  }
  return local_3c;
}

