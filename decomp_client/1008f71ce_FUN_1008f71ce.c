
undefined8 * FUN_1008f71ce(long param_1,xmlChar *param_2,undefined8 param_3)

{
  int iVar1;
  xmlChar *pxVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *local_38;
  
  local_38 = (undefined8 *)(*(code *)_xmlMalloc)(0x40);
  if (local_38 == (undefined8 *)0x0) {
    FUN_1008f6f28(param_1,param_3,"growing XInclude context");
    local_38 = (undefined8 *)0x0;
  }
  else {
    puVar5 = local_38;
    for (lVar4 = 8; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    if (param_2 == (xmlChar *)0x0) {
      *local_38 = 0;
    }
    else {
      pxVar2 = _xmlStrdup(param_2);
      *local_38 = pxVar2;
    }
    local_38[1] = 0;
    local_38[3] = param_3;
    local_38[2] = 0;
    *(undefined4 *)((long)local_38 + 0x2c) = 0;
    *(undefined4 *)(local_38 + 5) = 0;
    local_38[4] = 0;
    if (*(int *)(param_1 + 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x10) = 4;
      uVar3 = (*(code *)_xmlMalloc)((long)*(int *)(param_1 + 0x10) * 8);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      if (*(long *)(param_1 + 0x18) == 0) {
        FUN_1008f6f28(param_1,param_3,"growing XInclude context");
        FUN_1008f7131(local_38);
        return (undefined8 *)0x0;
      }
    }
    if (*(int *)(param_1 + 0x10) <= *(int *)(param_1 + 0xc)) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) * 2;
      uVar3 = (*(code *)_xmlRealloc)
                        (*(undefined8 *)(param_1 + 0x18),(long)*(int *)(param_1 + 0x10) * 8);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      if (*(long *)(param_1 + 0x18) == 0) {
        FUN_1008f6f28(param_1,param_3,"growing XInclude context");
        FUN_1008f7131(local_38);
        return (undefined8 *)0x0;
      }
    }
    iVar1 = *(int *)(param_1 + 0xc);
    *(undefined8 **)(*(long *)(param_1 + 0x18) + (long)iVar1 * 8) = local_38;
    *(int *)(param_1 + 0xc) = iVar1 + 1;
  }
  return local_38;
}

