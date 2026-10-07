
void FUN_1001d9fef(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(int *)(param_2 + 0x20) == 0) {
    *(undefined4 *)(param_2 + 0x20) = 8;
    uVar1 = (*(code *)_xmlMalloc)((long)*(int *)(param_2 + 0x20) * 4);
    *(undefined8 *)(param_2 + 0x28) = uVar1;
    if (*(long *)(param_2 + 0x28) == 0) {
      FUN_1001d7cf4(param_1,"adding transition");
      *(undefined4 *)(param_2 + 0x20) = 0;
      return;
    }
  }
  else if (*(int *)(param_2 + 0x20) <= *(int *)(param_2 + 0x24)) {
    *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) * 2;
    lVar2 = (*(code *)_xmlRealloc)
                      (*(undefined8 *)(param_2 + 0x28),(long)*(int *)(param_2 + 0x20) * 4);
    if (lVar2 == 0) {
      FUN_1001d7cf4(param_1,"adding transition");
      *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) / 2;
      return;
    }
    *(long *)(param_2 + 0x28) = lVar2;
  }
  *(undefined4 *)(*(long *)(param_2 + 0x28) + (long)*(int *)(param_2 + 0x24) * 4) = param_3;
  *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
  return;
}

