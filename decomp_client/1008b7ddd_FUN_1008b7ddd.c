
int FUN_1008b7ddd(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x24) < 1) {
    *(undefined4 *)(param_1 + 0x24) = 4;
    uVar2 = (*(code *)_xmlMalloc)((long)*(int *)(param_1 + 0x24) * 8);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    if (*(long *)(param_1 + 0x28) == 0) {
      FUN_1008b7324(param_1,"malloc failed");
      *(undefined4 *)(param_1 + 0x24) = 0;
      return 0;
    }
  }
  if (*(int *)(param_1 + 0x24) <= *(int *)(param_1 + 0x20)) {
    lVar3 = (*(code *)_xmlRealloc)
                      (*(undefined8 *)(param_1 + 0x28),(long)*(int *)(param_1 + 0x24) << 4);
    if (lVar3 == 0) {
      FUN_1008b7324(param_1,"realloc failed");
      return 0;
    }
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) * 2;
    *(long *)(param_1 + 0x28) = lVar3;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)*(int *)(param_1 + 0x20) * 8) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  iVar1 = *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x20) = iVar1 + 1;
  return iVar1;
}

