
int FUN_1008f749c(long param_1,xmlChar *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  xmlChar *pxVar3;
  int local_1c;
  
  if (*(int *)(param_1 + 0x40) < 0x29) {
    if (*(long *)(param_1 + 0x48) == 0) {
      *(undefined4 *)(param_1 + 0x44) = 4;
      *(undefined4 *)(param_1 + 0x40) = 0;
      uVar2 = (*(code *)_xmlMalloc)((long)*(int *)(param_1 + 0x44) * 8);
      *(undefined8 *)(param_1 + 0x48) = uVar2;
      if (*(long *)(param_1 + 0x48) == 0) {
        FUN_1008f6f28(param_1,0,"adding URL");
        return -1;
      }
    }
    if (*(int *)(param_1 + 0x44) <= *(int *)(param_1 + 0x40)) {
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) * 2;
      uVar2 = (*(code *)_xmlRealloc)
                        (*(undefined8 *)(param_1 + 0x48),(long)*(int *)(param_1 + 0x44) * 8);
      *(undefined8 *)(param_1 + 0x48) = uVar2;
      if (*(long *)(param_1 + 0x48) == 0) {
        FUN_1008f6f28(param_1,0,"adding URL");
        return -1;
      }
    }
    pxVar3 = _xmlStrdup(param_2);
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x48) + (long)*(int *)(param_1 + 0x40) * 8);
    *puVar1 = pxVar3;
    *(undefined8 *)(param_1 + 0x38) = *puVar1;
    local_1c = *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x40) = local_1c + 1;
  }
  else {
    FUN_1008f6fe0(param_1,0,0x640,"detected a recursion in %s\n",param_2);
    local_1c = -1;
  }
  return local_1c;
}

