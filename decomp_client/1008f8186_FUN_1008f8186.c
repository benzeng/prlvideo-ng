
void FUN_1008f8186(long param_1,undefined8 param_2,xmlChar *param_3)

{
  undefined8 uVar1;
  xmlChar *pxVar2;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined4 *)(param_1 + 0x24) = 4;
    uVar1 = (*(code *)_xmlMalloc)((long)*(int *)(param_1 + 0x24) * 8);
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    if (*(long *)(param_1 + 0x28) == 0) {
      FUN_1008f6f28(param_1,0,"processing text");
      return;
    }
    uVar1 = (*(code *)_xmlMalloc)((long)*(int *)(param_1 + 0x24) * 8);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    if (*(long *)(param_1 + 0x30) == 0) {
      FUN_1008f6f28(param_1,0,"processing text");
      return;
    }
  }
  if (*(int *)(param_1 + 0x24) <= *(int *)(param_1 + 0x20)) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) * 2;
    uVar1 = (*(code *)_xmlRealloc)
                      (*(undefined8 *)(param_1 + 0x28),(long)*(int *)(param_1 + 0x24) * 8);
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    if (*(long *)(param_1 + 0x28) == 0) {
      FUN_1008f6f28(param_1,0,"processing text");
      return;
    }
    uVar1 = (*(code *)_xmlRealloc)
                      (*(undefined8 *)(param_1 + 0x30),(long)*(int *)(param_1 + 0x24) * 8);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    if (*(long *)(param_1 + 0x30) == 0) {
      FUN_1008f6f28(param_1,0,"processing text");
      return;
    }
  }
  *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)*(int *)(param_1 + 0x20) * 8) = param_2;
  pxVar2 = _xmlStrdup(param_3);
  *(xmlChar **)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x20) * 8) = pxVar2;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return;
}

